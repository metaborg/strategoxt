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
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_y_27;
ATerm term_t_27;
ATerm term_k_26;
ATerm term_q_23;
ATerm term_h_23;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_o_20;
ATerm term_q_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_q_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_t_16;
ATerm term_f_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_u_13;
ATerm term_n_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_x_7;
void init_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Var_1, term_d_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Match_1, term_e_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Build_1, term_e_8);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Var_1, term_s_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Var_1, term_v_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Var_1, term_b_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Var_1, term_a_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_l_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Var_1, term_n_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Build_1, term_z_8);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Call_2, term_u_9, (ATerm) ATempty);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Build_1, term_g_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Match_1, term_o_9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Str_1, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Var_1, term_k_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Str_1, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Var_1, term_t_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Call_2, term_e_11, (ATerm) ATempty);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Match_1, term_u_10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Seq_2, term_f_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Seq_2, term_h_8, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Call_2, term_k_12, (ATerm) ATempty);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_LChoice_2, term_f_11, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_12, term_g_8);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Seq_2, term_l_12, term_g_8);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_LChoice_2, term_f_11, term_t_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Var_1, term_u_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Match_1, term_b_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Str_1, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Build_1, term_b_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_14, term_f_11);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_App_2, term_f_11, term_b_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Match_1, term_p_10);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Var_1, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_22);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_f_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm test12_0_0 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm t_64 (ATerm), ATerm);
ATerm test10_0_0 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm f_66 (ATerm), ATerm);
ATerm App_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm Var_1_0 (ATerm p_65 (ATerm), ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm g_69 (ATerm), ATerm);
ATerm Build_1_0 (ATerm h_69 (ATerm), ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm assert_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm g_68 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_78 (ATerm), ATerm);
ATerm diff_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm free_vars_3_0 (ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm x_93 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm scope_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm);
ATerm filter_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm r_64 (ATerm), ATerm);
ATerm do_test_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm);
ATerm test_suite_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm);
ATerm use_def_test_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_x_7;
    return(t);
  }
  ATerm k_0 (ATerm t)
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_RDefT_4, term_a_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_c_8, (ATerm) ATinsert(ATempty, term_g_8)), (ATerm)ATmakeAppl(sym_Call_2, term_c_8, (ATerm) ATinsert(ATempty, term_h_8)), term_i_8));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(c_0, k_0, t);
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    t = term_n_8;
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, term_z_8), term_t_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_a_9), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, term_g_9), term_f_9)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, term_z_8), term_t_8))), term_f_9))))));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(l_0, n_0, t);
  {
    ATerm o_0 (ATerm t)
    {
      t = term_h_9;
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      ATerm i_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_k_9, (ATerm)ATinsert(ATempty, term_m_9), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, term_z_8), term_t_8)), (ATerm)ATmakeAppl(sym_Op_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, term_o_9), term_t_8))), term_f_9)), (ATerm) ATmakeAppl(sym_Seq_2, term_p_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_a_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, term_g_9), term_f_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_z_9, (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, term_f_9), term_t_8)))), term_b_10))))), term_c_10))))));
          {
            ATerm t_0 (ATerm t)
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  ;
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  {
                    ATerm a_0 = NULL;
                    a_0 = t;
                    {
                      ATerm u_0 (ATerm t)
                      {
                        ATerm f_10 = t;
                        if((PushChoice() == 0))
                          {
                            t = def_use_def_0_0(t);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = f_10;
                          }
                        return(t);
                      }
                      t = filter_1_0(u_0, t);
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = a_0;
                    }
                  }
                }
              return(t);
            }
            t = Strategies_1_0(t_0, t);
          }
          ;
          LocalPopChoice(j_9);
        }
      else
        {
          t = i_9;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
          t = term_m_8;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(o_0, r_0, t);
  }
  return(t);
}
ATerm Overlays_1_0 (ATerm t_64 (ATerm), ATerm t)
{
  ATerm d_0 = NULL,e_0 = NULL,g_0 = NULL,i_0 = NULL;
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
  t = t_64(t);
  g_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, g_0), d_0);
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_g_10;
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_v_8, (ATerm)ATinsert(ATinsert(ATempty, term_k_10), term_d_8), (ATerm) ATmakeAppl(sym_Op_2, term_q_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_10), term_s_10), term_e_8)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_j_10, (ATerm)ATinsert(ATinsert(ATempty, term_k_10), term_d_8), (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATinsert(ATempty, term_o_10), term_e_8)))))));
        {
          ATerm v_10 = t;
          if((PushChoice() == 0))
            {
              ATerm y_0 (ATerm t)
              {
                ATerm w_10 = t;
                int x_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    ;
                    LocalPopChoice(x_10);
                  }
                else
                  {
                    t = w_10;
                    {
                      ATerm q_0 = NULL;
                      q_0 = t;
                      {
                        ATerm f_1 (ATerm t)
                        {
                          ATerm y_10 = t;
                          if((PushChoice() == 0))
                            {
                              t = def_use_def_0_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = y_10;
                            }
                          return(t);
                        }
                        t = filter_1_0(f_1, t);
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = q_0;
                      }
                    }
                  }
                return(t);
              }
              t = Overlays_1_0(y_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_10;
            }
        }
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
        t = term_z_10;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(v_0, x_0, t);
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_a_11;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8)), (ATerm)ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_u_10), term_p_10)), term_i_11)));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(g_1, j_1, t);
  {
    ATerm k_1 (ATerm t)
    {
      t = term_j_11;
      return(t);
    }
    ATerm p_1 (ATerm t)
    {
      ATerm k_11 = t;
      int l_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8)), (ATerm)ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_u_10), term_p_10)), term_i_8)));
          {
            ATerm m_11 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_11;
              }
          }
          ;
          LocalPopChoice(l_11);
        }
      else
        {
          t = k_11;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
          t = term_z_10;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(k_1, p_1, t);
  }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_RDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8)), (ATerm)ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_u_10), term_p_10)), term_i_11));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(x_1, z_1, t);
  {
    ATerm a_2 (ATerm t)
    {
      t = term_q_11;
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      ATerm r_11 = t;
      int s_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_RDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8)), (ATerm)ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_u_10), term_p_10)), term_i_8));
          {
            ATerm u_11 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_11;
              }
          }
          ;
          LocalPopChoice(s_11);
        }
      else
        {
          t = r_11;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
          t = term_z_10;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(a_2, b_2, t);
  }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_v_11;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_p_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_e_8))))));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(c_2, d_2, t);
  {
    ATerm g_2 (ATerm t)
    {
      t = term_y_11;
      return(t);
    }
    ATerm h_2 (ATerm t)
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATempty, term_e_8)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8)))));
          {
            ATerm b_12 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_12;
              }
          }
          ;
          LocalPopChoice(a_12);
        }
      else
        {
          t = z_11;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
          t = term_z_10;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(g_2, h_2, t);
    {
      ATerm i_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))))));
            {
              ATerm f_12 = t;
              if((PushChoice() == 0))
                {
                  t = def_use_def_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = f_12;
                }
            }
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
            t = term_z_10;
            _fail(t);
          }
        return(t);
      }
      t = do_test_2_0(i_2, l_2, t);
    }
  }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = term_g_12;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_n_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATempty, term_e_8)))));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(m_2, n_2, t);
  {
    ATerm p_2 (ATerm t)
    {
      t = term_o_12;
      return(t);
    }
    ATerm q_2 (ATerm t)
    {
      ATerm p_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_u_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATempty, term_e_8)))));
          {
            ATerm v_12 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_12;
              }
          }
          ;
          LocalPopChoice(q_12);
        }
      else
        {
          t = p_12;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
          t = term_z_10;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(p_2, q_2, t);
  }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = term_w_12;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATempty, term_e_8)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_e_8)))));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(s_2, t_2, t);
  {
    ATerm x_2 (ATerm t)
    {
      t = term_z_12;
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATempty, term_e_8)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8)))));
          {
            ATerm e_13 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_13;
              }
          }
          ;
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
          t = term_z_10;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(x_2, y_2, t);
  }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    t = term_n_13;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm o_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_c_14, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_u_13), term_o_14))), term_i_14)))));
        {
          ATerm p_14 = t;
          if((PushChoice() == 0))
            {
              t = def_use_def_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_14;
            }
        }
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = o_13;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
        t = term_z_10;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(a_3, b_3, t);
  {
    ATerm c_3 (ATerm t)
    {
      t = term_v_14;
      return(t);
    }
    ATerm d_3 (ATerm t)
    {
      ATerm w_14 = t;
      int b_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_c_14, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_c_15), term_i_14)))));
          t = def_use_def_0_0(t);
          ;
          LocalPopChoice(b_15);
        }
      else
        {
          t = w_14;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
          t = term_m_8;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(c_3, d_3, t);
    {
      ATerm e_3 (ATerm t)
      {
        t = term_e_15;
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        ATerm f_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_u_13), term_o_14))), term_i_14))));
            {
              ATerm l_15 = t;
              if((PushChoice() == 0))
                {
                  t = def_use_def_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = l_15;
                }
            }
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = f_15;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
            t = term_z_10;
            _fail(t);
          }
        return(t);
      }
      t = do_test_2_0(e_3, f_3, t);
    }
  }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = term_m_15;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_k_10), (ATerm) ATmakeAppl(sym_Seq_2, term_p_15, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_p_10))), term_e_8)))))));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(g_3, i_3, t);
  {
    ATerm j_3 (ATerm t)
    {
      t = term_q_15;
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm s_15 = t;
      int t_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_k_10), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATinsert(ATempty, term_w_15), term_e_8))), term_p_10))))));
          {
            ATerm x_15 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_15;
              }
          }
          ;
          LocalPopChoice(t_15);
        }
      else
        {
          t = s_15;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
          t = term_z_10;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(j_3, k_3, t);
  }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    t = term_y_15;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm z_15 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_p_10))), term_e_8)))));
        t = def_use_def_0_0(t);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = z_15;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_8;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(m_3, n_3, t);
  {
    ATerm o_3 (ATerm t)
    {
      t = term_f_16;
      return(t);
    }
    ATerm p_3 (ATerm t)
    {
      ATerm g_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATinsert(ATempty, term_w_15), term_e_8))), term_p_10)))));
          {
            ATerm s_16 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_16;
              }
          }
          ;
          LocalPopChoice(h_16);
        }
      else
        {
          t = g_16;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
          t = term_z_10;
          _fail(t);
        }
      return(t);
    }
    t = do_test_2_0(o_3, p_3, t);
  }
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_16, z_0));
  {
    ATerm q_3 (ATerm t)
    {
      t = term_e_17;
      return(t);
    }
    t = assert_1_0(q_3, t);
    t = a_1;
    {
      ATerm r_3 (ATerm t)
      {
        ATerm c_1 = NULL;
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_1), term_q_17);
        {
          ATerm s_3 (ATerm t)
          {
            t = term_r_17;
            return(t);
          }
          t = assert_1_0(s_3, t);
          t = c_1;
        }
        return(t);
      }
      t = map_1_0(r_3, t);
      t = b_1;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Overlay_3, z_0, a_1, b_1);
    }
  }
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
      s_1 = ATgetArgument(t, 2);
      l_1 = ATgetArgument(t, 3);
      t = l_1;
      if(match_cons(t, sym_StratRule_3))
        {
          m_1 = ATgetArgument(t, 0);
          n_1 = ATgetArgument(t, 1);
          o_1 = ATgetArgument(t, 2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_17, q_1));
          {
            ATerm u_3 (ATerm t)
            {
              t = term_e_17;
              return(t);
            }
            t = assert_1_0(u_3, t);
            t = s_1;
            {
              ATerm v_3 (ATerm t)
              {
                ATerm v_2 = NULL;
                ATerm x_17 = t;
                int y_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_VarDec_2))
                      {
                        v_2 = ATgetArgument(t, 0);
                        {
                          ATerm b_18 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_17);
                    t = v_2;
                  }
                else
                  {
                    t = x_17;
                    if(match_cons(t, sym_DefaultVarDec_1))
                      {
                        v_2 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_2;
                  }
                return(t);
              }
              t = map_1_0(v_3, t);
              {
                ATerm x_3 (ATerm t)
                {
                  ATerm z_2 = NULL;
                  z_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_2), term_q_17);
                  {
                    ATerm y_3 (ATerm t)
                    {
                      t = term_r_17;
                      return(t);
                    }
                    t = assert_1_0(y_3, t);
                    t = z_2;
                  }
                  return(t);
                }
                t = map_1_0(x_3, t);
                t = m_1;
                t = unbound_vars_0_0(t);
                t = n_1;
                t = unbound_vars_0_0(t);
                t = o_1;
                t = unbound_vars_0_0(t);
                t = (ATerm) ATmakeAppl(sym_RDefT_4, q_1, r_1, s_1, (ATerm) ATmakeAppl(sym_StratRule_3, m_1, n_1, o_1));
              }
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              m_1 = ATgetArgument(t, 0);
              n_1 = ATgetArgument(t, 1);
              o_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_18, q_1));
          {
            ATerm z_3 (ATerm t)
            {
              t = term_e_17;
              return(t);
            }
            t = assert_1_0(z_3, t);
            t = s_1;
            {
              ATerm a_4 (ATerm t)
              {
                ATerm t_3 = NULL;
                ATerm d_18 = t;
                int e_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_VarDec_2))
                      {
                        t_3 = ATgetArgument(t, 0);
                        {
                          ATerm f_18 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_18);
                    t = t_3;
                  }
                else
                  {
                    t = d_18;
                    if(match_cons(t, sym_DefaultVarDec_1))
                      {
                        t_3 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = t_3;
                  }
                return(t);
              }
              t = map_1_0(a_4, t);
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm d_4 = NULL;
                  d_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, d_4), term_q_17);
                  {
                    ATerm e_4 (ATerm t)
                    {
                      t = term_r_17;
                      return(t);
                    }
                    t = assert_1_0(e_4, t);
                    t = d_4;
                  }
                  return(t);
                }
                t = map_1_0(c_4, t);
                t = m_1;
                t = bind_vars_0_0(t);
                t = o_1;
                t = unbound_vars_0_0(t);
                t = n_1;
                t = use_vars_0_0(t);
                t = (ATerm) ATmakeAppl(sym_RDefT_4, q_1, r_1, s_1, (ATerm) ATmakeAppl(sym_Rule_3, m_1, n_1, o_1));
              }
            }
          }
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
          u_1 = ATgetArgument(t, 0);
          v_1 = ATgetArgument(t, 1);
          w_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_18, q_1));
      {
        ATerm f_4 (ATerm t)
        {
          t = term_e_17;
          return(t);
        }
        t = assert_1_0(f_4, t);
        t = u_1;
        t = bind_vars_0_0(t);
        t = w_1;
        t = unbound_vars_0_0(t);
        t = v_1;
        t = use_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_RDef_3, q_1, r_1, (ATerm) ATmakeAppl(sym_Rule_3, u_1, v_1, w_1));
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      y_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
      a_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_5);
  r_4 = t;
  t = y_4;
  t = t_69(t);
  c_5 = t;
  t = z_4;
  t = u_69(t);
  e_5 = t;
  t = a_5;
  t = v_69(t);
  f_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, c_5, e_5, f_5), r_4);
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm i_6 = NULL;
  ATerm g_4 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 (ATerm l_6, ATerm m_6, ATerm t)
        {
          t = m_6;
          {
            ATerm j_18 = t;
            int k_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_6);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm m_18 = ATgetFirst((ATermList) t);
                    if(match_cons(m_18, sym_Defined_1))
                      {
                        ATerm p_18 = ATgetArgument(m_18, 0);
                      }
                    else
                      _fail(t);
                    {
                      ATerm n_18 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = m_6;
                ;
                LocalPopChoice(k_18);
              }
            else
              {
                t = j_18;
                t = (ATerm) ATmakeAppl(sym__2, l_6, (ATerm) ATinsert(ATempty, term_q_18));
              }
          }
          return(t);
        }
        ATerm x_6 = NULL,y_6 = NULL,b_7 = NULL,c_7 = NULL;
        x_6 = t;
        if(match_cons(t, sym__2))
          {
            y_6 = ATgetArgument(t, 0);
            b_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_7;
        {
          ATerm r_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_7 = ATgetFirst((ATermList) t);
                  {
                    ATerm u_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(t_18);
              t = c_7;
              {
                ATerm w_18 = t;
                int x_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm y_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_18);
                    t = y_6;
                    if(match_cons(t, sym_Scopes_0))
                      {
                        ATerm z_18 = t;
                        int a_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_6;
                            ;
                            LocalPopChoice(a_19);
                          }
                        else
                          {
                            t = z_18;
                            t = o_7(y_6, x_6, t);
                          }
                      }
                    else
                      {
                        t = o_7(y_6, x_6, t);
                      }
                  }
                else
                  {
                    t = w_18;
                    t = y_6;
                    if(!(match_cons(t, sym_Scopes_0)))
                      _fail(t);
                    t = x_6;
                  }
              }
            }
          else
            {
              t = r_18;
              t = y_6;
              if(!(match_cons(t, sym_Scopes_0)))
                _fail(t);
              t = x_6;
            }
        }
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
      }
    return(t);
  }
  t = map_1_0(g_4, t);
  i_6 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, i_6);
  t = table_putlist_0_0(t);
  t = i_6;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm q_7 = NULL,u_7 = NULL;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm v_7 = NULL,w_7 = NULL;
      if(match_cons(t, sym__2))
        {
          v_7 = ATgetArgument(t, 0);
          w_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(u_7, v_7, w_7);
      t = (ATerm) ATmakeAppl(sym__3, u_7, v_7, w_7);
      return(t);
    }
    t = map_1_0(h_4, t);
  }
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  {
    ATerm i_4 (ATerm t)
    {
      ATerm d_1 = NULL,e_1 = NULL;
      d_1 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), d_1);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_1, e_1);
      return(t);
    }
    t = map_1_0(i_4, t);
  }
  return(t);
}
ATerm abstract_choice_2_0 (ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm t)
{
  ATerm f_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,u_8 = NULL;
  f_8 = t;
  t = save_Bound_0_0(t);
  j_8 = t;
  t = f_8;
  t = t_76(t);
  k_8 = t;
  t = save_Bound_0_0(t);
  l_8 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, j_8);
  t = table_putlist_0_0(t);
  t = k_8;
  t = u_76(t);
  u_8 = t;
  t = l_8;
  t = isect_Bound_0_0(t);
  t = u_8;
  return(t);
}
ATerm LChoice_2_0 (ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  e_9 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_9);
  w_8 = t;
  t = x_8;
  t = p_69(t);
  c_9 = t;
  t = y_8;
  t = q_69(t);
  d_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, c_9, d_9), w_8);
  return(t);
}
ATerm Choice_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  y_9 = t;
  if(match_cons(t, sym_Choice_2))
    {
      r_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_9);
  q_9 = t;
  t = r_9;
  t = n_68(t);
  w_9 = t;
  t = v_9;
  t = o_68(t);
  x_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, w_9, x_9), q_9);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL,i_1 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_1 = ATgetFirst((ATermList) t);
            {
              ATerm e_19 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = i_1;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
            h_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_h_19), h_1), term_g_19);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        {
          ATerm i_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_1 = NULL,y_1 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_1 = ATgetFirst((ATermList) t);
                  {
                    ATerm l_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = y_1;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  t_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_h_19), t_1), term_q_19);
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = i_19;
              {
                ATerm t_19 = t;
                int u_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_2 = NULL,f_2 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        f_2 = ATgetFirst((ATermList) t);
                        {
                          ATerm x_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = f_2;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm y_19 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("j_0", 0, ATtrue)))
                          _fail(t);
                        e_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_h_19), e_2), term_q_19);
                    ;
                    LocalPopChoice(u_19);
                  }
                else
                  {
                    t = t_19;
                    {
                      ATerm a_20 = t;
                      int b_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_2 = NULL,k_2 = NULL;
                          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              k_2 = ATgetFirst((ATermList) t);
                              {
                                ATerm c_20 = (ATerm) ATgetNext((ATermList) t);
                              }
                            }
                          else
                            _fail(t);
                          t = k_2;
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm g_20 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) g_20) != ATmakeSymbol("h_0", 0, ATtrue)))
                                _fail(t);
                              j_2 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_h_19), j_2), term_q_19);
                          ;
                          LocalPopChoice(b_20);
                        }
                      else
                        {
                          t = a_20;
                          {
                            ATerm h_20 = t;
                            int i_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_2 = NULL,r_2 = NULL;
                                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    r_2 = ATgetFirst((ATermList) t);
                                    {
                                      ATerm k_20 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = r_2;
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm n_20 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) n_20) != ATmakeSymbol("f_0", 0, ATtrue)))
                                      _fail(t);
                                    o_2 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_h_19), o_2), term_o_20);
                                ;
                                LocalPopChoice(i_20);
                              }
                            else
                              {
                                t = h_20;
                                {
                                  ATerm u_2 = NULL,w_2 = NULL;
                                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      w_2 = ATgetFirst((ATermList) t);
                                      {
                                        ATerm p_20 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = w_2;
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm r_20 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) r_20) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      u_2 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), term_h_19), u_2), term_o_20);
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
  ATerm r_12 = NULL,s_12 = NULL;
  r_12 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_3 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), r_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_3 = ATgetFirst((ATermList) t);
            {
              ATerm x_20 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = h_3;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = s_20;
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_3 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), r_12);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_3 = ATgetFirst((ATermList) t);
                  {
                    ATerm b_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = l_3;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              {
                ATerm w_3 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), r_12);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_3 = ATgetFirst((ATermList) t);
                    {
                      ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = w_3;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm i_21 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_21) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(n_21);
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            {
              ATerm c_13 = NULL,d_13 = NULL,b_4 = NULL;
              c_13 = t;
              if(match_cons(t, sym_Var_1))
                {
                  d_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), d_13), term_q_21);
              t = Context_0_0(t);
              b_4 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), b_4);
              t = b_4;
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = m_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(t_21);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = s_21;
            {
              ATerm u_21 = t;
              int y_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(y_21);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = u_21;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  m_13 = t;
  if(match_cons(t, sym_Rule_3))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      i_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_13);
  f_13 = t;
  t = g_13;
  t = g_67(t);
  j_13 = t;
  t = h_13;
  t = h_67(t);
  k_13 = t;
  t = i_13;
  t = i_67(t);
  l_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, j_13, k_13, l_13), f_13);
  return(t);
}
ATerm RootApp_1_0 (ATerm f_66 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      q_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_13);
  p_13 = t;
  t = q_13;
  t = f_66(t);
  r_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, r_13), p_13);
  return(t);
}
ATerm App_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_App_2))
    {
      w_13 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_14);
  v_13 = t;
  t = w_13;
  t = d_66(t);
  y_13 = t;
  t = x_13;
  t = e_66(t);
  z_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, y_13, z_13), v_13);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__3))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
      f_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(d_14, e_14);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_21 = ATgetFirst((ATermList) t);
      g_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(d_14, e_14, (ATerm) ATinsert(CheckATermList(g_14), f_14));
  t = (ATerm) ATmakeAppl(sym__3, d_14, e_14, f_14);
  return(t);
}
ATerm Var_1_0 (ATerm p_65 (ATerm), ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  n_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_14);
  k_14 = t;
  t = l_14;
  t = p_65(t);
  m_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, m_14), k_14);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(c_22);
      {
        ATerm q_14 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            q_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, term_r_17, (ATerm)ATmakeAppl(sym_Var_1, q_14), term_f_22);
        t = table_replace_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, q_14);
      }
    }
  else
    {
      t = a_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(h_22);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = g_22;
            {
              ATerm i_22 = t;
              int j_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(j_22);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = i_22;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  u_14 = t;
  if(match_cons(t, sym_Match_1))
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, t_14), r_14);
  return(t);
}
ATerm Build_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_15);
  x_14 = t;
  t = y_14;
  t = h_69(t);
  z_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, z_14), x_14);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(l_22);
      {
        ATerm j_4 (ATerm t)
        {
          t = term_r_17;
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            ATerm p_4 (ATerm t)
            {
              ATerm d_15 = NULL;
              d_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, d_15), term_q_18);
              {
                ATerm q_4 (ATerm t)
                {
                  t = term_r_17;
                  return(t);
                }
                t = assert_1_0(q_4, t);
                t = d_15;
              }
              return(t);
            }
            t = map_1_0(p_4, t);
            return(t);
          }
          t = Scope_2_0(l_4, unbound_vars_0_0, t);
          return(t);
        }
        t = scope_2_0(j_4, k_4, t);
      }
    }
  else
    {
      t = k_22;
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(o_22);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = n_22;
            {
              ATerm p_22 = t;
              int q_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(q_22);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = p_22;
                  {
                    ATerm r_22 = t;
                    int s_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(s_22);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = r_22;
                        {
                          ATerm u_22 = t;
                          int v_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(v_22);
                              {
                                ATerm v_4 (ATerm t)
                                {
                                  t = Choice_2_0(unbound_vars_0_0, _id, t);
                                  return(t);
                                }
                                ATerm w_4 (ATerm t)
                                {
                                  t = Choice_2_0(_id, unbound_vars_0_0, t);
                                  return(t);
                                }
                                t = abstract_choice_2_0(v_4, w_4, t);
                              }
                            }
                          else
                            {
                              t = u_22;
                              {
                                ATerm d_23 = t;
                                int e_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(e_23);
                                    {
                                      ATerm x_4 (ATerm t)
                                      {
                                        t = LChoice_2_0(unbound_vars_0_0, _id, t);
                                        return(t);
                                      }
                                      ATerm d_5 (ATerm t)
                                      {
                                        t = LChoice_2_0(_id, unbound_vars_0_0, t);
                                        return(t);
                                      }
                                      t = abstract_choice_2_0(x_4, d_5, t);
                                    }
                                  }
                                else
                                  {
                                    t = d_23;
                                    {
                                      ATerm f_23 = t;
                                      int g_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(g_23);
                                          {
                                            ATerm h_5 (ATerm t)
                                            {
                                              t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
                                              return(t);
                                            }
                                            ATerm i_5 (ATerm t)
                                            {
                                              t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
                                              return(t);
                                            }
                                            t = abstract_choice_2_0(h_5, i_5, t);
                                          }
                                        }
                                      else
                                        {
                                          t = f_23;
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
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm g_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      k_15 = ATgetArgument(t, 2);
      g_15 = ATgetArgument(t, 3);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_23, i_15));
      {
        ATerm l_5 (ATerm t)
        {
          t = term_e_17;
          return(t);
        }
        t = assert_1_0(l_5, t);
        t = k_15;
        {
          ATerm m_5 (ATerm t)
          {
            ATerm r_15 = NULL;
            ATerm i_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_VarDec_2))
                  {
                    r_15 = ATgetArgument(t, 0);
                    {
                      ATerm p_23 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(k_23);
                t = r_15;
              }
            else
              {
                t = i_23;
                if(match_cons(t, sym_DefaultVarDec_1))
                  {
                    r_15 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_15;
              }
            return(t);
          }
          t = map_1_0(m_5, t);
          {
            ATerm n_5 (ATerm t)
            {
              ATerm u_15 = NULL;
              u_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, u_15), term_q_17);
              {
                ATerm o_5 (ATerm t)
                {
                  t = term_r_17;
                  return(t);
                }
                t = assert_1_0(o_5, t);
                t = u_15;
              }
              return(t);
            }
            t = map_1_0(n_5, t);
            t = g_15;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_15, j_15, k_15, g_15);
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_15 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
          k_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_23, i_15));
      {
        ATerm p_5 (ATerm t)
        {
          t = term_e_17;
          return(t);
        }
        t = assert_1_0(p_5, t);
        t = k_15;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_15, j_15, k_15);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__3))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      c_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_16, b_16);
  {
    ATerm w_23 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_24 = ATgetArgument(t, 0);
            ATerm f_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_16, b_16);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATempty;
      }
    d_16 = t;
    t = SSL_table_put(a_16, b_16, (ATerm) ATinsert(CheckATermList(d_16), c_16));
    t = (ATerm) ATmakeAppl(sym__3, a_16, b_16, c_16);
  }
  return(t);
}
ATerm assert_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_81(t);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_16, i_16, j_16);
  t = table_push_0_0(t);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(k_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_16 = ATgetFirst((ATermList) t);
        m_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(k_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_16), (ATerm) ATinsert(CheckATermList(l_16), i_16)));
    t = (ATerm) ATmakeAppl(sym__2, i_16, j_16);
  }
  return(t);
}
ATerm map_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm n_16 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = Cons_2_0(q_77, n_16, t);
      }
    return(t);
  }
  t = n_16(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm g_68 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_16);
  o_16 = t;
  t = p_16;
  t = g_68(t);
  q_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, q_16), o_16);
  return(t);
}
ATerm RDefT_4_0 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  d_17 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
      x_16 = ATgetArgument(t, 2);
      y_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_17);
  u_16 = t;
  t = v_16;
  t = x_67(t);
  z_16 = t;
  t = w_16;
  t = y_67(t);
  a_17 = t;
  t = x_16;
  t = z_67(t);
  b_17 = t;
  t = y_16;
  t = a_68(t);
  c_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, z_16, a_17, b_17, c_17), u_16);
  return(t);
}
ATerm SDefT_4_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  p_17 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
      j_17 = ATgetArgument(t, 2);
      k_17 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_17);
  g_17 = t;
  t = h_17;
  t = r_71(t);
  l_17 = t;
  t = i_17;
  t = s_71(t);
  m_17 = t;
  t = j_17;
  t = t_71(t);
  n_17 = t;
  t = k_17;
  t = u_71(t);
  o_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, l_17, m_17, n_17, o_17), g_17);
  return(t);
}
ATerm Scope_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_18);
  s_17 = t;
  t = u_17;
  t = j_69(t);
  w_17 = t;
  t = v_17;
  t = k_69(t);
  z_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, w_17, z_17), s_17);
  return(t);
}
ATerm tboundin_3_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(v_90, t_90, t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(v_90, v_90, v_90, t_90, t);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(v_90, v_90, v_90, t_90, t);
                  ;
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  t = DynamicRules_1_0(t_90, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm l_18 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        l_18 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, l_18);
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm o_18 = NULL,s_18 = NULL,v_18 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        s_18 = ATgetArgument(t, 0);
        t = s_18;
        if(match_cons(t, sym_Rule_3))
          {
            o_18 = ATgetArgument(t, 0);
            {
              ATerm q_24 = ATgetArgument(t, 1);
            }
            {
              ATerm r_24 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_18;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                s_18 = ATgetArgument(t, 0);
                {
                  ATerm u_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_24);
            t = s_18;
          }
        else
          {
            t = s_24;
            if(match_cons(t, sym_DynamicRules_1))
              {
                s_18 = ATgetArgument(t, 0);
                t = s_18;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm v_24 = t;
                int w_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm x_24 = ATgetArgument(t, 0);
                        ATerm y_24 = ATgetArgument(t, 1);
                        v_18 = ATgetArgument(t, 2);
                        {
                          ATerm z_24 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_24);
                    t = v_18;
                    {
                      ATerm v_5 (ATerm t)
                      {
                        ATerm d_19 = NULL;
                        ATerm a_25 = t;
                        int b_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                d_19 = ATgetArgument(t, 0);
                                {
                                  ATerm c_25 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(b_25);
                            t = d_19;
                          }
                        else
                          {
                            t = a_25;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                d_19 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = d_19;
                          }
                        return(t);
                      }
                      t = map_1_0(v_5, t);
                    }
                  }
                else
                  {
                    t = v_24;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm d_25 = ATgetArgument(t, 0);
                        ATerm e_25 = ATgetArgument(t, 1);
                        v_18 = ATgetArgument(t, 2);
                        {
                          ATerm f_25 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = v_18;
                    {
                      ATerm x_5 (ATerm t)
                      {
                        ATerm j_19 = NULL;
                        ATerm g_25 = t;
                        int h_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                j_19 = ATgetArgument(t, 0);
                                {
                                  ATerm i_25 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_25);
                            t = j_19;
                          }
                        else
                          {
                            t = g_25;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                j_19 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = j_19;
                          }
                        return(t);
                      }
                      t = map_1_0(x_5, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(t_5, u_5, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_19;
  {
    ATerm o_19 (ATerm t)
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_19;
          ;
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          {
            ATerm l_25 = t;
            int m_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_4 = NULL,n_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_4 = ATgetFirst((ATermList) t);
                    n_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_19;
                {
                  ATerm a_6 (ATerm t)
                  {
                    ATerm o_4 = NULL;
                    o_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_4, o_4);
                    t = e_77(t);
                    return(t);
                  }
                  t = fetch_1_0(a_6, t);
                  t = n_4;
                  t = o_19(t);
                }
                ;
                LocalPopChoice(m_25);
              }
            else
              {
                t = l_25;
                t = Cons_2_0(_id, o_19, t);
              }
          }
        }
      return(t);
    }
    t = o_19(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_79(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm r_19 = NULL,s_19 = NULL,v_19 = NULL,w_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_19 = ATgetFirst((ATermList) t);
            s_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_19;
        t = v_79(t);
        v_19 = t;
        t = s_19;
        t = foldr_3_0(t_79, u_79, v_79, t);
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_19, w_19);
        t = u_79(t);
      }
    }
  return(t);
}
ATerm fetch_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  ATerm z_19 (ATerm t)
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_78, _id, t);
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = Cons_2_0(_id, z_19, t);
      }
    return(t);
  }
  t = z_19(t);
  return(t);
}
ATerm diff_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_20;
  {
    ATerm f_20 (ATerm t)
    {
      ATerm r_25 = t;
      int s_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(s_25);
        }
      else
        {
          t = r_25;
          {
            ATerm t_25 = t;
            int u_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_4 = NULL,t_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_4 = ATgetFirst((ATermList) t);
                    t_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_20;
                {
                  ATerm b_6 (ATerm t)
                  {
                    ATerm u_4 = NULL;
                    u_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_4, u_4);
                    t = a_77(t);
                    return(t);
                  }
                  t = fetch_1_0(b_6, t);
                  t = t_4;
                  t = f_20(t);
                }
                ;
                LocalPopChoice(u_25);
              }
            else
              {
                t = t_25;
                t = Cons_2_0(_id, f_20, t);
              }
          }
        }
      return(t);
    }
    t = f_20(t);
  }
  return(t);
}
ATerm free_vars_3_0 (ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm x_93 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_20 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_93(t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm x_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_20 = NULL,l_20 = NULL,j_5 = NULL,k_5 = NULL;
              j_20 = t;
              t = w_93(t);
              l_20 = t;
              t = j_20;
              {
                ATerm d_6 (ATerm t)
                {
                  ATerm b_5 = NULL;
                  t = q_20(t);
                  b_5 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_5, l_20);
                  {
                    ATerm g_6 (ATerm t)
                    {
                      ATerm m_20 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          m_20 = ATgetArgument(t, 0);
                          if((m_20 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = diff_1_0(g_6, t);
                  }
                  return(t);
                }
                ATerm e_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = x_93(d_6, q_20, e_6, t);
                j_5 = t;
                t = SSL_explode_term(j_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_25 = ATgetArgument(t, 0);
                    k_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_5;
                {
                  ATerm h_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm j_6 (ATerm t)
                  {
                    ATerm k_6 (ATerm t)
                    {
                      ATerm q_5 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          q_5 = ATgetArgument(t, 0);
                          if((q_5 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(k_6, t);
                    return(t);
                  }
                  t = foldr_3_0(h_6, j_6, _id, t);
                }
              }
              ;
              LocalPopChoice(y_25);
            }
          else
            {
              t = x_25;
              {
                ATerm r_5 = NULL,s_5 = NULL;
                r_5 = t;
                t = SSL_explode_term(r_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_26 = ATgetArgument(t, 0);
                    s_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_5;
                {
                  ATerm n_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm o_6 (ATerm t)
                  {
                    ATerm p_6 (ATerm t)
                    {
                      ATerm w_5 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          w_5 = ATgetArgument(t, 0);
                          if((w_5 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(p_6, t);
                    return(t);
                  }
                  t = foldr_3_0(n_6, o_6, q_20, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = q_20(t);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      t_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_26 = ATgetArgument(t, 0);
            ATerm e_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_20, u_20);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_26 = ATgetFirst((ATermList) t);
            y_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_5;
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
    v_20 = t;
    t = SSL_table_put(t_20, u_20, v_20);
    t = (ATerm) ATmakeAppl(sym__2, t_20, u_20);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  c_21 = t;
  t = z_80(t);
  d_21 = t;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_21, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_21 = ATgetFirst((ATermList) t);
        e_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_21, (ATerm)ATmakeAppl(sym_Scopes_0), e_21);
    t = f_21;
    {
      ATerm q_6 (ATerm t)
      {
        ATerm g_21 = NULL;
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_21, g_21);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(q_6, t);
      t = c_21;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_87(t);
      t = a_88(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = a_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  t = y_80(t);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_21, term_k_26);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_26 = ATgetArgument(t, 0);
            ATerm o_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_21, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATempty;
      }
    l_21 = t;
    t = SSL_table_put(k_21, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(l_21), (ATerm) ATempty));
    t = j_21;
  }
  return(t);
}
ATerm scope_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  t = begin_scope_1_0(a_81, t);
  {
    ATerm r_6 (ATerm t)
    {
      t = end_scope_1_0(a_81, t);
      return(t);
    }
    t = restore_always_2_0(b_81, r_6, t);
  }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      t = term_r_17;
      return(t);
    }
    ATerm v_6 (ATerm t)
    {
      ATerm v_21 = NULL;
      v_21 = t;
      {
        ATerm w_6 (ATerm t)
        {
          ATerm w_21 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              w_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, w_21);
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          ATerm x_21 = NULL,b_22 = NULL,e_22 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              b_22 = ATgetArgument(t, 0);
              t = b_22;
              if(match_cons(t, sym_Rule_3))
                {
                  x_21 = ATgetArgument(t, 0);
                  {
                    ATerm p_26 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm q_26 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = x_21;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm r_26 = t;
              int s_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      b_22 = ATgetArgument(t, 0);
                      {
                        ATerm t_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_26);
                  t = b_22;
                }
              else
                {
                  t = r_26;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      b_22 = ATgetArgument(t, 0);
                      t = b_22;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm u_26 = t;
                      int v_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm w_26 = ATgetArgument(t, 0);
                              ATerm x_26 = ATgetArgument(t, 1);
                              e_22 = ATgetArgument(t, 2);
                              {
                                ATerm y_26 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(v_26);
                          t = e_22;
                          {
                            ATerm a_7 (ATerm t)
                            {
                              ATerm m_22 = NULL;
                              ATerm z_26 = t;
                              int a_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      m_22 = ATgetArgument(t, 0);
                                      {
                                        ATerm b_27 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(a_27);
                                  t = m_22;
                                }
                              else
                                {
                                  t = z_26;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      m_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = m_22;
                                }
                              return(t);
                            }
                            t = map_1_0(a_7, t);
                          }
                        }
                      else
                        {
                          t = u_26;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm c_27 = ATgetArgument(t, 0);
                              ATerm d_27 = ATgetArgument(t, 1);
                              e_22 = ATgetArgument(t, 2);
                              {
                                ATerm e_27 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = e_22;
                          {
                            ATerm d_7 (ATerm t)
                            {
                              ATerm t_22 = NULL;
                              ATerm f_27 = t;
                              int g_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      t_22 = ATgetArgument(t, 0);
                                      {
                                        ATerm h_27 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(g_27);
                                  t = t_22;
                                }
                              else
                                {
                                  t = f_27;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      t_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_22;
                                }
                              return(t);
                            }
                            t = map_1_0(d_7, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(w_6, z_6, tboundin_3_0, t);
        {
          ATerm e_7 (ATerm t)
          {
            ATerm w_22 = NULL;
            w_22 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_22), term_q_18);
            {
              ATerm f_7 (ATerm t)
              {
                t = term_r_17;
                return(t);
              }
              t = assert_1_0(f_7, t);
              t = w_22;
            }
            return(t);
          }
          t = map_1_0(e_7, t);
          t = v_21;
          {
            ATerm i_27 = t;
            int j_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = sdef_ud_0_0(t);
                ;
                LocalPopChoice(j_27);
              }
            else
              {
                t = i_27;
                {
                  ATerm k_27 = t;
                  int l_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = rdef_ud_0_0(t);
                      ;
                      LocalPopChoice(l_27);
                    }
                  else
                    {
                      t = k_27;
                      t = overlay_ud_0_0(t);
                    }
                }
              }
          }
        }
      }
      return(t);
    }
    t = scope_2_0(u_6, v_6, t);
    return(t);
  }
  t = scope_2_0(s_6, t_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  c_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_22 = ATgetFirst((ATermList) t);
      z_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_23);
  x_22 = t;
  t = y_22;
  t = n_64(t);
  a_23 = t;
  t = z_22;
  t = o_64(t);
  b_23 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_23), a_23), x_22);
  return(t);
}
ATerm filter_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 (ATerm t)
            {
              t = filter_1_0(y_86, t);
              return(t);
            }
            t = Cons_2_0(y_86, g_7, t);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            {
              ATerm j_23 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_27 = ATgetFirst((ATermList) t);
                  j_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_23;
              t = filter_1_0(y_86, t);
            }
          }
      }
    }
  return(t);
}
ATerm Strategies_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_23);
  l_23 = t;
  t = m_23;
  t = r_64(t);
  n_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, n_23), l_23);
  return(t);
}
ATerm do_test_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  r_23 = t;
  t = k_96(t);
  s_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, s_23));
  t = r_23;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_96(t);
        t = r_23;
        {
          ATerm h_7 (ATerm t)
          {
            ATerm t_23 = NULL;
            t_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_23, term_t_27);
            {
              ATerm u_27 = t;
              int v_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(t_23, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(v_27);
                }
              else
                {
                  t = u_27;
                  t = SSL_addr(t_23, (ATerm) ATmakeInt(1));
                }
            }
            return(t);
          }
          t = _2_0(h_7, _id, t);
        }
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        {
          ATerm i_7 (ATerm t)
          {
            ATerm u_23 = NULL;
            u_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_23, term_t_27);
            {
              ATerm w_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(u_23, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = w_27;
                  t = SSL_addr(u_23, (ATerm) ATmakeInt(1));
                }
            }
            return(t);
          }
          t = _2_0(_id, i_7, t);
        }
      }
  }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    t = term_y_27;
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_j_12, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_p_10))), term_e_8)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_d_11, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATempty, term_e_8)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_q_8, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_e_8))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_u_10), term_p_10))), term_e_8)))))));
        {
          ATerm b_28 = t;
          if((PushChoice() == 0))
            {
              ATerm l_7 (ATerm t)
              {
                ATerm c_28 = t;
                int d_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    ;
                    LocalPopChoice(d_28);
                  }
                else
                  {
                    t = c_28;
                    {
                      ATerm v_23 = NULL;
                      v_23 = t;
                      {
                        ATerm m_7 (ATerm t)
                        {
                          ATerm e_28 = t;
                          if((PushChoice() == 0))
                            {
                              t = def_use_def_0_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = e_28;
                            }
                          return(t);
                        }
                        t = filter_1_0(m_7, t);
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = v_23;
                      }
                    }
                  }
                return(t);
              }
              t = Strategies_1_0(l_7, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_28;
            }
        }
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
        t = term_z_10;
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(j_7, k_7, t);
  return(t);
}
ATerm _2_0 (ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  c_24 = t;
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_24);
  x_23 = t;
  t = y_23;
  t = y_59(t);
  a_24 = t;
  t = z_23;
  t = z_59(t);
  b_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, a_24, b_24), x_23);
  return(t);
}
ATerm test_suite_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm z_5 = NULL;
  t = i_96(t);
  z_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_5), (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue))));
  t = term_g_28;
  t = j_96(t);
  {
    ATerm n_7 (ATerm t)
    {
      ATerm c_6 = NULL;
      c_6 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_6), (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue))));
      t = c_6;
      return(t);
    }
    ATerm p_7 (ATerm t)
    {
      ATerm f_6 = NULL;
      f_6 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_6), (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue))));
      t = f_6;
      return(t);
    }
    t = _2_0(n_7, p_7, t);
    {
      ATerm r_7 (ATerm t)
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        return(t);
      }
      t = _2_0(_id, r_7, t);
    }
  }
  return(t);
}
ATerm use_def_test_0_0 (ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  ATerm t_7 (ATerm t)
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
  t = test_suite_2_0(s_7, t_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_0_0(t);
  return(t);
}

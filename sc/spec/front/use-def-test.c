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
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_u_28;
ATerm term_n_28;
ATerm term_j_27;
ATerm term_u_23;
ATerm term_m_23;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_20;
ATerm term_v_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_g_19;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_t_17;
ATerm term_k_17;
ATerm term_y_16;
ATerm term_n_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_j_14;
ATerm term_b_14;
ATerm term_o_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_c_7;
void init_constant_terms (void)
{
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Var_1, term_m_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Match_1, term_n_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Build_1, term_n_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Var_1, term_z_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Var_1, term_e_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_Var_1, term_l_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Var_1, term_g_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_y_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Var_1, term_a_9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Build_1, term_f_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_8);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Call_2, term_m_9, (ATerm) ATempty);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Build_1, term_o_8);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Match_1, term_b_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Str_1, term_m_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Var_1, term_j_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Str_1, term_s_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Var_1, term_v_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Call_2, term_h_11, (ATerm) ATempty);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Match_1, term_w_10);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_11, term_j_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Seq_2, term_q_7, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Call_2, term_q_12, (ATerm) ATempty);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_LChoice_2, term_i_11, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Seq_2, term_s_12, term_p_7);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Seq_2, term_r_12, term_p_7);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_LChoice_2, term_i_11, term_h_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Var_1, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Match_1, term_w_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Str_1, term_z_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Build_1, term_w_14);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_f_15, term_i_11);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_App_2, term_i_11, term_w_14);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Match_1, term_p_10);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Var_1, term_n_16);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_22);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_b_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm c_0 (ATerm);
ATerm k_0 (ATerm);
ATerm test12_0_0 (ATerm);
ATerm l_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm r_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm s_64 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm d_1 (ATerm);
ATerm test10_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm b_7 (ATerm b_6, ATerm c_6, ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm t_3 (ATerm);
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
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm k_4 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm assert_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm f_68 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm diff_1_0 (ATerm z_76 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm free_vars_3_0 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm);
ATerm filter_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm q_64 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm do_test_2_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm test_suite_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm use_def_test_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_f_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_l_7, (ATerm) ATinsert(ATempty, term_p_7)), (ATerm)ATmakeAppl(sym_Call_2, term_l_7, (ATerm) ATinsert(ATempty, term_q_7)), term_r_7));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(c_0, k_0, t);
  return(t);
}
ATerm l_0 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm u_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, term_f_8), term_a_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_g_8), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, term_o_8), term_n_8)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, term_f_8), term_a_8))), term_n_8))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = u_7;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm t_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_x_8, (ATerm)ATinsert(ATempty, term_z_8), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, term_f_8), term_a_8)), (ATerm)ATmakeAppl(sym_Op_2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, term_b_9), term_a_8))), term_n_8)), (ATerm) ATmakeAppl(sym_Seq_2, term_c_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_g_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, term_o_8), term_n_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_r_9, (ATerm) ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, term_n_8), term_a_8)))), term_u_9))))), term_v_9))))));
      t = Strategies_1_0(t_0, t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = t_8;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm w_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = w_9;
      {
        ATerm a_0 = NULL;
        a_0 = t;
        t = filter_1_0(u_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_0;
      }
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm z_9 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_9;
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(l_0, n_0, t);
  t = do_test_2_0(o_0, r_0, t);
  return(t);
}
ATerm Overlays_1_0 (ATerm s_64 (ATerm), ATerm t)
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
  t = s_64(t);
  g_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, g_0), d_0);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_e_8, (ATerm)ATinsert(ATinsert(ATempty, term_j_10), term_m_7), (ATerm) ATmakeAppl(sym_Op_2, term_r_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_10), term_t_10), term_n_7)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_f_10, (ATerm)ATinsert(ATinsert(ATempty, term_j_10), term_m_7), (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_o_10), term_n_7)))))));
      {
        ATerm x_10 = t;
        if((PushChoice() == 0))
          {
            t = Overlays_1_0(y_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_10;
          }
      }
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm z_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = z_10;
      {
        ATerm q_0 = NULL;
        q_0 = t;
        t = filter_1_0(d_1, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_0;
      }
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm c_11 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_11;
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(v_0, x_0, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7)), (ATerm)ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_w_10), term_p_10)), term_l_11)));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7)), (ATerm)ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_w_10), term_p_10)), term_r_7)));
      {
        ATerm q_11 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_11;
          }
      }
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(g_1, h_1, t);
  t = do_test_2_0(i_1, l_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7)), (ATerm)ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_w_10), term_p_10)), term_l_11));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7)), (ATerm)ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_w_10), term_p_10)), term_r_7));
      {
        ATerm y_11 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_11;
          }
      }
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(m_1, p_1, t);
  t = do_test_2_0(v_1, w_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_z_11;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATempty, term_p_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_n_7))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATempty, term_n_7))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATempty, term_n_7))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_n_7)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7)))));
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
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATempty, term_n_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_n_7))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))))));
      {
        ATerm j_12 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_12;
          }
      }
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(x_1, z_1, t);
  t = do_test_2_0(a_2, b_2, t);
  t = do_test_2_0(c_2, d_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_t_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATempty, term_n_7)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm v_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_i_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATempty, term_n_7)))));
      {
        ATerm n_13 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_13;
          }
      }
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = v_12;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(e_2, f_2, t);
  t = do_test_2_0(g_2, i_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_n_7)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATempty, term_n_7)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_n_7)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7)))));
      {
        ATerm i_14 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_14;
          }
      }
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(j_2, k_2, t);
  t = do_test_2_0(l_2, n_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_j_14;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_y_14, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_v_14), term_g_15))), term_b_15)))));
      {
        ATerm h_15 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_15;
          }
      }
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_i_15;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_y_14, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_m_15), term_b_15)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_n_15;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_v_14), term_g_15))), term_b_15))));
      {
        ATerm r_15 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_15;
          }
      }
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(o_2, p_2, t);
  t = do_test_2_0(q_2, r_2, t);
  t = do_test_2_0(s_2, t_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm t_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_j_10), (ATerm) ATmakeAppl(sym_Seq_2, term_z_15, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATempty, term_p_10))), term_n_7)))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = t_15;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm b_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_j_10), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_y_16), term_n_7))), term_p_10))))));
      {
        ATerm z_16 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_16;
          }
      }
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = b_16;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(u_2, v_2, t);
  t = do_test_2_0(w_2, x_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm l_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATempty, term_p_10))), term_n_7)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = l_17;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
      t = term_s_7;
      _fail(t);
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, term_y_16), term_n_7))), term_p_10)))));
      {
        ATerm w_17 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_17;
          }
      }
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(y_2, z_2, t);
  t = do_test_2_0(a_3, b_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_1), term_c_18);
  t = assert_1_0(e_3, t);
  t = c_1;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_d_18;
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_18, z_0));
  t = assert_1_0(c_3, t);
  t = a_1;
  t = map_1_0(d_3, t);
  t = b_1;
  t = use_vars_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, z_0, a_1, b_1);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm h_2 = NULL;
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_2 = ATgetArgument(t, 0);
          {
            ATerm h_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_18);
      t = h_2;
    }
  else
    {
      t = f_18;
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
ATerm h_3 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_2), term_c_18);
  t = assert_1_0(i_3, t);
  t = m_2;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm m_3 = NULL;
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_3 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_18);
      t = m_3;
    }
  else
    {
      t = j_18;
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
ATerm n_3 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_3), term_c_18);
  t = assert_1_0(o_3, t);
  t = s_3;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_y_17;
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
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_18, q_1));
          t = assert_1_0(f_3, t);
          t = s_1;
          t = map_1_0(g_3, t);
          t = map_1_0(h_3, t);
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
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_18, q_1));
          t = assert_1_0(k_3, t);
          t = s_1;
          t = map_1_0(l_3, t);
          t = map_1_0(n_3, t);
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
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_18, q_1));
      t = assert_1_0(p_3, t);
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
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,w_4 = NULL,x_4 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, r_4, s_4, w_4), g_4);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
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
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_6 = ATgetFirst((ATermList) t);
                {
                  ATerm u_18 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_18);
            t = v_6;
            {
              ATerm v_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm x_18 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_18);
                  t = t_6;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm y_18 = t;
                      int z_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_6;
                          ;
                          LocalPopChoice(z_18);
                        }
                      else
                        {
                          t = y_18;
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
                  t = v_18;
                  t = t_6;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = r_6;
                }
            }
          }
        else
          {
            t = s_18;
            t = t_6;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = r_6;
          }
      }
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
ATerm b_7 (ATerm b_6, ATerm c_6, ATerm t)
{
  t = c_6;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), b_6);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_19 = ATgetFirst((ATermList) t);
            if(match_cons(c_19, sym_Defined_1))
              {
                ATerm f_19 = ATgetArgument(c_19, 0);
              }
            else
              _fail(t);
            {
              ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = c_6;
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATmakeAppl(sym__2, b_6, (ATerm) ATinsert(ATempty, term_g_19));
      }
  }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm a_6 = NULL;
  t = map_1_0(q_3, t);
  a_6 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, a_6);
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
    ATerm r_3 (ATerm t)
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
    t = map_1_0(r_3, t);
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  e_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), e_1);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, f_1);
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = map_1_0(t_3, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,h_8 = NULL,i_8 = NULL;
  b_8 = t;
  t = save_Bound_0_0(t);
  c_8 = t;
  t = b_8;
  t = s_76(t);
  d_8 = t;
  t = save_Bound_0_0(t);
  h_8 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, c_8);
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
  ATerm j_8 = NULL,k_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,w_8 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, r_8, s_8), j_8);
  return(t);
}
ATerm Choice_2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,p_9 = NULL,q_9 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, l_9, p_9), d_9);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL,u_3 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_3 = ATgetFirst((ATermList) t);
            {
              ATerm k_19 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_3;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
            j_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_p_19), j_3), term_n_19);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_3 = NULL,j_4 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_4 = ATgetFirst((ATermList) t);
                  {
                    ATerm t_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = j_4;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm u_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_19) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  y_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_p_19), y_3), term_v_19);
              ;
              LocalPopChoice(s_19);
            }
          else
            {
              t = r_19;
              {
                ATerm x_19 = t;
                int y_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_4 = NULL,u_4 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        u_4 = ATgetFirst((ATermList) t);
                        {
                          ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = u_4;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm a_20 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) a_20) != ATmakeSymbol("j_0", 0, ATtrue)))
                          _fail(t);
                        n_4 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_p_19), n_4), term_v_19);
                    ;
                    LocalPopChoice(y_19);
                  }
                else
                  {
                    t = x_19;
                    {
                      ATerm b_20 = t;
                      int d_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_5 = NULL,g_5 = NULL;
                          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              g_5 = ATgetFirst((ATermList) t);
                              {
                                ATerm e_20 = (ATerm) ATgetNext((ATermList) t);
                              }
                            }
                          else
                            _fail(t);
                          t = g_5;
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm f_20 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) f_20) != ATmakeSymbol("h_0", 0, ATtrue)))
                                _fail(t);
                              c_5 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_p_19), c_5), term_v_19);
                          ;
                          LocalPopChoice(d_20);
                        }
                      else
                        {
                          t = b_20;
                          {
                            ATerm j_20 = t;
                            int k_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_5 = NULL,o_5 = NULL;
                                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    o_5 = ATgetFirst((ATermList) t);
                                    {
                                      ATerm n_20 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = o_5;
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm o_20 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) o_20) != ATmakeSymbol("f_0", 0, ATtrue)))
                                      _fail(t);
                                    k_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_p_19), k_5), term_r_20);
                                ;
                                LocalPopChoice(k_20);
                              }
                            else
                              {
                                t = j_20;
                                {
                                  ATerm s_5 = NULL,w_5 = NULL;
                                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      w_5 = ATgetFirst((ATermList) t);
                                      {
                                        ATerm s_20 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = w_5;
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm u_20 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      s_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_11), term_p_19), s_5), term_r_20);
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
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_7 = ATgetFirst((ATermList) t);
            {
              ATerm a_21 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = h_7;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm b_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_12);
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        {
          ATerm c_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_7 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_12);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_7 = ATgetFirst((ATermList) t);
                  {
                    ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = v_7;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(e_21);
            }
          else
            {
              t = c_21;
              {
                ATerm m_8 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_12);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_8 = ATgetFirst((ATermList) t);
                    {
                      ATerm i_21 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = m_8;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm k_21 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("s_0", 0, ATtrue)))
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
  ATerm l_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(o_21);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            {
              ATerm w_12 = NULL,x_12 = NULL,u_8 = NULL;
              w_12 = t;
              if(match_cons(t, sym_Var_1))
                {
                  x_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_21), x_12), term_s_21);
              t = Context_0_0(t);
              u_8 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), u_8);
              t = u_8;
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = l_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(v_21);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = u_21;
            {
              ATerm w_21 = t;
              int c_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(c_22);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = w_21;
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
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, d_13, e_13, f_13), z_12);
  return(t);
}
ATerm RootApp_1_0 (ATerm e_66 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, l_13), j_13);
  return(t);
}
ATerm App_2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, s_13, t_13), p_13);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
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
      ATerm d_22 = ATgetFirst((ATermList) t);
      a_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(x_13, y_13, (ATerm) ATinsert(CheckATermList(a_14), z_13));
  t = (ATerm) ATmakeAppl(sym__3, x_13, y_13, z_13);
  return(t);
}
ATerm Var_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, g_14), e_14);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(i_22);
      {
        ATerm k_14 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            k_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, term_d_18, (ATerm)ATmakeAppl(sym_Var_1, k_14), term_k_22);
        t = table_replace_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, k_14);
      }
    }
  else
    {
      t = h_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(m_22);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = l_22;
            {
              ATerm n_22 = t;
              int q_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(q_22);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = n_22;
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
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, n_14), l_14);
  return(t);
}
ATerm Build_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, t_14), r_14);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = Scope_2_0(x_3, unbound_vars_0_0, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = map_1_0(z_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_14), term_g_19);
  t = assert_1_0(a_4, t);
  t = x_14;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = Choice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = Choice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = LChoice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = LChoice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(t_22);
      t = scope_2_0(v_3, w_3, t);
    }
  else
    {
      t = r_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(w_22);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = v_22;
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(y_22);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = x_22;
                  {
                    ATerm z_22 = t;
                    int a_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(a_23);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = z_22;
                        {
                          ATerm c_23 = t;
                          int d_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(d_23);
                              t = abstract_choice_2_0(b_4, c_4, t);
                            }
                          else
                            {
                              t = c_23;
                              {
                                ATerm e_23 = t;
                                int f_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(f_23);
                                    t = abstract_choice_2_0(d_4, e_4, t);
                                  }
                                else
                                  {
                                    t = e_23;
                                    {
                                      ATerm g_23 = t;
                                      int h_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(h_23);
                                          t = abstract_choice_2_0(f_4, k_4, t);
                                        }
                                      else
                                        {
                                          t = g_23;
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
ATerm l_4 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm l_15 = NULL;
  ATerm i_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_15 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_23);
      t = l_15;
    }
  else
    {
      t = i_23;
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
ATerm o_4 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_15), term_c_18);
  t = assert_1_0(p_4, t);
  t = o_15;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_y_17;
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
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_23, c_15));
      t = assert_1_0(l_4, t);
      t = e_15;
      t = map_1_0(m_4, t);
      t = map_1_0(o_4, t);
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
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_23, c_15));
      t = assert_1_0(t_4, t);
      t = e_15;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, c_15, d_15, e_15);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
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
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            ATerm y_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_15, v_15);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = (ATerm) ATempty;
      }
    x_15 = t;
    t = SSL_table_put(u_15, v_15, (ATerm) ATinsert(CheckATermList(x_15), w_15));
    t = (ATerm) ATmakeAppl(sym__3, u_15, v_15, w_15);
  }
  return(t);
}
ATerm assert_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
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
    ATerm a_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = a_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_16 = ATgetFirst((ATermList) t);
        g_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(g_16), (ATerm) ATinsert(CheckATermList(f_16), c_16)));
    t = (ATerm) ATmakeAppl(sym__2, c_16, d_16);
  }
  return(t);
}
ATerm map_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm h_16 (ATerm t)
  {
    ATerm g_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = g_24;
        t = Cons_2_0(p_77, h_16, t);
      }
    return(t);
  }
  t = h_16(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm f_68 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, k_16), i_16);
  return(t);
}
ATerm RDefT_4_0 (ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, t_16, u_16, v_16, w_16), o_16);
  return(t);
}
ATerm SDefT_4_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, f_17, g_17, h_17, i_17), a_17);
  return(t);
}
ATerm Scope_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, p_17, q_17), m_17);
  return(t);
}
ATerm tboundin_3_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(u_90, s_90, t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(u_90, u_90, u_90, s_90, t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(u_90, u_90, u_90, s_90, t);
                  ;
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  t = DynamicRules_1_0(s_90, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_4 (ATerm t)
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
ATerm y_4 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
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
            ATerm b_25 = t;
            int c_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm d_25 = ATgetArgument(t, 0);
                    ATerm e_25 = ATgetArgument(t, 1);
                    b_18 = ATgetArgument(t, 2);
                    {
                      ATerm f_25 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(c_25);
                t = b_18;
                t = map_1_0(z_4, t);
              }
            else
              {
                t = b_25;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm g_25 = ATgetArgument(t, 0);
                    ATerm h_25 = ATgetArgument(t, 1);
                    b_18 = ATgetArgument(t, 2);
                    {
                      ATerm i_25 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_18;
                t = map_1_0(a_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm i_18 = NULL;
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm l_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_25);
      t = i_18;
    }
  else
    {
      t = j_25;
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
ATerm a_5 (ATerm t)
{
  ATerm r_18 = NULL;
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_18 = ATgetArgument(t, 0);
          {
            ATerm o_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_25);
      t = r_18;
    }
  else
    {
      t = m_25;
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
  t = free_vars_3_0(v_4, y_4, tboundin_3_0, t);
  return(t);
}
ATerm b_5 (ATerm t)
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
ATerm d_5 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
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
            ATerm r_25 = t;
            int s_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm t_25 = ATgetArgument(t, 0);
                    ATerm u_25 = ATgetArgument(t, 1);
                    q_19 = ATgetArgument(t, 2);
                    {
                      ATerm v_25 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(s_25);
                t = q_19;
                t = map_1_0(e_5, t);
              }
            else
              {
                t = r_25;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm w_25 = ATgetArgument(t, 0);
                    ATerm x_25 = ATgetArgument(t, 1);
                    q_19 = ATgetArgument(t, 2);
                    {
                      ATerm y_25 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = q_19;
                t = map_1_0(f_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm w_19 = NULL;
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_19 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_26);
      t = w_19;
    }
  else
    {
      t = z_25;
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
ATerm f_5 (ATerm t)
{
  ATerm c_20 = NULL;
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_20 = ATgetArgument(t, 0);
          {
            ATerm e_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_26);
      t = c_20;
    }
  else
    {
      t = c_26;
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
            ATerm f_26 = ATgetArgument(t, 1);
          }
          {
            ATerm g_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_19;
      t = free_vars_3_0(b_5, d_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_19 = ATgetArgument(t, 0);
          {
            ATerm h_26 = ATgetArgument(t, 1);
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
      ATerm i_26 = t;
      int j_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_20;
          ;
          LocalPopChoice(j_26);
        }
      else
        {
          t = i_26;
          {
            ATerm k_26 = t;
            int l_26 = stack_ptr;
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
                  ATerm h_5 (ATerm t)
                  {
                    ATerm h_9 = NULL;
                    h_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_9, h_9);
                    t = e_77(t);
                    return(t);
                  }
                  t = fetch_1_0(h_5, t);
                  t = g_9;
                  t = i_20(t);
                }
                ;
                LocalPopChoice(l_26);
              }
            else
              {
                t = k_26;
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
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_79(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
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
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_78, _id, t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
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
      ATerm q_26 = t;
      int r_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(r_26);
        }
      else
        {
          t = q_26;
          {
            ATerm s_26 = t;
            int t_26 = stack_ptr;
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
                  ATerm i_5 (ATerm t)
                  {
                    ATerm t_9 = NULL;
                    t_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_9, t_9);
                    t = z_76(t);
                    return(t);
                  }
                  t = fetch_1_0(i_5, t);
                  t = o_9;
                  t = z_20(t);
                }
                ;
                LocalPopChoice(t_26);
              }
            else
              {
                t = s_26;
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
ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_5 (ATerm t)
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
ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = union_1_0(q_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
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
ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = union_1_0(u_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
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
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_93(t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_21 = NULL,f_21 = NULL,b_10 = NULL,c_10 = NULL;
              d_21 = t;
              t = v_93(t);
              f_21 = t;
              t = d_21;
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm x_9 = NULL;
                  t = j_21(t);
                  x_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_9, f_21);
                  t = diff_1_0(m_5, t);
                  return(t);
                }
                t = w_93(j_5, j_21, l_5, t);
                b_10 = t;
                t = SSL_explode_term(b_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_26 = ATgetArgument(t, 0);
                    c_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_10;
                t = foldr_3_0(n_5, p_5, _id, t);
              }
              ;
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              {
                ATerm h_10 = NULL,i_10 = NULL;
                h_10 = t;
                t = SSL_explode_term(h_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_26 = ATgetArgument(t, 0);
                    i_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_10;
                t = foldr_3_0(r_5, t_5, j_21, t);
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
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_27 = ATgetArgument(t, 0);
            ATerm d_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_21, n_21);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_27 = ATgetFirst((ATermList) t);
            q_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_10;
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
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
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  x_21 = t;
  t = y_80(t);
  y_21 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(y_21, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_22 = ATgetFirst((ATermList) t);
        z_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(y_21, (ATerm)ATmakeAppl(sym_Scopes_0), z_21);
    t = a_22;
    {
      ATerm v_5 (ATerm t)
      {
        ATerm b_22 = NULL;
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_21, b_22);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(v_5, t);
      t = x_21;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_87(t);
      t = z_87(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      t = z_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  t = x_80(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, term_j_27);
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_27 = ATgetArgument(t, 0);
            ATerm n_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_22, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = (ATerm) ATempty;
      }
    g_22 = t;
    t = SSL_table_put(f_22, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(g_22), (ATerm) ATempty));
    t = e_22;
  }
  return(t);
}
ATerm scope_2_0 (ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm t)
{
  t = begin_scope_1_0(z_80, t);
  {
    ATerm x_5 (ATerm t)
    {
      t = end_scope_1_0(z_80, t);
      return(t);
    }
    t = restore_always_2_0(a_81, x_5, t);
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = scope_2_0(d_6, e_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  t = free_vars_3_0(f_6, g_6, tboundin_3_0, t);
  t = map_1_0(j_6, t);
  t = o_22;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              t = overlay_ud_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_6 (ATerm t)
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
ATerm g_6 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
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
            ATerm u_27 = t;
            int v_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm w_27 = ATgetArgument(t, 0);
                    ATerm x_27 = ATgetArgument(t, 1);
                    u_22 = ATgetArgument(t, 2);
                    {
                      ATerm y_27 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(v_27);
                t = u_22;
                t = map_1_0(h_6, t);
              }
            else
              {
                t = u_27;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm z_27 = ATgetArgument(t, 0);
                    ATerm a_28 = ATgetArgument(t, 1);
                    u_22 = ATgetArgument(t, 2);
                    {
                      ATerm b_28 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = u_22;
                t = map_1_0(i_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm b_23 = NULL;
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_23 = ATgetArgument(t, 0);
          {
            ATerm e_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_28);
      t = b_23;
    }
  else
    {
      t = c_28;
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
ATerm i_6 (ATerm t)
{
  ATerm j_23 = NULL;
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_23 = ATgetArgument(t, 0);
          {
            ATerm h_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_28);
      t = j_23;
    }
  else
    {
      t = f_28;
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
ATerm j_6 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_23), term_g_19);
  t = assert_1_0(k_6, t);
  t = n_23;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  t = scope_2_0(y_5, z_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(s_23), r_23), o_23);
  return(t);
}
ATerm filter_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              t = filter_1_0(x_86, t);
              return(t);
            }
            t = Cons_2_0(x_86, l_6, t);
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            {
              ATerm z_23 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_28 = ATgetFirst((ATermList) t);
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
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, d_24), b_24);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_24, term_n_28);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_24, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = SSL_addr(j_24, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_24, term_n_28);
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_24, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = SSL_addr(k_24, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm do_test_2_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  h_24 = t;
  t = j_96(t);
  i_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_24));
  t = h_24;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_96(t);
        t = h_24;
        t = _2_0(m_6, _id, t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = _2_0(_id, n_6, t);
      }
  }
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_p_12, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATempty, term_p_10))), term_n_7)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_g_11, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATempty, term_n_7)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_x_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, term_p_10), term_n_7))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_w_10), term_p_10))), term_n_7)))))));
      {
        ATerm x_28 = t;
        if((PushChoice() == 0))
          {
            t = Strategies_1_0(q_6, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_28;
          }
      }
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue))));
      t = term_y_10;
      _fail(t);
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm l_24 = NULL;
        l_24 = t;
        t = filter_1_0(s_6, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_24;
      }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm a_29 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_29;
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(o_6, p_6, t);
  return(t);
}
ATerm _2_0 (ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_24, r_24), n_24);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_11), (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue))));
  t = a_11;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm x_11 = NULL;
  x_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_11), (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue))));
  t = x_11;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm u_10 = NULL;
  t = h_96(t);
  u_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_10), (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue))));
  t = term_c_29;
  t = i_96(t);
  t = _2_0(w_6, x_6, t);
  t = _2_0(_id, y_6, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm a_7 (ATerm t)
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
  t = test_suite_2_0(z_6, a_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_0_0(t);
  return(t);
}

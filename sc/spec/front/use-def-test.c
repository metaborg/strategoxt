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
ATerm term_k_33;
ATerm term_j_33;
ATerm term_h_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_f_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_o_21;
ATerm term_x_20;
ATerm term_j_20;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_g_17;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_g_15;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_l_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_p_11;
void init_constant_terms (void)
{
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Var_1, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Match_1, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Build_1, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Var_1, term_l_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Var_1, term_s_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Var_1, term_a_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Var_1, term_x_13);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_m_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Var_1, term_r_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Build_1, term_w_13);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Call_2, term_y_15, (ATerm) ATempty);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Build_1, term_j_14);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Match_1, term_t_15);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Str_1, term_q_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Var_1, term_l_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Str_1, term_y_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Var_1, term_b_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Call_2, term_u_18, (ATerm) ATempty);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Match_1, term_c_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_18, term_x_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_12, term_z_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Call_2, term_t_22, (ATerm) ATempty);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_LChoice_2, term_v_18, term_v_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_22, term_z_11);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_22, term_z_11);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_LChoice_2, term_v_18, term_f_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Var_1, term_z_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Match_1, term_c_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Str_1, term_g_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Build_1, term_c_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_24, term_v_18);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_App_2, term_v_18, term_c_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Match_1, term_v_17);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Var_1, term_n_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_b_26, (ATerm) ATempty);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_28);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_h_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm b_0 (ATerm);
ATerm k_0 (ATerm);
ATerm test12_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm y_0 (ATerm);
ATerm c_1 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm k_2 (ATerm);
ATerm test10_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm a_5 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm y_5 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm e_3 (ATerm f_29, ATerm g_29, ATerm h_29, ATerm);
ATerm o_6 (ATerm);
ATerm r_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm s_8 (ATerm r_7, ATerm s_7, ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm f_3 (ATerm x_36, ATerm w_36, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm g_3 (ATerm o_29, ATerm);
ATerm i_3 (ATerm f_36, ATerm g_36, ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm j_3 (ATerm h_36, ATerm i_36, ATerm j_36, ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm v_7 (ATerm);
ATerm z_7 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm m_3 (ATerm u_35, ATerm v_35, ATerm t_35, ATerm);
ATerm n_3 (ATerm l_81 (ATerm), ATerm m_35, ATerm k_35, ATerm);
ATerm map_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm n_9 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm u_9 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm s_3 (ATerm p_77 (ATerm), ATerm e_30, ATerm d_30, ATerm);
ATerm foldr_3_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm t_3 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm i_30, ATerm h_30, ATerm);
ATerm u_3 (ATerm k_77 (ATerm), ATerm c_30, ATerm b_30, ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm free_vars_3_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm v_3 (ATerm z_35, ATerm a_36, ATerm);
ATerm end_scope_1_0 (ATerm i_81 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm);
ATerm w_3 (ATerm l_37, ATerm m_37, ATerm);
ATerm begin_scope_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm scope_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm x_3 (ATerm y_33, ATerm z_33, ATerm);
ATerm do_test_2_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm f_11 (ATerm);
ATerm test_suite_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm);
ATerm j_11 (ATerm);
ATerm o_11 (ATerm);
ATerm use_def_test_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_s_11, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_w_11, (ATerm) ATinsert(ATempty, term_z_11)), (ATerm)ATmakeAppl(sym_Call_2, term_w_11, (ATerm) ATinsert(ATempty, term_a_12)), term_c_12));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm a_0 = NULL,d_0 = NULL;
        t = term_e_12;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        d_0 = t;
        t = SSL_printnl(a_0, d_0);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(b_0, k_0, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm m_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_w_13), term_r_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_13), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_j_14), term_c_14)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_w_13), term_r_13))), term_c_14))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = m_12;
      {
        ATerm f_0 = NULL,g_0 = NULL;
        t = term_e_12;
        f_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        g_0 = t;
        t = SSL_printnl(f_0, g_0);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_0 = NULL,m_0 = NULL,u_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_g_15, (ATerm)ATinsert(ATempty, term_n_15), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_w_13), term_r_13)), (ATerm)ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_t_15), term_r_13))), term_c_14)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_15, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_j_14), term_c_14))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_d_16, (ATerm) ATmakeAppl(sym_Op_2, term_j_16, (ATerm) ATinsert(ATinsert(ATempty, term_c_14), term_r_13)))), term_o_16))))), term_q_16))))));
      m_0 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm s_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_0);
      i_0 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_g_15, (ATerm)ATinsert(ATempty, term_n_15), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_w_13), term_r_13)), (ATerm)ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_t_15), term_r_13))), term_c_14)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_15, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_j_14), term_c_14))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_d_16, (ATerm) ATmakeAppl(sym_Op_2, term_j_16, (ATerm) ATinsert(ATinsert(ATempty, term_c_14), term_r_13)))), term_o_16))))), term_q_16)))));
      t = filter_1_0(c_1, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_g_15, (ATerm)ATinsert(ATempty, term_n_15), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_w_13), term_r_13)), (ATerm)ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_t_15), term_r_13))), term_c_14)), (ATerm) ATmakeAppl(sym_Seq_2, term_v_15, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, term_j_14), term_c_14))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_d_16, (ATerm) ATmakeAppl(sym_Op_2, term_j_16, (ATerm) ATinsert(ATinsert(ATempty, term_c_14), term_r_13)))), term_o_16))))), term_q_16))))));
      u_0 = t;
      t = SSLsetAnnotations(u_0, i_0);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm n_0 = NULL,q_0 = NULL;
        t = term_e_12;
        n_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        q_0 = t;
        t = SSL_printnl(n_0, q_0);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm t_16 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_16;
    }
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(p_0, t_0, t);
  t = do_test_2_0(v_0, y_0, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_s_13, (ATerm)ATinsert(ATinsert(ATempty, term_l_17), term_x_11), (ATerm) ATmakeAppl(sym_Op_2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_18), term_a_18), term_y_11)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_k_17, (ATerm)ATinsert(ATinsert(ATempty, term_l_17), term_x_11), (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, term_s_17), term_y_11)))))));
      {
        ATerm f_18 = t;
        if((PushChoice() == 0))
          {
            ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL,x_0 = NULL;
            b_1 = t;
            if(match_cons(t, sym_Overlays_1))
              {
                a_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_1);
            z_0 = t;
            t = a_1;
            {
              ATerm g_18 = t;
              int i_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_1;
                  ;
                  LocalPopChoice(i_18);
                }
              else
                {
                  t = g_18;
                  t = filter_1_0(k_2, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_1;
                }
              t = (ATerm) ATmakeAppl(sym_Overlays_1, a_1);
              x_0 = t;
              t = SSLsetAnnotations(x_0, z_0);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_18;
          }
      }
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm d_1 = NULL,e_1 = NULL;
        t = term_e_12;
        d_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        e_1 = t;
        t = SSL_printnl(d_1, e_1);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm k_18 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_18;
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(v_1, x_1, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm p_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11)), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_c_18), term_v_17)), term_b_19)));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = p_18;
      {
        ATerm g_1 = NULL,h_1 = NULL;
        t = term_e_12;
        g_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        h_1 = t;
        t = SSL_printnl(g_1, h_1);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm i_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11)), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_c_18), term_v_17)), term_c_12)));
      {
        ATerm r_19 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_19;
          }
      }
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = i_19;
      {
        ATerm i_1 = NULL,k_1 = NULL;
        t = term_e_12;
        i_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        k_1 = t;
        t = SSL_printnl(i_1, k_1);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(m_2, o_2, t);
  t = do_test_2_0(y_2, a_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm v_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11)), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_c_18), term_v_17)), term_b_19));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = v_19;
      {
        ATerm l_1 = NULL,m_1 = NULL;
        t = term_e_12;
        l_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        m_1 = t;
        t = SSL_printnl(l_1, m_1);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm b_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11)), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_c_18), term_v_17)), term_c_12));
      {
        ATerm e_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_20;
          }
      }
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = b_20;
      {
        ATerm n_1 = NULL,o_1 = NULL;
        t = term_e_12;
        n_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        o_1 = t;
        t = SSL_printnl(n_1, o_1);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(p_3, d_4, t);
  t = do_test_2_0(e_4, g_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm o_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATempty, term_v_17))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATempty, term_y_11))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATempty, term_y_11))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = o_20;
      {
        ATerm p_1 = NULL,q_1 = NULL;
        t = term_e_12;
        p_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        q_1 = t;
        t = SSL_printnl(p_1, q_1);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm z_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATempty, term_y_11))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATempty, term_y_11)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11)))));
      {
        ATerm j_21 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_21;
          }
      }
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = z_20;
      {
        ATerm r_1 = NULL,w_1 = NULL;
        t = term_e_12;
        r_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        w_1 = t;
        t = SSL_printnl(r_1, w_1);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm t_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATempty, term_y_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATempty, term_y_11))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))))));
      {
        ATerm c_22 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_22;
          }
      }
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = t_21;
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = term_e_12;
        y_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        z_1 = t;
        t = SSL_printnl(y_1, z_1);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(j_4, m_4, t);
  t = do_test_2_0(n_4, r_4, t);
  t = do_test_2_0(u_4, a_5, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm o_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_b_23, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATempty, term_y_11)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = o_22;
      {
        ATerm a_2 = NULL,b_2 = NULL;
        t = term_e_12;
        a_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        b_2 = t;
        t = SSL_printnl(a_2, b_2);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_23, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATempty, term_y_11)))));
      {
        ATerm i_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_23;
          }
      }
      ;
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = term_e_12;
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        d_2 = t;
        t = SSL_printnl(c_2, d_2);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(b_5, d_5, t);
  t = do_test_2_0(e_5, f_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm l_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATempty, term_y_11)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATempty, term_y_11)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = l_23;
      {
        ATerm e_2 = NULL,f_2 = NULL;
        t = term_e_12;
        e_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        f_2 = t;
        t = SSL_printnl(e_2, f_2);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATempty, term_y_11)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11)))));
      {
        ATerm s_23 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_23;
          }
      }
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_e_12;
        g_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        h_2 = t;
        t = SSL_printnl(g_2, h_2);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(g_5, h_5, t);
  t = do_test_2_0(i_5, j_5, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_d_24, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_z_23), term_n_24))), term_h_24)))));
      {
        ATerm o_24 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_24;
          }
      }
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_e_12;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_d_24, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_t_24), term_h_24)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm l_2 = NULL,n_2 = NULL;
        t = term_e_12;
        l_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        n_2 = t;
        t = SSL_printnl(l_2, n_2);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_z_23), term_n_24))), term_h_24))));
      {
        ATerm y_24 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_24;
          }
      }
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm p_2 = NULL,q_2 = NULL;
        t = term_e_12;
        p_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        q_2 = t;
        t = SSL_printnl(p_2, q_2);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(n_5, o_5, t);
  t = do_test_2_0(q_5, r_5, t);
  t = do_test_2_0(t_5, y_5, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_17), (ATerm) ATmakeAppl(sym_Seq_2, term_c_25, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATempty, term_v_17))), term_y_11)))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm t_2 = NULL,u_2 = NULL;
        t = term_e_12;
        t_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        u_2 = t;
        t = SSL_printnl(t_2, u_2);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_l_17), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, term_o_25), term_y_11))), term_v_17))))));
      {
        ATerm p_25 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_25;
          }
      }
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm x_2 = NULL,z_2 = NULL;
        t = term_e_12;
        x_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        z_2 = t;
        t = SSL_printnl(x_2, z_2);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(z_5, a_6, t);
  t = do_test_2_0(b_6, c_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATempty, term_v_17))), term_y_11)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = term_e_12;
        b_3 = t;
        t = (ATerm) ATinsert(ATempty, term_j_12);
        c_3 = t;
        t = SSL_printnl(b_3, c_3);
        t = term_j_12;
        _fail(t);
      }
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, term_o_25), term_y_11))), term_v_17)))));
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
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm h_3 = NULL,k_3 = NULL;
        t = term_e_12;
        h_3 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        k_3 = t;
        t = SSL_printnl(h_3, k_3);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(d_6, e_6, t);
  t = do_test_2_0(f_6, h_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm z_3 = NULL,b_4 = NULL,c_4 = NULL;
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_3);
  b_4 = t;
  t = term_d_26;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_3), term_d_26);
  t = n_3(m_6, b_4, c_4, t);
  t = z_3;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm e_3 (ATerm f_29, ATerm g_29, ATerm h_29, ATerm t)
{
  ATerm l_3 = NULL,o_3 = NULL,y_3 = NULL;
  l_3 = t;
  t = (ATerm) ATempty;
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_26, f_29);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_26, f_29));
  t = n_3(j_6, o_3, y_3, t);
  t = g_29;
  t = map_1_0(l_6, t);
  t = h_29;
  t = use_vars_0_0(t);
  t = l_3;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm p_5 = NULL;
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_5 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_26);
      t = p_5;
    }
  else
    {
      t = g_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_5;
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_5);
  w_5 = t;
  t = term_d_26;
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_5), term_d_26);
  t = n_3(w_6, w_5, x_5, t);
  t = v_5;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm n_6 = NULL;
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_6 = ATgetArgument(t, 0);
          {
            ATerm l_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_26);
      t = n_6;
    }
  else
    {
      t = j_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_6;
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,v_6 = NULL;
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_6);
  t_6 = t;
  t = term_d_26;
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_6), term_d_26);
  t = n_3(a_7, t_6, v_6, t);
  t = s_6;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,c_5 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      w_4 = ATgetArgument(t, 2);
      k_4 = ATgetArgument(t, 3);
      t = k_4;
      if(match_cons(t, sym_StratRule_3))
        {
          l_4 = ATgetArgument(t, 0);
          p_4 = ATgetArgument(t, 1);
          q_4 = ATgetArgument(t, 2);
          {
            ATerm l_5 = NULL,m_5 = NULL;
            t = (ATerm) ATempty;
            l_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_26, s_4);
            m_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_26, s_4));
            t = n_3(o_6, l_5, m_5, t);
            t = w_4;
            t = map_1_0(r_6, t);
            t = map_1_0(u_6, t);
            t = l_4;
            t = unbound_vars_0_0(t);
            t = p_4;
            t = unbound_vars_0_0(t);
            t = q_4;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, s_4, t_4, w_4, (ATerm) ATmakeAppl(sym_StratRule_3, l_4, p_4, q_4));
          }
        }
      else
        {
          ATerm g_6 = NULL,k_6 = NULL;
          if(match_cons(t, sym_Rule_3))
            {
              l_4 = ATgetArgument(t, 0);
              p_4 = ATgetArgument(t, 1);
              q_4 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          g_6 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_26, s_4);
          k_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_26, s_4));
          t = n_3(x_6, g_6, k_6, t);
          t = w_4;
          t = map_1_0(y_6, t);
          t = map_1_0(z_6, t);
          t = l_4;
          t = bind_vars_0_0(t);
          t = q_4;
          t = unbound_vars_0_0(t);
          t = p_4;
          t = use_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, s_4, t_4, w_4, (ATerm) ATmakeAppl(sym_Rule_3, l_4, p_4, q_4));
        }
    }
  else
    {
      ATerm b_7 = NULL,c_7 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          s_4 = ATgetArgument(t, 0);
          t_4 = ATgetArgument(t, 1);
          w_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_4;
      if(match_cons(t, sym_Rule_3))
        {
          x_4 = ATgetArgument(t, 0);
          y_4 = ATgetArgument(t, 1);
          c_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      b_7 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_26, s_4);
      c_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_26, s_4));
      t = n_3(d_7, b_7, c_7, t);
      t = x_4;
      t = bind_vars_0_0(t);
      t = c_5;
      t = unbound_vars_0_0(t);
      t = y_4;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, s_4, t_4, (ATerm) ATmakeAppl(sym_Rule_3, x_4, y_4, c_5));
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
      t = b_8;
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_8 = ATgetFirst((ATermList) t);
                {
                  ATerm r_26 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_26);
            t = c_8;
            {
              ATerm s_26 = t;
              int t_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm u_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_26);
                  t = a_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = h_8;
                    }
                  else
                    {
                      ATerm v_26 = t;
                      int w_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_8(a_8, h_8, t);
                          ;
                          LocalPopChoice(w_26);
                        }
                      else
                        {
                          t = v_26;
                          t = h_8;
                        }
                    }
                }
              else
                {
                  t = s_26;
                  t = a_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = h_8;
                    }
                  else
                    {
                      t = h_8;
                    }
                }
            }
          }
        else
          {
            t = p_26;
            t = a_8;
            if(match_cons(t, sym_Scopes_0))
              {
                t = h_8;
              }
            else
              {
                t = h_8;
              }
          }
      }
    }
  else
    {
      t = h_8;
    }
  return(t);
}
ATerm s_8 (ATerm r_7, ATerm s_7, ATerm t)
{
  t = s_7;
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_e_26;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_26, r_7);
        t = w_3(s_0, r_7, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_26 = ATgetFirst((ATermList) t);
            if(match_cons(z_26, sym_Defined_1))
              {
                ATerm b_27 = ATgetArgument(z_26, 0);
              }
            else
              _fail(t);
            {
              ATerm a_27 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_7;
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATmakeAppl(sym__2, r_7, (ATerm) ATinsert(ATempty, term_c_27));
      }
  }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  t = map_1_0(e_7, t);
  o_7 = t;
  t = term_e_26;
  q_7 = t;
  t = SSL_table_destroy(q_7);
  t = term_e_26;
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, o_7);
  t = f_3(p_7, o_7, t);
  t = o_7;
  return(t);
}
ATerm f_3 (ATerm x_36, ATerm w_36, ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm u_8 = NULL,v_8 = NULL;
    if(match_cons(t, sym__2))
      {
        u_8 = ATgetArgument(t, 0);
        v_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(not_null(x_36), u_8, v_8);
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_36), u_8, v_8);
    return(t);
  }
  t = not_null(w_36);
  t = map_1_0(g_7, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  ATerm j_7 (ATerm t)
  {
    ATerm z_8 = NULL,a_9 = NULL;
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), z_8);
    t = w_3(not_null(w_8), z_8, t);
    a_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_8, a_9);
    return(t);
  }
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  t = SSL_table_keys(not_null(w_8));
  t = map_1_0(j_7, t);
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = term_e_26;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  t = save_Bound_0_0(t);
  b_9 = t;
  t = i_9;
  t = d_77(t);
  e_9 = t;
  t = save_Bound_0_0(t);
  c_9 = t;
  t = term_e_26;
  k_9 = t;
  t = SSL_table_destroy(k_9);
  t = term_e_26;
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, b_9);
  t = f_3(j_9, b_9, t);
  t = e_9;
  t = e_77(t);
  d_9 = t;
  t = c_9;
  t = isect_Bound_0_0(t);
  t = d_9;
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL,q_3 = NULL,r_3 = NULL;
        t = (ATerm) ATempty;
        q_3 = t;
        t = term_b_26;
        r_3 = t;
        t = term_f_27;
        t = i_3(r_3, q_3, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_27) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            d_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_10), term_i_27), d_3), term_h_27);
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          ATerm j_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_4 = NULL,h_4 = NULL,i_4 = NULL;
              t = (ATerm) ATempty;
              h_4 = t;
              t = term_b_26;
              i_4 = t;
              t = term_f_27;
              t = i_3(i_4, h_4, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm l_27 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_27) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                  f_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_10), term_i_27), f_4), term_m_27);
              ;
              LocalPopChoice(k_27);
            }
          else
            {
              t = j_27;
              {
                ATerm n_27 = t;
                int o_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_4 = NULL,v_4 = NULL,z_4 = NULL;
                    t = (ATerm) ATempty;
                    v_4 = t;
                    t = term_b_26;
                    z_4 = t;
                    t = term_f_27;
                    t = i_3(z_4, v_4, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm p_27 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("j_0", 0, ATtrue)))
                          _fail(t);
                        o_4 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_10), term_i_27), o_4), term_m_27);
                    ;
                    LocalPopChoice(o_27);
                  }
                else
                  {
                    t = n_27;
                    {
                      ATerm q_27 = t;
                      int r_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_5 = NULL,s_5 = NULL,u_5 = NULL;
                          t = (ATerm) ATempty;
                          s_5 = t;
                          t = term_b_26;
                          u_5 = t;
                          t = term_f_27;
                          t = i_3(u_5, s_5, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm s_27 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) s_27) != ATmakeSymbol("h_0", 0, ATtrue)))
                                _fail(t);
                              k_5 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_10), term_i_27), k_5), term_m_27);
                          ;
                          LocalPopChoice(r_27);
                        }
                      else
                        {
                          t = q_27;
                          {
                            ATerm t_27 = t;
                            int u_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_6 = NULL,p_6 = NULL,q_6 = NULL;
                                t = (ATerm) ATempty;
                                p_6 = t;
                                t = term_b_26;
                                q_6 = t;
                                t = term_f_27;
                                t = i_3(q_6, p_6, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm v_27 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("e_0", 0, ATtrue)))
                                      _fail(t);
                                    i_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_10), term_i_27), i_6), term_w_27);
                                ;
                                LocalPopChoice(u_27);
                              }
                            else
                              {
                                t = t_27;
                                {
                                  ATerm f_7 = NULL,h_7 = NULL,i_7 = NULL;
                                  t = (ATerm) ATempty;
                                  h_7 = t;
                                  t = term_b_26;
                                  i_7 = t;
                                  t = term_f_27;
                                  t = i_3(i_7, h_7, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm x_27 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) x_27) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      f_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_10), term_i_27), f_7), term_w_27);
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
ATerm g_3 (ATerm o_29, ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_27), o_29), term_y_27);
  t = Context_0_0(t);
  g_11 = t;
  t = term_e_12;
  h_11 = t;
  t = SSL_printnl(h_11, g_11);
  t = g_11;
  return(t);
}
ATerm i_3 (ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm i_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
  t = w_3(f_36, g_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_11 = ATgetFirst((ATermList) t);
      {
        ATerm a_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_11;
  return(t);
}
ATerm Bound_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL;
        t = term_e_26;
        l_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_26, h_12);
        t = i_3(l_9, h_12, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_28) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, i_12);
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_9 = NULL;
              t = term_e_26;
              r_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_26, h_12);
              t = i_3(r_9, h_12, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              {
                ATerm k_10 = NULL;
                t = term_e_26;
                k_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_26, h_12);
                t = i_3(k_10, h_12, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm g_28 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) g_28) != ATmakeSymbol("r_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, i_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,f_1 = NULL;
      r_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_12);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_12);
      f_1 = t;
      t = SSLsetAnnotations(f_1, p_12);
      LocalPopChoice(i_28);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm s_12 = NULL,t_12 = NULL;
              s_12 = t;
              if(match_cons(t, sym_Var_1))
                {
                  t_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_12;
              t = g_3(t_12, t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = h_28;
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,j_1 = NULL;
            y_12 = t;
            if(match_cons(t, sym_App_2))
              {
                w_12 = ATgetArgument(t, 0);
                x_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_12);
            v_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, w_12, x_12);
            j_1 = t;
            t = SSLsetAnnotations(j_1, v_12);
            LocalPopChoice(m_28);
            {
              ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,g_13 = NULL,s_1 = NULL;
              g_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  a_13 = ATgetArgument(t, 0);
                  b_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_13);
              z_12 = t;
              t = a_13;
              t = unbound_vars_0_0(t);
              c_13 = t;
              t = b_13;
              t = use_vars_0_0(t);
              d_13 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, c_13, d_13);
              s_1 = t;
              t = SSLsetAnnotations(s_1, z_12);
            }
          }
        else
          {
            t = l_28;
            {
              ATerm n_28 = t;
              int o_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,t_1 = NULL;
                  j_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      i_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_13);
                  h_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, i_13);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, h_13);
                  LocalPopChoice(o_28);
                  {
                    ATerm k_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,u_1 = NULL;
                    o_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        m_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(o_13);
                    k_13 = t;
                    t = m_13;
                    t = unbound_vars_0_0(t);
                    n_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, n_13);
                    u_1 = t;
                    t = SSLsetAnnotations(u_1, k_13);
                  }
                }
              else
                {
                  t = n_28;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_3 (ATerm h_36, ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,t_13 = NULL;
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_36, i_36);
  t = w_3(h_36, i_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_28 = ATgetFirst((ATermList) t);
      p_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_13), j_36);
  t_13 = t;
  t = SSL_table_put(h_36, i_36, t_13);
  t = q_13;
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_13 = NULL,v_13 = NULL,y_13 = NULL,r_2 = NULL;
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
      r_2 = t;
      t = SSLsetAnnotations(r_2, u_13);
      LocalPopChoice(r_28);
      {
        ATerm z_13 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            z_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_e_26;
        b_14 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, z_13);
        d_14 = t;
        t = term_t_28;
        e_14 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_e_26, (ATerm)ATmakeAppl(sym_Var_1, z_13), term_t_28);
        t = j_3(b_14, d_14, e_14, t);
        t = (ATerm) ATmakeAppl(sym_Var_1, z_13);
      }
    }
  else
    {
      t = q_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,k_14 = NULL,s_2 = NULL;
            k_14 = t;
            if(match_cons(t, sym_App_2))
              {
                g_14 = ATgetArgument(t, 0);
                h_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_14);
            f_14 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, g_14, h_14);
            s_2 = t;
            t = SSLsetAnnotations(s_2, f_14);
            LocalPopChoice(v_28);
            {
              ATerm l_14 = NULL,m_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,v_2 = NULL;
              t_14 = t;
              if(match_cons(t, sym_App_2))
                {
                  m_14 = ATgetArgument(t, 0);
                  q_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_14);
              l_14 = t;
              t = m_14;
              t = unbound_vars_0_0(t);
              r_14 = t;
              t = q_14;
              t = use_vars_0_0(t);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, r_14, s_14);
              v_2 = t;
              t = SSLsetAnnotations(v_2, l_14);
            }
          }
        else
          {
            t = u_28;
            {
              ATerm w_28 = t;
              int x_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_14 = NULL,x_14 = NULL,y_14 = NULL,w_2 = NULL;
                  y_14 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      x_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_14);
                  u_14 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, x_14);
                  w_2 = t;
                  t = SSLsetAnnotations(w_2, u_14);
                  LocalPopChoice(x_28);
                  {
                    ATerm z_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,a_4 = NULL;
                    e_15 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        c_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_15);
                    z_14 = t;
                    t = c_15;
                    t = unbound_vars_0_0(t);
                    d_15 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_15);
                    a_4 = t;
                    t = SSLsetAnnotations(a_4, z_14);
                  }
                }
              else
                {
                  t = w_28;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,s_15 = NULL,l_7 = NULL;
  s_15 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_15);
  k_15 = t;
  t = l_15;
  t = map_1_0(f_8, t);
  p_15 = t;
  t = o_15;
  t = unbound_vars_0_0(t);
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, p_15, q_15);
  l_7 = t;
  t = SSLsetAnnotations(l_7, k_15);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm u_15 = NULL,z_15 = NULL,a_16 = NULL;
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_15);
  z_15 = t;
  t = term_c_27;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, u_15), term_c_27);
  t = n_3(g_8, z_15, a_16, t);
  t = u_15;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,s_19 = NULL,k_8 = NULL;
  s_19 = t;
  if(match_cons(t, sym_Choice_2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_19);
  m_19 = t;
  t = n_19;
  t = unbound_vars_0_0(t);
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, p_19, o_19);
  k_8 = t;
  t = SSLsetAnnotations(k_8, m_19);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,c_20 = NULL,f_20 = NULL,g_20 = NULL,t_8 = NULL;
  g_20 = t;
  if(match_cons(t, sym_Choice_2))
    {
      a_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  z_19 = t;
  t = c_20;
  t = unbound_vars_0_0(t);
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, a_20, f_20);
  t_8 = t;
  t = SSLsetAnnotations(t_8, z_19);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL,t_20 = NULL,s_9 = NULL;
  t_20 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      n_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_20);
  m_20 = t;
  t = n_20;
  t = unbound_vars_0_0(t);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, r_20, q_20);
  s_9 = t;
  t = SSLsetAnnotations(s_9, m_20);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,a_21 = NULL,c_21 = NULL,t_9 = NULL;
  c_21 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      v_20 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_21);
  u_20 = t;
  t = w_20;
  t = unbound_vars_0_0(t);
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, v_20, a_21);
  t_9 = t;
  t = SSLsetAnnotations(t_9, u_20);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,r_21 = NULL,s_21 = NULL,a_10 = NULL;
  s_21 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      m_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_21);
  i_21 = t;
  t = k_21;
  t = unbound_vars_0_0(t);
  n_21 = t;
  t = l_21;
  t = unbound_vars_0_0(t);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_21, r_21, m_21);
  a_10 = t;
  t = SSLsetAnnotations(a_10, i_21);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm u_21 = NULL,z_21 = NULL,b_22 = NULL,f_22 = NULL,i_22 = NULL,j_22 = NULL,b_10 = NULL;
  j_22 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      z_21 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
      f_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  u_21 = t;
  t = f_22;
  t = unbound_vars_0_0(t);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_21, b_22, i_22);
  b_10 = t;
  t = SSLsetAnnotations(b_10, u_21);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_7 = NULL;
      j_15 = t;
      if(match_cons(t, sym_Scope_2))
        {
          h_15 = ATgetArgument(t, 0);
          i_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_15);
      f_15 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, h_15, i_15);
      k_7 = t;
      t = SSLsetAnnotations(k_7, f_15);
      LocalPopChoice(z_28);
      t = scope_2_0(v_7, z_7, t);
    }
  else
    {
      t = y_28;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_16 = NULL,c_16 = NULL,e_16 = NULL,m_7 = NULL;
            e_16 = t;
            if(match_cons(t, sym_Build_1))
              {
                c_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_16);
            b_16 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, c_16);
            m_7 = t;
            t = SSLsetAnnotations(m_7, b_16);
            LocalPopChoice(b_29);
            {
              ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,n_7 = NULL;
              i_16 = t;
              if(match_cons(t, sym_Build_1))
                {
                  g_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_16);
              f_16 = t;
              t = g_16;
              t = use_vars_0_0(t);
              h_16 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, h_16);
              n_7 = t;
              t = SSLsetAnnotations(n_7, f_16);
            }
          }
        else
          {
            t = a_29;
            {
              ATerm c_29 = t;
              int d_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,t_7 = NULL;
                  n_16 = t;
                  if(match_cons(t, sym_Match_1))
                    {
                      m_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_16);
                  l_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Match_1, m_16);
                  t_7 = t;
                  t = SSLsetAnnotations(t_7, l_16);
                  LocalPopChoice(d_29);
                  {
                    ATerm p_16 = NULL,r_16 = NULL,v_16 = NULL,w_16 = NULL,u_7 = NULL;
                    w_16 = t;
                    if(match_cons(t, sym_Match_1))
                      {
                        r_16 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(w_16);
                    p_16 = t;
                    t = r_16;
                    t = bind_vars_0_0(t);
                    v_16 = t;
                    t = (ATerm) ATmakeAppl(sym_Match_1, v_16);
                    u_7 = t;
                    t = SSLsetAnnotations(u_7, p_16);
                  }
                }
              else
                {
                  t = c_29;
                  {
                    ATerm e_29 = t;
                    int i_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,c_17 = NULL,d_17 = NULL,w_7 = NULL;
                        d_17 = t;
                        if(match_cons(t, sym_Rule_3))
                          {
                            y_16 = ATgetArgument(t, 0);
                            z_16 = ATgetArgument(t, 1);
                            c_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_17);
                        x_16 = t;
                        t = (ATerm) ATmakeAppl(sym_Rule_3, y_16, z_16, c_17);
                        w_7 = t;
                        t = SSLsetAnnotations(w_7, x_16);
                        LocalPopChoice(i_29);
                        {
                          ATerm e_17 = NULL,j_17 = NULL,m_17 = NULL,p_17 = NULL,t_17 = NULL,w_17 = NULL,z_17 = NULL,d_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,q_18 = NULL,y_18 = NULL,a_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,d_8 = NULL,y_7 = NULL,x_7 = NULL;
                          g_19 = t;
                          if(match_cons(t, sym_Rule_3))
                            {
                              y_18 = ATgetArgument(t, 0);
                              a_19 = ATgetArgument(t, 1);
                              d_19 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(g_19);
                          q_18 = t;
                          t = y_18;
                          t = bind_vars_0_0(t);
                          e_19 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, e_19, a_19, d_19);
                          x_7 = t;
                          t = SSLsetAnnotations(x_7, q_18);
                          f_19 = t;
                          if(match_cons(t, sym_Rule_3))
                            {
                              z_17 = ATgetArgument(t, 0);
                              d_18 = ATgetArgument(t, 1);
                              m_18 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_19);
                          w_17 = t;
                          t = m_18;
                          t = unbound_vars_0_0(t);
                          n_18 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, z_17, d_18, n_18);
                          y_7 = t;
                          t = SSLsetAnnotations(y_7, w_17);
                          o_18 = t;
                          if(match_cons(t, sym_Rule_3))
                            {
                              j_17 = ATgetArgument(t, 0);
                              m_17 = ATgetArgument(t, 1);
                              p_17 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(o_18);
                          e_17 = t;
                          t = m_17;
                          t = use_vars_0_0(t);
                          t_17 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, j_17, t_17, p_17);
                          d_8 = t;
                          t = SSLsetAnnotations(d_8, e_17);
                        }
                      }
                    else
                      {
                        t = e_29;
                        {
                          ATerm j_29 = t;
                          int k_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,e_8 = NULL;
                              l_19 = t;
                              if(match_cons(t, sym_Choice_2))
                                {
                                  j_19 = ATgetArgument(t, 0);
                                  k_19 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(l_19);
                              h_19 = t;
                              t = (ATerm) ATmakeAppl(sym_Choice_2, j_19, k_19);
                              e_8 = t;
                              t = SSLsetAnnotations(e_8, h_19);
                              LocalPopChoice(k_29);
                              t = abstract_choice_2_0(i_8, j_8, t);
                            }
                          else
                            {
                              t = j_29;
                              {
                                ATerm l_29 = t;
                                int m_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_20 = NULL,i_20 = NULL,k_20 = NULL,l_20 = NULL,m_9 = NULL;
                                    l_20 = t;
                                    if(match_cons(t, sym_LChoice_2))
                                      {
                                        i_20 = ATgetArgument(t, 0);
                                        k_20 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(l_20);
                                    h_20 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, i_20, k_20);
                                    m_9 = t;
                                    t = SSLsetAnnotations(m_9, h_20);
                                    LocalPopChoice(m_29);
                                    t = abstract_choice_2_0(l_8, m_8, t);
                                  }
                                else
                                  {
                                    t = l_29;
                                    {
                                      ATerm n_29 = t;
                                      int p_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,v_9 = NULL;
                                          h_21 = t;
                                          if(match_cons(t, sym_GuardedLChoice_3))
                                            {
                                              e_21 = ATgetArgument(t, 0);
                                              f_21 = ATgetArgument(t, 1);
                                              g_21 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(h_21);
                                          d_21 = t;
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_21, f_21, g_21);
                                          v_9 = t;
                                          t = SSLsetAnnotations(v_9, d_21);
                                          LocalPopChoice(p_29);
                                          t = abstract_choice_2_0(n_8, o_8, t);
                                        }
                                      else
                                        {
                                          t = n_29;
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
ATerm p_8 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm m_23 = NULL;
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_23 = ATgetArgument(t, 0);
          {
            ATerm s_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_29);
      t = m_23;
    }
  else
    {
      t = q_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_23;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm p_23 = NULL,v_23 = NULL,w_23 = NULL;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_23);
  v_23 = t;
  t = term_d_26;
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_23), term_d_26);
  t = n_3(x_8, v_23, w_23, t);
  t = p_23;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm p_22 = NULL,s_22 = NULL,x_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      s_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
      z_22 = ATgetArgument(t, 2);
      p_22 = ATgetArgument(t, 3);
      {
        ATerm h_23 = NULL,j_23 = NULL;
        t = (ATerm) ATempty;
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_29, s_22);
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_29, s_22));
        t = n_3(p_8, h_23, j_23, t);
        t = z_22;
        t = map_1_0(q_8, t);
        t = map_1_0(r_8, t);
        t = p_22;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, s_22, x_22, z_22, p_22);
      }
    }
  else
    {
      ATerm e_24 = NULL,f_24 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          s_22 = ATgetArgument(t, 0);
          x_22 = ATgetArgument(t, 1);
          z_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      e_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_29, s_22);
      f_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_29, s_22));
      t = n_3(y_8, e_24, f_24, t);
      t = z_22;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, s_22, x_22, z_22);
    }
  return(t);
}
ATerm m_3 (ATerm u_35, ATerm v_35, ATerm t_35, ATerm t)
{
  ATerm m_24 = NULL,s_24 = NULL,u_24 = NULL;
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_35, v_35);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_29 = ATgetArgument(t, 0);
            ATerm y_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_35, v_35);
        t = w_3(u_35, v_35, t);
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = (ATerm) ATempty;
      }
    s_24 = t;
    t = (ATerm) ATinsert(CheckATermList(s_24), t_35);
    u_24 = t;
    t = SSL_table_put(u_35, v_35, u_24);
    t = m_24;
  }
  return(t);
}
ATerm n_3 (ATerm l_81 (ATerm), ATerm m_35, ATerm k_35, ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  t = l_81(t);
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_25, m_35, k_35);
  t = m_3(e_25, m_35, k_35, t);
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_25 = NULL;
        t = term_f_30;
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_25, term_f_30);
        t = w_3(e_25, k_25, t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_25 = ATgetFirst((ATermList) t);
        g_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_30;
    i_25 = t;
    t = (ATerm) ATinsert(CheckATermList(g_25), (ATerm) ATinsert(CheckATermList(f_25), m_35));
    j_25 = t;
    t = SSL_table_put(e_25, i_25, j_25);
    t = h_25;
  }
  return(t);
}
ATerm map_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm z_25 (ATerm t)
  {
    ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
    w_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_25;
      }
    else
      {
        ATerm b_11 = NULL,k_11 = NULL,n_11 = NULL,e_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_25 = ATgetFirst((ATermList) t);
            y_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_25);
        b_11 = t;
        t = x_25;
        t = a_78(t);
        k_11 = t;
        t = y_25;
        t = z_25(t);
        n_11 = t;
        t = (ATerm) ATinsert(CheckATermList(n_11), k_11);
        e_11 = t;
        t = SSLsetAnnotations(e_11, b_11);
      }
    return(t);
  }
  t = z_25(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,m_32 = NULL,o_32 = NULL;
  m_32 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_32 = ATgetArgument(t, 0);
      f_32 = ATgetArgument(t, 1);
      {
        ATerm b_12 = NULL,n_12 = NULL,o_12 = NULL,l_11 = NULL;
        t = SSLgetAnnotations(m_32);
        b_12 = t;
        t = o_32;
        t = g_91(t);
        n_12 = t;
        t = f_32;
        t = e_91(t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_12, o_12);
        l_11 = t;
        t = SSLsetAnnotations(l_11, b_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          o_32 = ATgetArgument(t, 0);
          f_32 = ATgetArgument(t, 1);
          g_32 = ATgetArgument(t, 2);
          h_32 = ATgetArgument(t, 3);
          {
            ATerm i_14 = NULL,v_14 = NULL,w_14 = NULL,a_15 = NULL,b_15 = NULL,m_11 = NULL;
            t = SSLgetAnnotations(m_32);
            i_14 = t;
            t = o_32;
            t = g_91(t);
            v_14 = t;
            t = f_32;
            t = g_91(t);
            w_14 = t;
            t = g_32;
            t = g_91(t);
            a_15 = t;
            t = h_32;
            t = e_91(t);
            b_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_14, w_14, a_15, b_15);
            m_11 = t;
            t = SSLsetAnnotations(m_11, i_14);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              o_32 = ATgetArgument(t, 0);
              f_32 = ATgetArgument(t, 1);
              g_32 = ATgetArgument(t, 2);
              h_32 = ATgetArgument(t, 3);
              {
                ATerm k_16 = NULL,u_16 = NULL,a_17 = NULL,b_17 = NULL,f_17 = NULL,t_11 = NULL;
                t = SSLgetAnnotations(m_32);
                k_16 = t;
                t = o_32;
                t = g_91(t);
                u_16 = t;
                t = f_32;
                t = g_91(t);
                a_17 = t;
                t = g_32;
                t = g_91(t);
                b_17 = t;
                t = h_32;
                t = e_91(t);
                f_17 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, u_16, a_17, b_17, f_17);
                t_11 = t;
                t = SSLsetAnnotations(t_11, k_16);
              }
            }
          else
            {
              ATerm r_17 = NULL,u_17 = NULL,u_11 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  o_32 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_32);
              r_17 = t;
              t = o_32;
              t = e_91(t);
              u_17 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_17);
              u_11 = t;
              t = SSLsetAnnotations(u_11, r_17);
            }
        }
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm g_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_33);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm g_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = g_30;
      {
        ATerm i_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_33 = ATgetArgument(t, 0);
            t = i_33;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_33 = ATgetArgument(t, 0);
                p_33 = ATgetArgument(t, 1);
                q_33 = ATgetArgument(t, 2);
                r_33 = ATgetArgument(t, 3);
                t = q_33;
                t = map_1_0(h_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_33 = ATgetArgument(t, 0);
                    p_33 = ATgetArgument(t, 1);
                    q_33 = ATgetArgument(t, 2);
                    r_33 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_33;
                t = map_1_0(n_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm h_34 = NULL;
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_34 = ATgetArgument(t, 0);
          {
            ATerm m_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_30);
      t = h_34;
    }
  else
    {
      t = k_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_34;
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm u_34 = NULL;
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_34 = ATgetArgument(t, 0);
          {
            ATerm p_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_30);
      t = u_34;
    }
  else
    {
      t = n_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_34;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(f_9, g_9, tboundin_3_0, t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm r_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_36);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      {
        ATerm t_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_36 = ATgetArgument(t, 0);
            t = t_36;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_36 = ATgetArgument(t, 0);
                a_37 = ATgetArgument(t, 1);
                b_37 = ATgetArgument(t, 2);
                c_37 = ATgetArgument(t, 3);
                t = b_37;
                t = map_1_0(q_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_36 = ATgetArgument(t, 0);
                    a_37 = ATgetArgument(t, 1);
                    b_37 = ATgetArgument(t, 2);
                    c_37 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_37;
                t = map_1_0(u_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm x_37 = NULL;
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_37 = ATgetArgument(t, 0);
          {
            ATerm u_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_30);
      t = x_37;
    }
  else
    {
      t = s_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_37;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm l_38 = NULL;
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_38 = ATgetArgument(t, 0);
          {
            ATerm x_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_30);
      t = l_38;
    }
  else
    {
      t = v_30;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_35 = NULL,c_36 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      c_36 = ATgetArgument(t, 0);
      t = c_36;
      if(match_cons(t, sym_Rule_3))
        {
          r_35 = ATgetArgument(t, 0);
          {
            ATerm y_30 = ATgetArgument(t, 1);
          }
          {
            ATerm z_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_35;
      t = free_vars_3_0(o_9, p_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          c_36 = ATgetArgument(t, 0);
          {
            ATerm a_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_36;
    }
  return(t);
}
ATerm s_3 (ATerm p_77 (ATerm), ATerm e_30, ATerm d_30, ATerm t)
{
  ATerm p_39 (ATerm t)
  {
    ATerm e_39 = NULL,i_39 = NULL,l_39 = NULL;
    e_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(d_30);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_39 = ATgetFirst((ATermList) t);
            l_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_39;
              {
                ATerm w_9 (ATerm t)
                {
                  t = not_null(d_30);
                  return(t);
                }
                t = t_3(p_77, w_9, not_null(i_39), not_null(l_39), t);
                t = p_39(t);
              }
              ;
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
              {
                ATerm e_18 = NULL,h_18 = NULL,d_12 = NULL;
                t = SSLgetAnnotations(e_39);
                e_18 = t;
                t = l_39;
                t = p_39(t);
                h_18 = t;
                t = (ATerm) ATinsert(CheckATermList(h_18), i_39);
                d_12 = t;
                t = SSLsetAnnotations(d_12, e_18);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(e_30);
  t = p_39(t);
  return(t);
}
ATerm foldr_3_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_39;
      t = c_80(t);
    }
  else
    {
      ATerm b_40 = NULL,c_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_39 = ATgetFirst((ATermList) t);
          y_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_39;
      t = e_80(t);
      b_40 = t;
      t = y_39;
      t = foldr_3_0(c_80, d_80, e_80, t);
      c_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_40, c_40);
      t = d_80(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm j_41 (ATerm t)
  {
    ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
    g_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_41 = ATgetFirst((ATermList) t);
        i_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_18 = NULL,w_18 = NULL,f_12 = NULL;
          t = SSLgetAnnotations(g_41);
          t_18 = t;
          t = h_41;
          t = k_78(t);
          w_18 = t;
          t = (ATerm) ATinsert(CheckATermList(i_41), w_18);
          f_12 = t;
          t = SSLsetAnnotations(f_12, t_18);
          ;
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm t_19 = NULL,w_19 = NULL,g_12 = NULL;
            t = SSLgetAnnotations(g_41);
            t_19 = t;
            t = i_41;
            t = j_41(t);
            w_19 = t;
            t = (ATerm) ATinsert(CheckATermList(w_19), h_41);
            g_12 = t;
            t = SSLsetAnnotations(g_12, t_19);
          }
        }
    }
    return(t);
  }
  t = j_41(t);
  return(t);
}
ATerm t_3 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm i_30, ATerm h_30, ATerm t)
{
  t = t_77(t);
  {
    ATerm x_9 (ATerm t)
    {
      ATerm o_41 = NULL;
      o_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), o_41);
      t = s_77(t);
      return(t);
    }
    t = fetch_1_0(x_9, t);
    t = not_null(h_30);
  }
  return(t);
}
ATerm u_3 (ATerm k_77 (ATerm), ATerm c_30, ATerm b_30, ATerm t)
{
  ATerm n_42 (ATerm t)
  {
    ATerm e_42 = NULL,j_42 = NULL,k_42 = NULL;
    e_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_42 = ATgetFirst((ATermList) t);
            k_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_42;
              {
                ATerm y_9 (ATerm t)
                {
                  t = not_null(b_30);
                  return(t);
                }
                t = t_3(k_77, y_9, not_null(j_42), not_null(k_42), t);
                t = n_42(t);
              }
              ;
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              {
                ATerm p_20 = NULL,y_20 = NULL,l_12 = NULL;
                t = SSLgetAnnotations(e_42);
                p_20 = t;
                t = k_42;
                t = n_42(t);
                y_20 = t;
                t = (ATerm) ATinsert(CheckATermList(y_20), j_42);
                l_12 = t;
                t = SSLsetAnnotations(l_12, p_20);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(c_30);
  t = n_42(t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm b_43 = NULL;
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      if((b_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3(g_10, x_21, y_21, t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      if((a_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3(j_10, l_22, m_22, t);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      if((n_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_43 (ATerm t)
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_94(t);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm j_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_42 = NULL,r_42 = NULL,p_21 = NULL,q_21 = NULL;
              if(((q_42 != NULL) && (q_42 != t)))
                _fail(t);
              else
                q_42 = t;
              t = h_94(t);
              if(((r_42 != NULL) && (r_42 != t)))
                _fail(t);
              else
                r_42 = t;
              t = not_null(q_42);
              {
                ATerm z_9 (ATerm t)
                {
                  ATerm z_42 = NULL;
                  t = j_43(t);
                  z_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_42, not_null(r_42));
                  t = u_3(d_10, z_42, not_null(r_42), t);
                  return(t);
                }
                t = i_94(z_9, j_43, c_10, t);
                if(((q_21 != NULL) && (q_21 != t)))
                  _fail(t);
                else
                  q_21 = t;
                t = SSL_explode_term(not_null(q_21));
                if(match_cons(t, sym__2))
                  {
                    ATerm l_31 = ATgetArgument(t, 0);
                    if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(p_21);
                t = foldr_3_0(e_10, f_10, _id, t);
              }
              ;
              LocalPopChoice(k_31);
            }
          else
            {
              t = j_31;
              {
                ATerm d_22 = NULL,e_22 = NULL;
                e_22 = t;
                t = SSL_explode_term(e_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_31 = ATgetArgument(t, 0);
                    d_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_22;
                t = foldr_3_0(h_10, i_10, j_43, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_43(t);
  return(t);
}
ATerm v_3 (ATerm z_35, ATerm a_36, ATerm t)
{
  ATerm o_43 = NULL,r_43 = NULL;
  r_43 = t;
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_35, a_36);
        t = w_3(z_35, a_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_31 = ATgetFirst((ATermList) t);
            o_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_31);
        t = SSL_table_put(z_35, a_36, o_43);
        t = (ATerm) ATmakeAppl(sym__3, z_35, a_36, o_43);
      }
    else
      {
        t = n_31;
        t = SSL_table_remove(z_35, a_36);
        t = (ATerm) ATmakeAppl(sym__2, z_35, a_36);
      }
    t = r_43;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
  if(((y_43 != NULL) && (y_43 != t)))
    _fail(t);
  else
    y_43 = t;
  t = i_81(t);
  if(((x_43 != NULL) && (x_43 != t)))
    _fail(t);
  else
    x_43 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_44 = NULL;
        t = term_f_30;
        a_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_43), term_f_30);
        t = w_3(not_null(x_43), a_44, t);
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_43 != NULL) && (w_43 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_43 = ATgetFirst((ATermList) t);
        if(((v_43 != NULL) && (v_43 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          v_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_30;
    if(((z_43 != NULL) && (z_43 != t)))
      _fail(t);
    else
      z_43 = t;
    t = SSL_table_put(not_null(x_43), not_null(z_43), not_null(v_43));
    t = not_null(w_43);
    {
      ATerm l_10 (ATerm t)
      {
        ATerm b_44 = NULL;
        b_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_43), b_44);
        t = v_3(not_null(x_43), b_44, t);
        return(t);
      }
      t = map_1_0(l_10, t);
      t = not_null(y_43);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_88(t);
      t = j_88(t);
      ;
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      t = j_88(t);
      _fail(t);
    }
  return(t);
}
ATerm w_3 (ATerm l_37, ATerm m_37, ATerm t)
{
  t = SSL_table_get(l_37, m_37);
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  e_44 = t;
  t = h_81(t);
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_44, term_f_30);
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_31 = ATgetArgument(t, 0);
            ATerm x_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_30;
        l_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_44, term_f_30);
        t = w_3(d_44, l_44, t);
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        t = (ATerm) ATempty;
      }
    f_44 = t;
    t = term_f_30;
    g_44 = t;
    t = (ATerm) ATinsert(CheckATermList(f_44), (ATerm) ATempty);
    h_44 = t;
    t = SSL_table_put(d_44, g_44, h_44);
    t = e_44;
  }
  return(t);
}
ATerm scope_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t)
{
  ATerm m_10 (ATerm t)
  {
    t = end_scope_1_0(j_81, t);
    return(t);
  }
  t = begin_scope_1_0(j_81, t);
  t = restore_always_2_0(k_81, m_10, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = scope_2_0(p_10, q_10, t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  t = free_vars_3_0(r_10, s_10, tboundin_3_0, t);
  t = map_1_0(v_10, t);
  t = q_44;
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
              {
                ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    b_46 = ATgetArgument(t, 0);
                    c_46 = ATgetArgument(t, 1);
                    d_46 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = q_44;
                t = e_3(b_46, c_46, d_46, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm r_10 (ATerm t)
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
ATerm s_10 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm u_44 = NULL,w_44 = NULL,x_44 = NULL,z_44 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_44 = ATgetArgument(t, 0);
            t = u_44;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_44 = ATgetArgument(t, 0);
                w_44 = ATgetArgument(t, 1);
                x_44 = ATgetArgument(t, 2);
                z_44 = ATgetArgument(t, 3);
                t = x_44;
                t = map_1_0(t_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_44 = ATgetArgument(t, 0);
                    w_44 = ATgetArgument(t, 1);
                    x_44 = ATgetArgument(t, 2);
                    z_44 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_44;
                t = map_1_0(u_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm j_45 = NULL;
  ATerm e_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_45 = ATgetArgument(t, 0);
          {
            ATerm j_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_32);
      t = j_45;
    }
  else
    {
      t = e_32;
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
ATerm u_10 (ATerm t)
{
  ATerm t_45 = NULL;
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_45 = ATgetArgument(t, 0);
          {
            ATerm n_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_32);
      t = t_45;
    }
  else
    {
      t = k_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_45;
    }
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_45);
  x_45 = t;
  t = term_c_27;
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_45), term_c_27);
  t = n_3(x_10, x_45, y_45, t);
  t = w_45;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  t = scope_2_0(n_10, o_10, t);
  return(t);
}
ATerm filter_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_46;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_46 = ATgetFirst((ATermList) t);
          w_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_22 = NULL,y_22 = NULL,a_23 = NULL,v_21 = NULL;
            t = SSLgetAnnotations(u_46);
            u_22 = t;
            t = v_46;
            t = h_87(t);
            y_22 = t;
            t = w_46;
            t = filter_1_0(h_87, t);
            a_23 = t;
            t = (ATerm) ATinsert(CheckATermList(a_23), y_22);
            v_21 = t;
            t = SSLsetAnnotations(v_21, u_22);
            ;
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            t = w_46;
            t = filter_1_0(h_87, t);
          }
      }
    }
  return(t);
}
ATerm x_3 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_33, z_33);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = SSL_addr(y_33, z_33);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  b_47 = t;
  t = v_96(t);
  c_47 = t;
  t = term_e_12;
  d_47 = t;
  t = (ATerm) ATinsert(ATempty, c_47);
  e_47 = t;
  t = SSL_printnl(d_47, e_47);
  t = b_47;
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,g_22 = NULL;
        t = w_96(t);
        t = b_47;
        if(match_cons(t, sym__2))
          {
            g_47 = ATgetArgument(t, 0);
            h_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_47);
        f_47 = t;
        t = term_v_32;
        j_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_47, term_v_32);
        t = x_3(g_47, j_47, t);
        i_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_47, h_47);
        g_22 = t;
        t = SSLsetAnnotations(g_22, f_47);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        {
          ATerm s_47 = NULL,t_47 = NULL,t_23 = NULL,a_24 = NULL,b_24 = NULL,h_22 = NULL;
          if(match_cons(t, sym__2))
            {
              s_47 = ATgetArgument(t, 0);
              t_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_47);
          t_23 = t;
          t = term_v_32;
          b_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_47, term_v_32);
          t = x_3(t_47, b_24, t);
          a_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_47, a_24);
          h_22 = t;
          t = SSLsetAnnotations(h_22, t_23);
        }
      }
  }
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATempty, term_v_17))), term_y_11)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_s_18, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_17, (ATerm) ATinsert(ATempty, term_y_11)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_e_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, term_v_17), term_y_11))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_c_18), term_v_17))), term_y_11)))))));
      {
        ATerm z_32 = t;
        if((PushChoice() == 0))
          {
            ATerm w_47 = NULL,z_47 = NULL,a_48 = NULL,i_24 = NULL;
            a_48 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                z_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_48);
            w_47 = t;
            t = z_47;
            {
              ATerm a_33 = t;
              int b_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_47;
                  ;
                  LocalPopChoice(b_33);
                }
              else
                {
                  t = a_33;
                  t = filter_1_0(a_11, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_47;
                }
              t = (ATerm) ATmakeAppl(sym_Strategies_1, z_47);
              i_24 = t;
              t = SSLsetAnnotations(i_24, w_47);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_32;
          }
      }
      ;
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      {
        ATerm c_48 = NULL,d_48 = NULL;
        t = term_e_12;
        c_48 = t;
        t = (ATerm) ATinsert(ATempty, term_j_18);
        d_48 = t;
        t = SSL_printnl(c_48, d_48);
        t = term_j_18;
        _fail(t);
      }
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm c_33 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_33;
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(y_10, z_10, t);
  return(t);
}
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm e_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
  e_48 = t;
  t = d_101(t);
  g_48 = t;
  t = term_e_12;
  h_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_48), g_48);
  i_48 = t;
  t = SSL_printnl(h_48, i_48);
  t = e_48;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm test_suite_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,l_24 = NULL,k_24 = NULL;
  t = t_96(t);
  t = debug_1_0(c_11, t);
  t = term_j_33;
  t = u_96(t);
  u_48 = t;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_48);
  m_48 = t;
  t = n_48;
  t = debug_1_0(d_11, t);
  r_48 = t;
  t = q_48;
  t = debug_1_0(f_11, t);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
  k_24 = t;
  t = SSLsetAnnotations(k_24, m_48);
  t_48 = t;
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_48);
  j_48 = t;
  t = l_48;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
  l_24 = t;
  t = SSLsetAnnotations(l_24, j_48);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm o_11 (ATerm t)
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
  t = test_suite_2_0(j_11, o_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_0_0(t);
  return(t);
}

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
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_d_32;
ATerm term_w_31;
ATerm term_i_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_u_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_x_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_w_18;
ATerm term_p_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
void init_constant_terms (void)
{
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Var_1, term_x_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Match_1, term_c_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Build_1, term_c_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Var_1, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Var_1, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Var_1, term_u_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Var_1, term_t_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Var_1, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Build_1, term_s_13);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Call_2, term_i_14, (ATerm) ATempty);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Build_1, term_w_13);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Match_1, term_e_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Str_1, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Var_1, term_u_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Str_1, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Var_1, term_e_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Call_2, term_r_15, (ATerm) ATempty);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Match_1, term_f_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_s_15, term_t_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_g_13, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Call_2, term_x_16, (ATerm) ATempty);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_LChoice_2, term_s_15, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_16, term_d_13);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_16, term_d_13);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_LChoice_2, term_s_15, term_f_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Var_1, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Match_1, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Str_1, term_w_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Build_1, term_u_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_17, term_s_15);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_App_2, term_s_15, term_u_17);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Match_1, term_z_14);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Var_1, term_f_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATempty);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_25);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_o_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm test12_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm b_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm n_4 (ATerm);
ATerm v_4 (ATerm);
ATerm test11_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm y_64 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm test10_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm n_5 (ATerm);
ATerm q_5 (ATerm);
ATerm test9_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm test8_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm test7_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm test6_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm test5_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm test4_0_0 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm test3_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm test2_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm e_3 (ATerm f_29, ATerm g_29, ATerm h_29, ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm);
ATerm c_8 (ATerm);
ATerm g_11 (ATerm l_10, ATerm m_10, ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm f_3 (ATerm x_36, ATerm w_36, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm x_68 (ATerm), ATerm y_68 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm g_3 (ATerm o_29, ATerm);
ATerm i_3 (ATerm f_36, ATerm g_36, ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm p_66 (ATerm), ATerm);
ATerm App_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm);
ATerm j_3 (ATerm h_36, ATerm i_36, ATerm j_36, ATerm);
ATerm Var_1_0 (ATerm z_65 (ATerm), ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm Build_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm w_8 (ATerm);
ATerm a_9 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm c_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm m_3 (ATerm u_35, ATerm v_35, ATerm t_35, ATerm);
ATerm n_3 (ATerm l_81 (ATerm), ATerm m_35, ATerm k_35, ATerm);
ATerm map_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm q_68 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm);
ATerm r_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm s_3 (ATerm p_77 (ATerm), ATerm e_30, ATerm d_30, ATerm);
ATerm foldr_3_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm t_3 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm i_30, ATerm h_30, ATerm);
ATerm u_3 (ATerm k_77 (ATerm), ATerm c_30, ATerm b_30, ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm free_vars_3_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm v_3 (ATerm z_35, ATerm a_36, ATerm);
ATerm end_scope_1_0 (ATerm i_81 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm);
ATerm w_3 (ATerm l_37, ATerm m_37, ATerm);
ATerm begin_scope_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm scope_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm b_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm);
ATerm filter_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm w_64 (ATerm), ATerm);
ATerm x_3 (ATerm y_33, ATerm z_33, ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm do_test_2_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm d_60 (ATerm), ATerm e_60 (ATerm), ATerm);
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm l_12 (ATerm);
ATerm test_suite_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm);
ATerm m_12 (ATerm);
ATerm q_12 (ATerm);
ATerm use_def_test_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_u_12, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_w_12, (ATerm) ATinsert(ATempty, term_d_13)), (ATerm)ATmakeAppl(sym_Call_2, term_w_12, (ATerm) ATinsert(ATempty, term_g_13)), term_h_13));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm b_0 = NULL,d_0 = NULL;
        t = term_i_13;
        b_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        d_0 = t;
        t = SSL_printnl(b_0, d_0);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm test12_0_0 (ATerm t)
{
  t = do_test_2_0(o_3, p_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_13, (ATerm) ATinsert(ATinsert(ATempty, term_s_13), term_q_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_t_13), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_13, (ATerm) ATinsert(ATinsert(ATempty, term_w_13), term_v_13)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_13, (ATerm) ATinsert(ATinsert(ATempty, term_s_13), term_q_13))), term_v_13))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm f_0 = NULL,g_0 = NULL;
        t = term_i_13;
        f_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        g_0 = t;
        t = SSL_printnl(f_0, g_0);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_a_14, (ATerm)ATinsert(ATempty, term_c_14), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_13, (ATerm) ATinsert(ATinsert(ATempty, term_s_13), term_q_13)), (ATerm)ATmakeAppl(sym_Op_2, term_o_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_13, (ATerm) ATinsert(ATinsert(ATempty, term_e_14), term_q_13))), term_v_13)), (ATerm) ATmakeAppl(sym_Seq_2, term_f_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_t_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_o_13, (ATerm) ATinsert(ATinsert(ATempty, term_w_13), term_v_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_j_14, (ATerm) ATmakeAppl(sym_Op_2, term_k_14, (ATerm) ATinsert(ATinsert(ATempty, term_v_13), term_q_13)))), term_l_14))))), term_m_14))))));
      t = Strategies_1_0(n_4, t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm m_0 = NULL,q_0 = NULL;
        t = term_i_13;
        m_0 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        q_0 = t;
        t = SSL_printnl(m_0, q_0);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      {
        ATerm i_0 = NULL;
        i_0 = t;
        t = filter_1_0(v_4, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_0;
      }
    }
  return(t);
}
ATerm v_4 (ATerm t)
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
  return(t);
}
ATerm test11_0_0 (ATerm t)
{
  t = do_test_2_0(y_3, b_4, t);
  t = do_test_2_0(h_4, i_4, t);
  return(t);
}
ATerm Overlays_1_0 (ATerm y_64 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,a_0 = NULL,k_0 = NULL;
  b_1 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      z_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_1);
  y_0 = t;
  t = z_0;
  t = y_64(t);
  a_1 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym_Overlays_1, a_1);
  a_0 = t;
  t = SSLsetAnnotations(a_0, y_0);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_q_14;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_r_13, (ATerm)ATinsert(ATinsert(ATempty, term_u_14), term_x_12), (ATerm) ATmakeAppl(sym_Op_2, term_a_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_15), term_d_15), term_c_13)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_t_14, (ATerm)ATinsert(ATinsert(ATempty, term_u_14), term_x_12), (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, term_y_14), term_c_13)))))));
      {
        ATerm g_15 = t;
        if((PushChoice() == 0))
          {
            t = Overlays_1_0(f_5, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_15;
          }
      }
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm h_1 = NULL,i_1 = NULL;
        t = term_i_13;
        h_1 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        i_1 = t;
        t = SSL_printnl(h_1, i_1);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        ATerm e_1 = NULL;
        e_1 = t;
        t = filter_1_0(i_5, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_1;
      }
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm k_15 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_15;
    }
  return(t);
}
ATerm test10_0_0 (ATerm t)
{
  t = do_test_2_0(a_5, b_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm m_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13)), (ATerm)ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_z_14)), term_w_15)));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = m_15;
      {
        ATerm m_1 = NULL,n_1 = NULL;
        t = term_i_13;
        m_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        n_1 = t;
        t = SSL_printnl(m_1, n_1);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13)), (ATerm)ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_z_14)), term_h_13)));
      {
        ATerm a_16 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_16;
          }
      }
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm o_1 = NULL,p_1 = NULL;
        t = term_i_13;
        o_1 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        p_1 = t;
        t = SSL_printnl(o_1, p_1);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm test9_0_0 (ATerm t)
{
  t = do_test_2_0(j_5, k_5, t);
  t = do_test_2_0(n_5, q_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13)), (ATerm)ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_z_14)), term_w_15));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm q_1 = NULL,s_1 = NULL;
        t = term_i_13;
        q_1 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        s_1 = t;
        t = SSL_printnl(q_1, s_1);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13)), (ATerm)ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_z_14)), term_h_13));
      {
        ATerm h_16 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_16;
          }
      }
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = term_i_13;
        y_1 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        z_1 = t;
        t = SSL_printnl(y_1, z_1);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm test8_0_0 (ATerm t)
{
  t = do_test_2_0(r_5, s_5, t);
  t = do_test_2_0(t_5, u_5, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_i_16;
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATempty, term_z_14))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATempty, term_c_13))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATempty, term_c_13))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      {
        ATerm a_2 = NULL,b_2 = NULL;
        t = term_i_13;
        a_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        b_2 = t;
        t = SSL_printnl(a_2, b_2);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATempty, term_c_13))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATempty, term_c_13)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13)))));
      {
        ATerm o_16 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_16;
          }
      }
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = term_i_13;
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        d_2 = t;
        t = SSL_printnl(c_2, d_2);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATempty, term_c_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATempty, term_c_13))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))))));
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
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm e_2 = NULL,f_2 = NULL;
        t = term_i_13;
        e_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        f_2 = t;
        t = SSL_printnl(e_2, f_2);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm test7_0_0 (ATerm t)
{
  t = do_test_2_0(y_5, a_6, t);
  t = do_test_2_0(b_6, f_6, t);
  t = do_test_2_0(h_6, j_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_a_17, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATempty, term_c_13)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_i_13;
        g_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        h_2 = t;
        t = SSL_printnl(g_2, h_2);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_g_17, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATempty, term_c_13)))));
      {
        ATerm i_17 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_17;
          }
      }
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm o_2 = NULL,r_2 = NULL;
        t = term_i_13;
        o_2 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        r_2 = t;
        t = SSL_printnl(o_2, r_2);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm test6_0_0 (ATerm t)
{
  t = do_test_2_0(k_6, l_6, t);
  t = do_test_2_0(m_6, n_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATempty, term_c_13)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATempty, term_c_13)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm v_2 = NULL,z_2 = NULL;
        t = term_i_13;
        v_2 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        z_2 = t;
        t = SSL_printnl(v_2, z_2);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATempty, term_c_13)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13)))));
      {
        ATerm p_17 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_17;
          }
      }
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm c_3 = NULL,d_3 = NULL;
        t = term_i_13;
        c_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        d_3 = t;
        t = SSL_printnl(c_3, d_3);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm test5_0_0 (ATerm t)
{
  t = do_test_2_0(o_6, p_6, t);
  t = do_test_2_0(q_6, s_6, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_v_17, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_t_17), term_a_18))), term_y_17)))));
      {
        ATerm c_18 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_18;
          }
      }
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm q_3 = NULL,c_4 = NULL;
        t = term_i_13;
        q_3 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        c_4 = t;
        t = SSL_printnl(q_3, c_4);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_v_17, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_g_18), term_y_17)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm d_4 = NULL,e_4 = NULL;
        t = term_i_13;
        d_4 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        e_4 = t;
        t = SSL_printnl(d_4, e_4);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_t_17), term_a_18))), term_y_17))));
      {
        ATerm n_18 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_18;
          }
      }
      ;
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm f_4 = NULL,g_4 = NULL;
        t = term_i_13;
        f_4 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        g_4 = t;
        t = SSL_printnl(f_4, g_4);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm test4_0_0 (ATerm t)
{
  t = do_test_2_0(t_6, u_6, t);
  t = do_test_2_0(v_6, w_6, t);
  t = do_test_2_0(y_6, z_6, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm q_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_u_14), (ATerm) ATmakeAppl(sym_Seq_2, term_w_18, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATempty, term_z_14))), term_c_13)))))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = q_18;
      {
        ATerm j_4 = NULL,k_4 = NULL;
        t = term_i_13;
        j_4 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        k_4 = t;
        t = SSL_printnl(j_4, k_4);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm c_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_u_14), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, term_l_19), term_c_13))), term_z_14))))));
      {
        ATerm m_19 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_19;
          }
      }
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = c_19;
      {
        ATerm l_4 = NULL,p_4 = NULL;
        t = term_i_13;
        l_4 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        p_4 = t;
        t = SSL_printnl(l_4, p_4);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm test3_0_0 (ATerm t)
{
  t = do_test_2_0(a_7, c_7, t);
  t = do_test_2_0(d_7, f_7, t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm t_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATempty, term_z_14))), term_c_13)))));
      t = def_use_def_0_0(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = t_19;
      {
        ATerm q_4 = NULL,r_4 = NULL;
        t = term_i_13;
        q_4 = t;
        t = (ATerm) ATinsert(ATempty, term_j_13);
        r_4 = t;
        t = SSL_printnl(q_4, r_4);
        t = term_j_13;
        _fail(t);
      }
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm c_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, term_l_19), term_c_13))), term_z_14)))));
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
      LocalPopChoice(h_20);
    }
  else
    {
      t = c_20;
      {
        ATerm s_4 = NULL,t_4 = NULL;
        t = term_i_13;
        s_4 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        t_4 = t;
        t = SSL_printnl(s_4, t_4);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm test2_0_0 (ATerm t)
{
  t = do_test_2_0(j_7, k_7, t);
  t = do_test_2_0(l_7, m_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm z_4 = NULL,d_5 = NULL,e_5 = NULL;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_4);
  d_5 = t;
  t = term_p_20;
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_4), term_p_20);
  t = n_3(p_7, d_5, e_5, t);
  t = z_4;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm e_3 (ATerm f_29, ATerm g_29, ATerm h_29, ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  t = (ATerm) ATempty;
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_20, f_29);
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_20, f_29));
  t = n_3(n_7, x_4, y_4, t);
  t = g_29;
  t = map_1_0(o_7, t);
  t = h_29;
  t = use_vars_0_0(t);
  t = w_4;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm b_7 = NULL;
  ATerm v_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_7 = ATgetArgument(t, 0);
          {
            ATerm b_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_20);
      t = b_7;
    }
  else
    {
      t = v_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_7;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_7);
  h_7 = t;
  t = term_p_20;
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_7), term_p_20);
  t = n_3(w_7, h_7, i_7, t);
  t = g_7;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm e_8 = NULL;
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_8 = ATgetArgument(t, 0);
          {
            ATerm e_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = e_8;
    }
  else
    {
      t = c_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_8;
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm h_8 = NULL,k_8 = NULL,l_8 = NULL;
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_8);
  k_8 = t;
  t = term_p_20;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, h_8), term_p_20);
  t = n_3(a_8, k_8, l_8, t);
  t = h_8;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm m_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      z_5 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      d_6 = ATgetArgument(t, 2);
      m_5 = ATgetArgument(t, 3);
      t = m_5;
      if(match_cons(t, sym_StratRule_3))
        {
          v_5 = ATgetArgument(t, 0);
          w_5 = ATgetArgument(t, 1);
          x_5 = ATgetArgument(t, 2);
          {
            ATerm r_6 = NULL,x_6 = NULL;
            t = (ATerm) ATempty;
            r_6 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_21, z_5);
            x_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_21, z_5));
            t = n_3(q_7, r_6, x_6, t);
            t = d_6;
            t = map_1_0(r_7, t);
            t = map_1_0(t_7, t);
            t = v_5;
            t = unbound_vars_0_0(t);
            t = w_5;
            t = unbound_vars_0_0(t);
            t = x_5;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, z_5, c_6, d_6, (ATerm) ATmakeAppl(sym_StratRule_3, v_5, w_5, x_5));
          }
        }
      else
        {
          ATerm u_7 = NULL,v_7 = NULL;
          if(match_cons(t, sym_Rule_3))
            {
              v_5 = ATgetArgument(t, 0);
              w_5 = ATgetArgument(t, 1);
              x_5 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          u_7 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_21, z_5);
          v_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_21, z_5));
          t = n_3(x_7, u_7, v_7, t);
          t = d_6;
          t = map_1_0(y_7, t);
          t = map_1_0(z_7, t);
          t = v_5;
          t = bind_vars_0_0(t);
          t = x_5;
          t = unbound_vars_0_0(t);
          t = w_5;
          t = use_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, z_5, c_6, d_6, (ATerm) ATmakeAppl(sym_Rule_3, v_5, w_5, x_5));
        }
    }
  else
    {
      ATerm u_8 = NULL,x_8 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          z_5 = ATgetArgument(t, 0);
          c_6 = ATgetArgument(t, 1);
          d_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_6;
      if(match_cons(t, sym_Rule_3))
        {
          e_6 = ATgetArgument(t, 0);
          g_6 = ATgetArgument(t, 1);
          i_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      u_8 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_21, z_5);
      x_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_21, z_5));
      t = n_3(b_8, u_8, x_8, t);
      t = e_6;
      t = bind_vars_0_0(t);
      t = i_6;
      t = unbound_vars_0_0(t);
      t = g_6;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, z_5, c_6, (ATerm) ATmakeAppl(sym_Rule_3, e_6, g_6, i_6));
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,b_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,n_0 = NULL,p_0 = NULL;
  l_9 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      z_8 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
      h_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_9);
  y_8 = t;
  t = z_8;
  t = d_70(t);
  i_9 = t;
  t = b_9;
  t = e_70(t);
  j_9 = t;
  t = h_9;
  t = f_70(t);
  k_9 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_9, j_9, k_9);
  n_0 = t;
  t = SSLsetAnnotations(n_0, y_8);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm l_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,a_11 = NULL,c_11 = NULL,d_11 = NULL;
      u_10 = t;
      if(match_cons(t, sym__2))
        {
          a_11 = ATgetArgument(t, 0);
          c_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_11;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_11 = ATgetFirst((ATermList) t);
                {
                  ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(r_21);
            t = d_11;
            {
              ATerm y_21 = t;
              int z_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm a_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_21);
                  t = a_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm e_22 = t;
                      int o_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_10;
                          ;
                          LocalPopChoice(o_22);
                        }
                      else
                        {
                          t = e_22;
                          t = g_11(a_11, u_10, t);
                        }
                    }
                  else
                    {
                      t = g_11(a_11, u_10, t);
                    }
                }
              else
                {
                  t = y_21;
                  t = a_11;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = u_10;
                }
            }
          }
        else
          {
            t = q_21;
            t = a_11;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = u_10;
          }
      }
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = l_21;
    }
  return(t);
}
ATerm g_11 (ATerm l_10, ATerm m_10, ATerm t)
{
  t = m_10;
  {
    ATerm p_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_q_20;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_20, l_10);
        t = w_3(s_0, l_10, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_22 = ATgetFirst((ATermList) t);
            if(match_cons(t_22, sym_Defined_1))
              {
                ATerm b_23 = ATgetArgument(t_22, 0);
              }
            else
              _fail(t);
            {
              ATerm u_22 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = m_10;
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATmakeAppl(sym__2, l_10, (ATerm) ATinsert(ATempty, term_d_23));
      }
  }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,j_10 = NULL;
  t = map_1_0(c_8, t);
  g_10 = t;
  t = term_q_20;
  h_10 = t;
  t = SSL_table_destroy(h_10);
  t = term_q_20;
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_20, g_10);
  t = f_3(j_10, g_10, t);
  t = g_10;
  return(t);
}
ATerm f_3 (ATerm x_36, ATerm w_36, ATerm t)
{
  t = w_36;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm k_11 = NULL,l_11 = NULL;
      if(match_cons(t, sym__2))
        {
          k_11 = ATgetArgument(t, 0);
          l_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(x_36, k_11, l_11);
      t = (ATerm) ATmakeAppl(sym__3, x_36, k_11, l_11);
      return(t);
    }
    t = map_1_0(d_8, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  t = SSL_table_keys(p_11);
  {
    ATerm f_8 (ATerm t)
    {
      ATerm q_11 = NULL,r_11 = NULL;
      q_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_11, q_11);
      t = w_3(p_11, q_11, t);
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
      return(t);
    }
    t = map_1_0(f_8, t);
  }
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = term_q_20;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,g_12 = NULL,h_12 = NULL;
  s_11 = t;
  t = save_Bound_0_0(t);
  t_11 = t;
  t = s_11;
  t = d_77(t);
  w_11 = t;
  t = save_Bound_0_0(t);
  x_11 = t;
  t = term_q_20;
  g_12 = t;
  t = SSL_table_destroy(g_12);
  t = term_q_20;
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_20, t_11);
  t = f_3(h_12, t_11, t);
  t = w_11;
  t = e_77(t);
  y_11 = t;
  t = x_11;
  t = isect_Bound_0_0(t);
  t = y_11;
  return(t);
}
ATerm LChoice_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,t_0 = NULL,u_0 = NULL;
  p_12 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_12);
  i_12 = t;
  t = j_12;
  t = z_69(t);
  n_12 = t;
  t = k_12;
  t = a_70(t);
  o_12 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, n_12, o_12);
  t_0 = t;
  t = SSLsetAnnotations(t_0, i_12);
  return(t);
}
ATerm Choice_2_0 (ATerm x_68 (ATerm), ATerm y_68 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,e_13 = NULL,f_13 = NULL,v_0 = NULL,x_0 = NULL;
  f_13 = t;
  if(match_cons(t, sym_Choice_2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_13);
  y_12 = t;
  t = z_12;
  t = x_68(t);
  b_13 = t;
  t = a_13;
  t = y_68(t);
  e_13 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, b_13, e_13);
  v_0 = t;
  t = SSLsetAnnotations(v_0, y_12);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  {
    ATerm e_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 = NULL,t_2 = NULL,u_2 = NULL;
        t = (ATerm) ATempty;
        t_2 = t;
        t = term_j_20;
        u_2 = t;
        t = term_h_23;
        t = i_3(u_2, t_2, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_23) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            q_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_15), term_p_23), q_2), term_n_23);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = e_23;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_3 = NULL,h_3 = NULL,k_3 = NULL;
              t = (ATerm) ATempty;
              h_3 = t;
              t = term_j_20;
              k_3 = t;
              t = term_h_23;
              t = i_3(k_3, h_3, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm t_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                  a_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_15), term_p_23), a_3), term_u_23);
              ;
              LocalPopChoice(r_23);
            }
          else
            {
              t = q_23;
              {
                ATerm w_23 = t;
                int x_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 = NULL,z_3 = NULL,a_4 = NULL;
                    t = (ATerm) ATempty;
                    z_3 = t;
                    t = term_j_20;
                    a_4 = t;
                    t = term_h_23;
                    t = i_3(a_4, z_3, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm b_24 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) b_24) != ATmakeSymbol("j_0", 0, ATtrue)))
                          _fail(t);
                        r_3 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_15), term_p_23), r_3), term_u_23);
                    ;
                    LocalPopChoice(x_23);
                  }
                else
                  {
                    t = w_23;
                    {
                      ATerm c_24 = t;
                      int e_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_4 = NULL,o_4 = NULL,u_4 = NULL;
                          t = (ATerm) ATempty;
                          o_4 = t;
                          t = term_j_20;
                          u_4 = t;
                          t = term_h_23;
                          t = i_3(u_4, o_4, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm j_24 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) j_24) != ATmakeSymbol("h_0", 0, ATtrue)))
                                _fail(t);
                              m_4 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_15), term_p_23), m_4), term_u_23);
                          ;
                          LocalPopChoice(e_24);
                        }
                      else
                        {
                          t = c_24;
                          {
                            ATerm l_24 = t;
                            int m_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_5 = NULL,g_5 = NULL,h_5 = NULL;
                                t = (ATerm) ATempty;
                                g_5 = t;
                                t = term_j_20;
                                h_5 = t;
                                t = term_h_23;
                                t = i_3(h_5, g_5, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm n_24 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) n_24) != ATmakeSymbol("e_0", 0, ATtrue)))
                                      _fail(t);
                                    c_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_15), term_p_23), c_5), term_o_24);
                                ;
                                LocalPopChoice(m_24);
                              }
                            else
                              {
                                t = l_24;
                                {
                                  ATerm l_5 = NULL,o_5 = NULL,p_5 = NULL;
                                  t = (ATerm) ATempty;
                                  o_5 = t;
                                  t = term_j_20;
                                  p_5 = t;
                                  t = term_h_23;
                                  t = i_3(p_5, o_5, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm p_24 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) p_24) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      l_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_15), term_p_23), l_5), term_o_24);
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
  ATerm n_15 = NULL,o_15 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), o_29), term_q_24);
  t = Context_0_0(t);
  n_15 = t;
  t = term_i_13;
  o_15 = t;
  t = SSL_printnl(o_15, n_15);
  t = n_15;
  return(t);
}
ATerm i_3 (ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm u_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
  t = w_3(f_36, g_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_15 = ATgetFirst((ATermList) t);
      {
        ATerm t_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_15;
  return(t);
}
ATerm Bound_0_0 (ATerm t)
{
  ATerm c_17 = NULL,h_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL;
        t = term_q_20;
        e_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_20, c_17);
        t = i_3(e_7, c_17, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm a_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_25) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, h_17);
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_7 = NULL;
              t = term_q_20;
              s_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_q_20, c_17);
              t = i_3(s_7, c_17, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              {
                ATerm n_8 = NULL;
                t = term_q_20;
                n_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_q_20, c_17);
                t = i_3(n_8, c_17, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm d_25 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_25) != ATmakeSymbol("r_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, h_17);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(g_25);
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm x_17 = NULL,b_18 = NULL;
              x_17 = t;
              if(match_cons(t, sym_Var_1))
                {
                  b_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_17;
              t = g_3(b_18, t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = e_25;
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(k_25);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = j_25;
            {
              ATerm l_25 = t;
              int m_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(m_25);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = l_25;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,m_18 = NULL,o_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,c_1 = NULL,d_1 = NULL;
  u_18 = t;
  if(match_cons(t, sym_Rule_3))
    {
      i_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      o_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_18);
  h_18 = t;
  t = i_18;
  t = q_67(t);
  r_18 = t;
  t = m_18;
  t = r_67(t);
  s_18 = t;
  t = o_18;
  t = s_67(t);
  t_18 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, r_18, s_18, t_18);
  c_1 = t;
  t = SSLsetAnnotations(c_1, h_18);
  return(t);
}
ATerm RootApp_1_0 (ATerm p_66 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,f_1 = NULL,g_1 = NULL;
  a_19 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_19);
  x_18 = t;
  t = y_18;
  t = p_66(t);
  z_18 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, z_18);
  f_1 = t;
  t = SSLsetAnnotations(f_1, x_18);
  return(t);
}
ATerm App_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,j_1 = NULL,k_1 = NULL;
  k_19 = t;
  if(match_cons(t, sym_App_2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_19);
  d_19 = t;
  t = g_19;
  t = n_66(t);
  i_19 = t;
  t = h_19;
  t = o_66(t);
  j_19 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, i_19, j_19);
  j_1 = t;
  t = SSLsetAnnotations(j_1, d_19);
  return(t);
}
ATerm j_3 (ATerm h_36, ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm n_19 = NULL,p_19 = NULL,q_19 = NULL;
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_36, i_36);
  t = w_3(h_36, i_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_25 = ATgetFirst((ATermList) t);
      p_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_19), j_36);
  q_19 = t;
  t = SSL_table_put(h_36, i_36, q_19);
  t = n_19;
  return(t);
}
ATerm Var_1_0 (ATerm z_65 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,u_19 = NULL,v_19 = NULL,l_1 = NULL,r_1 = NULL;
  v_19 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_19);
  r_19 = t;
  t = s_19;
  t = z_65(t);
  u_19 = t;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_19);
  l_1 = t;
  t = SSLsetAnnotations(l_1, r_19);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(q_25);
      {
        ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            y_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_q_20;
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, y_19);
        a_20 = t;
        t = term_s_25;
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_q_20, (ATerm)ATmakeAppl(sym_Var_1, y_19), term_s_25);
        t = j_3(z_19, a_20, b_20, t);
        t = (ATerm) ATmakeAppl(sym_Var_1, y_19);
      }
    }
  else
    {
      t = p_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(u_25);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = t_25;
            {
              ATerm v_25 = t;
              int x_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(x_25);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = v_25;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,t_1 = NULL,u_1 = NULL;
  g_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  d_20 = t;
  t = e_20;
  t = q_69(t);
  f_20 = t;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, f_20);
  t_1 = t;
  t = SSLsetAnnotations(t_1, d_20);
  return(t);
}
ATerm Build_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,o_20 = NULL,v_1 = NULL,w_1 = NULL;
  o_20 = t;
  if(match_cons(t, sym_Build_1))
    {
      l_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_20);
  k_20 = t;
  t = l_20;
  t = r_69(t);
  m_20 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, m_20);
  v_1 = t;
  t = SSLsetAnnotations(v_1, k_20);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = Scope_2_0(j_8, unbound_vars_0_0, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = map_1_0(m_8, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_20);
  s_20 = t;
  t = term_d_23;
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_20), term_d_23);
  t = n_3(o_8, s_20, t_20, t);
  t = r_20;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = Choice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = Choice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = LChoice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = LChoice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(z_25);
      t = scope_2_0(g_8, i_8, t);
    }
  else
    {
      t = y_25;
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(c_26);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = b_26;
            {
              ATerm e_26 = t;
              int j_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(j_26);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = e_26;
                  {
                    ATerm k_26 = t;
                    int l_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(l_26);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = k_26;
                        {
                          ATerm m_26 = t;
                          int n_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(n_26);
                              t = abstract_choice_2_0(q_8, r_8, t);
                            }
                          else
                            {
                              t = m_26;
                              {
                                ATerm o_26 = t;
                                int p_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(p_26);
                                    t = abstract_choice_2_0(s_8, t_8, t);
                                  }
                                else
                                  {
                                    t = o_26;
                                    {
                                      ATerm r_26 = t;
                                      int s_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(s_26);
                                          t = abstract_choice_2_0(w_8, a_9, t);
                                        }
                                      else
                                        {
                                          t = r_26;
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
ATerm c_9 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm j_21 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_21 = ATgetArgument(t, 0);
          {
            ATerm v_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_26);
      t = j_21;
    }
  else
    {
      t = t_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_21;
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_21);
  n_21 = t;
  t = term_p_20;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_21), term_p_20);
  t = n_3(p_9, n_21, o_21, t);
  t = m_21;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm w_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
      a_21 = ATgetArgument(t, 2);
      w_20 = ATgetArgument(t, 3);
      {
        ATerm f_21 = NULL,g_21 = NULL;
        t = (ATerm) ATempty;
        f_21 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_26, y_20);
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_26, y_20));
        t = n_3(c_9, f_21, g_21, t);
        t = a_21;
        t = map_1_0(n_9, t);
        t = map_1_0(o_9, t);
        t = w_20;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, y_20, z_20, a_21, w_20);
      }
    }
  else
    {
      ATerm s_21 = NULL,t_21 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          y_20 = ATgetArgument(t, 0);
          z_20 = ATgetArgument(t, 1);
          a_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_26, y_20);
      t_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_26, y_20));
      t = n_3(q_9, s_21, t_21, t);
      t = a_21;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, y_20, z_20, a_21);
    }
  return(t);
}
ATerm m_3 (ATerm u_35, ATerm v_35, ATerm t_35, ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_35, v_35);
  {
    ATerm y_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_27 = ATgetArgument(t, 0);
            ATerm c_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_35, v_35);
        t = w_3(u_35, v_35, t);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATempty;
      }
    w_21 = t;
    t = (ATerm) ATinsert(CheckATermList(w_21), t_35);
    x_21 = t;
    t = SSL_table_put(u_35, v_35, x_21);
    t = v_21;
  }
  return(t);
}
ATerm n_3 (ATerm l_81 (ATerm), ATerm m_35, ATerm k_35, ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  b_22 = t;
  t = l_81(t);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_22, m_35, k_35);
  t = m_3(c_22, m_35, k_35, t);
  {
    ATerm d_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        t = term_i_27;
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, term_i_27);
        t = w_3(c_22, i_22, t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = d_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_22 = ATgetFirst((ATermList) t);
        f_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_27;
    g_22 = t;
    t = (ATerm) ATinsert(CheckATermList(f_22), (ATerm) ATinsert(CheckATermList(d_22), m_35));
    h_22 = t;
    t = SSL_table_put(c_22, g_22, h_22);
    t = b_22;
  }
  return(t);
}
ATerm map_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm j_22 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = Cons_2_0(a_78, j_22, t);
      }
    return(t);
  }
  t = j_22(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm q_68 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,x_1 = NULL,i_2 = NULL;
  n_22 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_22);
  k_22 = t;
  t = l_22;
  t = q_68(t);
  m_22 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, m_22);
  x_1 = t;
  t = SSLsetAnnotations(x_1, k_22);
  return(t);
}
ATerm RDefT_4_0 (ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,c_23 = NULL,f_23 = NULL,j_2 = NULL,k_2 = NULL;
  f_23 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      r_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
      w_22 = ATgetArgument(t, 2);
      x_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_23);
  q_22 = t;
  t = r_22;
  t = h_68(t);
  y_22 = t;
  t = v_22;
  t = i_68(t);
  z_22 = t;
  t = w_22;
  t = j_68(t);
  a_23 = t;
  t = x_22;
  t = k_68(t);
  c_23 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, y_22, z_22, a_23, c_23);
  j_2 = t;
  t = SSLsetAnnotations(j_2, q_22);
  return(t);
}
ATerm SDefT_4_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,o_23 = NULL,s_23 = NULL,v_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,l_2 = NULL,m_2 = NULL;
  a_24 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
      l_23 = ATgetArgument(t, 2);
      o_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_24);
  i_23 = t;
  t = j_23;
  t = b_72(t);
  s_23 = t;
  t = k_23;
  t = c_72(t);
  v_23 = t;
  t = l_23;
  t = d_72(t);
  y_23 = t;
  t = o_23;
  t = e_72(t);
  z_23 = t;
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_23, v_23, y_23, z_23);
  l_2 = t;
  t = SSLsetAnnotations(l_2, i_23);
  return(t);
}
ATerm Scope_2_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,k_24 = NULL,n_2 = NULL,p_2 = NULL;
  k_24 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_24);
  d_24 = t;
  t = f_24;
  t = t_69(t);
  h_24 = t;
  t = g_24;
  t = u_69(t);
  i_24 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, h_24, i_24);
  n_2 = t;
  t = SSLsetAnnotations(n_2, d_24);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_91, e_91, t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(g_91, g_91, g_91, e_91, t);
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            {
              ATerm u_27 = t;
              int v_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(g_91, g_91, g_91, e_91, t);
                  ;
                  LocalPopChoice(v_27);
                }
              else
                {
                  t = u_27;
                  t = DynamicRules_1_0(e_91, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm s_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_24);
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_24 = ATgetArgument(t, 0);
            t = u_24;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_24 = ATgetArgument(t, 0);
                v_24 = ATgetArgument(t, 1);
                w_24 = ATgetArgument(t, 2);
                x_24 = ATgetArgument(t, 3);
                t = w_24;
                t = map_1_0(w_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_24 = ATgetArgument(t, 0);
                    v_24 = ATgetArgument(t, 1);
                    w_24 = ATgetArgument(t, 2);
                    x_24 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_24;
                t = map_1_0(x_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm f_25 = NULL;
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_25 = ATgetArgument(t, 0);
          {
            ATerm a_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_27);
      t = f_25;
    }
  else
    {
      t = y_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_25;
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm o_25 = NULL;
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_25 = ATgetArgument(t, 0);
          {
            ATerm d_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_28);
      t = o_25;
    }
  else
    {
      t = b_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_25;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(r_9, v_9, tboundin_3_0, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm d_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_26);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
        ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_26 = ATgetArgument(t, 0);
            t = f_26;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_26 = ATgetArgument(t, 0);
                g_26 = ATgetArgument(t, 1);
                h_26 = ATgetArgument(t, 2);
                i_26 = ATgetArgument(t, 3);
                t = h_26;
                t = map_1_0(a_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_26 = ATgetArgument(t, 0);
                    g_26 = ATgetArgument(t, 1);
                    h_26 = ATgetArgument(t, 2);
                    i_26 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_26;
                t = map_1_0(b_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm q_26 = NULL;
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_26 = ATgetArgument(t, 0);
          {
            ATerm i_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_28);
      t = q_26;
    }
  else
    {
      t = g_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_26;
    }
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm z_26 = NULL;
  ATerm j_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_26 = ATgetArgument(t, 0);
          {
            ATerm m_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_28);
      t = z_26;
    }
  else
    {
      t = j_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_26;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_26 = ATgetArgument(t, 0);
      t = a_26;
      if(match_cons(t, sym_Rule_3))
        {
          w_25 = ATgetArgument(t, 0);
          {
            ATerm n_28 = ATgetArgument(t, 1);
          }
          {
            ATerm o_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_25;
      t = free_vars_3_0(y_9, z_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_26 = ATgetArgument(t, 0);
          {
            ATerm p_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_26;
    }
  return(t);
}
ATerm s_3 (ATerm p_77 (ATerm), ATerm e_30, ATerm d_30, ATerm t)
{
  t = e_30;
  {
    ATerm j_27 (ATerm t)
    {
      ATerm q_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_30;
          ;
          LocalPopChoice(r_28);
        }
      else
        {
          t = q_28;
          {
            ATerm s_28 = t;
            int u_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
                e_27 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_27 = ATgetFirst((ATermList) t);
                    g_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_27;
                {
                  ATerm c_10 (ATerm t)
                  {
                    t = d_30;
                    return(t);
                  }
                  t = t_3(p_77, c_10, f_27, g_27, t);
                  t = j_27(t);
                }
                ;
                LocalPopChoice(u_28);
              }
            else
              {
                t = s_28;
                t = Cons_2_0(_id, j_27, t);
              }
          }
        }
      return(t);
    }
    t = j_27(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_80(t);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      {
        ATerm m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_27 = ATgetFirst((ATermList) t);
            n_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_27;
        t = e_80(t);
        q_27 = t;
        t = n_27;
        t = foldr_3_0(c_80, d_80, e_80, t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
        t = d_80(t);
      }
    }
  return(t);
}
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm k_28 (ATerm t)
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_78, _id, t);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = Cons_2_0(_id, k_28, t);
      }
    return(t);
  }
  t = k_28(t);
  return(t);
}
ATerm t_3 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm i_30, ATerm h_30, ATerm t)
{
  t = t_77(t);
  {
    ATerm d_10 (ATerm t)
    {
      ATerm t_28 = NULL;
      t_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_30, t_28);
      t = s_77(t);
      return(t);
    }
    t = fetch_1_0(d_10, t);
    t = h_30;
  }
  return(t);
}
ATerm u_3 (ATerm k_77 (ATerm), ATerm c_30, ATerm b_30, ATerm t)
{
  t = c_30;
  {
    ATerm x_29 (ATerm t)
    {
      ATerm z_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(a_29);
        }
      else
        {
          t = z_28;
          {
            ATerm b_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_29 = NULL,l_29 = NULL,p_29 = NULL;
                i_29 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_29 = ATgetFirst((ATermList) t);
                    p_29 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_29;
                {
                  ATerm e_10 (ATerm t)
                  {
                    t = b_30;
                    return(t);
                  }
                  t = t_3(k_77, e_10, l_29, p_29, t);
                  t = x_29(t);
                }
                ;
                LocalPopChoice(c_29);
              }
            else
              {
                t = b_29;
                t = Cons_2_0(_id, x_29, t);
              }
          }
        }
      return(t);
    }
    t = x_29(t);
  }
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm k_30 = NULL;
  if(match_cons(t, sym__2))
    {
      k_30 = ATgetArgument(t, 0);
      if((k_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3(p_10, d_9, e_9, t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      if((f_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3(s_10, s_9, t_9, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      if((u_9 != ATgetArgument(t, 1)))
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
  ATerm r_30 (ATerm t)
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_94(t);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        {
          ATerm j_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_29 = NULL,a_30 = NULL,p_8 = NULL,v_8 = NULL;
              y_29 = t;
              t = h_94(t);
              a_30 = t;
              t = y_29;
              {
                ATerm f_10 (ATerm t)
                {
                  ATerm g_30 = NULL;
                  t = r_30(t);
                  g_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_30, a_30);
                  t = u_3(k_10, g_30, a_30, t);
                  return(t);
                }
                t = i_94(f_10, r_30, i_10, t);
                p_8 = t;
                t = SSL_explode_term(p_8);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_29 = ATgetArgument(t, 0);
                    v_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_8;
                t = foldr_3_0(n_10, o_10, _id, t);
              }
              ;
              LocalPopChoice(k_29);
            }
          else
            {
              t = j_29;
              {
                ATerm g_9 = NULL,m_9 = NULL;
                g_9 = t;
                t = SSL_explode_term(g_9);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_29 = ATgetArgument(t, 0);
                    m_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_9;
                t = foldr_3_0(q_10, r_10, r_30, t);
              }
            }
        }
      }
    return(t);
  }
  t = r_30(t);
  return(t);
}
ATerm v_3 (ATerm z_35, ATerm a_36, ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_35, a_36);
        t = w_3(z_35, a_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_29 = ATgetFirst((ATermList) t);
            t_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_29);
        t = SSL_table_put(z_35, a_36, t_30);
        t = (ATerm) ATmakeAppl(sym__3, z_35, a_36, t_30);
      }
    else
      {
        t = q_29;
        t = SSL_table_remove(z_35, a_36);
        t = (ATerm) ATmakeAppl(sym__2, z_35, a_36);
      }
    t = s_30;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  u_30 = t;
  t = i_81(t);
  v_30 = t;
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_30 = NULL;
        t = term_i_27;
        z_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_30, term_i_27);
        t = w_3(v_30, z_30, t);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_30 = ATgetFirst((ATermList) t);
        w_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_27;
    y_30 = t;
    t = SSL_table_put(v_30, y_30, w_30);
    t = x_30;
    {
      ATerm t_10 (ATerm t)
      {
        ATerm a_31 = NULL;
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_30, a_31);
        t = v_3(v_30, a_31, t);
        return(t);
      }
      t = map_1_0(t_10, t);
      t = u_30;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_88(t);
      t = j_88(t);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
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
  ATerm c_31 = NULL,d_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL;
  c_31 = t;
  t = h_81(t);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_31, term_i_27);
  {
    ATerm z_29 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_31 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_30 = ATgetArgument(t, 0);
            ATerm l_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_27;
        n_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_31, term_i_27);
        t = w_3(d_31, n_31, t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATempty;
      }
    f_31 = t;
    t = term_i_27;
    g_31 = t;
    t = (ATerm) ATinsert(CheckATermList(f_31), (ATerm) ATempty);
    i_31 = t;
    t = SSL_table_put(d_31, g_31, i_31);
    t = c_31;
  }
  return(t);
}
ATerm scope_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t)
{
  t = begin_scope_1_0(j_81, t);
  {
    ATerm v_10 (ATerm t)
    {
      t = end_scope_1_0(j_81, t);
      return(t);
    }
    t = restore_always_2_0(k_81, v_10, t);
  }
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = scope_2_0(y_10, z_10, t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  t = free_vars_3_0(b_11, e_11, tboundin_3_0, t);
  t = map_1_0(i_11, t);
  t = v_31;
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        {
          ATerm o_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(p_30);
            }
          else
            {
              t = o_30;
              {
                ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    p_33 = ATgetArgument(t, 0);
                    q_33 = ATgetArgument(t, 1);
                    r_33 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = v_31;
                t = e_3(p_33, q_33, r_33, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm y_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_31);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm q_30 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = q_30;
      {
        ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,j_32 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_32 = ATgetArgument(t, 0);
            t = a_32;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_32 = ATgetArgument(t, 0);
                b_32 = ATgetArgument(t, 1);
                c_32 = ATgetArgument(t, 2);
                j_32 = ATgetArgument(t, 3);
                t = c_32;
                t = map_1_0(f_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_32 = ATgetArgument(t, 0);
                    b_32 = ATgetArgument(t, 1);
                    c_32 = ATgetArgument(t, 2);
                    j_32 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_32;
                t = map_1_0(h_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm r_32 = NULL;
  ATerm e_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_32 = ATgetArgument(t, 0);
          {
            ATerm j_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_31);
      t = r_32;
    }
  else
    {
      t = e_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_32;
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm e_33 = NULL;
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_33 = ATgetArgument(t, 0);
          {
            ATerm m_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_31);
      t = e_33;
    }
  else
    {
      t = k_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_33;
    }
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_33);
  k_33 = t;
  t = term_d_23;
  l_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_33), term_d_23);
  t = n_3(j_11, k_33, l_33, t);
  t = j_33;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  t = scope_2_0(w_10, x_10, t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,b_34 = NULL,f_34 = NULL,i_34 = NULL,j_34 = NULL,l_34 = NULL,s_2 = NULL,w_2 = NULL;
  l_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_34 = ATgetFirst((ATermList) t);
      f_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_34);
  v_33 = t;
  t = b_34;
  t = s_64(t);
  i_34 = t;
  t = f_34;
  t = t_64(t);
  j_34 = t;
  w_2 = t;
  t = (ATerm) ATinsert(CheckATermList(j_34), i_34);
  s_2 = t;
  t = SSLsetAnnotations(s_2, v_33);
  return(t);
}
ATerm filter_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_11 (ATerm t)
            {
              t = filter_1_0(h_87, t);
              return(t);
            }
            t = Cons_2_0(h_87, m_11, t);
            ;
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            {
              ATerm v_34 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_31 = ATgetFirst((ATermList) t);
                  v_34 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_34;
              t = filter_1_0(h_87, t);
            }
          }
      }
    }
  return(t);
}
ATerm Strategies_1_0 (ATerm w_64 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,x_2 = NULL,y_2 = NULL;
  a_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_35);
  x_34 = t;
  t = y_34;
  t = w_64(t);
  z_34 = t;
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_34);
  x_2 = t;
  t = SSLsetAnnotations(x_2, x_34);
  return(t);
}
ATerm x_3 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_33, z_33);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = SSL_addr(y_33, z_33);
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm e_36 = NULL,l_36 = NULL;
  e_36 = t;
  t = term_w_31;
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, term_w_31);
  t = x_3(e_36, l_36, t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  m_36 = t;
  t = term_w_31;
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_36, term_w_31);
  t = x_3(m_36, n_36, t);
  return(t);
}
ATerm do_test_2_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,d_36 = NULL;
  p_35 = t;
  t = v_96(t);
  q_35 = t;
  t = term_i_13;
  r_35 = t;
  t = (ATerm) ATinsert(ATempty, q_35);
  d_36 = t;
  t = SSL_printnl(r_35, d_36);
  t = p_35;
  {
    ATerm x_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_96(t);
        t = p_35;
        t = _2_0(n_11, _id, t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = x_31;
        t = _2_0(_id, o_11, t);
      }
  }
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_w_16, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATempty, term_z_14))), term_c_13)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_q_15, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATempty, term_c_13)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_n_13, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, term_z_14), term_c_13))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, term_f_15), term_z_14))), term_c_13)))))));
      {
        ATerm g_32 = t;
        if((PushChoice() == 0))
          {
            t = Strategies_1_0(z_11, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_32;
          }
      }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm q_36 = NULL,r_36 = NULL;
        t = term_i_13;
        q_36 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        r_36 = t;
        t = SSL_printnl(q_36, r_36);
        t = term_h_15;
        _fail(t);
      }
    }
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm o_36 = NULL;
        o_36 = t;
        t = filter_1_0(a_12, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_36;
      }
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm k_32 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_32;
    }
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = do_test_2_0(u_11, v_11, t);
  return(t);
}
ATerm _2_0 (ATerm d_60 (ATerm), ATerm e_60 (ATerm), ATerm t)
{
  ATerm s_36 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,b_3 = NULL,l_3 = NULL;
  f_37 = t;
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_37);
  s_36 = t;
  t = b_37;
  t = d_60(t);
  d_37 = t;
  t = c_37;
  t = e_60(t);
  e_37 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
  b_3 = t;
  t = SSLsetAnnotations(b_3, s_36);
  return(t);
}
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,n_37 = NULL;
  i_37 = t;
  t = d_101(t);
  j_37 = t;
  t = term_i_13;
  k_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_37), j_37);
  n_37 = t;
  t = SSL_printnl(k_37, n_37);
  t = i_37;
  return(t);
}
ATerm b_12 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = debug_1_0(e_12, t);
  return(t);
}
ATerm d_12 (ATerm t)
{
  t = debug_1_0(f_12, t);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm l_12 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  t = t_96(t);
  t = debug_1_0(b_12, t);
  t = term_p_32;
  t = u_96(t);
  t = _2_0(c_12, d_12, t);
  t = _2_0(_id, l_12, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm q_12 (ATerm t)
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
  t = test_suite_2_0(m_12, q_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = use_def_test_0_0(t);
  return(t);
}

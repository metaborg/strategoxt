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
Symbol sym_Path_1;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_t_53;
ATerm term_r_53;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_l_46;
ATerm term_i_46;
ATerm term_b_44;
ATerm term_q_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_p_38;
ATerm term_l_38;
ATerm term_w_37;
ATerm term_i_37;
ATerm term_e_37;
ATerm term_s_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_k_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_b_36;
ATerm term_q_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_j_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_u_34;
ATerm term_s_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_b_34;
ATerm term_q_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_j_31;
ATerm term_f_31;
ATerm term_y_30;
ATerm term_s_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_i_29;
ATerm term_f_29;
ATerm term_z_28;
ATerm term_u_27;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_k_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_e_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_i_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("test14a", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("UnEscape", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("'\\'", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Char_1, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Var_1, term_m_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("cs", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Var_1, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14b", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("testing-main", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rob", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Var_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test14c", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Match_1, term_m_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test13a", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_SortVar_1, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_VarDec_2, term_l_20, term_a_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Build_1, term_m_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Str_1, term_y_20);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13b", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_All_1, term_d_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_20, (ATerm)ATempty, (ATerm)ATempty, term_m_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test13c", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("helper", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, term_s_21, term_u_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Var_1, term_f_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Match_1, term_h_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Build_1, term_h_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Var_1, term_u_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Var_1, term_y_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Var_1, term_x_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_j_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Var_1, term_o_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Build_1, term_w_22);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Call_2, term_t_23, (ATerm) ATempty);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Build_1, term_a_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Match_1, term_p_23);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("test10a", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Var_1, term_j_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Str_1, term_n_24);
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
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Match_1, term_r_24);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_25, term_g_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_22, term_h_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Call_2, term_x_26, (ATerm) ATempty);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_LChoice_2, term_e_25, term_y_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_27, term_i_22);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_26, term_i_22);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_LChoice_2, term_e_25, term_q_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Var_1, term_i_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Match_1, term_x_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Str_1, term_c_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Build_1, term_x_29);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_30, term_e_25);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_App_2, term_e_25, term_x_29);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Match_1, term_l_24);
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
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_b_34, (ATerm) ATempty);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_d_34, (ATerm) ATempty);
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
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Defined_2, term_h_43, term_i_43);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Defined_2, term_i_46, term_i_43);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_Defined_2, term_p_49, term_q_49);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym__2, term_e_54, term_e_54);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm test14_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm test13_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm test12_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm test11_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm test10_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm test9_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm test8_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm test7_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm test6_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm test5_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm test4_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm test3_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm test2_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm a_6 (ATerm l_23, ATerm k_23, ATerm m_23, ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
static ATerm b_6 (ATerm t_36, ATerm u_36, ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm q_115 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm p_115 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm o_115 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm e_90 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm d_6 (ATerm s_63, ATerm t_63, ATerm u_63, ATerm t);
static ATerm m_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm e_6 (ATerm m_63, ATerm q_63, ATerm o_63, ATerm t);
static ATerm z_9 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm f_6 (ATerm g_63, ATerm k_63, ATerm i_63, ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm g_6 (ATerm e_62, ATerm f_62, ATerm g_62, ATerm i_62, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm h_6 (ATerm p_60, ATerm q_60, ATerm o_60, ATerm t);
static ATerm b_12 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm i_6 (ATerm x_30, ATerm w_30, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm c_61, ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm j_6 (ATerm h_30, ATerm i_30, ATerm j_30, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm m_6 (ATerm f_30, ATerm g_30, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm n_6 (ATerm u_29, ATerm v_29, ATerm t_29, ATerm t);
static ATerm o_6 (ATerm i_88 (ATerm), ATerm m_29, ATerm k_29, ATerm t);
static ATerm y_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_84 (ATerm), ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_6 (ATerm l_84 (ATerm), ATerm c_24, ATerm b_24, ATerm t);
ATerm foldr_3_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm g_85 (ATerm), ATerm t);
static ATerm u_6 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm g_24, ATerm f_24, ATerm t);
static ATerm v_6 (ATerm g_84 (ATerm), ATerm a_24, ATerm z_23, ATerm t);
ATerm at_end_1_0 (ATerm m_85 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_86 (ATerm a_86, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm a_7 (ATerm m_634, ATerm r_634, ATerm m_60, ATerm t);
ATerm while_not_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t);
static ATerm s_14 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_89 (ATerm s_87, ATerm t_87, ATerm u_87, ATerm t);
static ATerm j_16 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm free_vars_3_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm m_88 (ATerm), ATerm t);
static ATerm c_7 (ATerm z_29, ATerm a_30, ATerm t);
ATerm end_scope_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t);
static ATerm d_7 (ATerm l_31, ATerm m_31, ATerm t);
ATerm begin_scope_1_0 (ATerm e_88 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_101 (ATerm), ATerm t);
static ATerm e_7 (ATerm y_27, ATerm z_27, ATerm t);
ATerm do_test_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t);
static ATerm r_18 (ATerm t);
static ATerm t_18 (ATerm t);
ATerm test1_0_0 (ATerm t);
ATerm debug_1_0 (ATerm z_97 (ATerm), ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm test_suite_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t);
static ATerm b_19 (ATerm t);
static ATerm f_19 (ATerm t);
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
  t = term_i_19;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_l_19, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_n_19), (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATinsert(ATempty, term_q_19), term_p_19), term_y_19), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, term_q_19), term_y_19)));
      {
        ATerm z_19 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_19;
          }
      }
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      {
        ATerm a_0 = NULL,c_0 = NULL;
        t = term_a_20;
        a_0 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        c_0 = t;
        t = SSL_printnl(a_0, c_0);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_i_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_k_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_m_20)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_i_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_k_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_m_20)));
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm e_0 = NULL,g_0 = NULL;
        t = term_a_20;
        e_0 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        g_0 = t;
        t = SSL_printnl(e_0, g_0);
        t = term_n_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_i_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_r_20, (ATerm) ATmakeAppl(sym_CallT_3, term_k_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_m_20))));
      {
        ATerm s_20 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_20;
          }
      }
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm i_0 = NULL,k_0 = NULL;
        t = term_a_20;
        i_0 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        k_0 = t;
        t = SSL_printnl(i_0, k_0);
        t = term_e_20;
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
static ATerm w_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_x_20, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_c_21), term_d_21)), (ATerm) ATmakeAppl(sym_CallT_3, term_e_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_g_21))));
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
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm l_0 = NULL,n_0 = NULL;
        t = term_a_20;
        l_0 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        n_0 = t;
        t = SSL_printnl(l_0, n_0);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_21;
      t = def_use_def_0_0(t);
      t = term_n_21;
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm p_0 = NULL,r_0 = NULL;
        t = term_a_20;
        p_0 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        r_0 = t;
        t = SSL_printnl(p_0, r_0);
        t = term_n_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_p_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_w_21), term_m_21));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_20, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, term_w_21), term_m_21));
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm t_0 = NULL,v_0 = NULL;
        t = term_a_20;
        t_0 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        v_0 = t;
        t = SSL_printnl(t_0, v_0);
        t = term_n_20;
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
static ATerm h_2 (ATerm t)
{
  t = term_x_21;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_c_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_e_22, (ATerm) ATinsert(ATempty, term_i_22)), (ATerm)ATmakeAppl(sym_Call_2, term_e_22, (ATerm) ATinsert(ATempty, term_k_22)), term_u_21));
      {
        ATerm m_22 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_22;
          }
      }
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        t = term_a_20;
        x_0 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        z_0 = t;
        t = SSL_printnl(x_0, z_0);
        t = term_e_20;
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
static ATerm b_3 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm o_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_w_22), term_m_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_a_23), term_z_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_w_22), term_m_20))), term_z_22))))));
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
      LocalPopChoice(q_22);
    }
  else
    {
      t = o_22;
      {
        ATerm b_1 = NULL,c_1 = NULL;
        t = term_a_20;
        b_1 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        c_1 = t;
        t = SSL_printnl(b_1, c_1);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_d_23;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm f_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,h_1 = NULL,d_0 = NULL;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_i_23, (ATerm)ATinsert(ATempty, term_n_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_w_22), term_m_20)), (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_p_23), term_m_20))), term_z_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_q_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_a_23), term_z_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_u_23, (ATerm) ATmakeAppl(sym_Op_2, term_v_23, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_m_20)))), term_x_23))))), term_y_23))))));
      h_1 = t;
      if(match_cons(t, sym_Strategies_1))
        {
          ATerm d_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_i_23, (ATerm)ATinsert(ATempty, term_n_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_w_22), term_m_20)), (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_p_23), term_m_20))), term_z_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_q_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_a_23), term_z_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_u_23, (ATerm) ATmakeAppl(sym_Op_2, term_v_23, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_m_20)))), term_x_23))))), term_y_23)))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_i_23, (ATerm)ATinsert(ATempty, term_n_23), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_w_22), term_m_20)), (ATerm)ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_p_23), term_m_20))), term_z_22)), (ATerm) ATmakeAppl(sym_Seq_2, term_q_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_a_23), term_z_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_u_23, (ATerm) ATmakeAppl(sym_Op_2, term_v_23, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_m_20)))), term_x_23))))), term_y_23))))));
      d_0 = t;
      t = SSLsetAnnotations(d_0, d_1);
      LocalPopChoice(h_23);
    }
  else
    {
      t = f_23;
      {
        ATerm j_1 = NULL,l_1 = NULL;
        t = term_a_20;
        j_1 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        l_1 = t;
        t = SSL_printnl(j_1, l_1);
        t = term_e_20;
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
static ATerm x_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_u_22, (ATerm)ATinsert(ATinsert(ATempty, term_j_24), term_f_22), (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), term_o_24), term_h_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_x_20, (ATerm)ATinsert(ATinsert(ATempty, term_j_24), term_f_22), (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, term_g_21), term_h_22)))))));
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
            }
            t = (ATerm) ATmakeAppl(sym_Overlays_1, o_1);
            q_4 = t;
            t = SSLsetAnnotations(q_4, n_1);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_24;
          }
      }
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm r_1 = NULL,s_1 = NULL;
        t = term_a_20;
        r_1 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        s_1 = t;
        t = SSL_printnl(r_1, s_1);
        t = term_n_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 = NULL,z_1 = NULL,r_4 = NULL;
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_u_22, (ATerm)ATinsert(ATinsert(ATempty, term_j_24), term_f_22), (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_24), term_o_24), term_h_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_x_20, (ATerm)ATinsert(ATinsert(ATempty, term_j_24), term_f_22), (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, term_g_21), term_h_22)))))));
      z_1 = t;
      if(match_cons(t, sym_Overlays_1))
        {
          ATerm y_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_1);
      v_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_u_22, (ATerm)ATinsert(ATinsert(ATempty, term_j_24), term_f_22), (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_24), term_o_24), term_h_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_x_20, (ATerm)ATinsert(ATinsert(ATempty, term_j_24), term_f_22), (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, term_g_21), term_h_22))))));
      t = filter_1_0(def_use_def_0_0, t);
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_u_22, (ATerm)ATinsert(ATinsert(ATempty, term_j_24), term_f_22), (ATerm) ATmakeAppl(sym_Op_2, term_m_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_24), term_o_24), term_h_22)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_x_20, (ATerm)ATinsert(ATinsert(ATempty, term_j_24), term_f_22), (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, term_g_21), term_h_22)))))));
      r_4 = t;
      t = SSLsetAnnotations(r_4, v_1);
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm a_2 = NULL,b_2 = NULL;
        t = term_a_20;
        a_2 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        b_2 = t;
        t = SSL_printnl(a_2, b_2);
        t = term_e_20;
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
static ATerm g_4 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)), (ATerm)ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_l_24)), term_j_25)));
      {
        ATerm m_25 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_25;
          }
      }
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = term_a_20;
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        d_2 = t;
        t = SSL_printnl(c_2, d_2);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)), (ATerm)ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_l_24)), term_u_21)));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)), (ATerm)ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_l_24)), term_u_21)));
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm i_2 = NULL,j_2 = NULL;
        t = term_a_20;
        i_2 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        j_2 = t;
        t = SSL_printnl(i_2, j_2);
        t = term_n_20;
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
static ATerm m_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)), (ATerm)ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_l_24)), term_j_25));
      {
        ATerm v_25 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_25;
          }
      }
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = term_a_20;
        k_2 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        l_2 = t;
        t = SSL_printnl(k_2, l_2);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)), (ATerm)ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_l_24)), term_u_21));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)), (ATerm)ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_l_24)), term_u_21));
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm m_2 = NULL,n_2 = NULL;
        t = term_a_20;
        m_2 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        n_2 = t;
        t = SSL_printnl(m_2, n_2);
        t = term_n_20;
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
static ATerm s_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm a_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_l_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATempty, term_h_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_h_22))))));
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
      LocalPopChoice(c_26);
    }
  else
    {
      t = a_26;
      {
        ATerm o_2 = NULL,p_2 = NULL;
        t = term_a_20;
        o_2 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        p_2 = t;
        t = SSL_printnl(o_2, p_2);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_h_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATempty, term_h_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)))));
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
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm q_2 = NULL,r_2 = NULL;
        t = term_a_20;
        q_2 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        r_2 = t;
        t = SSL_printnl(q_2, r_2);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_h_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATempty, term_h_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_h_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATempty, term_h_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))))));
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm s_2 = NULL,t_2 = NULL;
        t = term_a_20;
        s_2 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        t_2 = t;
        t = SSL_printnl(s_2, t_2);
        t = term_n_20;
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
static ATerm c_5 (ATerm t)
{
  t = term_p_26;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_b_27, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATempty, term_h_22)))));
      {
        ATerm c_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_27;
          }
      }
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm u_2 = NULL,v_2 = NULL;
        t = term_a_20;
        u_2 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        v_2 = t;
        t = SSL_printnl(u_2, v_2);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_k_27;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm l_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_s_27, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATempty, term_h_22)))));
      {
        ATerm t_27 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_27;
          }
      }
      LocalPopChoice(p_27);
    }
  else
    {
      t = l_27;
      {
        ATerm x_2 = NULL,y_2 = NULL;
        t = term_a_20;
        x_2 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        y_2 = t;
        t = SSL_printnl(x_2, y_2);
        t = term_e_20;
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
static ATerm g_5 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATempty, term_h_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_h_22)))));
      {
        ATerm p_28 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_28;
          }
      }
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm z_2 = NULL,a_3 = NULL;
        t = term_a_20;
        z_2 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        a_3 = t;
        t = SSL_printnl(z_2, a_3);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm b_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATempty, term_h_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)))));
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
      LocalPopChoice(d_29);
    }
  else
    {
      t = b_29;
      {
        ATerm d_3 = NULL,e_3 = NULL;
        t = term_a_20;
        d_3 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        e_3 = t;
        t = SSL_printnl(d_3, e_3);
        t = term_e_20;
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
static ATerm t_5 (ATerm t)
{
  t = term_f_29;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_y_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_i_29), term_p_30))), term_k_30)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_y_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_i_29), term_p_30))), term_k_30)))));
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
        ATerm f_3 = NULL,g_3 = NULL;
        t = term_a_20;
        f_3 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        g_3 = t;
        t = SSL_printnl(f_3, g_3);
        t = term_n_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_s_30;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_y_29, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_y_30), term_k_30)))));
      {
        ATerm z_30 = t;
        if((PushChoice() == 0))
          {
            t = def_use_def_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_30;
          }
      }
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm k_3 = NULL,m_3 = NULL;
        t = term_a_20;
        k_3 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        m_3 = t;
        t = SSL_printnl(k_3, m_3);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_f_31;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm g_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_i_29), term_p_30))), term_k_30))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_i_29), term_p_30))), term_k_30))));
      LocalPopChoice(i_31);
    }
  else
    {
      t = g_31;
      {
        ATerm n_3 = NULL,o_3 = NULL;
        t = term_a_20;
        n_3 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        o_3 = t;
        t = SSL_printnl(n_3, o_3);
        t = term_n_20;
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
static ATerm p_6 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm p_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_j_24), (ATerm) ATmakeAppl(sym_Seq_2, term_a_32, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_l_24))), term_h_22)))))));
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
      LocalPopChoice(u_31);
    }
  else
    {
      t = p_31;
      {
        ATerm q_3 = NULL,r_3 = NULL;
        t = term_a_20;
        q_3 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        r_3 = t;
        t = SSL_printnl(q_3, r_3);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm d_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_j_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), term_h_22))), term_l_24))))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_j_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), term_h_22))), term_l_24))))));
      LocalPopChoice(f_32);
    }
  else
    {
      t = d_32;
      {
        ATerm s_3 = NULL,u_3 = NULL;
        t = term_a_20;
        s_3 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        u_3 = t;
        t = SSL_printnl(s_3, u_3);
        t = term_n_20;
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
static ATerm p_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_l_24))), term_h_22)))));
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
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm v_3 = NULL,w_3 = NULL;
        t = term_a_20;
        v_3 = t;
        t = (ATerm) ATinsert(ATempty, term_e_20);
        w_3 = t;
        t = SSL_printnl(v_3, w_3);
        t = term_e_20;
        _fail(t);
      }
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_q_32;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm u_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), term_h_22))), term_l_24)))));
      t = def_use_def_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), term_h_22))), term_l_24)))));
      LocalPopChoice(a_34);
    }
  else
    {
      t = u_33;
      {
        ATerm y_3 = NULL,z_3 = NULL;
        t = term_a_20;
        y_3 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        z_3 = t;
        t = SSL_printnl(y_3, z_3);
        t = term_n_20;
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
static ATerm a_8 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
static ATerm a_6 (ATerm l_23, ATerm k_23, ATerm m_23, ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL;
  a_4 = t;
  t = (ATerm) ATempty;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_34, l_23);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_34, l_23));
  t = o_6(a_8, h_4, i_4, t);
  t = (ATerm) ATempty;
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_34, l_23);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_34, l_23));
  t = o_6(b_8, b_4, f_4, t);
  t = m_23;
  t = use_vars_0_0(t);
  t = a_4;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_d_34;
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
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_34, r_7);
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_34, r_7));
            t = o_6(c_8, k_8, o_8, t);
            t = (ATerm) ATempty;
            i_8 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_34, r_7);
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_34, r_7));
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
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_7, s_7, t_7, (ATerm) ATmakeAppl(sym_Rule_3, l_7, m_7, n_7));
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
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
            {
              ATerm c_35 = t;
              int d_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_7;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(d_35);
                }
              else
                {
                  t = c_35;
                  t = x_7;
                  t = use_vars_0_0(t);
                }
            }
          }
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, r_7, s_7, (ATerm) ATmakeAppl(sym_Rule_3, u_7, x_7, z_7));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  {
    ATerm g_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL,x_8 = NULL,y_8 = NULL;
        t = (ATerm) ATempty;
        x_8 = t;
        t = term_b_34;
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
        LocalPopChoice(i_35);
      }
    else
      {
        t = g_35;
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,d_10 = NULL,e_10 = NULL;
              t = (ATerm) ATempty;
              d_10 = t;
              t = term_b_34;
              e_10 = t;
              t = term_j_35;
              t = m_6(e_10, d_10, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_35) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  y_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), y_9), term_q_35);
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
                    t = term_b_34;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), o_10), term_q_35);
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
                          t = term_b_34;
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
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_9), term_m_35), v_10), term_q_35);
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
                                t = term_b_34;
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
                                LocalPopChoice(z_35);
                              }
                            else
                              {
                                t = y_35;
                                {
                                  ATerm i_12 = NULL,m_12 = NULL,n_12 = NULL;
                                  t = (ATerm) ATempty;
                                  m_12 = t;
                                  t = term_b_34;
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
  t = term_a_20;
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
        t = term_d_34;
        x_15 = t;
        t = term_k_36;
        t = m_6(x_15, g_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            t_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), term_o_36), t_14), term_n_36);
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
              t = term_d_34;
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
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              {
                ATerm v_36 = t;
                int w_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_16 = NULL,t_16 = NULL,u_16 = NULL;
                    t = (ATerm) ATempty;
                    t_16 = t;
                    t = term_d_34;
                    u_16 = t;
                    t = term_k_36;
                    t = m_6(u_16, t_16, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm x_36 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_36) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        r_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_11), term_o_36), r_16), term_s_36);
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
                          ATerm y_16 = NULL,e_17 = NULL,f_17 = NULL;
                          t = (ATerm) ATempty;
                          e_17 = t;
                          t = term_d_34;
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
                                ATerm w_17 = NULL,d_18 = NULL,h_18 = NULL;
                                t = (ATerm) ATempty;
                                d_18 = t;
                                t = term_d_34;
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
                                LocalPopChoice(c_37);
                              }
                            else
                              {
                                t = b_37;
                                {
                                  ATerm v_18 = NULL,c_19 = NULL,d_19 = NULL;
                                  t = (ATerm) ATempty;
                                  c_19 = t;
                                  t = term_d_34;
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
static ATerm b_6 (ATerm t_36, ATerm u_36, ATerm t)
{
  t = SSL_strcat(t_36, u_36);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_12 = NULL;
      r_12 = t;
      t = SSL_is_string(r_12);
      LocalPopChoice(m_37);
    }
  else
    {
      t = k_37;
      {
        ATerm n_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_8, t);
            LocalPopChoice(s_37);
          }
        else
          {
            t = n_37;
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
                        ATerm t_37 = t;
                        int v_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(v_37);
                          }
                        else
                          {
                            t = t_37;
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
  t = term_w_37;
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_37, l_13);
  t = d_7(m_13, l_13, t);
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_13 = NULL,q_13 = NULL;
        t = eval_config_0_0(t);
        p_13 = t;
        t = term_w_37;
        q_13 = t;
        t = SSL_table_put(q_13, l_13, p_13);
        t = p_13;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
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
        ATerm a_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_13;
            y_13 = t;
            t = c_14;
            LocalPopChoice(d_38);
          }
        else
          {
            t = a_38;
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
    ATerm g_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,f_14 = NULL;
        t = term_l_38;
        t = get_config_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_38), y_13), term_f_36);
        t = Warning_0_0(t);
        e_14 = t;
        t = term_a_20;
        f_14 = t;
        t = SSL_printnl(f_14, e_14);
        t = e_14;
        LocalPopChoice(k_38);
      }
    else
      {
        t = g_38;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  ATerm q_38 = t;
  int r_38 = stack_ptr;
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
      LocalPopChoice(r_38);
      {
        ATerm q_14 = NULL;
        q_14 = t;
        t = m_14;
        {
          ATerm s_38 = t;
          int t_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_38 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) u_38) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm v_38 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(v_38) != AT_LIST) || !(ATisEmpty(v_38))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(t_38);
              _fail(t);
            }
          else
            {
              t = s_38;
              {
                ATerm w_38 = t;
                int x_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm y_38 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) y_38) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm z_38 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(z_38) != AT_LIST) || !(ATisEmpty(z_38))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_38);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = w_38;
                    {
                      ATerm a_39 = t;
                      int b_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm d_39 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) d_39) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm e_39 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(e_39) != AT_LIST) || !(ATisEmpty(e_39))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_39);
                          t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = a_39;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = q_14;
      }
    }
  else
    {
      t = q_38;
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
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
            LocalPopChoice(g_39);
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
            t = f_39;
            {
              ATerm h_39 = t;
              int i_39 = stack_ptr;
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
                  LocalPopChoice(i_39);
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
                  t = h_39;
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
  ATerm j_39 = t;
  int k_39 = stack_ptr;
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
      LocalPopChoice(k_39);
      _fail(t);
    }
  else
    {
      t = j_39;
      {
        ATerm m_39 = t;
        int o_39 = stack_ptr;
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
            LocalPopChoice(o_39);
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
              ATerm p_39 = t;
              int q_39 = stack_ptr;
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
                  LocalPopChoice(q_39);
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
                  t = p_39;
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
  ATerm r_39 = t;
  int s_39 = stack_ptr;
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
      LocalPopChoice(s_39);
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
      t = r_39;
      {
        ATerm t_39 = t;
        int z_39 = stack_ptr;
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
            LocalPopChoice(z_39);
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
            t = t_39;
            {
              ATerm d_40 = t;
              int i_40 = stack_ptr;
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
                  LocalPopChoice(i_40);
                  {
                    ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
                    r_19 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        s_19 = ATgetArgument(t, 0);
                        t_19 = ATgetArgument(t, 1);
                        u_19 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm j_40 = t;
                      int k_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_21 = NULL,f_21 = NULL,w_6 = NULL;
                          t = SSLgetAnnotations(r_19);
                          b_21 = t;
                          t = s_19;
                          t = bind_vars_0_0(t);
                          f_21 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, f_21, t_19, u_19);
                          w_6 = t;
                          t = SSLsetAnnotations(w_6, b_21);
                          LocalPopChoice(k_40);
                        }
                      else
                        {
                          t = j_40;
                          {
                            ATerm l_40 = t;
                            int m_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_21 = NULL,z_21 = NULL,x_6 = NULL;
                                t = SSLgetAnnotations(r_19);
                                t_21 = t;
                                t = u_19;
                                t = unbound_vars_0_0(t);
                                z_21 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, s_19, t_19, z_21);
                                x_6 = t;
                                t = SSLsetAnnotations(x_6, t_21);
                                LocalPopChoice(m_40);
                              }
                            else
                              {
                                t = l_40;
                                {
                                  ATerm l_22 = NULL,p_22 = NULL,y_6 = NULL;
                                  t = SSLgetAnnotations(r_19);
                                  l_22 = t;
                                  t = t_19;
                                  t = use_vars_0_0(t);
                                  p_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, s_19, p_22, u_19);
                                  y_6 = t;
                                  t = SSLsetAnnotations(y_6, l_22);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = d_40;
                  {
                    ATerm n_40 = t;
                    int o_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_19 = NULL,w_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,z_6 = NULL;
                        d_20 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            w_19 = ATgetArgument(t, 0);
                            b_20 = ATgetArgument(t, 1);
                            c_20 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_20);
                        v_19 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, w_19, b_20, c_20);
                        z_6 = t;
                        t = SSLsetAnnotations(z_6, v_19);
                        LocalPopChoice(o_40);
                        {
                          ATerm l_21 = NULL,o_21 = NULL,v_21 = NULL,y_21 = NULL;
                          l_21 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              o_21 = ATgetArgument(t, 0);
                              v_21 = ATgetArgument(t, 1);
                              y_21 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm p_40 = t;
                            int q_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_23 = NULL,g_23 = NULL,b_7 = NULL;
                                t = SSLgetAnnotations(l_21);
                                b_23 = t;
                                t = v_21;
                                t = unbound_vars_0_0(t);
                                g_23 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, o_21, g_23, y_21);
                                b_7 = t;
                                t = SSLsetAnnotations(b_7, b_23);
                                LocalPopChoice(q_40);
                              }
                            else
                              {
                                t = p_40;
                                {
                                  ATerm w_23 = NULL,p_24 = NULL,f_7 = NULL;
                                  t = SSLgetAnnotations(l_21);
                                  w_23 = t;
                                  t = y_21;
                                  t = use_vars_0_0(t);
                                  p_24 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, o_21, v_21, p_24);
                                  f_7 = t;
                                  t = SSLsetAnnotations(f_7, w_23);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = n_40;
                        {
                          ATerm r_40 = t;
                          int s_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_22 = NULL,j_22 = NULL,s_22 = NULL,v_22 = NULL,e_23 = NULL,g_7 = NULL;
                              e_23 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  j_22 = ATgetArgument(t, 0);
                                  s_22 = ATgetArgument(t, 1);
                                  v_22 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_23);
                              g_22 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, j_22, s_22, v_22);
                              g_7 = t;
                              t = SSLsetAnnotations(g_7, g_22);
                              LocalPopChoice(s_40);
                              {
                                ATerm f_25 = NULL,k_25 = NULL,l_25 = NULL,n_25 = NULL;
                                f_25 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    k_25 = ATgetArgument(t, 0);
                                    l_25 = ATgetArgument(t, 1);
                                    n_25 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm t_40 = t;
                                  int u_40 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm i_25 = NULL,u_25 = NULL,h_7 = NULL;
                                      t = SSLgetAnnotations(f_25);
                                      i_25 = t;
                                      t = l_25;
                                      t = unbound_vars_0_0(t);
                                      u_25 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, k_25, u_25, n_25);
                                      h_7 = t;
                                      t = SSLsetAnnotations(h_7, i_25);
                                      LocalPopChoice(u_40);
                                    }
                                  else
                                    {
                                      t = t_40;
                                      {
                                        ATerm j_26 = NULL,z_26 = NULL,i_7 = NULL;
                                        t = SSLgetAnnotations(f_25);
                                        j_26 = t;
                                        t = n_25;
                                        t = use_vars_0_0(t);
                                        z_26 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, k_25, l_25, z_26);
                                        i_7 = t;
                                        t = SSLsetAnnotations(i_7, j_26);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = r_40;
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
static ATerm n_8 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm b_26 = NULL,i_26 = NULL,k_26 = NULL,l_26 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      i_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
      l_26 = ATgetArgument(t, 2);
      b_26 = ATgetArgument(t, 3);
      {
        ATerm q_26 = NULL,r_26 = NULL,u_26 = NULL,v_26 = NULL;
        t = (ATerm) ATempty;
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, i_26);
        v_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, i_26));
        t = o_6(n_8, u_26, v_26, t);
        t = (ATerm) ATempty;
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_40, i_26);
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_40, i_26));
        t = o_6(p_8, q_26, r_26, t);
        t = b_26;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_26, k_26, l_26, b_26);
      }
    }
  else
    {
      ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          i_26 = ATgetArgument(t, 0);
          k_26 = ATgetArgument(t, 1);
          l_26 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      f_27 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_40, i_26);
      g_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_40, i_26));
      t = o_6(q_8, f_27, g_27, t);
      t = (ATerm) ATempty;
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_40, i_26);
      e_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_40, i_26));
      t = o_6(r_8, d_27, e_27, t);
      t = l_26;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, i_26, k_26, l_26);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,m_27 = NULL,n_27 = NULL,s_8 = NULL;
  static ATerm t_8 (ATerm t)
  {
    ATerm o_27 = NULL,r_27 = NULL,x_27 = NULL,o_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,a_9 = NULL,z_8 = NULL;
    y_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        s_28 = ATgetArgument(t, 0);
        t_28 = ATgetArgument(t, 1);
        v_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_28);
    r_28 = t;
    t = s_28;
    t = q_115(t);
    w_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_28, t_28, v_28);
    z_8 = t;
    t = SSLsetAnnotations(z_8, r_28);
    x_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        r_27 = ATgetArgument(t, 0);
        x_27 = ATgetArgument(t, 1);
        o_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_28);
    o_27 = t;
    t = x_27;
    t = q_115(t);
    q_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_27, q_28, o_28);
    a_9 = t;
    t = SSLsetAnnotations(a_9, o_27);
    return(t);
  }
  static ATerm u_8 (ATerm t)
  {
    ATerm a_29 = NULL,c_29 = NULL,r_29 = NULL,w_29 = NULL,d_30 = NULL,e_30 = NULL,b_9 = NULL;
    e_30 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        c_29 = ATgetArgument(t, 0);
        r_29 = ATgetArgument(t, 1);
        w_29 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_30);
    a_29 = t;
    t = w_29;
    t = q_115(t);
    d_30 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_29, r_29, d_30);
    b_9 = t;
    t = SSLsetAnnotations(b_9, a_29);
    return(t);
  }
  n_27 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
      m_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_27, j_27, m_27);
  s_8 = t;
  t = SSLsetAnnotations(s_8, h_27);
  t = abstract_choice_2_0(t_8, u_8, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,n_30 = NULL,o_30 = NULL,q_30 = NULL,i_9 = NULL;
  static ATerm w_8 (ATerm t)
  {
    ATerm r_30 = NULL,t_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,j_9 = NULL;
    c_31 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        t_30 = ATgetArgument(t, 0);
        a_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_31);
    r_30 = t;
    t = t_30;
    t = p_115(t);
    b_31 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, b_31, a_31);
    j_9 = t;
    t = SSLsetAnnotations(j_9, r_30);
    return(t);
  }
  static ATerm c_9 (ATerm t)
  {
    ATerm d_31 = NULL,e_31 = NULL,k_31 = NULL,n_31 = NULL,o_31 = NULL,k_9 = NULL;
    o_31 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        e_31 = ATgetArgument(t, 0);
        k_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_31);
    d_31 = t;
    t = k_31;
    t = p_115(t);
    n_31 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, e_31, n_31);
    k_9 = t;
    t = SSLsetAnnotations(k_9, d_31);
    return(t);
  }
  q_30 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      n_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_30);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, n_30, o_30);
  i_9 = t;
  t = SSLsetAnnotations(i_9, l_30);
  t = abstract_choice_2_0(w_8, c_9, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  t = save_MarkVar_0_0(t);
  q_31 = t;
  t = v_31;
  t = r_115(t);
  t_31 = t;
  t = save_MarkVar_0_0(t);
  r_31 = t;
  t = term_a_41;
  x_31 = t;
  t = SSL_table_destroy(x_31);
  t = term_a_41;
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_41, q_31);
  t = i_6(w_31, q_31, t);
  t = t_31;
  t = s_115(t);
  s_31 = t;
  t = r_31;
  t = isect_MarkVar_0_0(t);
  t = s_31;
  return(t);
}
ATerm mark_choice_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,e_32 = NULL,g_32 = NULL,o_9 = NULL;
  static ATerm d_9 (ATerm t)
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
    t = o_115(t);
    r_32 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, r_32, o_32);
    p_9 = t;
    t = SSLsetAnnotations(p_9, i_32);
    return(t);
  }
  static ATerm e_9 (ATerm t)
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
    t = o_115(t);
    w_32 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, u_32, w_32);
    q_9 = t;
    t = SSLsetAnnotations(q_9, t_32);
    return(t);
  }
  g_32 = t;
  if(match_cons(t, sym_Choice_2))
    {
      z_31 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_32);
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, z_31, e_32);
  o_9 = t;
  t = SSLsetAnnotations(o_9, y_31);
  t = abstract_choice_2_0(d_9, e_9, t);
  return(t);
}
static ATerm c_6 (ATerm t)
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
static ATerm f_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,w_33 = NULL,z_33 = NULL,c_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,n_34 = NULL,g_10 = NULL,c_10 = NULL,b_10 = NULL;
  n_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
      k_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_34);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_34, j_34, k_34);
  b_10 = t;
  t = SSLsetAnnotations(b_10, z_33);
  l_34 = t;
  t = save_MarkVar_0_0(t);
  i_33 = t;
  t = l_34;
  if(match_cons(t, sym_PrimT_3))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
      s_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_34);
  p_33 = t;
  t = s_33;
  t = map_1_0(f_9, t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, q_33, r_33, t_33);
  c_10 = t;
  t = SSLsetAnnotations(c_10, p_33);
  w_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
      m_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_33);
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
ATerm alltd_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  static ATerm t_34 (ATerm t)
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_90(t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = SRTS_all(t_34, t);
      }
    return(t);
  }
  t = t_34(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  p_37 = t;
  if(match_cons(t, sym_CallT_3))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
      o_37 = ATgetArgument(t, 2);
      {
        ATerm v_27 = NULL,w_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,u_28 = NULL,a_11 = NULL,z_10 = NULL,y_10 = NULL;
        t = SSLgetAnnotations(p_37);
        l_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, q_37, r_37, o_37);
        y_10 = t;
        t = SSLsetAnnotations(y_10, l_28);
        u_28 = t;
        t = save_MarkVar_0_0(t);
        v_27 = t;
        t = u_28;
        if(match_cons(t, sym_CallT_3))
          {
            g_28 = ATgetArgument(t, 0);
            h_28 = ATgetArgument(t, 1);
            i_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_28);
        f_28 = t;
        t = i_28;
        t = map_1_0(g_9, t);
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, g_28, h_28, j_28);
        z_10 = t;
        t = SSLsetAnnotations(z_10, f_28);
        k_28 = t;
        if(match_cons(t, sym_CallT_3))
          {
            a_28 = ATgetArgument(t, 0);
            b_28 = ATgetArgument(t, 1);
            c_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_28);
        w_27 = t;
        t = b_28;
        t = mark_buv_0_0(t);
        d_28 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, a_28, d_28, c_28);
        a_11 = t;
        t = SSLsetAnnotations(a_11, w_27);
        e_28 = t;
        t = v_27;
        t = isect_MarkVar_0_0(t);
        t = e_28;
      }
    }
  else
    {
      ATerm j_29 = NULL,l_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,s_29 = NULL,b_30 = NULL,c_11 = NULL,b_11 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          q_37 = ATgetArgument(t, 0);
          r_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_37);
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, q_37, r_37);
      b_11 = t;
      t = SSLsetAnnotations(b_11, s_29);
      b_30 = t;
      t = save_MarkVar_0_0(t);
      j_29 = t;
      t = b_30;
      if(match_cons(t, sym_Call_2))
        {
          n_29 = ATgetArgument(t, 0);
          o_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_30);
      l_29 = t;
      t = o_29;
      t = mark_buv_0_0(t);
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, n_29, p_29);
      c_11 = t;
      t = SSLsetAnnotations(c_11, l_29);
      q_29 = t;
      t = j_29;
      t = isect_MarkVar_0_0(t);
      t = q_29;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm d_6 (ATerm s_63, ATerm t_63, ATerm u_63, ATerm t)
{
  ATerm u_37 = NULL;
  static ATerm l_9 (ATerm t)
  {
    t = t_63;
    t = map_1_0(IntroduceBound_0_0, t);
    t = u_63;
    t = mark_build_vars_0_0(t);
    if(((u_37 != NULL) && (u_37 != t)))
      _fail(t);
    else
      u_37 = t;
    return(t);
  }
  t = scope_2_0(h_9, l_9, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, s_63, t_63, not_null(u_37));
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm f_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_38);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_41);
    }
  else
    {
      t = d_41;
      {
        ATerm h_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_38 = ATgetArgument(t, 0);
            t = h_38;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_38 = ATgetArgument(t, 0);
                m_38 = ATgetArgument(t, 1);
                n_38 = ATgetArgument(t, 2);
                o_38 = ATgetArgument(t, 3);
                t = n_38;
                t = map_1_0(t_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_38 = ATgetArgument(t, 0);
                    m_38 = ATgetArgument(t, 1);
                    n_38 = ATgetArgument(t, 2);
                    o_38 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_38;
                t = map_1_0(x_9, t);
              }
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm c_39 = NULL;
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_39 = ATgetArgument(t, 0);
          {
            ATerm h_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_41);
      t = c_39;
    }
  else
    {
      t = f_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_39;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm l_39 = NULL;
  ATerm j_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_39 = ATgetArgument(t, 0);
          {
            ATerm m_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_41);
      t = l_39;
    }
  else
    {
      t = j_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_39;
    }
  return(t);
}
static ATerm e_6 (ATerm m_63, ATerm q_63, ATerm o_63, ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,e_38 = NULL;
  static ATerm n_9 (ATerm t)
  {
    t = m_63;
    t = free_vars_3_0(r_9, s_9, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = m_63;
    t = mark_match_vars_0_0(t);
    if(((b_38 != NULL) && (b_38 != t)))
      _fail(t);
    else
      b_38 = t;
    t = o_63;
    t = mark_buv_0_0(t);
    if(((c_38 != NULL) && (c_38 != t)))
      _fail(t);
    else
      c_38 = t;
    t = q_63;
    t = mark_build_vars_0_0(t);
    if(((e_38 != NULL) && (e_38 != t)))
      _fail(t);
    else
      e_38 = t;
    return(t);
  }
  t = scope_2_0(m_9, n_9, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_38), not_null(e_38), not_null(c_38)));
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm c_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_40);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      {
        ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_40 = ATgetArgument(t, 0);
            t = e_40;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_40 = ATgetArgument(t, 0);
                f_40 = ATgetArgument(t, 1);
                g_40 = ATgetArgument(t, 2);
                h_40 = ATgetArgument(t, 3);
                t = g_40;
                t = map_1_0(p_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_40 = ATgetArgument(t, 0);
                    f_40 = ATgetArgument(t, 1);
                    g_40 = ATgetArgument(t, 2);
                    h_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_40;
                t = map_1_0(s_10, t);
              }
          }
      }
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm v_40 = NULL;
  ATerm p_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_40 = ATgetArgument(t, 0);
          {
            ATerm v_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_41);
      t = v_40;
    }
  else
    {
      t = p_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_40;
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm i_41 = NULL;
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_41 = ATgetArgument(t, 0);
          {
            ATerm y_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_41);
      t = i_41;
    }
  else
    {
      t = w_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_41;
    }
  return(t);
}
static ATerm f_6 (ATerm g_63, ATerm k_63, ATerm i_63, ATerm t)
{
  ATerm v_39 = NULL,a_40 = NULL,b_40 = NULL;
  static ATerm a_10 (ATerm t)
  {
    t = g_63;
    t = free_vars_3_0(h_10, j_10, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = g_63;
    t = mark_match_vars_0_0(t);
    if(((v_39 != NULL) && (v_39 != t)))
      _fail(t);
    else
      v_39 = t;
    t = i_63;
    t = mark_buv_0_0(t);
    if(((a_40 != NULL) && (a_40 != t)))
      _fail(t);
    else
      a_40 = t;
    t = k_63;
    t = mark_build_vars_0_0(t);
    if(((b_40 != NULL) && (b_40 != t)))
      _fail(t);
    else
      b_40 = t;
    return(t);
  }
  t = scope_2_0(z_9, a_10, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_39), not_null(b_40), not_null(a_40)));
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm x_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_43);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_42);
    }
  else
    {
      t = z_41;
      {
        ATerm f_44 = NULL,i_44 = NULL,j_44 = NULL,m_44 = NULL;
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
                i_44 = ATgetArgument(t, 1);
                j_44 = ATgetArgument(t, 2);
                m_44 = ATgetArgument(t, 3);
                t = j_44;
                t = map_1_0(w_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_44 = ATgetArgument(t, 0);
                    i_44 = ATgetArgument(t, 1);
                    j_44 = ATgetArgument(t, 2);
                    m_44 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_44;
                t = map_1_0(x_10, t);
              }
          }
      }
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm z_44 = NULL;
  ATerm b_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_44 = ATgetArgument(t, 0);
          {
            ATerm f_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_42);
      t = z_44;
    }
  else
    {
      t = b_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_44;
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm o_45 = NULL;
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_45 = ATgetArgument(t, 0);
          {
            ATerm i_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_42);
      t = o_45;
    }
  else
    {
      t = g_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_45;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm r_46 = NULL;
  ATerm j_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_46 = ATgetArgument(t, 0);
          {
            ATerm t_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_42);
      t = r_46;
    }
  else
    {
      t = j_42;
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
static ATerm h_11 (ATerm t)
{
  ATerm u_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_46);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm v_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_42);
    }
  else
    {
      t = v_42;
      {
        ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_46 = ATgetArgument(t, 0);
            t = w_46;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_46 = ATgetArgument(t, 0);
                x_46 = ATgetArgument(t, 1);
                y_46 = ATgetArgument(t, 2);
                z_46 = ATgetArgument(t, 3);
                t = y_46;
                t = map_1_0(k_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_46 = ATgetArgument(t, 0);
                    x_46 = ATgetArgument(t, 1);
                    y_46 = ATgetArgument(t, 2);
                    z_46 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = y_46;
                t = map_1_0(n_11, t);
              }
          }
      }
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm m_47 = NULL;
  ATerm z_42 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_47 = ATgetArgument(t, 0);
          {
            ATerm d_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_43);
      t = m_47;
    }
  else
    {
      t = z_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_47;
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm c_48 = NULL;
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_48 = ATgetArgument(t, 0);
          {
            ATerm g_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_43);
      t = c_48;
    }
  else
    {
      t = e_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_48;
    }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_a_41;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,a_43 = NULL,b_43 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
      q_42 = ATgetArgument(t, 2);
      {
        ATerm l_43 = NULL,n_43 = NULL,t_43 = NULL,v_43 = NULL;
        t = q_42;
        if(match_cons(t, sym_Rule_3))
          {
            k_42 = ATgetArgument(t, 0);
            l_42 = ATgetArgument(t, 1);
            m_42 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = q_42;
        t = free_vars_3_0(t_10, u_10, tboundin_3_0, t);
        l_43 = t;
        {
          static ATerm f_11 (ATerm t)
          {
            t = l_43;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = k_42;
            t = mark_match_vars_0_0(t);
            if(((n_43 != NULL) && (n_43 != t)))
              _fail(t);
            else
              n_43 = t;
            t = m_42;
            t = mark_buv_0_0(t);
            if(((t_43 != NULL) && (t_43 != t)))
              _fail(t);
            else
              t_43 = t;
            t = l_42;
            t = mark_build_vars_0_0(t);
            if(((v_43 != NULL) && (v_43 != t)))
              _fail(t);
            else
              v_43 = t;
            return(t);
          }
          t = scope_2_0(d_11, f_11, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, o_42, p_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_43), not_null(v_43), not_null(t_43)));
      }
    }
  else
    {
      ATerm v_45 = NULL,w_45 = NULL,d_46 = NULL,h_46 = NULL,j_46 = NULL,m_46 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          o_42 = ATgetArgument(t, 0);
          p_42 = ATgetArgument(t, 1);
          q_42 = ATgetArgument(t, 2);
          r_42 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = r_42;
      if(match_cons(t, sym_Rule_3))
        {
          s_42 = ATgetArgument(t, 0);
          a_43 = ATgetArgument(t, 1);
          b_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_42;
      t = map_1_0(g_11, t);
      v_45 = t;
      t = r_42;
      t = free_vars_3_0(h_11, i_11, tboundin_3_0, t);
      m_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_46, v_45);
      t = diff_0_0(t);
      w_45 = t;
      {
        static ATerm q_11 (ATerm t)
        {
          t = v_45;
          t = map_1_0(IntroduceBound_0_0, t);
          t = w_45;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = s_42;
          t = mark_match_vars_0_0(t);
          if(((d_46 != NULL) && (d_46 != t)))
            _fail(t);
          else
            d_46 = t;
          t = b_43;
          t = mark_buv_0_0(t);
          if(((h_46 != NULL) && (h_46 != t)))
            _fail(t);
          else
            h_46 = t;
          t = a_43;
          t = mark_build_vars_0_0(t);
          if(((j_46 != NULL) && (j_46 != t)))
            _fail(t);
          else
            j_46 = t;
          return(t);
        }
        t = scope_2_0(o_11, q_11, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, o_42, p_42, q_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_46), not_null(j_46), not_null(h_46)));
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_a_41;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,m_48 = NULL;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_48);
  k_48 = t;
  t = term_j_43;
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_48), term_j_43);
  t = o_6(r_11, k_48, m_48, t);
  t = j_48;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm u_48 = NULL;
  ATerm k_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_48 = ATgetArgument(t, 0);
          {
            ATerm p_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_43);
      t = u_48;
    }
  else
    {
      t = k_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_48;
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm g_6 (ATerm e_62, ATerm f_62, ATerm g_62, ATerm i_62, ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  t = g_62;
  t = map_1_0(y_11, t);
  o_48 = t;
  {
    static ATerm a_12 (ATerm t)
    {
      t = o_48;
      t = map_1_0(IntroduceBound_0_0, t);
      t = i_62;
      t = mark_buv_0_0(t);
      if(((p_48 != NULL) && (p_48 != t)))
        _fail(t);
      else
        p_48 = t;
      return(t);
    }
    t = scope_2_0(z_11, a_12, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_62, f_62, g_62, not_null(p_48));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,p_50 = NULL,r_50 = NULL,s_50 = NULL,v_50 = NULL;
  k_50 = t;
  if(match_cons(t, sym__2))
    {
      l_50 = ATgetArgument(t, 0);
      s_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_50;
  if(match_cons(t, sym_Undefined_0))
    {
      t = l_50;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_q_43;
        }
      else
        {
          t = term_q_43;
        }
    }
  else
    {
      ATerm r_43 = t;
      int u_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm w_43 = ATgetArgument(t, 0);
              v_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(u_43);
          t = l_50;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_q_43;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  p_50 = ATgetArgument(t, 0);
                  r_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm y_43 = t;
                int z_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, r_50, v_50);
                    {
                      ATerm a_44 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm h_31 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              h_31 = ATgetArgument(t, 0);
                              if((h_31 != ATgetArgument(t, 1)))
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
                          t = a_44;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, p_50, term_b_44);
                    LocalPopChoice(z_43);
                  }
                else
                  {
                    t = y_43;
                    t = v_50;
                    if((r_50 != t))
                      {
                        _fail(t);
                      }
                    t = l_50;
                  }
              }
            }
        }
      else
        {
          t = r_43;
          t = l_50;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_q_43;
        }
    }
  return(t);
}
static ATerm h_6 (ATerm p_60, ATerm q_60, ATerm o_60, ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  t = term_a_41;
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_41, p_60);
  t = d_7(c_51, p_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_51 = ATgetFirst((ATermList) t);
      {
        ATerm c_44 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_60, a_51);
  t = CompareEntries_0_0(t);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_60, (ATerm) ATinsert(CheckATermList(o_60), b_51));
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm e_52 = NULL,g_52 = NULL,h_52 = NULL,k_52 = NULL,l_52 = NULL;
  l_52 = t;
  if(match_cons(t, sym__2))
    {
      e_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
      t = g_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_52 = ATgetFirst((ATermList) t);
          k_52 = (ATerm) ATgetNext((ATermList) t);
          t = h_52;
          {
            ATerm d_44 = t;
            int e_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_44 = ATgetArgument(t, 0);
                    ATerm k_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(e_44);
                t = e_52;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = l_52;
                  }
                else
                  {
                    ATerm n_44 = t;
                    int o_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_52;
                        t = h_6(e_52, h_52, k_52, t);
                        LocalPopChoice(o_44);
                      }
                    else
                      {
                        t = n_44;
                        t = l_52;
                      }
                  }
              }
            else
              {
                t = d_44;
                t = e_52;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = l_52;
                  }
                else
                  {
                    t = l_52;
                  }
              }
          }
        }
      else
        {
          t = e_52;
          if(match_cons(t, sym_Scopes_0))
            {
              t = l_52;
            }
          else
            {
              t = l_52;
            }
        }
    }
  else
    {
      t = l_52;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm v_51 = NULL,b_52 = NULL,d_52 = NULL;
  t = map_1_0(b_12, t);
  v_51 = t;
  t = term_a_41;
  d_52 = t;
  t = SSL_table_destroy(d_52);
  t = term_a_41;
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_41, v_51);
  t = i_6(b_52, v_51, t);
  t = v_51;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm s_53 = NULL,w_53 = NULL,d_54 = NULL;
  d_54 = t;
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm r_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_44);
        t = d_54;
      }
    else
      {
        t = p_44;
        {
          ATerm s_44 = t;
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
              t = d_54;
            }
          else
            {
              t = s_44;
              {
                ATerm v_44 = t;
                int w_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm x_44 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_44);
                    t = d_54;
                  }
                else
                  {
                    t = v_44;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm y_44 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = d_54;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  s_53 = t;
  t = d_54;
  t = SRTS_one(mark_buv_0_0, t);
  w_53 = t;
  t = s_53;
  t = isect_MarkVar_0_0(t);
  t = w_53;
  return(t);
}
static ATerm i_6 (ATerm x_30, ATerm w_30, ATerm t)
{
  static ATerm c_12 (ATerm t)
  {
    ATerm i_54 = NULL,j_54 = NULL;
    if(match_cons(t, sym__2))
      {
        i_54 = ATgetArgument(t, 0);
        j_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(x_30, i_54, j_54);
    t = (ATerm) ATmakeAppl(sym__3, x_30, i_54, j_54);
    return(t);
  }
  t = w_30;
  t = map_1_0(c_12, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_54 = NULL;
  static ATerm f_12 (ATerm t)
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
  t = term_a_41;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm c_61, ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm g_12 (ATerm t)
    {
      static ATerm w_55 (ATerm u_54, ATerm t)
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
        t = c_61;
        {
          static ATerm h_12 (ATerm t)
          {
            if((z_54 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(h_12, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, y_54, (ATerm) ATinsert(CheckATermList(i_55), (ATerm) ATmakeAppl(sym_Defined_2, h_55, term_b_44)));
        return(t);
      }
      ATerm l_55 = NULL,o_55 = NULL;
      o_55 = t;
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                l_55 = ATgetArgument(t, 0);
                {
                  ATerm g_45 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_45);
            t = l_55;
            if(match_cons(t, sym_Scopes_0))
              {
                t = o_55;
              }
            else
              {
                ATerm h_45 = t;
                int i_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_55(o_55, t);
                    LocalPopChoice(i_45);
                  }
                else
                  {
                    t = h_45;
                    t = o_55;
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
                  t = w_55(o_55, t);
                  LocalPopChoice(l_45);
                }
              else
                {
                  t = k_45;
                  t = o_55;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(g_12, t);
  }
  r_54 = t;
  t = term_a_41;
  t_54 = t;
  t = SSL_table_destroy(t_54);
  t = term_a_41;
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_41, r_54);
  t = i_6(s_54, r_54, t);
  t = r_54;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm x_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_56);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm n_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_45);
    }
  else
    {
      t = n_45;
      {
        ATerm z_56 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_56 = ATgetArgument(t, 0);
            t = z_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_56 = ATgetArgument(t, 0);
                c_57 = ATgetArgument(t, 1);
                d_57 = ATgetArgument(t, 2);
                e_57 = ATgetArgument(t, 3);
                t = d_57;
                t = map_1_0(s_12, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_56 = ATgetArgument(t, 0);
                    c_57 = ATgetArgument(t, 1);
                    d_57 = ATgetArgument(t, 2);
                    e_57 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_57;
                t = map_1_0(t_12, t);
              }
          }
      }
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm u_57 = NULL;
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_57 = ATgetArgument(t, 0);
          {
            ATerm s_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_45);
      t = u_57;
    }
  else
    {
      t = q_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_57;
    }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm r_58 = NULL;
  ATerm t_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_58 = ATgetArgument(t, 0);
          {
            ATerm x_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_45);
      t = r_58;
    }
  else
    {
      t = t_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_58;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,m_11 = NULL,l_11 = NULL;
  w_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_56 = ATgetArgument(t, 0);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_56);
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, r_56, u_56);
  l_11 = t;
  t = SSLsetAnnotations(l_11, q_56);
  v_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_56 = ATgetArgument(t, 0);
      {
        ATerm y_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_56;
  t = free_vars_3_0(k_12, l_12, tboundin_3_0, t);
  a_56 = t;
  t = undefine_unbound_MarkVar_0_1(a_56, t);
  b_56 = t;
  t = v_56;
  if(match_cons(t, sym_Let_2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_56);
  f_56 = t;
  t = g_56;
  {
    static ATerm w_12 (ATerm t)
    {
      ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
      u_58 = t;
      t = term_a_41;
      w_58 = t;
      t = SSL_table_destroy(w_58);
      t = term_a_41;
      v_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_41, b_56);
      t = i_6(v_58, b_56, t);
      t = u_58;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(w_12, t);
  }
  m_56 = t;
  t = term_a_41;
  p_56 = t;
  t = SSL_table_destroy(p_56);
  t = term_a_41;
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_41, b_56);
  t = i_6(o_56, b_56, t);
  t = h_56;
  t = mark_buv_0_0(t);
  n_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, m_56, n_56);
  m_11 = t;
  t = SSLsetAnnotations(m_11, f_56);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm z_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,p_11 = NULL;
      z_58 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_58);
      x_58 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_58);
      p_11 = t;
      t = SSLsetAnnotations(p_11, x_58);
      LocalPopChoice(a_46);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = z_45;
      {
        ATerm b_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,s_11 = NULL;
            h_59 = t;
            if(match_cons(t, sym_App_2))
              {
                f_59 = ATgetArgument(t, 0);
                g_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_59);
            a_59 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, f_59, g_59);
            s_11 = t;
            t = SSLsetAnnotations(s_11, a_59);
            LocalPopChoice(c_46);
            {
              ATerm i_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,t_11 = NULL;
              r_59 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_59 = ATgetArgument(t, 0);
                  o_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_59);
              i_59 = t;
              t = n_59;
              t = mark_buv_0_0(t);
              p_59 = t;
              t = o_59;
              t = mark_build_vars_0_0(t);
              q_59 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_59, q_59);
              t_11 = t;
              t = SSLsetAnnotations(t_11, i_59);
            }
          }
        else
          {
            t = b_46;
            {
              ATerm e_46 = t;
              int f_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,w_11 = NULL;
                  u_59 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      t_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_59);
                  s_59 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, t_59);
                  w_11 = t;
                  t = SSLsetAnnotations(w_11, s_59);
                  LocalPopChoice(f_46);
                  {
                    ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,x_11 = NULL;
                    a_60 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        y_59 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(a_60);
                    x_59 = t;
                    t = y_59;
                    t = mark_buv_0_0(t);
                    z_59 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, z_59);
                    x_11 = t;
                    t = SSLsetAnnotations(x_11, x_59);
                  }
                }
              else
                {
                  t = e_46;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_6 (ATerm h_30, ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,f_60 = NULL;
  c_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_30, i_30);
  t = d_7(h_30, i_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_46 = ATgetFirst((ATermList) t);
      b_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_60), j_30);
  f_60 = t;
  t = SSL_table_put(h_30, i_30, f_60);
  t = c_60;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm i_60 = NULL,n_60 = NULL,t_60 = NULL,u_60 = NULL;
  i_60 = t;
  t = term_a_41;
  n_60 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_60);
  t_60 = t;
  t = term_l_46;
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_41, (ATerm)ATmakeAppl(sym_Var_1, i_60), term_l_46);
  t = j_6(n_60, t_60, u_60, t);
  t = i_60;
  return(t);
}
static ATerm m_6 (ATerm f_30, ATerm g_30, ATerm t)
{
  ATerm x_60 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_30, g_30);
  t = d_7(f_30, g_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_60 = ATgetFirst((ATermList) t);
      {
        ATerm n_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_60;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm u_65 = NULL,y_65 = NULL;
  u_65 = t;
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
        ATerm v_33 = NULL,x_33 = NULL,y_33 = NULL,f_34 = NULL;
        t = term_a_41;
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_41, u_65);
        t = m_6(f_34, u_65, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_46 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_46) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            v_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, y_65);
        x_33 = t;
        t = (ATerm) ATinsert(ATempty, v_33);
        y_33 = t;
        t = SSLsetAnnotations(x_33, y_33);
        LocalPopChoice(q_46);
      }
    else
      {
        t = p_46;
        {
          ATerm t_46 = t;
          int v_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,x_34 = NULL;
              t = term_a_41;
              x_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_41, u_65);
              t = m_6(x_34, u_65, t);
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
              LocalPopChoice(v_46);
            }
          else
            {
              t = t_46;
              {
                ATerm e_35 = NULL,f_35 = NULL,h_35 = NULL,r_35 = NULL;
                t = term_a_41;
                r_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_41, u_65);
                t = m_6(r_35, u_65, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm b_47 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) b_47) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    e_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_65);
                f_35 = t;
                t = (ATerm) ATinsert(ATempty, e_35);
                h_35 = t;
                t = SSLsetAnnotations(f_35, h_35);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,j_12 = NULL;
  ATerm c_47 = t;
  int d_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(d_47);
    }
  else
    {
      t = c_47;
    }
  k_66 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_66);
  h_66 = t;
  t = i_66;
  t = DeclareBound_0_0(t);
  j_66 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_66);
  j_12 = t;
  t = SSLsetAnnotations(j_12, h_66);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm e_47 = t;
  int f_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,o_12 = NULL;
      r_66 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_66);
      p_66 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_66);
      o_12 = t;
      t = SSLsetAnnotations(o_12, p_66);
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
            ATerm s_66 = NULL,x_66 = NULL,y_66 = NULL,a_67 = NULL,p_12 = NULL;
            a_67 = t;
            if(match_cons(t, sym_App_2))
              {
                x_66 = ATgetArgument(t, 0);
                y_66 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_67);
            s_66 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, x_66, y_66);
            p_12 = t;
            t = SSLsetAnnotations(p_12, s_66);
            LocalPopChoice(h_47);
            {
              ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,i_67 = NULL,j_67 = NULL,q_12 = NULL;
              j_67 = t;
              if(match_cons(t, sym_App_2))
                {
                  d_67 = ATgetArgument(t, 0);
                  e_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_67);
              c_67 = t;
              t = d_67;
              t = mark_buv_0_0(t);
              f_67 = t;
              t = e_67;
              t = mark_build_vars_0_0(t);
              i_67 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, f_67, i_67);
              q_12 = t;
              t = SSLsetAnnotations(q_12, c_67);
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
                  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,u_12 = NULL;
                  m_67 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      l_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_67);
                  k_67 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, l_67);
                  u_12 = t;
                  t = SSLsetAnnotations(u_12, k_67);
                  LocalPopChoice(j_47);
                  {
                    ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,t_67 = NULL,v_12 = NULL;
                    t_67 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_67 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(t_67);
                    n_67 = t;
                    t = o_67;
                    t = mark_buv_0_0(t);
                    p_67 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, p_67);
                    v_12 = t;
                    t = SSLsetAnnotations(v_12, n_67);
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
            ATerm h_36 = NULL,m_36 = NULL,j_13 = NULL;
            t = SSLgetAnnotations(t_68);
            h_36 = t;
            t = u_68;
            t = mark_match_vars_0_0(t);
            m_36 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, m_36);
            j_13 = t;
            t = SSLsetAnnotations(j_13, h_36);
          }
        }
      else
        {
          ATerm j_37 = NULL,l_37 = NULL,k_13 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              u_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_68);
          j_37 = t;
          t = u_68;
          t = mark_build_vars_0_0(t);
          l_37 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, l_37);
          k_13 = t;
          t = SSLsetAnnotations(k_13, j_37);
        }
      LocalPopChoice(l_47);
    }
  else
    {
      t = k_47;
      {
        ATerm n_47 = t;
        int o_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(o_47);
          }
        else
          {
            t = n_47;
            {
              ATerm q_47 = t;
              int r_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(r_47);
                }
              else
                {
                  t = q_47;
                  {
                    ATerm s_47 = t;
                    int t_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(t_47);
                      }
                    else
                      {
                        t = s_47;
                        {
                          ATerm u_47 = t;
                          int v_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_68 = NULL,w_68 = NULL,b_69 = NULL,i_69 = NULL,j_69 = NULL;
                              v_68 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  w_68 = ATgetArgument(t, 0);
                                  b_69 = ATgetArgument(t, 1);
                                  i_69 = ATgetArgument(t, 2);
                                  j_69 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = v_68;
                              t = g_6(w_68, b_69, i_69, j_69, t);
                              LocalPopChoice(v_47);
                            }
                          else
                            {
                              t = u_47;
                              {
                                ATerm x_47 = t;
                                int y_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(y_47);
                                  }
                                else
                                  {
                                    t = x_47;
                                    {
                                      ATerm z_47 = t;
                                      int a_48 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,z_69 = NULL,d_70 = NULL;
                                          u_69 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              v_69 = ATgetArgument(t, 0);
                                              t = v_69;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  o_69 = ATgetArgument(t, 0);
                                                  s_69 = ATgetArgument(t, 1);
                                                  t_69 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = u_69;
                                              t = f_6(o_69, s_69, t_69, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  v_69 = ATgetArgument(t, 0);
                                                  t = v_69;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      o_69 = ATgetArgument(t, 0);
                                                      s_69 = ATgetArgument(t, 1);
                                                      t_69 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = u_69;
                                                  t = e_6(o_69, s_69, t_69, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      v_69 = ATgetArgument(t, 0);
                                                      z_69 = ATgetArgument(t, 1);
                                                      d_70 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = u_69;
                                                  t = d_6(v_69, z_69, d_70, t);
                                                }
                                            }
                                          LocalPopChoice(a_48);
                                        }
                                      else
                                        {
                                          t = z_47;
                                          {
                                            ATerm b_48 = t;
                                            int d_48 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(d_48);
                                              }
                                            else
                                              {
                                                t = b_48;
                                                {
                                                  ATerm e_48 = t;
                                                  int f_48 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(f_48);
                                                    }
                                                  else
                                                    {
                                                      t = e_48;
                                                      {
                                                        ATerm g_48 = t;
                                                        int i_48 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm t_70 = NULL;
                                                            t_70 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm n_48 = ATgetArgument(t, 0);
                                                                ATerm q_48 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = t_70;
                                                            t = c_6(t);
                                                            LocalPopChoice(i_48);
                                                          }
                                                        else
                                                          {
                                                            t = g_48;
                                                            {
                                                              ATerm r_48 = t;
                                                              int s_48 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(s_48);
                                                                }
                                                              else
                                                                {
                                                                  t = r_48;
                                                                  {
                                                                    ATerm t_48 = t;
                                                                    int v_48 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(v_48);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_48;
                                                                        {
                                                                          ATerm w_48 = t;
                                                                          int a_49 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
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
static ATerm n_6 (ATerm u_29, ATerm v_29, ATerm t_29, ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_29, v_29);
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_49 = ATgetArgument(t, 0);
            ATerm j_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_29, v_29);
        t = d_7(u_29, v_29, t);
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        t = (ATerm) ATempty;
      }
  }
  c_71 = t;
  t = (ATerm) ATinsert(CheckATermList(c_71), t_29);
  d_71 = t;
  t = SSL_table_put(u_29, v_29, d_71);
  t = b_71;
  return(t);
}
static ATerm o_6 (ATerm i_88 (ATerm), ATerm m_29, ATerm k_29, ATerm t)
{
  ATerm l_71 = NULL,s_71 = NULL,d_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
  m_72 = t;
  t = i_88(t);
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_71, m_29, k_29);
  t = n_6(l_71, m_29, k_29, t);
  {
    ATerm k_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_72 = NULL;
        t = term_o_49;
        p_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_71, term_o_49);
        t = d_7(l_71, p_72, t);
        LocalPopChoice(m_49);
      }
    else
      {
        t = k_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_71 = ATgetFirst((ATermList) t);
      d_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_o_49;
  n_72 = t;
  t = (ATerm) ATinsert(CheckATermList(d_72), (ATerm) ATinsert(CheckATermList(s_71), m_29));
  o_72 = t;
  t = SSL_table_put(l_71, n_72, o_72);
  t = m_72;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_a_41;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_72);
  t_72 = t;
  t = term_r_49;
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_72), term_r_49);
  t = o_6(y_12, t_72, u_72, t);
  t = s_72;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_a_41;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm y_72 = NULL,a_73 = NULL,c_73 = NULL,d_73 = NULL,i_73 = NULL,s_13 = NULL;
  i_73 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_73 = ATgetArgument(t, 0);
      c_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_73);
  y_72 = t;
  t = c_73;
  {
    static ATerm c_13 (ATerm t)
    {
      ATerm j_73 = NULL;
      j_73 = t;
      t = a_73;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = j_73;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(z_12, c_13, t);
  }
  d_73 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_73, d_73);
  s_13 = t;
  t = SSLsetAnnotations(s_13, y_72);
  return(t);
}
ATerm tboundin_3_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL,f_77 = NULL,g_77 = NULL;
  f_77 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_77 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
      {
        ATerm z_37 = NULL,i_38 = NULL,j_38 = NULL,v_13 = NULL;
        t = SSLgetAnnotations(f_77);
        z_37 = t;
        t = g_77;
        t = d_105(t);
        i_38 = t;
        t = z_76;
        t = b_105(t);
        j_38 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_38, j_38);
        v_13 = t;
        t = SSLsetAnnotations(v_13, z_37);
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
            ATerm n_39 = NULL,u_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,w_13 = NULL;
            t = SSLgetAnnotations(f_77);
            n_39 = t;
            t = g_77;
            t = d_105(t);
            u_39 = t;
            t = z_76;
            t = d_105(t);
            w_39 = t;
            t = a_77;
            t = d_105(t);
            x_39 = t;
            t = b_77;
            t = b_105(t);
            y_39 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_39, w_39, x_39, y_39);
            w_13 = t;
            t = SSLsetAnnotations(w_13, n_39);
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
                ATerm k_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,x_13 = NULL;
                t = SSLgetAnnotations(f_77);
                k_41 = t;
                t = g_77;
                t = d_105(t);
                q_41 = t;
                t = z_76;
                t = d_105(t);
                r_41 = t;
                t = a_77;
                t = d_105(t);
                s_41 = t;
                t = b_77;
                t = b_105(t);
                t_41 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, q_41, r_41, s_41, t_41);
                x_13 = t;
                t = SSLsetAnnotations(x_13, k_41);
              }
            }
          else
            {
              ATerm c_42 = NULL,e_42 = NULL,a_14 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_77);
              c_42 = t;
              t = g_77;
              t = b_105(t);
              e_42 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_42);
              a_14 = t;
              t = SSLsetAnnotations(a_14, c_42);
            }
        }
    }
  return(t);
}
ATerm map_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  static ATerm u_78 (ATerm t)
  {
    ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
    o_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_78;
      }
    else
      {
        ATerm u_42 = NULL,x_42 = NULL,y_42 = NULL,y_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_78 = ATgetFirst((ATermList) t);
            q_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_78);
        u_42 = t;
        t = p_78;
        t = w_84(t);
        x_42 = t;
        t = q_78;
        t = u_78(t);
        y_42 = t;
        t = (ATerm) ATinsert(CheckATermList(y_42), x_42);
        y_15 = t;
        t = SSLsetAnnotations(y_15, u_42);
      }
    return(t);
  }
  t = u_78(t);
  return(t);
}
static ATerm d_13 (ATerm t)
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
static ATerm e_13 (ATerm t)
{
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_49);
    }
  else
    {
      t = s_49;
      {
        ATerm b_79 = NULL,e_79 = NULL,g_79 = NULL,h_79 = NULL;
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
                h_79 = ATgetArgument(t, 3);
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
                    h_79 = ATgetArgument(t, 3);
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
static ATerm g_13 (ATerm t)
{
  ATerm z_79 = NULL;
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_79 = ATgetArgument(t, 0);
          {
            ATerm w_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_49);
      t = z_79;
    }
  else
    {
      t = u_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_79;
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm i_80 = NULL;
  ATerm x_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_80 = ATgetArgument(t, 0);
          {
            ATerm a_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_49);
      t = i_80;
    }
  else
    {
      t = x_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_80;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(d_13, e_13, tboundin_3_0, t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm x_80 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_80);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm b_50 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_50);
    }
  else
    {
      t = b_50;
      {
        ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_80 = ATgetArgument(t, 0);
            t = z_80;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_80 = ATgetArgument(t, 0);
                a_81 = ATgetArgument(t, 1);
                b_81 = ATgetArgument(t, 2);
                c_81 = ATgetArgument(t, 3);
                t = b_81;
                t = map_1_0(r_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_80 = ATgetArgument(t, 0);
                    a_81 = ATgetArgument(t, 1);
                    b_81 = ATgetArgument(t, 2);
                    c_81 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_81;
                t = map_1_0(t_13, t);
              }
          }
      }
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm k_81 = NULL;
  ATerm d_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_81 = ATgetArgument(t, 0);
          {
            ATerm h_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_50);
      t = k_81;
    }
  else
    {
      t = d_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_81;
    }
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm t_81 = NULL;
  ATerm i_50 = t;
  int j_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_81 = ATgetArgument(t, 0);
          {
            ATerm m_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_50);
      t = t_81;
    }
  else
    {
      t = i_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_81;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_80 = NULL,u_80 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_80 = ATgetArgument(t, 0);
      t = u_80;
      if(match_cons(t, sym_Rule_3))
        {
          q_80 = ATgetArgument(t, 0);
          {
            ATerm n_50 = ATgetArgument(t, 1);
          }
          {
            ATerm o_50 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_80;
      t = free_vars_3_0(n_13, o_13, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_80 = ATgetArgument(t, 0);
          {
            ATerm t_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_80;
    }
  return(t);
}
static ATerm t_6 (ATerm l_84 (ATerm), ATerm c_24, ATerm b_24, ATerm t)
{
  static ATerm m_82 (ATerm t)
  {
    ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL;
    h_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_82 = ATgetFirst((ATermList) t);
            j_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_50 = t;
          int w_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_82;
              {
                static ATerm u_13 (ATerm t)
                {
                  t = b_24;
                  return(t);
                }
                t = u_6(l_84, u_13, i_82, j_82, t);
              }
              t = m_82(t);
              LocalPopChoice(w_50);
            }
          else
            {
              t = u_50;
              {
                ATerm o_43 = NULL,s_43 = NULL,v_16 = NULL;
                t = SSLgetAnnotations(h_82);
                o_43 = t;
                t = j_82;
                t = m_82(t);
                s_43 = t;
                t = (ATerm) ATinsert(CheckATermList(s_43), i_82);
                v_16 = t;
                t = SSLsetAnnotations(v_16, o_43);
              }
            }
        }
      }
    return(t);
  }
  t = c_24;
  t = m_82(t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL;
  p_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_82;
      t = y_86(t);
    }
  else
    {
      ATerm u_82 = NULL,v_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_82 = ATgetFirst((ATermList) t);
          r_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_82;
      t = a_87(t);
      u_82 = t;
      t = r_82;
      t = foldr_3_0(y_86, z_86, a_87, t);
      v_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_82, v_82);
      t = z_86(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  static ATerm u_83 (ATerm t)
  {
    ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL;
    r_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_83 = ATgetFirst((ATermList) t);
        t_83 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_50 = t;
      int y_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_44 = NULL,l_44 = NULL,z_17 = NULL;
          t = SSLgetAnnotations(r_83);
          g_44 = t;
          t = s_83;
          t = g_85(t);
          l_44 = t;
          t = (ATerm) ATinsert(CheckATermList(t_83), l_44);
          z_17 = t;
          t = SSLsetAnnotations(z_17, g_44);
          LocalPopChoice(y_50);
        }
      else
        {
          t = x_50;
          {
            ATerm j_45 = NULL,m_45 = NULL,a_18 = NULL;
            t = SSLgetAnnotations(r_83);
            j_45 = t;
            t = t_83;
            t = u_83(t);
            m_45 = t;
            t = (ATerm) ATinsert(CheckATermList(m_45), s_83);
            a_18 = t;
            t = SSLsetAnnotations(a_18, j_45);
          }
        }
    }
    return(t);
  }
  t = u_83(t);
  return(t);
}
static ATerm u_6 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm g_24, ATerm f_24, ATerm t)
{
  t = p_84(t);
  {
    static ATerm b_14 (ATerm t)
    {
      ATerm x_83 = NULL;
      x_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_24, x_83);
      t = o_84(t);
      return(t);
    }
    t = fetch_1_0(b_14, t);
  }
  t = f_24;
  return(t);
}
static ATerm v_6 (ATerm g_84 (ATerm), ATerm a_24, ATerm z_23, ATerm t)
{
  static ATerm t_84 (ATerm t)
  {
    ATerm k_84 = NULL,n_84 = NULL,q_84 = NULL;
    k_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_84;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_84 = ATgetFirst((ATermList) t);
            q_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_50 = t;
          int f_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_84;
              {
                static ATerm g_14 (ATerm t)
                {
                  t = z_23;
                  return(t);
                }
                t = u_6(g_84, g_14, n_84, q_84, t);
              }
              t = t_84(t);
              LocalPopChoice(f_51);
            }
          else
            {
              t = z_50;
              {
                ATerm k_46 = NULL,o_46 = NULL,f_18 = NULL;
                t = SSLgetAnnotations(k_84);
                k_46 = t;
                t = q_84;
                t = t_84(t);
                o_46 = t;
                t = (ATerm) ATinsert(CheckATermList(o_46), n_84);
                f_18 = t;
                t = SSLsetAnnotations(f_18, k_46);
              }
            }
        }
      }
    return(t);
  }
  t = a_24;
  t = t_84(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  static ATerm w_85 (ATerm t)
  {
    ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
    v_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_85 = ATgetFirst((ATermList) t);
        u_85 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_47 = NULL,w_47 = NULL,i_18 = NULL;
          t = SSLgetAnnotations(v_85);
          p_47 = t;
          t = u_85;
          t = w_85(t);
          w_47 = t;
          t = (ATerm) ATinsert(CheckATermList(w_47), t_85);
          i_18 = t;
          t = SSLsetAnnotations(i_18, p_47);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_85;
        t = m_85(t);
      }
    return(t);
  }
  t = w_85(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
  z_84 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_84;
    }
  else
    {
      static ATerm h_14 (ATerm t)
      {
        t = not_null(b_85);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_85 = ATgetFirst((ATermList) t);
          if(((b_85 != NULL) && (b_85 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_85;
      t = at_end_1_0(h_14, t);
    }
  return(t);
}
static ATerm i_86 (ATerm a_86, ATerm t)
{
  ATerm b_86 = NULL;
  t = SSL_explode_term(a_86);
  if(match_cons(t, sym__2))
    {
      ATerm g_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_51) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_86;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL;
  f_86 = t;
  if(match_cons(t, sym__2))
    {
      d_86 = ATgetArgument(t, 0);
      e_86 = ATgetArgument(t, 1);
      {
        ATerm h_51 = t;
        int i_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_14 (ATerm t)
            {
              t = e_86;
              return(t);
            }
            t = d_86;
            t = at_end_1_0(i_14, t);
            LocalPopChoice(i_51);
          }
        else
          {
            t = h_51;
            t = i_86(f_86, t);
          }
      }
    }
  else
    {
      t = i_86(f_86, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t)
{
  static ATerm p_86 (ATerm t)
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_99(t);
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
        {
          ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL,k_18 = NULL;
          t = f_99(t);
          o_86 = t;
          if(match_cons(t, sym__2))
            {
              k_86 = ATgetArgument(t, 0);
              l_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_86);
          j_86 = t;
          t = k_86;
          t = h_99(t);
          m_86 = t;
          t = l_86;
          t = p_86(t);
          n_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_86, n_86);
          k_18 = t;
          t = SSLsetAnnotations(k_18, j_86);
          t = g_99(t);
        }
      }
    return(t);
  }
  t = p_86(t);
  return(t);
}
static ATerm j_14 (ATerm t)
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
static ATerm k_14 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL,b_87 = NULL,c_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_51 = ATgetArgument(t, 0);
      if(((ATgetType(n_51) == AT_LIST) && !(ATisEmpty(n_51))))
        {
          w_86 = ATgetFirst((ATermList) n_51);
          x_86 = (ATerm) ATgetNext((ATermList) n_51);
        }
      else
        _fail(t);
      {
        ATerm o_51 = ATgetArgument(t, 1);
        if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
          {
            b_87 = ATgetFirst((ATermList) o_51);
            c_87 = (ATerm) ATgetNext((ATermList) o_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_86, b_87), (ATerm) ATmakeAppl(sym__2, x_86, c_87));
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL;
  if(match_cons(t, sym__2))
    {
      d_87 = ATgetArgument(t, 0);
      e_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_87), d_87);
  return(t);
}
static ATerm a_7 (ATerm m_634, ATerm r_634, ATerm m_60, ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL;
  t = SSL_explode_term(r_634);
  if(match_cons(t, sym__2))
    {
      r_86 = ATgetArgument(t, 0);
      t_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_634);
  if(match_cons(t, sym__2))
    {
      if((r_86 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_86, t_86);
  t = genzip_4_0(j_14, k_14, l_14, _id, t);
  u_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_86, m_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  static ATerm g_87 (ATerm t)
  {
    ATerm p_51 = t;
    int q_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        LocalPopChoice(q_51);
      }
    else
      {
        t = p_51;
        t = e_97(t);
        t = g_87(t);
      }
    return(t);
  }
  t = g_87(t);
  return(t);
}
ATerm for_3_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t)
{
  t = g_97(t);
  t = while_not_2_0(h_97, i_97, t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm n_87 = NULL;
  n_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_87);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,m_18 = NULL;
  r_87 = t;
  if(match_cons(t, sym__2))
    {
      p_87 = ATgetArgument(t, 0);
      q_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_87);
  o_87 = t;
  t = q_87;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_87, q_87);
  m_18 = t;
  t = SSLsetAnnotations(m_18, o_87);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL;
  r_88 = t;
  if(match_cons(t, sym__2))
    {
      s_88 = ATgetArgument(t, 0);
      t_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_88 = ATgetFirst((ATermList) t);
      v_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_51 = t;
        int s_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_89(s_88, t_88, r_88, t);
            LocalPopChoice(s_51);
          }
        else
          {
            t = r_51;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_88), u_88), v_88);
          }
      }
    }
  else
    {
      t = f_89(s_88, t_88, r_88, t);
    }
  return(t);
}
static ATerm f_89 (ATerm s_87, ATerm t_87, ATerm u_87, ATerm t)
{
  ATerm v_87 = NULL,y_87 = NULL,n_18 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,j_88 = NULL;
  t = SSLgetAnnotations(u_87);
  v_87 = t;
  t = t_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_88 = ATgetFirst((ATermList) t);
      j_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_88;
  if(match_cons(t, sym__2))
    {
      c_88 = ATgetArgument(t, 0);
      d_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_51 = t;
    int u_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_88;
        if((c_88 != t))
          {
            _fail(t);
          }
        t = j_88;
        LocalPopChoice(u_51);
      }
    else
      {
        t = t_51;
        t = t_87;
        t = a_7(c_88, d_88, j_88, t);
      }
  }
  y_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_87, y_87);
  n_18 = t;
  t = SSLsetAnnotations(n_18, v_87);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm e_89 = NULL;
  if(match_cons(t, sym__2))
    {
      e_89 = ATgetArgument(t, 0);
      if((e_89 != ATgetArgument(t, 1)))
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
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_14, f_15, e_16, t);
      LocalPopChoice(x_51);
    }
  else
    {
      t = w_51;
      {
        ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
        z_88 = t;
        if(match_cons(t, sym__2))
          {
            a_89 = ATgetArgument(t, 0);
            b_89 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_88;
        t = v_6(j_16, a_89, b_89, t);
      }
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_16 (ATerm t)
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
static ATerm s_16 (ATerm t)
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
static ATerm w_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  if(match_cons(t, sym__2))
    {
      g_49 = ATgetArgument(t, 0);
      h_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(d_17, g_49, h_49, t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm i_49 = NULL;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      if((i_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm t_89 (ATerm t)
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_108(t);
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        {
          ATerm a_52 = t;
          int c_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_89 = NULL,i_89 = NULL,h_48 = NULL,l_48 = NULL;
              h_89 = t;
              t = e_108(t);
              i_89 = t;
              t = h_89;
              {
                static ATerm l_16 (ATerm t)
                {
                  ATerm k_89 = NULL;
                  t = t_89(t);
                  k_89 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_89, i_89);
                  t = diff_0_0(t);
                  return(t);
                }
                t = f_108(l_16, t_89, o_16, t);
              }
              l_48 = t;
              t = SSL_explode_term(l_48);
              if(match_cons(t, sym__2))
                {
                  ATerm f_52 = ATgetArgument(t, 0);
                  h_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_48;
              t = foldr_3_0(p_16, q_16, _id, t);
              LocalPopChoice(c_52);
            }
          else
            {
              t = a_52;
              {
                ATerm b_49 = NULL,c_49 = NULL;
                c_49 = t;
                t = SSL_explode_term(c_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_52 = ATgetArgument(t, 0);
                    b_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_49;
                t = foldr_3_0(w_16, x_16, t_89, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_89(t);
  return(t);
}
ATerm topdown_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  static ATerm g_17 (ATerm t)
  {
    t = topdown_1_0(m_88, t);
    return(t);
  }
  t = m_88(t);
  t = SRTS_all(g_17, t);
  return(t);
}
static ATerm c_7 (ATerm z_29, ATerm a_30, ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL;
  v_89 = t;
  {
    ATerm j_52 = t;
    int m_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_29, a_30);
        t = d_7(z_29, a_30, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_52 = ATgetFirst((ATermList) t);
            u_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_52);
        t = SSL_table_put(z_29, a_30, u_89);
        t = (ATerm) ATmakeAppl(sym__3, z_29, a_30, u_89);
      }
    else
      {
        t = j_52;
        t = SSL_table_remove(z_29, a_30);
        t = (ATerm) ATmakeAppl(sym__2, z_29, a_30);
      }
  }
  t = v_89;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL;
  z_89 = t;
  t = f_88(t);
  y_89 = t;
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_90 = NULL;
        t = term_o_49;
        b_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_89, term_o_49);
        t = d_7(y_89, b_90, t);
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_89 = ATgetFirst((ATermList) t);
      w_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_o_49;
  a_90 = t;
  t = SSL_table_put(y_89, a_90, w_89);
  t = x_89;
  {
    static ATerm p_17 (ATerm t)
    {
      ATerm c_90 = NULL;
      c_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_89, c_90);
      t = c_7(y_89, c_90, t);
      return(t);
    }
    t = map_1_0(p_17, t);
  }
  t = z_89;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t)
{
  ATerm q_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_102(t);
      t = g_102(t);
      LocalPopChoice(r_52);
    }
  else
    {
      t = q_52;
      t = g_102(t);
      _fail(t);
    }
  return(t);
}
static ATerm d_7 (ATerm l_31, ATerm m_31, ATerm t)
{
  t = SSL_table_get(l_31, m_31);
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
  h_90 = t;
  t = e_88(t);
  g_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_90, term_o_49);
  {
    ATerm s_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_90 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_52 = ATgetArgument(t, 0);
            ATerm v_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_49;
        o_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_90, term_o_49);
        t = d_7(g_90, o_90, t);
        LocalPopChoice(t_52);
      }
    else
      {
        t = s_52;
        t = (ATerm) ATempty;
      }
  }
  i_90 = t;
  t = term_o_49;
  j_90 = t;
  t = (ATerm) ATinsert(CheckATermList(i_90), (ATerm) ATempty);
  k_90 = t;
  t = SSL_table_put(g_90, j_90, k_90);
  t = h_90;
  return(t);
}
ATerm scope_2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t)
{
  static ATerm q_17 (ATerm t)
  {
    t = end_scope_1_0(g_88, t);
    return(t);
  }
  t = begin_scope_1_0(g_88, t);
  t = restore_always_2_0(h_88, q_17, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = scope_2_0(e_18, g_18, t);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  t = topdown_1_0(j_18, t);
  z_90 = t;
  t = free_vars_3_0(l_18, o_18, tboundin_3_0, t);
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_90, z_90);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm w_52 = ATgetArgument(t, 0);
      x_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_90;
  {
    ATerm x_52 = t;
    int y_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
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
              LocalPopChoice(a_53);
            }
          else
            {
              t = z_52;
              {
                ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    k_92 = ATgetArgument(t, 0);
                    l_92 = ATgetArgument(t, 1);
                    m_92 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = x_90;
                t = a_6(k_92, l_92, m_92, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL;
  h_91 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_91 = ATgetArgument(t, 0);
      {
        ATerm b_53 = t;
        int c_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_49 = NULL,n_49 = NULL,s_18 = NULL;
            t = SSLgetAnnotations(h_91);
            l_49 = t;
            t = g_91;
            if(match_cons(t, sym_ListVar_1))
              {
                n_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, n_49);
            s_18 = t;
            t = SSLsetAnnotations(s_18, l_49);
            LocalPopChoice(c_53);
          }
        else
          {
            t = b_53;
            t = h_91;
          }
      }
    }
  else
    {
      t = h_91;
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm k_91 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_91);
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_53);
    }
  else
    {
      t = d_53;
      {
        ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_91 = ATgetArgument(t, 0);
            t = m_91;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_91 = ATgetArgument(t, 0);
                n_91 = ATgetArgument(t, 1);
                o_91 = ATgetArgument(t, 2);
                p_91 = ATgetArgument(t, 3);
                t = o_91;
                t = map_1_0(p_18, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_91 = ATgetArgument(t, 0);
                    n_91 = ATgetArgument(t, 1);
                    o_91 = ATgetArgument(t, 2);
                    p_91 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_91;
                t = map_1_0(q_18, t);
              }
          }
      }
    }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm x_91 = NULL;
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_91 = ATgetArgument(t, 0);
          {
            ATerm h_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_53);
      t = x_91;
    }
  else
    {
      t = f_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_91;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm g_92 = NULL;
  ATerm i_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_92 = ATgetArgument(t, 0);
          {
            ATerm k_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_53);
      t = g_92;
    }
  else
    {
      t = i_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_92;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm w_90 = NULL;
  w_90 = t;
  t = scope_2_0(b_18, c_18, t);
  t = w_90;
  return(t);
}
ATerm filter_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL;
  c_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_93;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_93 = ATgetFirst((ATermList) t);
          e_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_53 = t;
        int m_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_49 = NULL,e_50 = NULL,f_50 = NULL,u_18 = NULL;
            t = SSLgetAnnotations(c_93);
            z_49 = t;
            t = d_93;
            t = e_101(t);
            e_50 = t;
            t = e_93;
            t = filter_1_0(e_101, t);
            f_50 = t;
            t = (ATerm) ATinsert(CheckATermList(f_50), e_50);
            u_18 = t;
            t = SSLsetAnnotations(u_18, z_49);
            LocalPopChoice(m_53);
          }
        else
          {
            t = l_53;
            t = e_93;
            t = filter_1_0(e_101, t);
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm y_27, ATerm z_27, ATerm t)
{
  ATerm n_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_27, z_27);
      LocalPopChoice(o_53);
    }
  else
    {
      t = n_53;
      t = SSL_addr(y_27, z_27);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL;
  j_93 = t;
  t = v_115(t);
  k_93 = t;
  t = term_a_20;
  l_93 = t;
  t = (ATerm) ATinsert(ATempty, k_93);
  m_93 = t;
  t = SSL_printnl(l_93, m_93);
  t = j_93;
  {
    ATerm p_53 = t;
    int q_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,y_18 = NULL;
        t = w_115(t);
        t = j_93;
        if(match_cons(t, sym__2))
          {
            o_93 = ATgetArgument(t, 0);
            p_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_93);
        n_93 = t;
        t = term_r_53;
        r_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_93, term_r_53);
        t = e_7(o_93, r_93, t);
        q_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_93, p_93);
        y_18 = t;
        t = SSLsetAnnotations(y_18, n_93);
        LocalPopChoice(q_53);
      }
    else
      {
        t = p_53;
        {
          ATerm a_94 = NULL,b_94 = NULL,q_50 = NULL,d_51 = NULL,e_51 = NULL,z_18 = NULL;
          if(match_cons(t, sym__2))
            {
              a_94 = ATgetArgument(t, 0);
              b_94 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_93);
          q_50 = t;
          t = term_r_53;
          e_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_94, term_r_53);
          t = e_7(b_94, e_51, t);
          d_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_94, d_51);
          z_18 = t;
          t = SSLsetAnnotations(z_18, q_50);
        }
      }
  }
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = term_t_53;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm u_53 = t;
  int v_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, term_w_26, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATempty, term_l_24))), term_h_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_c_25, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(ATempty, term_h_22)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22)))))), (ATerm) ATmakeAppl(sym_SDefT_4, term_r_22, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), term_h_22))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, term_r_24), term_l_24))), term_h_22)))))));
      {
        ATerm x_53 = t;
        if((PushChoice() == 0))
          {
            ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,e_19 = NULL;
            g_94 = t;
            if(match_cons(t, sym_Strategies_1))
              {
                f_94 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_94);
            e_94 = t;
            t = f_94;
            {
              ATerm y_53 = t;
              int z_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_94;
                  LocalPopChoice(z_53);
                }
              else
                {
                  t = y_53;
                  t = filter_1_0(def_use_def_0_0, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_94;
                }
            }
            t = (ATerm) ATmakeAppl(sym_Strategies_1, f_94);
            e_19 = t;
            t = SSLsetAnnotations(e_19, e_94);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_53;
          }
      }
      LocalPopChoice(v_53);
    }
  else
    {
      t = u_53;
      {
        ATerm i_94 = NULL,j_94 = NULL;
        t = term_a_20;
        i_94 = t;
        t = (ATerm) ATinsert(ATempty, term_n_20);
        j_94 = t;
        t = SSL_printnl(i_94, j_94);
        t = term_n_20;
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
ATerm debug_1_0 (ATerm z_97 (ATerm), ATerm t)
{
  ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL;
  k_94 = t;
  t = z_97(t);
  l_94 = t;
  t = term_a_20;
  m_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_94), l_94);
  n_94 = t;
  t = SSL_printnl(m_94, n_94);
  t = k_94;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = term_a_54;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_b_54;
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_c_54;
  return(t);
}
ATerm test_suite_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,h_19 = NULL,g_19 = NULL;
  t = t_115(t);
  t = debug_1_0(w_18, t);
  t = term_f_54;
  t = u_115(t);
  x_94 = t;
  if(match_cons(t, sym__2))
    {
      s_94 = ATgetArgument(t, 0);
      t_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_94);
  r_94 = t;
  t = s_94;
  t = debug_1_0(x_18, t);
  u_94 = t;
  t = t_94;
  t = debug_1_0(a_19, t);
  v_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_94, v_94);
  g_19 = t;
  t = SSLsetAnnotations(g_19, r_94);
  w_94 = t;
  if(match_cons(t, sym__2))
    {
      p_94 = ATgetArgument(t, 0);
      q_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_94);
  o_94 = t;
  t = q_94;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_94, q_94);
  h_19 = t;
  t = SSLsetAnnotations(h_19, o_94);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  t = term_g_54;
  return(t);
}
static ATerm f_19 (ATerm t)
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

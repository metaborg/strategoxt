#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_DynamicRules_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_LRule_1;
static Symbol sym_Path_2;
static Symbol sym_Rec_2;
static Symbol sym_Scope_2;
static Symbol sym_Let_2;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_LRule_1;
static Symbol sym_Path_2;
static Symbol sym_Rec_2;
static Symbol sym_Scope_2;
static Symbol sym_Let_2;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
static void init_module_constructors (void)
{
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
}
static ATerm term_z_31;
static ATerm term_y_31;
static ATerm term_x_31;
static ATerm term_m_31;
static ATerm term_l_31;
static ATerm term_k_31;
static ATerm term_h_31;
static ATerm term_f_31;
static ATerm term_r_30;
static ATerm term_o_30;
static ATerm term_n_30;
static ATerm term_l_30;
static ATerm term_k_30;
static ATerm term_f_30;
static ATerm term_a_30;
static ATerm term_z_29;
static ATerm term_y_29;
static ATerm term_x_29;
static ATerm term_w_29;
static ATerm term_u_29;
static ATerm term_s_29;
static ATerm term_p_29;
static ATerm term_o_29;
static ATerm term_l_29;
static ATerm term_k_29;
static ATerm term_j_29;
static ATerm term_w_28;
static ATerm term_v_28;
static ATerm term_u_28;
static ATerm term_t_28;
static ATerm term_l_28;
static ATerm term_e_28;
static ATerm term_c_28;
static ATerm term_b_28;
static ATerm term_y_27;
static ATerm term_x_27;
static ATerm term_u_27;
static ATerm term_t_27;
static ATerm term_s_27;
static ATerm term_q_27;
static ATerm term_o_27;
static ATerm term_n_27;
static ATerm term_m_27;
static ATerm term_s_26;
static ATerm term_q_26;
static ATerm term_p_26;
static ATerm term_o_26;
static ATerm term_n_26;
static ATerm term_i_26;
static ATerm term_a_26;
static ATerm term_z_25;
static ATerm term_s_25;
static ATerm term_q_25;
static ATerm term_p_25;
static ATerm term_l_25;
static ATerm term_j_25;
static ATerm term_e_24;
static ATerm term_c_24;
static ATerm term_z_23;
static ATerm term_y_23;
static ATerm term_v_23;
static ATerm term_o_23;
static ATerm term_i_23;
static ATerm term_d_23;
static ATerm term_x_22;
static ATerm term_w_22;
static ATerm term_v_22;
static ATerm term_u_22;
static ATerm term_p_22;
static ATerm term_l_22;
static ATerm term_k_22;
static ATerm term_j_22;
static ATerm term_i_22;
static ATerm term_h_22;
static ATerm term_g_22;
static ATerm term_q_20;
static ATerm term_b_10;
static ATerm term_z_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_v_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_c_24);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_p_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_z_25);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_p_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_o_27, term_q_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_b_10);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_o_27);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_s_29, term_b_10);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_b_10);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_b_10);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, (ATerm) ATempty);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_k_30);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_s_29);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_b_10);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm o_156 (ATerm), ATerm t);
static ATerm x_1 (ATerm o_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_6 (ATerm n_46, ATerm o_46, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm y_162 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm l_137 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm o_6 (ATerm g_27, ATerm f_27, ATerm t);
ATerm foldr_3_0 (ATerm w_161 (ATerm), ATerm x_161 (ATerm), ATerm y_161 (ATerm), ATerm t);
static ATerm s_6 (ATerm m_158 (ATerm), ATerm e_70, ATerm d_70, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm x_6 (ATerm u_905, ATerm z_905, ATerm o_89, ATerm t);
ATerm while_not_2_0 (ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t);
ATerm for_3_0 (ATerm h_145 (ATerm), ATerm i_145 (ATerm), ATerm j_145 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm w_27 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t);
static ATerm u_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm free_vars_3_0 (ATerm q_165 (ATerm), ATerm r_165 (ATerm), ATerm s_165 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm m_137 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm j_163 (ATerm), ATerm t);
static ATerm z_6 (ATerm c_26, ATerm b_26, ATerm t);
static ATerm a_7 (ATerm u_158 (ATerm), ATerm v_158 (ATerm), ATerm k_70, ATerm j_70, ATerm t);
static ATerm b_7 (ATerm r_158 (ATerm), ATerm g_70, ATerm f_70, ATerm t);
ATerm genzip_4_0 (ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm CollectSplit_2_0 (ATerm f_160 (ATerm), ATerm g_160 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm d_160 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm f_7 (ATerm v_25, ATerm w_25, ATerm x_25, ATerm y_25, ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm g_7 (ATerm q_150 (ATerm), ATerm o_44, ATerm m_44, ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm h_7 (ATerm s_35, ATerm t_35, ATerm t);
static ATerm i_7 (ATerm y_33, ATerm z_33, ATerm t);
static ATerm k_7 (ATerm c_146 (ATerm), ATerm l_265, ATerm e_34, ATerm t);
static ATerm j_7 (ATerm u_33, ATerm v_33, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm output_1_0 (ATerm f_172 (ATerm), ATerm t);
static ATerm o_61 (ATerm i_61, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_7 (ATerm a_34, ATerm t);
static ATerm m_7 (ATerm q_79, ATerm r_79, ATerm t);
static ATerm n_7 (ATerm u_35, ATerm v_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_62 (ATerm y_61, ATerm t);
static ATerm a_63 (ATerm c_62, ATerm d_62, ATerm e_62, ATerm t);
static ATerm b_63 (ATerm m_62, ATerm n_62, ATerm o_62, ATerm t);
static ATerm o_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_172 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_155 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm default_system_usage_2_0 (ATerm e_174 (ATerm), ATerm f_174 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_7 (ATerm u_39, ATerm v_39, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_7 (ATerm c_46, ATerm d_46, ATerm b_46, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_7 (ATerm t_42, ATerm u_42, ATerm t);
ATerm foldr_2_0 (ATerm u_161 (ATerm), ATerm v_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_147 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_7 (ATerm u_50, ATerm v_50, ATerm w_50, ATerm t);
ATerm lookup_table_0_1 (ATerm o_47, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_51, ATerm d_51, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm r_7 (ATerm z_50, ATerm a_51, ATerm t);
static ATerm s_7 (ATerm e_51, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_156 (ATerm), ATerm t);
static ATerm z_7 (ATerm x_50, ATerm y_50, ATerm t);
static ATerm u_7 (ATerm v_47, ATerm w_47, ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_173 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm parse_options_3_0 (ATerm w_173 (ATerm), ATerm x_173 (ATerm), ATerm y_173 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm z_171 (ATerm), ATerm a_172 (ATerm), ATerm b_172 (ATerm), ATerm c_172 (ATerm), ATerm d_172 (ATerm), ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_0 = NULL,i_0 = NULL,m_0 = NULL;
  c_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_0;
    }
  else
    {
      static ATerm a_0 (ATerm t);
      static ATerm a_0 (ATerm t)
      {
        t = not_null(m_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_0 = ATgetFirst((ATermList) t);
          if(((m_0 != NULL) && (m_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_0;
      t = at_end_1_0(a_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_156 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t);
  static ATerm k_1 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,j_1 = NULL;
    j_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_1 = ATgetFirst((ATermList) t);
        i_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_0 = NULL,h_1 = NULL,w_0 = NULL;
          t = SSLgetAnnotations(j_1);
          v_0 = t;
          t = i_1;
          t = k_1(t);
          h_1 = t;
          t = (ATerm) ATinsert(CheckATermList(h_1), g_1);
          w_0 = t;
          t = SSLsetAnnotations(w_0, v_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_1;
        t = o_156(t);
      }
    return(t);
  }
  t = k_1(t);
  return(t);
}
static ATerm x_1 (ATerm o_1, ATerm t)
{
  ATerm p_1 = NULL;
  t = SSL_explode_term(o_1);
  if(match_cons(t, sym__2))
    {
      ATerm t_0 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_0) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym__2))
    {
      r_1 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_0 (ATerm t);
            static ATerm o_0 (ATerm t)
            {
              t = s_1;
              return(t);
            }
            t = r_1;
            t = at_end_1_0(o_0, t);
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            t = x_1(t_1, t);
          }
      }
    }
  else
    {
      t = x_1(t_1, t);
    }
  return(t);
}
static ATerm k_6 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm y_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
  t = u_7(n_46, o_46, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_1 = ATgetFirst((ATermList) t);
      {
        ATerm s_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_1;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL;
        t = term_z_9;
        f_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, v_2);
        t = k_6(f_3, v_2, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm a_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_10) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_b_10;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_3 = NULL;
              t = term_z_9;
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_9, v_2);
              t = k_6(t_3, v_2, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm e_10 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_b_10;
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
              {
                ATerm f_10 = t;
                int g_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_4 = NULL;
                    t = term_z_9;
                    b_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_z_9, v_2);
                    t = k_6(b_4, v_2, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm i_10 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) i_10) != ATmakeSymbol("e_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_b_10;
                    LocalPopChoice(g_10);
                  }
                else
                  {
                    t = f_10;
                    {
                      ATerm l_4 = NULL;
                      t = term_z_9;
                      l_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_z_9, v_2);
                      t = k_6(l_4, v_2, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm k_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) k_10) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_b_10;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_162 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,f_4 = NULL,h_4 = NULL;
  w_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_3;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_4 = ATgetFirst((ATermList) t);
          h_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 = NULL,t_4 = NULL,u_4 = NULL,y_0 = NULL;
            t = SSLgetAnnotations(w_3);
            q_4 = t;
            t = f_4;
            t = y_162(t);
            t_4 = t;
            t = h_4;
            t = filter_1_0(y_162, t);
            u_4 = t;
            t = (ATerm) ATinsert(CheckATermList(u_4), t_4);
            y_0 = t;
            t = SSLsetAnnotations(y_0, q_4);
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = h_4;
            t = filter_1_0(y_162, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
      {
        ATerm f_5 = NULL,i_5 = NULL,o_5 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(s_16);
        f_5 = t;
        t = t_16;
        t = h_137(t);
        i_5 = t;
        t = u_16;
        t = h_137(t);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, i_5, o_5);
        a_1 = t;
        t = SSLsetAnnotations(a_1, f_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_16 = ATgetArgument(t, 0);
          u_16 = ATgetArgument(t, 1);
          p_16 = ATgetArgument(t, 2);
          {
            ATerm c_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(s_16);
            c_6 = t;
            t = t_16;
            t = j_137(t);
            h_6 = t;
            t = u_16;
            t = j_137(t);
            i_6 = t;
            t = p_16;
            t = h_137(t);
            j_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_6, i_6, j_6);
            b_1 = t;
            t = SSLsetAnnotations(b_1, c_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_16 = ATgetArgument(t, 0);
              u_16 = ATgetArgument(t, 1);
              p_16 = ATgetArgument(t, 2);
              o_16 = ATgetArgument(t, 3);
              {
                ATerm c_7 = NULL,w_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(s_16);
                c_7 = t;
                t = t_16;
                t = j_137(t);
                w_7 = t;
                t = u_16;
                t = j_137(t);
                b_8 = t;
                t = p_16;
                t = j_137(t);
                c_8 = t;
                t = o_16;
                t = h_137(t);
                d_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_7, b_8, c_8, d_8);
                e_1 = t;
                t = SSLsetAnnotations(e_1, c_7);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  t_16 = ATgetArgument(t, 0);
                  u_16 = ATgetArgument(t, 1);
                  p_16 = ATgetArgument(t, 2);
                  o_16 = ATgetArgument(t, 3);
                  {
                    ATerm w_8 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,f_1 = NULL;
                    t = SSLgetAnnotations(s_16);
                    w_8 = t;
                    t = t_16;
                    t = j_137(t);
                    c_9 = t;
                    t = u_16;
                    t = j_137(t);
                    d_9 = t;
                    t = p_16;
                    t = j_137(t);
                    e_9 = t;
                    t = o_16;
                    t = h_137(t);
                    f_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, c_9, d_9, e_9, f_9);
                    f_1 = t;
                    t = SSLsetAnnotations(f_1, w_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      t_16 = ATgetArgument(t, 0);
                      u_16 = ATgetArgument(t, 1);
                      p_16 = ATgetArgument(t, 2);
                      {
                        ATerm r_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,l_1 = NULL;
                        t = SSLgetAnnotations(s_16);
                        r_9 = t;
                        t = t_16;
                        t = j_137(t);
                        w_9 = t;
                        t = u_16;
                        t = j_137(t);
                        x_9 = t;
                        t = p_16;
                        t = j_137(t);
                        y_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, w_9, x_9, y_9);
                        l_1 = t;
                        t = SSLsetAnnotations(l_1, r_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          t_16 = ATgetArgument(t, 0);
                          u_16 = ATgetArgument(t, 1);
                          {
                            ATerm b_11 = NULL,f_11 = NULL,m_11 = NULL,a_2 = NULL;
                            t = SSLgetAnnotations(s_16);
                            b_11 = t;
                            t = t_16;
                            t = j_137(t);
                            f_11 = t;
                            t = u_16;
                            t = h_137(t);
                            m_11 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, f_11, m_11);
                            a_2 = t;
                            t = SSLsetAnnotations(a_2, b_11);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              t_16 = ATgetArgument(t, 0);
                              u_16 = ATgetArgument(t, 1);
                              {
                                ATerm y_11 = NULL,g_12 = NULL,h_12 = NULL,b_2 = NULL;
                                t = SSLgetAnnotations(s_16);
                                y_11 = t;
                                t = t_16;
                                t = j_137(t);
                                g_12 = t;
                                t = u_16;
                                t = h_137(t);
                                h_12 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, g_12, h_12);
                                b_2 = t;
                                t = SSLsetAnnotations(b_2, y_11);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  t_16 = ATgetArgument(t, 0);
                                  u_16 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_12 = NULL,u_12 = NULL,v_12 = NULL,c_2 = NULL;
                                    t = SSLgetAnnotations(s_16);
                                    q_12 = t;
                                    t = t_16;
                                    t = j_137(t);
                                    u_12 = t;
                                    t = u_16;
                                    t = h_137(t);
                                    v_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_12, v_12);
                                    c_2 = t;
                                    t = SSLsetAnnotations(c_2, q_12);
                                  }
                                }
                              else
                                {
                                  ATerm f_13 = NULL,j_13 = NULL,k_13 = NULL,d_2 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      t_16 = ATgetArgument(t, 0);
                                      u_16 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(s_16);
                                  f_13 = t;
                                  t = t_16;
                                  t = j_137(t);
                                  j_13 = t;
                                  t = u_16;
                                  t = h_137(t);
                                  k_13 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, j_13, k_13);
                                  d_2 = t;
                                  t = SSLsetAnnotations(d_2, f_13);
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
ATerm dynrule_sargs_1_0 (ATerm l_137 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,f_18 = NULL;
  ATerm q_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          c_18 = ATgetArgument(t, 0);
          {
            ATerm u_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_10);
      t = c_18;
      if(match_cons(t, sym_DynRuleId_1))
        {
          d_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_18;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm v_10 = ATgetArgument(t, 0);
          f_18 = ATgetArgument(t, 1);
          {
            ATerm w_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_18;
    }
  else
    {
      t = q_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                c_18 = ATgetArgument(t, 0);
                {
                  ATerm z_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_10);
            t = c_18;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_18;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_11 = ATgetArgument(t, 0);
                f_18 = ATgetArgument(t, 1);
                {
                  ATerm c_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = f_18;
          }
        else
          {
            t = x_10;
            if(match_cons(t, sym_AddDynRule_2))
              {
                c_18 = ATgetArgument(t, 0);
                {
                  ATerm d_11 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = c_18;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_18;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_11 = ATgetArgument(t, 0);
                f_18 = ATgetArgument(t, 1);
                {
                  ATerm g_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = f_18;
          }
      }
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm k_19 = NULL;
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_19 = ATgetArgument(t, 0);
          {
            ATerm j_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_11);
      t = k_19;
    }
  else
    {
      t = h_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_19;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm u_20 = NULL;
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_20 = ATgetArgument(t, 0);
          {
            ATerm n_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_11);
      t = u_20;
    }
  else
    {
      t = k_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_20;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm a_19 = NULL;
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm q_11 = ATgetArgument(t, 0);
          a_19 = ATgetArgument(t, 1);
          {
            ATerm r_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_11);
      t = a_19;
      t = map_1_0(q_0, t);
    }
  else
    {
      t = o_11;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm s_11 = ATgetArgument(t, 0);
          a_19 = ATgetArgument(t, 1);
          {
            ATerm t_11 = ATgetArgument(t, 2);
          }
          {
            ATerm u_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_19;
      t = map_1_0(s_0, t);
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm h_21 = NULL;
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_21 = ATgetArgument(t, 0);
          {
            ATerm x_11 = ATgetArgument(t, 1);
          }
          {
            ATerm z_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_11);
      t = h_21;
    }
  else
    {
      t = v_11;
      if(match_cons(t, sym_SDefT_4))
        {
          h_21 = ATgetArgument(t, 0);
          {
            ATerm a_12 = ATgetArgument(t, 1);
          }
          {
            ATerm b_12 = ATgetArgument(t, 2);
          }
          {
            ATerm c_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_21;
    }
  return(t);
}
static ATerm o_6 (ATerm g_27, ATerm f_27, ATerm t)
{
  t = g_27;
  t = map_1_0(u_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_161 (ATerm), ATerm x_161 (ATerm), ATerm y_161 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,r_21 = NULL,s_21 = NULL;
  o_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_21;
      t = w_161(t);
    }
  else
    {
      ATerm v_21 = NULL,w_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_21 = ATgetFirst((ATermList) t);
          s_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_21;
      t = y_161(t);
      v_21 = t;
      t = s_21;
      t = foldr_3_0(w_161, x_161, y_161, t);
      w_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_21, w_21);
      t = x_161(t);
    }
  return(t);
}
static ATerm s_6 (ATerm m_158 (ATerm), ATerm e_70, ATerm d_70, ATerm t)
{
  static ATerm a_23 (ATerm t);
  static ATerm a_23 (ATerm t)
  {
    ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
    r_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_22 = ATgetFirst((ATermList) t);
            t_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_12 = t;
          int e_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_22;
              {
                static ATerm x_0 (ATerm t);
                static ATerm x_0 (ATerm t)
                {
                  t = d_70;
                  return(t);
                }
                t = a_7(m_158, x_0, s_22, t_22, t);
              }
              t = a_23(t);
              LocalPopChoice(e_12);
            }
          else
            {
              t = d_12;
              {
                ATerm t_13 = NULL,w_13 = NULL,n_2 = NULL;
                t = SSLgetAnnotations(r_22);
                t_13 = t;
                t = t_22;
                t = a_23(t);
                w_13 = t;
                t = (ATerm) ATinsert(CheckATermList(w_13), s_22);
                n_2 = t;
                t = SSLsetAnnotations(n_2, t_13);
              }
            }
        }
      }
    return(t);
  }
  t = e_70;
  t = a_23(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if(((ATgetType(f_12) != AT_LIST) || !(ATisEmpty(f_12))))
        _fail(t);
      {
        ATerm i_12 = ATgetArgument(t, 1);
        if(((ATgetType(i_12) != AT_LIST) || !(ATisEmpty(i_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      if(((ATgetType(j_12) == AT_LIST) && !(ATisEmpty(j_12))))
        {
          p_23 = ATgetFirst((ATermList) j_12);
          q_23 = (ATerm) ATgetNext((ATermList) j_12);
        }
      else
        _fail(t);
      {
        ATerm k_12 = ATgetArgument(t, 1);
        if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
          {
            r_23 = ATgetFirst((ATermList) k_12);
            s_23 = (ATerm) ATgetNext((ATermList) k_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_23, r_23), (ATerm) ATmakeAppl(sym__2, q_23, s_23));
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  if(match_cons(t, sym__2))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_23), t_23);
  return(t);
}
static ATerm x_6 (ATerm u_905, ATerm z_905, ATerm o_89, ATerm t)
{
  ATerm e_23 = NULL,h_23 = NULL,l_23 = NULL,n_23 = NULL;
  t = SSL_explode_term(z_905);
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_905);
  if(match_cons(t, sym__2))
    {
      if((e_23 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_23, l_23);
  t = genzip_4_0(z_0, c_1, d_1, _id, t);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_23, o_89);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t)
{
  static ATerm w_23 (ATerm t);
  static ATerm w_23 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_145(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = f_145(t);
        t = w_23(t);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm for_3_0 (ATerm h_145 (ATerm), ATerm i_145 (ATerm), ATerm j_145 (ATerm), ATerm t)
{
  t = h_145(t);
  t = while_not_2_0(i_145, j_145, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_24);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,p_24 = NULL,q_24 = NULL,p_2 = NULL;
  q_24 = t;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_24);
  j_24 = t;
  t = p_24;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_24, p_24);
  p_2 = t;
  t = SSLsetAnnotations(p_2, j_24);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  u_26 = t;
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      w_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_26 = ATgetFirst((ATermList) t);
      y_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_27(v_26, w_26, u_26, t);
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_26), x_26), y_26);
          }
      }
    }
  else
    {
      t = w_27(v_26, w_26, u_26, t);
    }
  return(t);
}
static ATerm w_27 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm u_24 = NULL,z_24 = NULL,q_2 = NULL,i_25 = NULL,o_25 = NULL,t_25 = NULL,f_26 = NULL;
  t = SSLgetAnnotations(t_24);
  u_24 = t;
  t = s_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_25 = ATgetFirst((ATermList) t);
      f_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_25;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_25;
        if((o_25 != t))
          {
            _fail(t);
          }
        t = f_26;
        LocalPopChoice(r_12);
      }
    else
      {
        t = p_12;
        t = s_24;
        t = x_6(o_25, t_25, f_26, t);
      }
  }
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_24, z_24);
  q_2 = t;
  t = SSLsetAnnotations(q_2, u_24);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      if((v_27 != ATgetArgument(t, 1)))
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
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_1, n_1, q_1, t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm h_27 = NULL,l_27 = NULL,r_27 = NULL;
        h_27 = t;
        if(match_cons(t, sym__2))
          {
            l_27 = ATgetArgument(t, 0);
            r_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_27;
        t = s_6(u_1, l_27, r_27, t);
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm g_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(f_2, g_14, i_14, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      if((j_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(i_2, s_14, t_14, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      a_15 = ATgetArgument(t, 0);
      if((a_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm q_165 (ATerm), ATerm r_165 (ATerm), ATerm s_165 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_28 (ATerm t);
  static ATerm s_28 (ATerm t)
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_165(t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_27 = NULL,a_28 = NULL,b_14 = NULL,c_14 = NULL;
              z_27 = t;
              t = r_165(t);
              a_28 = t;
              t = z_27;
              {
                static ATerm v_1 (ATerm t);
                static ATerm v_1 (ATerm t)
                {
                  ATerm d_28 = NULL;
                  t = s_28(t);
                  d_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_28, a_28);
                  t = diff_0_0(t);
                  return(t);
                }
                t = s_165(v_1, s_28, w_1, t);
              }
              c_14 = t;
              t = SSL_explode_term(c_14);
              if(match_cons(t, sym__2))
                {
                  ATerm a_13 = ATgetArgument(t, 0);
                  b_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_14;
              t = foldr_3_0(z_1, e_2, _id, t);
              LocalPopChoice(z_12);
            }
          else
            {
              t = y_12;
              {
                ATerm l_14 = NULL,m_14 = NULL;
                m_14 = t;
                t = SSL_explode_term(m_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_13 = ATgetArgument(t, 0);
                    l_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_14;
                t = foldr_3_0(g_2, h_2, s_28, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_28(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,t_39 = NULL,x_39 = NULL,a_40 = NULL;
  x_39 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_40 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
      {
        ATerm i_15 = NULL,n_15 = NULL,o_15 = NULL,t_2 = NULL;
        t = SSLgetAnnotations(x_39);
        i_15 = t;
        t = a_40;
        t = f_137(t);
        n_15 = t;
        t = t_39;
        t = d_137(t);
        o_15 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_15, o_15);
        t_2 = t;
        t = SSLsetAnnotations(t_2, i_15);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          a_40 = ATgetArgument(t, 0);
          {
            ATerm h_16 = NULL,j_16 = NULL,q_16 = NULL,r_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,b_17 = NULL,c_17 = NULL,w_2 = NULL,u_2 = NULL;
            t = SSLgetAnnotations(x_39);
            h_16 = t;
            t = a_40;
            if(match_cons(t, sym_Rule_3))
              {
                q_16 = ATgetArgument(t, 0);
                r_16 = ATgetArgument(t, 1);
                w_16 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_40);
            j_16 = t;
            t = q_16;
            t = d_137(t);
            x_16 = t;
            t = r_16;
            t = d_137(t);
            y_16 = t;
            t = w_16;
            t = d_137(t);
            b_17 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, x_16, y_16, b_17);
            u_2 = t;
            t = SSLsetAnnotations(u_2, j_16);
            c_17 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, c_17);
            w_2 = t;
            t = SSLsetAnnotations(w_2, h_16);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              a_40 = ATgetArgument(t, 0);
              t_39 = ATgetArgument(t, 1);
              p_39 = ATgetArgument(t, 2);
              {
                ATerm q_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_2 = NULL;
                t = SSLgetAnnotations(x_39);
                q_17 = t;
                t = a_40;
                t = f_137(t);
                u_17 = t;
                t = t_39;
                t = f_137(t);
                v_17 = t;
                t = p_39;
                t = f_137(t);
                w_17 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, u_17, v_17, w_17);
                x_2 = t;
                t = SSLsetAnnotations(x_2, q_17);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  a_40 = ATgetArgument(t, 0);
                  t_39 = ATgetArgument(t, 1);
                  p_39 = ATgetArgument(t, 2);
                  q_39 = ATgetArgument(t, 3);
                  {
                    ATerm r_18 = NULL,w_18 = NULL,x_18 = NULL,c_19 = NULL,d_19 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(x_39);
                    r_18 = t;
                    t = a_40;
                    t = f_137(t);
                    w_18 = t;
                    t = t_39;
                    t = f_137(t);
                    x_18 = t;
                    t = p_39;
                    t = f_137(t);
                    c_19 = t;
                    t = q_39;
                    t = d_137(t);
                    d_19 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, w_18, x_18, c_19, d_19);
                    y_2 = t;
                    t = SSLsetAnnotations(y_2, r_18);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_40 = ATgetArgument(t, 0);
                      t_39 = ATgetArgument(t, 1);
                      p_39 = ATgetArgument(t, 2);
                      q_39 = ATgetArgument(t, 3);
                      {
                        ATerm v_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,z_2 = NULL;
                        t = SSLgetAnnotations(x_39);
                        v_19 = t;
                        t = a_40;
                        t = f_137(t);
                        b_20 = t;
                        t = t_39;
                        t = f_137(t);
                        c_20 = t;
                        t = p_39;
                        t = f_137(t);
                        d_20 = t;
                        t = q_39;
                        t = d_137(t);
                        e_20 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_20, c_20, d_20, e_20);
                        z_2 = t;
                        t = SSLsetAnnotations(z_2, v_19);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          a_40 = ATgetArgument(t, 0);
                          t_39 = ATgetArgument(t, 1);
                          {
                            ATerm r_20 = NULL,v_20 = NULL,w_20 = NULL,c_3 = NULL;
                            t = SSLgetAnnotations(x_39);
                            r_20 = t;
                            t = a_40;
                            t = f_137(t);
                            v_20 = t;
                            t = t_39;
                            t = d_137(t);
                            w_20 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, v_20, w_20);
                            c_3 = t;
                            t = SSLsetAnnotations(c_3, r_20);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              a_40 = ATgetArgument(t, 0);
                              t_39 = ATgetArgument(t, 1);
                              {
                                ATerm n_21 = NULL,z_21 = NULL,a_22 = NULL,g_3 = NULL;
                                t = SSLgetAnnotations(x_39);
                                n_21 = t;
                                t = a_40;
                                t = f_137(t);
                                z_21 = t;
                                t = t_39;
                                t = d_137(t);
                                a_22 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, z_21, a_22);
                                g_3 = t;
                                t = SSLsetAnnotations(g_3, n_21);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  a_40 = ATgetArgument(t, 0);
                                  t_39 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_22 = NULL,y_22 = NULL,z_22 = NULL,h_3 = NULL;
                                    t = SSLgetAnnotations(x_39);
                                    o_22 = t;
                                    t = a_40;
                                    t = f_137(t);
                                    y_22 = t;
                                    t = t_39;
                                    t = d_137(t);
                                    z_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, y_22, z_22);
                                    h_3 = t;
                                    t = SSLsetAnnotations(h_3, o_22);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      a_40 = ATgetArgument(t, 0);
                                      {
                                        ATerm k_23 = NULL,x_23 = NULL,i_3 = NULL;
                                        t = SSLgetAnnotations(x_39);
                                        k_23 = t;
                                        t = a_40;
                                        t = d_137(t);
                                        x_23 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, x_23);
                                        i_3 = t;
                                        t = SSLsetAnnotations(i_3, k_23);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          a_40 = ATgetArgument(t, 0);
                                          {
                                            ATerm d_24 = NULL,f_24 = NULL,j_3 = NULL;
                                            t = SSLgetAnnotations(x_39);
                                            d_24 = t;
                                            t = a_40;
                                            t = d_137(t);
                                            f_24 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, f_24);
                                            j_3 = t;
                                            t = SSLsetAnnotations(j_3, d_24);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              a_40 = ATgetArgument(t, 0);
                                              {
                                                ATerm o_24 = NULL,w_24 = NULL,k_3 = NULL;
                                                t = SSLgetAnnotations(x_39);
                                                o_24 = t;
                                                t = a_40;
                                                t = d_137(t);
                                                w_24 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, w_24);
                                                k_3 = t;
                                                t = SSLsetAnnotations(k_3, o_24);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  a_40 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm h_25 = NULL,k_25 = NULL,l_3 = NULL;
                                                    t = SSLgetAnnotations(x_39);
                                                    h_25 = t;
                                                    t = a_40;
                                                    t = d_137(t);
                                                    k_25 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, k_25);
                                                    l_3 = t;
                                                    t = SSLsetAnnotations(l_3, h_25);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm r_25 = NULL,u_25 = NULL,m_3 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      a_40 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(x_39);
                                                  r_25 = t;
                                                  t = a_40;
                                                  t = d_137(t);
                                                  u_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, u_25);
                                                  m_3 = t;
                                                  t = SSLsetAnnotations(m_3, r_25);
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
ATerm dynrule_targs_1_0 (ATerm m_137 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,y_41 = NULL;
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          r_41 = ATgetArgument(t, 0);
          {
            ATerm e_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_13);
      t = r_41;
      if(match_cons(t, sym_DynRuleId_1))
        {
          s_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_41;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm g_13 = ATgetArgument(t, 0);
          ATerm h_13 = ATgetArgument(t, 1);
          y_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_41;
    }
  else
    {
      t = c_13;
      {
        ATerm i_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                r_41 = ATgetArgument(t, 0);
                {
                  ATerm m_13 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_13);
            t = r_41;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_41;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm n_13 = ATgetArgument(t, 0);
                ATerm o_13 = ATgetArgument(t, 1);
                y_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_41;
          }
        else
          {
            t = i_13;
            if(match_cons(t, sym_AddDynRule_2))
              {
                r_41 = ATgetArgument(t, 0);
                {
                  ATerm p_13 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = r_41;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_41;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm q_13 = ATgetArgument(t, 0);
                ATerm r_13 = ATgetArgument(t, 1);
                y_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_41;
          }
      }
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm v_42 = NULL;
  ATerm s_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_42 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = v_42;
    }
  else
    {
      t = s_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_42;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm d_43 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_43 = ATgetArgument(t, 0);
          {
            ATerm z_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_13);
      t = d_43;
    }
  else
    {
      t = x_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_43;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm o_42 = NULL;
  ATerm a_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_14 = ATgetArgument(t, 0);
          ATerm f_14 = ATgetArgument(t, 1);
          o_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(d_14);
      t = o_42;
      t = map_1_0(j_2, t);
    }
  else
    {
      t = a_14;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm h_14 = ATgetArgument(t, 0);
          ATerm k_14 = ATgetArgument(t, 1);
          o_42 = ATgetArgument(t, 2);
          {
            ATerm n_14 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = o_42;
      t = map_1_0(k_2, t);
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm l_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_44);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm u_14 = t;
              int v_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_44 = NULL,u_44 = NULL,y_44 = NULL,z_44 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_44 = ATgetArgument(t, 0);
                      u_44 = ATgetArgument(t, 1);
                      y_44 = ATgetArgument(t, 2);
                      z_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_44;
                  t = map_1_0(o_2, t);
                  LocalPopChoice(v_14);
                }
              else
                {
                  t = u_14;
                  {
                    ATerm w_14 = t;
                    int x_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_14);
                      }
                    else
                      {
                        t = w_14;
                        t = dynrule_targs_1_0(r_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm h_45 = NULL;
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_45 = ATgetArgument(t, 0);
          {
            ATerm b_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_14);
      t = h_45;
    }
  else
    {
      t = y_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_45;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = map_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm o_45 = NULL;
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_45 = ATgetArgument(t, 0);
          {
            ATerm e_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_15);
      t = o_45;
    }
  else
    {
      t = c_15;
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
static ATerm a_3 (ATerm t)
{
  ATerm s_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_45);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      {
        ATerm h_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_15);
          }
        else
          {
            t = h_15;
            {
              ATerm k_15 = t;
              int l_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_45 = NULL,v_45 = NULL,y_45 = NULL,e_46 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_45 = ATgetArgument(t, 0);
                      v_45 = ATgetArgument(t, 1);
                      y_45 = ATgetArgument(t, 2);
                      e_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_45;
                  t = map_1_0(d_3, t);
                  LocalPopChoice(l_15);
                }
              else
                {
                  t = k_15;
                  {
                    ATerm m_15 = t;
                    int p_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_15);
                      }
                    else
                      {
                        t = m_15;
                        t = dynrule_targs_1_0(e_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm p_46 = NULL;
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_46 = ATgetArgument(t, 0);
          {
            ATerm s_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_15);
      t = p_46;
    }
  else
    {
      t = q_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_46;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = map_1_0(n_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm z_46 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_46 = ATgetArgument(t, 0);
          {
            ATerm v_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_15);
      t = z_46;
    }
  else
    {
      t = t_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_46;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm d_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_47);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm a_16 = t;
              int b_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_47 = NULL,h_47 = NULL,m_47 = NULL,s_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_47 = ATgetArgument(t, 0);
                      h_47 = ATgetArgument(t, 1);
                      m_47 = ATgetArgument(t, 2);
                      s_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_47;
                  t = map_1_0(q_3, t);
                  LocalPopChoice(b_16);
                }
              else
                {
                  t = a_16;
                  {
                    ATerm c_16 = t;
                    int d_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_16);
                      }
                    else
                      {
                        t = c_16;
                        t = dynrule_targs_1_0(r_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm h_48 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_48 = ATgetArgument(t, 0);
          {
            ATerm g_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_16);
      t = h_48;
    }
  else
    {
      t = e_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_48;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = map_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm p_48 = NULL;
  ATerm i_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_48 = ATgetArgument(t, 0);
          {
            ATerm l_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_16);
      t = p_48;
    }
  else
    {
      t = i_16;
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
static ATerm u_3 (ATerm t)
{
  ATerm x_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_48);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm v_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_16);
          }
        else
          {
            t = v_16;
            {
              ATerm a_17 = t;
              int d_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_49 = NULL,b_49 = NULL,d_49 = NULL,g_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_49 = ATgetArgument(t, 0);
                      b_49 = ATgetArgument(t, 1);
                      d_49 = ATgetArgument(t, 2);
                      g_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_49;
                  t = map_1_0(x_3, t);
                  LocalPopChoice(d_17);
                }
              else
                {
                  t = a_17;
                  {
                    ATerm e_17 = t;
                    int f_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_17);
                      }
                    else
                      {
                        t = e_17;
                        t = dynrule_targs_1_0(y_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_49 = NULL;
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_49 = ATgetArgument(t, 0);
          {
            ATerm i_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_17);
      t = n_49;
    }
  else
    {
      t = g_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_49;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = map_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm s_49 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_49 = ATgetArgument(t, 0);
          {
            ATerm l_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_17);
      t = s_49;
    }
  else
    {
      t = j_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_49;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm w_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_49);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            {
              ATerm r_17 = t;
              int s_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_49 = ATgetArgument(t, 0);
                      z_49 = ATgetArgument(t, 1);
                      a_50 = ATgetArgument(t, 2);
                      b_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_50;
                  t = map_1_0(d_4, t);
                  LocalPopChoice(s_17);
                }
              else
                {
                  t = r_17;
                  {
                    ATerm t_17 = t;
                    int x_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_17);
                      }
                    else
                      {
                        t = t_17;
                        t = dynrule_targs_1_0(e_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm i_50 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_50 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = i_50;
    }
  else
    {
      t = y_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_50;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = map_1_0(g_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_50 = NULL;
  ATerm b_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_50 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = n_50;
    }
  else
    {
      t = b_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_50;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm j_44 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      j_44 = ATgetArgument(t, 0);
      t = j_44;
      t = free_vars_3_0(l_2, m_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          j_44 = ATgetArgument(t, 0);
          t = j_44;
          t = free_vars_3_0(a_3, b_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              j_44 = ATgetArgument(t, 0);
              t = j_44;
              t = free_vars_3_0(o_3, p_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  j_44 = ATgetArgument(t, 0);
                  t = j_44;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      j_44 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_44;
                  t = free_vars_3_0(a_4, c_4, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm o_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_51);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm l_18 = t;
              int m_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_51 = ATgetArgument(t, 0);
                      r_51 = ATgetArgument(t, 1);
                      s_51 = ATgetArgument(t, 2);
                      t_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_51;
                  t = map_1_0(k_4, t);
                  LocalPopChoice(m_18);
                }
              else
                {
                  t = l_18;
                  {
                    ATerm n_18 = t;
                    int o_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_18);
                      }
                    else
                      {
                        t = n_18;
                        t = dynrule_targs_1_0(m_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm a_52 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_52 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_18);
      t = a_52;
    }
  else
    {
      t = p_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_52;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = map_1_0(n_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm f_52 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_52 = ATgetArgument(t, 0);
          {
            ATerm v_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_18);
      t = f_52;
    }
  else
    {
      t = t_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_52;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_51 = NULL,l_51 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      l_51 = ATgetArgument(t, 0);
      t = l_51;
      if(match_cons(t, sym_Rule_3))
        {
          f_51 = ATgetArgument(t, 0);
          {
            ATerm y_18 = ATgetArgument(t, 1);
          }
          {
            ATerm z_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_51;
      t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          l_51 = ATgetArgument(t, 0);
          {
            ATerm b_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_51;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_52);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            {
              ATerm i_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_52 = ATgetArgument(t, 0);
                      v_52 = ATgetArgument(t, 1);
                      w_52 = ATgetArgument(t, 2);
                      x_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_52;
                  t = map_1_0(r_4, t);
                  LocalPopChoice(j_19);
                }
              else
                {
                  t = i_19;
                  {
                    ATerm l_19 = t;
                    int m_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_19);
                      }
                    else
                      {
                        t = l_19;
                        t = dynrule_targs_1_0(s_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm e_53 = NULL;
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_53 = ATgetArgument(t, 0);
          {
            ATerm p_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_19);
      t = e_53;
    }
  else
    {
      t = n_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_53;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = map_1_0(v_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm j_53 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_53 = ATgetArgument(t, 0);
          {
            ATerm s_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_19);
      t = j_53;
    }
  else
    {
      t = q_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_53;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm m_53 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      m_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_53);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
      n_53 = t;
      if(match_cons(t, sym_Let_2))
        {
          o_53 = ATgetArgument(t, 0);
          p_53 = ATgetArgument(t, 1);
          t = n_53;
          t = o_6(o_53, p_53, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              o_53 = ATgetArgument(t, 0);
              p_53 = ATgetArgument(t, 1);
              q_53 = ATgetArgument(t, 2);
              t = p_53;
              t = map_1_0(y_4, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  o_53 = ATgetArgument(t, 0);
                  p_53 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, o_53);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_53 = ATgetArgument(t, 0);
                      p_53 = ATgetArgument(t, 1);
                      q_53 = ATgetArgument(t, 2);
                      r_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_53;
                  t = map_1_0(z_4, t);
                }
            }
        }
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = dynrule_sargs_1_0(a_5, t);
          }
      }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm z_53 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_53 = ATgetArgument(t, 0);
          {
            ATerm a_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = z_53;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_53;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm k_54 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_54 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_20);
      t = k_54;
    }
  else
    {
      t = f_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_54;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = map_1_0(b_5, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm p_54 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_54 = ATgetArgument(t, 0);
          {
            ATerm k_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = p_54;
    }
  else
    {
      t = i_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_54;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm l_20 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_20;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL;
  q_52 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      ATerm n_20 = ATgetArgument(t, 1);
      ATerm o_20 = ATgetArgument(t, 2);
      ATerm p_20 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  r_52 = t;
  t = q_52;
  t = free_vars_3_0(o_4, p_4, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_52;
  t = free_vars_3_0(w_4, x_4, sboundin_3_0, t);
  t = filter_1_0(c_5, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_52;
  return(t);
}
ATerm partition_1_0 (ATerm j_163 (ATerm), ATerm t)
{
  static ATerm x_55 (ATerm t);
  static ATerm x_55 (ATerm t)
  {
    ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
    u_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_q_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_55 = ATgetFirst((ATermList) t);
            w_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_26 = NULL,t_26 = NULL,z_26 = NULL,b_27 = NULL,e_27 = NULL,p_27 = NULL,n_5 = NULL;
              t = SSLgetAnnotations(u_55);
              e_27 = t;
              t = v_55;
              t = j_163(t);
              r_26 = t;
              t = (ATerm) ATinsert(CheckATermList(w_55), r_26);
              n_5 = t;
              t = SSLsetAnnotations(n_5, e_27);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_20 = ATgetFirst((ATermList) t);
                  z_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_26;
              t = x_55(t);
              t_26 = t;
              t = SSL_explode_term(t_26);
              if(match_cons(t, sym__2))
                {
                  ATerm y_20 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm z_20 = ATgetArgument(t, 1);
                    if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
                      {
                        b_27 = ATgetFirst((ATermList) z_20);
                        {
                          ATerm a_21 = (ATerm) ATgetNext((ATermList) z_20);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(t_26);
              if(match_cons(t, sym__2))
                {
                  ATerm b_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm c_21 = ATgetArgument(t, 1);
                    if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
                      {
                        ATerm d_21 = ATgetFirst((ATermList) c_21);
                        ATerm e_21 = (ATerm) ATgetNext((ATermList) c_21);
                        if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
                          {
                            p_27 = ATgetFirst((ATermList) e_21);
                            {
                              ATerm f_21 = (ATerm) ATgetNext((ATermList) e_21);
                            }
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_27), r_26), p_27);
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              {
                ATerm f_28 = NULL,j_28 = NULL,m_28 = NULL,n_28 = NULL,x_28 = NULL,p_5 = NULL;
                t = SSLgetAnnotations(u_55);
                n_28 = t;
                t = (ATerm) ATinsert(CheckATermList(w_55), v_55);
                p_5 = t;
                t = SSLsetAnnotations(p_5, n_28);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm g_21 = ATgetFirst((ATermList) t);
                    j_28 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_28;
                t = x_55(t);
                f_28 = t;
                t = SSL_explode_term(f_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_21 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_21) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm j_21 = ATgetArgument(t, 1);
                      if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
                        {
                          m_28 = ATgetFirst((ATermList) j_21);
                          {
                            ATerm k_21 = (ATerm) ATgetNext((ATermList) j_21);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(f_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_21 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) l_21) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm m_21 = ATgetArgument(t, 1);
                      if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
                        {
                          ATerm p_21 = ATgetFirst((ATermList) m_21);
                          ATerm q_21 = (ATerm) ATgetNext((ATermList) m_21);
                          if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
                            {
                              x_28 = ATgetFirst((ATermList) q_21);
                              {
                                ATerm t_21 = (ATerm) ATgetNext((ATermList) q_21);
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, m_28, (ATerm) ATinsert(CheckATermList(x_28), v_55));
              }
            }
        }
      }
    return(t);
  }
  t = x_55(t);
  return(t);
}
static ATerm z_6 (ATerm c_26, ATerm b_26, ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL;
  t = c_26;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      b_56 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_56;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, a_56, b_26), b_56);
  return(t);
}
static ATerm a_7 (ATerm u_158 (ATerm), ATerm v_158 (ATerm), ATerm k_70, ATerm j_70, ATerm t)
{
  t = v_158(t);
  {
    static ATerm d_5 (ATerm t);
    static ATerm d_5 (ATerm t)
    {
      ATerm c_56 = NULL;
      c_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_70, c_56);
      t = u_158(t);
      return(t);
    }
    t = fetch_1_0(d_5, t);
  }
  t = j_70;
  return(t);
}
static ATerm b_7 (ATerm r_158 (ATerm), ATerm g_70, ATerm f_70, ATerm t)
{
  static ATerm s_56 (ATerm t);
  static ATerm s_56 (ATerm t)
  {
    ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
    n_56 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_70;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_56 = ATgetFirst((ATermList) t);
            p_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_56;
              {
                static ATerm e_5 (ATerm t);
                static ATerm e_5 (ATerm t)
                {
                  t = f_70;
                  return(t);
                }
                t = a_7(r_158, e_5, o_56, p_56, t);
              }
              t = s_56(t);
              LocalPopChoice(x_21);
            }
          else
            {
              t = u_21;
              {
                ATerm c_29 = NULL,f_29 = NULL,a_6 = NULL;
                t = SSLgetAnnotations(n_56);
                c_29 = t;
                t = p_56;
                t = s_56(t);
                f_29 = t;
                t = (ATerm) ATinsert(CheckATermList(f_29), o_56);
                a_6 = t;
                t = SSLsetAnnotations(a_6, c_29);
              }
            }
        }
      }
    return(t);
  }
  t = g_70;
  t = s_56(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm t)
{
  static ATerm a_57 (ATerm t);
  static ATerm a_57 (ATerm t)
  {
    ATerm y_21 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_143(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = y_21;
        {
          ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,g_6 = NULL;
          t = f_143(t);
          z_56 = t;
          if(match_cons(t, sym__2))
            {
              v_56 = ATgetArgument(t, 0);
              w_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_56);
          u_56 = t;
          t = v_56;
          t = h_143(t);
          x_56 = t;
          t = w_56;
          t = a_57(t);
          y_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_56, y_56);
          g_6 = t;
          t = SSLsetAnnotations(g_6, u_56);
          t = g_143(t);
        }
      }
    return(t);
  }
  t = a_57(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_20;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_57 = ATgetFirst((ATermList) t);
      p_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(match_cons(c_22, sym__2))
        {
          q_57 = ATgetArgument(c_22, 0);
          r_57 = ATgetArgument(c_22, 1);
        }
      else
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(match_cons(d_22, sym__2))
          {
            s_57 = ATgetArgument(d_22, 0);
            t_57 = ATgetArgument(d_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_57), q_57), (ATerm) ATinsert(CheckATermList(t_57), r_57));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL;
  if(match_cons(t, sym__2))
    {
      u_57 = ATgetArgument(t, 0);
      v_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(m_5, u_57, v_57, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm w_57 = NULL;
  if(match_cons(t, sym__2))
    {
      w_57 = ATgetArgument(t, 0);
      if((w_57 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm x_57 = NULL;
  if(match_cons(t, sym__2))
    {
      x_57 = ATgetArgument(t, 0);
      if((x_57 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm f_160 (ATerm), ATerm g_160 (ATerm), ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
  l_57 = t;
  m_57 = t;
  t = SSL_explode_term(m_57);
  if(match_cons(t, sym__2))
    {
      d_57 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_57);
  f_57 = t;
  t = b_57;
  t = genzip_4_0(g_5, h_5, j_5, f_160, t);
  if(match_cons(t, sym__2))
    {
      e_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(d_57, e_57);
  k_57 = t;
  t = SSLsetAnnotations(k_57, f_57);
  t = g_160(t);
  if(match_cons(t, sym__2))
    {
      g_57 = ATgetArgument(t, 0);
      h_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_57;
  t = foldr_2_0(k_5, l_5, t);
  j_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_57, j_57);
  t = b_7(q_5, h_57, j_57, t);
  i_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_57, i_57);
  return(t);
}
ATerm collect_split_1_0 (ATerm d_160 (ATerm), ATerm t)
{
  static ATerm a_58 (ATerm t);
  static ATerm a_58 (ATerm t)
  {
    static ATerm r_5 (ATerm t);
    static ATerm r_5 (ATerm t)
    {
      ATerm e_22 = t;
      int f_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_160(t);
          LocalPopChoice(f_22);
        }
      else
        {
          t = e_22;
          {
            ATerm y_57 = NULL;
            y_57 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_57, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(a_58, r_5, t);
    return(t);
  }
  t = a_58(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      e_58 = ATgetArgument(t, 0);
      f_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(e_58, f_58, t);
  return(t);
}
static ATerm f_7 (ATerm v_25, ATerm w_25, ATerm x_25, ATerm y_25, ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  t = y_25;
  t = collect_split_1_0(s_5, t);
  if(match_cons(t, sym__2))
    {
      b_58 = ATgetArgument(t, 0);
      c_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_58, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, v_25, w_25, x_25, b_58)));
  t = conc_0_0(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_z_9;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_z_9;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_z_9;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      i_58 = ATgetArgument(t, 0);
      j_58 = ATgetArgument(t, 1);
      k_58 = ATgetArgument(t, 2);
      {
        ATerm p_58 = NULL;
        t = term_h_22;
        p_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_58, term_h_22);
        t = g_7(t_5, i_58, p_58, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, i_58, j_58, k_58);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          i_58 = ATgetArgument(t, 0);
          j_58 = ATgetArgument(t, 1);
          k_58 = ATgetArgument(t, 2);
          l_58 = ATgetArgument(t, 3);
          {
            ATerm u_58 = NULL;
            t = term_j_22;
            u_58 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_58, term_j_22);
            t = g_7(u_5, i_58, u_58, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, i_58, j_58, k_58, l_58);
          }
        }
      else
        {
          ATerm z_58 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              i_58 = ATgetArgument(t, 0);
              j_58 = ATgetArgument(t, 1);
              k_58 = ATgetArgument(t, 2);
              l_58 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_l_22;
          z_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_58, term_l_22);
          t = g_7(v_5, i_58, z_58, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_58, j_58, k_58, l_58);
        }
    }
  return(t);
}
static ATerm g_7 (ATerm q_150 (ATerm), ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  d_59 = t;
  t = q_150(t);
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_59, o_44, m_44);
  t = v_7(a_59, o_44, m_44, t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_59 = NULL;
        t = term_p_22;
        i_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_59, term_p_22);
        t = u_7(a_59, i_59, t);
        {
          ATerm q_22 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_22;
            }
        }
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_59 = ATgetFirst((ATermList) t);
      c_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_59, term_p_22, (ATerm) ATinsert(CheckATermList(c_59), (ATerm) ATinsert(CheckATermList(b_59), o_44)));
  t = lookup_table_0_1(a_59, t);
  h_59 = t;
  t = term_p_22;
  e_59 = t;
  t = (ATerm) ATinsert(CheckATermList(c_59), (ATerm) ATinsert(CheckATermList(b_59), o_44));
  f_59 = t;
  t = h_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(e_59, f_59, g_59, t);
  t = d_59;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  k_59 = t;
  t = term_v_22;
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_59, term_v_22);
  t = g_7(x_5, k_59, l_59, t);
  t = k_59;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_z_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm j_59 = NULL;
  j_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_22), term_w_22);
  t = map_1_0(w_5, t);
  t = j_59;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,a_8 = NULL;
  y_59 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_59);
  v_59 = t;
  t = w_59;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(b_6, t);
  t = concat_0_0(t);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_59);
  a_8 = t;
  t = SSLsetAnnotations(a_8, v_59);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL;
  d_60 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_59 = ATgetArgument(t, 0);
      a_60 = ATgetArgument(t, 1);
      b_60 = ATgetArgument(t, 2);
      c_60 = ATgetArgument(t, 3);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_60;
            t = f_7(z_59, a_60, b_60, c_60, t);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = (ATerm) ATinsert(ATempty, d_60);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, d_60);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,f_8 = NULL,e_8 = NULL;
  t = declare_standard_strategies_0_0(t);
  u_59 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_59);
  n_59 = t;
  t = o_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_59 = ATgetFirst((ATermList) t);
      r_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_59);
  p_59 = t;
  t = r_59;
  t = Cons_2_0(y_5, z_5, t);
  s_59 = t;
  t = (ATerm) ATinsert(CheckATermList(s_59), q_59);
  e_8 = t;
  t = SSLsetAnnotations(e_8, p_59);
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_59);
  f_8 = t;
  t = SSLsetAnnotations(f_8, n_59);
  return(t);
}
static ATerm h_7 (ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm k_60 = NULL;
  t = SSL_fputc(s_35, t_35);
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_60);
  return(t);
}
static ATerm i_7 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm l_60 = NULL;
  t = SSL_write_term_to_stream_text(y_33, z_33);
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_60);
  return(t);
}
static ATerm k_7 (ATerm c_146 (ATerm), ATerm l_265, ATerm e_34, ATerm t)
{
  ATerm m_60 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_265, term_d_23);
  t = o_7(t);
  m_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_60, e_34);
  t = c_146(t);
  t = fclose_0_0(t);
  t = e_34;
  return(t);
}
static ATerm j_7 (ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm n_60 = NULL;
  t = SSL_write_term_to_stream_baf(u_33, v_33);
  n_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_60);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(match_cons(f_23, sym_Stream_1))
        {
          u_60 = ATgetArgument(f_23, 0);
        }
      else
        _fail(t);
      v_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(u_60, v_60, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      if(match_cons(g_23, sym_Stream_1))
        {
          z_60 = ATgetArgument(g_23, 0);
        }
      else
        _fail(t);
      a_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(z_60, a_61, t);
  w_60 = t;
  t = term_i_23;
  x_60 = t;
  t = w_60;
  if(match_cons(t, sym_Stream_1))
    {
      y_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_23, w_60);
  t = h_7(x_60, y_60, t);
  return(t);
}
ATerm output_1_0 (ATerm f_172 (ATerm), ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL;
  t = f_172(t);
  p_60 = t;
  {
    ATerm j_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_60 = NULL,r_60 = NULL;
        t = term_o_23;
        q_60 = t;
        t = term_v_23;
        r_60 = t;
        t = term_y_23;
        t = u_7(q_60, r_60, t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = j_23;
        t = term_z_23;
      }
  }
  o_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_60 = NULL,t_60 = NULL;
        t = term_o_23;
        s_60 = t;
        t = term_c_24;
        t_60 = t;
        t = term_e_24;
        t = u_7(s_60, t_60, t);
        t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
        LocalPopChoice(b_24);
        if(match_cons(t, sym__2))
          {
            ATerm g_24 = ATgetArgument(t, 0);
            ATerm i_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_7(d_6, o_60, p_60, t);
      }
    else
      {
        t = a_24;
        if(match_cons(t, sym__2))
          {
            ATerm l_24 = ATgetArgument(t, 0);
            ATerm m_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_7(e_6, o_60, p_60, t);
      }
  }
  return(t);
}
static ATerm o_61 (ATerm i_61, ATerm t)
{
  t = SSL_fclose(i_61);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL;
  m_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_61 = ATgetArgument(t, 0);
      {
        ATerm n_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_61);
            LocalPopChoice(v_24);
          }
        else
          {
            t = n_24;
            t = o_61(m_61, t);
          }
      }
    }
  else
    {
      t = o_61(m_61, t);
    }
  return(t);
}
static ATerm l_7 (ATerm a_34, ATerm t)
{
  t = SSL_read_term_from_stream(a_34);
  return(t);
}
static ATerm m_7 (ATerm q_79, ATerm r_79, ATerm t)
{
  t = SSL_strcat(q_79, r_79);
  return(t);
}
static ATerm n_7 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm p_61 = NULL;
  t = SSL_fopen(u_35, v_35);
  p_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_61);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_61 = NULL;
  t = SSL_stdin_stream();
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_61);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_61 = NULL;
  t = SSL_stdout_stream();
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_61);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_61 = NULL;
  t = SSL_stderr_stream();
  s_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_61);
  return(t);
}
static ATerm z_62 (ATerm y_61, ATerm t)
{
  ATerm z_61 = NULL;
  t = SSL_explode_term(y_61);
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_24 = ATgetArgument(t, 1);
        if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
          {
            z_61 = ATgetFirst((ATermList) y_24);
            {
              ATerm a_25 = (ATerm) ATgetNext((ATermList) y_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_61;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_61;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_61;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_61;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_63 (ATerm c_62, ATerm d_62, ATerm e_62, ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,k_62 = NULL,k_8 = NULL;
  t = SSLgetAnnotations(e_62);
  h_62 = t;
  t = c_62;
  if(match_cons(t, sym_Path_1))
    {
      k_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_62, d_62);
  k_8 = t;
  t = SSLsetAnnotations(k_8, h_62);
  if(match_cons(t, sym__2))
    {
      f_62 = ATgetArgument(t, 0);
      g_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(f_62, g_62, t);
  return(t);
}
static ATerm b_63 (ATerm m_62, ATerm n_62, ATerm o_62, ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,u_62 = NULL,s_8 = NULL;
  t = SSLgetAnnotations(o_62);
  r_62 = t;
  t = SSL_is_string(m_62);
  u_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_62, n_62);
  s_8 = t;
  t = SSLsetAnnotations(s_8, r_62);
  if(match_cons(t, sym__2))
    {
      p_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(p_62, q_62, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
  w_62 = t;
  if(match_cons(t, sym__2))
    {
      x_62 = ATgetArgument(t, 0);
      y_62 = ATgetArgument(t, 1);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_62(w_62, t);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm d_25 = t;
              int e_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_63(x_62, y_62, w_62, t);
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = d_25;
                  t = b_63(x_62, y_62, w_62, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_62(w_62, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,k_63 = NULL;
  k_63 = t;
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_63, term_j_25);
        t = o_7(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm t_29 = NULL,v_29 = NULL;
          t = term_l_25;
          v_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_25, k_63);
          t = m_7(v_29, k_63, t);
          t_29 = t;
          t = SSL_perror(t_29);
          _fail(t);
        }
      }
  }
  e_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(f_63, t);
  d_63 = t;
  t = e_63;
  t = fclose_0_0(t);
  t = d_63;
  return(t);
}
ATerm input_1_0 (ATerm g_172 (ATerm), ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_63 = NULL,o_63 = NULL;
      t = term_o_23;
      n_63 = t;
      t = term_p_25;
      o_63 = t;
      t = term_q_25;
      t = u_7(n_63, o_63, t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      t = term_s_25;
    }
  t = ReadFromFile_0_0(t);
  t = g_172(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  t = term_o_23;
  p_63 = t;
  t = term_z_25;
  q_63 = t;
  t = term_a_26;
  t = u_7(p_63, q_63, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_26 = ATgetFirst((ATermList) t);
                ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_63;
          }
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATinsert(ATempty, s_63);
      }
  }
  t_63 = t;
  t = term_z_23;
  u_63 = t;
  t = SSL_printnl(u_63, t_63);
  t = s_63;
  return(t);
}
ATerm map_1_0 (ATerm z_155 (ATerm), ATerm t)
{
  static ATerm m_64 (ATerm t);
  static ATerm m_64 (ATerm t)
  {
    ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
    j_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_64;
      }
    else
      {
        ATerm m_30 = NULL,p_30 = NULL,q_30 = NULL,t_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_64 = ATgetFirst((ATermList) t);
            l_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_64);
        m_30 = t;
        t = k_64;
        t = z_155(t);
        p_30 = t;
        t = l_64;
        t = m_64(t);
        q_30 = t;
        t = (ATerm) ATinsert(CheckATermList(q_30), p_30);
        t_9 = t;
        t = SSLsetAnnotations(t_9, m_30);
      }
    return(t);
  }
  t = m_64(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_64 = ATgetFirst((ATermList) t);
      q_64 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_64 = NULL,v_64 = NULL;
        static ATerm f_6 (ATerm t);
        static ATerm f_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_64)), not_null(v_64));
          return(t);
        }
        t = q_64;
        t = r_0(t);
        if(((u_64 != NULL) && (u_64 != t)))
          _fail(t);
        else
          u_64 = t;
        t = p_64;
        t = p_0(t);
        if(((v_64 != NULL) && (v_64 != t)))
          _fail(t);
        else
          v_64 = t;
        t = q_64;
        t = reverse_acc_2_0(p_0, f_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_10;
      t = r_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_10 = NULL;
  g_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_65);
  e_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_65);
  h_10 = t;
  t = SSLsetAnnotations(h_10, e_65);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm k_65 = NULL;
  k_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_65), term_i_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm e_174 (ATerm), ATerm f_174 (ATerm), ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_65 = NULL,d_65 = NULL;
      t = term_o_23;
      c_65 = t;
      t = term_z_25;
      d_65 = t;
      t = term_a_26;
      t = u_7(c_65, d_65, t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      t = fetch_1_0(l_6, t);
    }
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_174(t);
        t = echo_0_0(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
      }
  }
  t = term_n_26;
  t = echo_0_0(t);
  t = term_o_26;
  a_65 = t;
  t = term_p_26;
  b_65 = t;
  t = term_q_26;
  t = u_7(a_65, b_65, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(n_6, t);
  t = term_s_26;
  t = echo_0_0(t);
  {
    ATerm a_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_174(t);
        {
          ATerm d_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_65 = NULL;
              l_65 = t;
              t = SSL_is_string(l_65);
              t = l_65;
              LocalPopChoice(i_27);
              {
                ATerm m_65 = NULL;
                m_65 = t;
                t = (ATerm) ATinsert(ATempty, m_65);
              }
            }
          else
            {
              t = d_27;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = a_27;
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,j_10 = NULL;
  v_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_65);
  t_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_65);
  j_10 = t;
  t = SSLsetAnnotations(j_10, t_65);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_65 = NULL;
  q_65 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_65 = NULL,s_65 = NULL;
        t = term_o_23;
        r_65 = t;
        t = term_z_25;
        s_65 = t;
        t = term_a_26;
        t = u_7(r_65, s_65, t);
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = fetch_1_0(p_6, t);
      }
  }
  t = q_65;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm x_65 = NULL;
  x_65 = t;
  if(match_string(t, "-k"))
    {
      t = x_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_65;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  y_65 = t;
  t = SSL_string_to_int(y_65);
  z_65 = t;
  t = term_m_27;
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_27, z_65);
  t = x_7(a_66, z_65, t);
  t = y_65;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, r_6, t_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm c_66 = NULL;
  c_66 = t;
  if(match_string(t, "-S"))
    {
      t = c_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_66;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL;
  t = term_o_27;
  d_66 = t;
  t = term_q_27;
  e_66 = t;
  t = term_s_27;
  t = x_7(d_66, e_66, t);
  t = term_t_27;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  f_66 = t;
  t = SSL_string_to_int(f_66);
  g_66 = t;
  t = term_o_27;
  h_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_27, g_66);
  t = x_7(h_66, g_66, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_66);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL;
  t = term_y_27;
  i_66 = t;
  t = term_b_10;
  j_66 = t;
  t = term_b_28;
  t = x_7(i_66, j_66, t);
  t = term_c_28;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, w_6, t);
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm i_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_6, d_7, e_7, t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = i_28;
            t = Option_3_0(q_7, t_7, g_8, t);
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL;
  t = term_o_23;
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_23, u_39, v_39);
  t = lookup_table_0_1(k_66, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(u_39, v_39, l_66, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_23, u_39, v_39);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
      t = term_b_10;
      t = g_0(t);
      r_66 = t;
      t = term_o_26;
      s_66 = t;
      t = term_p_26;
      t_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, r_66);
      t = v_7(s_66, t_66, r_66, t);
      _fail(t);
    }
  else
    {
      ATerm w_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_66 = ATgetFirst((ATermList) t);
          q_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_66;
      t = d_0(t);
      t = term_b_10;
      t = f_0(t);
      w_66 = t;
      t = (ATerm) ATinsert(CheckATermList(q_66), w_66);
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm y_66 = NULL;
  y_66 = t;
  if(match_string(t, "-o"))
    {
      t = y_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_66;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL;
  z_66 = t;
  t = term_v_23;
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, z_66);
  t = x_7(a_67, z_66, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_66);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_8, i_8, j_8, t);
  return(t);
}
static ATerm v_7 (ATerm c_46, ATerm d_46, ATerm b_46, ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL;
  c_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
        t = u_7(c_46, d_46, t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
  }
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_46, d_46, (ATerm) ATinsert(CheckATermList(d_67), b_46));
  t = lookup_table_0_1(c_46, t);
  g_67 = t;
  t = (ATerm) ATinsert(CheckATermList(d_67), b_46);
  e_67 = t;
  t = g_67;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(d_46, e_67, f_67, t);
  t = c_67;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_67 = NULL,s_67 = NULL,y_67 = NULL;
      t = term_b_10;
      t = n_0(t);
      r_67 = t;
      t = term_o_26;
      s_67 = t;
      t = term_p_26;
      y_67 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, r_67);
      t = v_7(s_67, y_67, r_67, t);
      _fail(t);
    }
  else
    {
      ATerm c_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_67 = ATgetFirst((ATermList) t);
          o_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_67 = ATgetFirst((ATermList) t);
          q_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_67;
      t = j_0(t);
      t = p_67;
      t = l_0(t);
      c_68 = t;
      t = (ATerm) ATinsert(CheckATermList(q_67), c_68);
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm e_68 = NULL;
  e_68 = t;
  if(match_string(t, "-i"))
    {
      t = e_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_68;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL;
  f_68 = t;
  t = term_p_25;
  g_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_25, f_68);
  t = x_7(g_68, f_68, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_68);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_8, m_8, n_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_10;
  t = whoami_0_0(t);
  h_68 = t;
  t = term_u_28;
  j_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_28), h_68);
  k_68 = t;
  t = SSL_printnl(j_68, k_68);
  t = term_w_28;
  i_68 = t;
  t = SSL_exit(i_68);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL;
  t = term_o_23;
  l_68 = t;
  t = term_z_25;
  m_68 = t;
  t = term_a_26;
  t = u_7(l_68, m_68, t);
  return(t);
}
static ATerm p_7 (ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_42, u_42);
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      t = SSL_addr(t_42, u_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_161 (ATerm), ATerm v_161 (ATerm), ATerm t)
{
  ATerm o_68 = NULL,r_68 = NULL,s_68 = NULL;
  o_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_68;
      t = u_161(t);
    }
  else
    {
      ATerm v_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_68 = ATgetFirst((ATermList) t);
          s_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_68;
      t = foldr_2_0(u_161, v_161, t);
      v_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_68, v_68);
      t = v_161(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_q_27;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm e_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(e_31, g_31, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_68 = NULL,y_30 = NULL,a_31 = NULL;
  t = times_0_0(t);
  a_31 = t;
  t = SSL_explode_term(a_31);
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_30;
  t = foldr_2_0(o_8, p_8, t);
  y_68 = t;
  t = SSL_TicksToSeconds(y_68);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  j_69 = t;
  if(match_cons(t, sym__2))
    {
      k_69 = ATgetArgument(t, 0);
      l_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_69;
        if((k_69 != t))
          {
            _fail(t);
          }
        t = j_69;
        LocalPopChoice(d_29);
      }
    else
      {
        t = b_29;
        t = (ATerm) ATmakeAppl(sym__2, k_69, l_69);
        {
          ATerm e_29 = t;
          int g_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_69, l_69);
              LocalPopChoice(g_29);
            }
          else
            {
              t = e_29;
              t = SSL_gtr(k_69, l_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_69, l_69);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_147 (ATerm), ATerm t)
{
  ATerm p_69 = NULL;
  p_69 = t;
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
        t = term_o_23;
        s_69 = t;
        t = term_o_27;
        t_69 = t;
        t = term_j_29;
        t = u_7(s_69, t_69, t);
        r_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_69, term_w_28);
        t = geq_0_0(t);
        t = p_69;
        t = u_147(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = p_69;
      }
  }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,y_69 = NULL,z_69 = NULL;
  t = run_time_0_0(t);
  v_69 = t;
  t = term_b_10;
  t = whoami_0_0(t);
  w_69 = t;
  t = term_u_28;
  y_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_29), v_69), term_k_29), w_69);
  z_69 = t;
  t = SSL_printnl(y_69, z_69);
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_29), v_69), term_k_29), w_69));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_70 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_27;
  a_70 = t;
  t = SSL_exit(a_70);
  return(t);
}
static ATerm y_7 (ATerm u_50, ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm b_70 = NULL;
  t = SSL_hashtable_put(w_50, u_50, v_50);
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_70);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_47, ATerm t)
{
  ATerm t_70 = NULL;
  t = table_hashtable_0_0(t);
  t_70 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_32 = NULL;
        t = t_70;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_7(o_47, c_32, t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        {
          ATerm n_32 = NULL;
          t = o_47;
          t = table_create_0_0(t);
          t = t_70;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(o_47, n_32, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_51, ATerm d_51, ATerm t)
{
  ATerm w_70 = NULL;
  t = SSL_hashtable_create(c_51, d_51);
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_70);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,i_71 = NULL,j_71 = NULL;
  x_70 = t;
  t = term_o_29;
  i_71 = t;
  t = term_p_29;
  j_71 = t;
  t = x_70;
  t = new_hashtable_0_2(i_71, j_71, t);
  y_70 = t;
  t = x_70;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(x_70, y_70, z_70, t);
  t = x_70;
  return(t);
}
static ATerm r_7 (ATerm z_50, ATerm a_51, ATerm t)
{
  ATerm k_71 = NULL;
  t = SSL_hashtable_remove(a_51, z_50);
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_71);
  return(t);
}
static ATerm s_7 (ATerm e_51, ATerm t)
{
  ATerm l_71 = NULL;
  t = SSL_hashtable_destroy(e_51);
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_71);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_71 = NULL;
  t = SSL_table_hashtable();
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_71);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
  n_71 = t;
  t = table_hashtable_0_0(t);
  o_71 = t;
  t = lookup_table_0_1(n_71, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(q_71, t);
  t = o_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(n_71, p_71, t);
  t = n_71;
  return(t);
}
ATerm fetch_1_0 (ATerm h_156 (ATerm), ATerm t)
{
  static ATerm r_72 (ATerm t);
  static ATerm r_72 (ATerm t)
  {
    ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
    o_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_72 = ATgetFirst((ATermList) t);
        q_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_33 = NULL,e_33 = NULL,l_10 = NULL;
          t = SSLgetAnnotations(o_72);
          b_33 = t;
          t = p_72;
          t = h_156(t);
          e_33 = t;
          t = (ATerm) ATinsert(CheckATermList(q_72), e_33);
          l_10 = t;
          t = SSLsetAnnotations(l_10, b_33);
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
          {
            ATerm d_34 = NULL,i_34 = NULL,m_10 = NULL;
            t = SSLgetAnnotations(o_72);
            d_34 = t;
            t = q_72;
            t = r_72(t);
            i_34 = t;
            t = (ATerm) ATinsert(CheckATermList(i_34), p_72);
            m_10 = t;
            t = SSLsetAnnotations(m_10, d_34);
          }
        }
    }
    return(t);
  }
  t = r_72(t);
  return(t);
}
static ATerm z_7 (ATerm x_50, ATerm y_50, ATerm t)
{
  t = SSL_hashtable_get(y_50, x_50);
  return(t);
}
static ATerm u_7 (ATerm v_47, ATerm w_47, ATerm t)
{
  ATerm u_72 = NULL;
  t = lookup_table_0_1(v_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(w_47, u_72, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL;
  t = term_s_29;
  w_72 = t;
  t = term_b_10;
  x_72 = t;
  t = term_u_29;
  t = x_7(w_72, x_72, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_w_29;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm y_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
  t = term_s_29;
  b_73 = t;
  t = term_b_10;
  c_73 = t;
  t = term_u_29;
  t = x_7(b_73, c_73, t);
  t = term_x_29;
  y_72 = t;
  t = term_b_10;
  a_73 = t;
  t = term_y_29;
  t = x_7(y_72, a_73, t);
  t = term_z_29;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_8, t_8, u_8, t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      t = Option_3_0(v_8, x_8, y_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,p_10 = NULL;
  i_73 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_73 = ATgetFirst((ATermList) t);
      f_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_73);
  d_73 = t;
  t = e_73;
  t = c_112(t);
  g_73 = t;
  t = f_73;
  t = d_112(t);
  h_73 = t;
  t = (ATerm) ATinsert(CheckATermList(h_73), g_73);
  p_10 = t;
  t = SSLsetAnnotations(p_10, d_73);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_173 (ATerm), ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,s_73 = NULL,t_73 = NULL,r_10 = NULL;
  n_73 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_30;
        t = z_173(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
      }
  }
  t = n_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_73 = ATgetFirst((ATermList) t);
      q_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_73);
  o_73 = t;
  t = term_z_25;
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_25, p_73);
  t = x_7(t_73, p_73, t);
  t = q_73;
  {
    static ATerm d_74 (ATerm t);
    static ATerm d_74 (ATerm t)
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_73 = NULL;
              w_73 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_73;
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              t = z_173(t);
              t = Cons_2_0(_id, d_74, t);
            }
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          {
            ATerm z_73 = NULL,a_74 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_73 = ATgetFirst((ATermList) t);
                a_74 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_74), (ATerm) ATmakeAppl(sym_Undefined_1, z_73));
          }
        }
      return(t);
    }
    t = d_74(t);
  }
  s_73 = t;
  t = (ATerm) ATinsert(CheckATermList(s_73), (ATerm) ATmakeAppl(sym_Program_1, p_73));
  r_10 = t;
  t = SSLsetAnnotations(r_10, o_73);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm q_74 = NULL;
  q_74 = t;
  if(match_string(t, "--help"))
    {
      t = q_74;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_74;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_74;
        }
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL;
  t = term_k_30;
  r_74 = t;
  t = term_b_10;
  s_74 = t;
  t = term_l_30;
  t = x_7(r_74, s_74, t);
  t = term_n_30;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_o_30;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm w_173 (ATerm), ATerm x_173 (ATerm), ATerm y_173 (ATerm), ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL;
  k_74 = t;
  t = term_o_26;
  l_74 = t;
  t = term_r_30;
  t = lookup_table_0_1(l_74, t);
  p_74 = t;
  t = term_p_26;
  m_74 = t;
  t = (ATerm) ATempty;
  n_74 = t;
  t = p_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(m_74, n_74, o_74, t);
  t = k_74;
  {
    static ATerm z_8 (ATerm t);
    static ATerm z_8 (ATerm t)
    {
      ATerm s_30 = t;
      int t_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_173(t);
          LocalPopChoice(t_30);
        }
      else
        {
          t = s_30;
          {
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_9, b_9, g_9, t);
                LocalPopChoice(v_30);
              }
            else
              {
                t = u_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_8, t);
  }
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_75 = NULL;
        e_75 = t;
        {
          ATerm z_30 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_34 = NULL;
              t = e_75;
              {
                ATerm c_31 = t;
                int d_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_35 = NULL,j_35 = NULL;
                    t = term_o_23;
                    c_35 = t;
                    t = term_k_30;
                    j_35 = t;
                    t = term_f_31;
                    t = u_7(c_35, j_35, t);
                    LocalPopChoice(d_31);
                  }
                else
                  {
                    t = c_31;
                    t = fetch_1_0(h_9, t);
                  }
              }
              t = e_75;
              t = x_173(t);
              t = term_q_27;
              z_34 = t;
              t = SSL_exit(z_34);
              LocalPopChoice(b_31);
            }
          else
            {
              t = z_30;
              {
                ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
                t = term_o_23;
                q_35 = t;
                t = term_s_29;
                r_35 = t;
                t = term_h_31;
                t = u_7(q_35, r_35, t);
                t = e_75;
                t = y_173(t);
                t = term_q_27;
                p_35 = t;
                t = SSL_exit(p_35);
              }
            }
        }
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm i_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
              static ATerm i_9 (ATerm t);
              static ATerm i_9 (ATerm t)
              {
                ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,t_10 = NULL;
                k_75 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_75 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_75);
                i_75 = t;
                t = j_75;
                if(((i_74 != NULL) && (i_74 != t)))
                  _fail(t);
                else
                  i_74 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_75);
                t_10 = t;
                t = SSLsetAnnotations(t_10, i_75);
                return(t);
              }
              t = fetch_1_0(i_9, t);
              t = term_u_28;
              g_75 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_74)), term_k_31);
              h_75 = t;
              t = SSL_printnl(g_75, h_75);
              t = (ATerm) ATmakeAppl(sym__2, term_u_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_74)), term_k_31));
              t = x_173(t);
              t = term_w_28;
              f_75 = t;
              t = SSL_exit(f_75);
              LocalPopChoice(j_31);
            }
          else
            {
              t = i_31;
            }
        }
      }
  }
  j_74 = t;
  t = term_o_26;
  t = table_destroy_0_0(t);
  t = j_74;
  return(t);
}
ATerm option_wrap_5_0 (ATerm z_171 (ATerm), ATerm a_172 (ATerm), ATerm b_172 (ATerm), ATerm c_172 (ATerm), ATerm d_172 (ATerm), ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  t = parse_options_3_0(z_171, a_172, b_172, t);
  p_75 = t;
  t = term_l_31;
  t = table_create_0_0(t);
  t = term_l_31;
  q_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_31, term_m_31, p_75);
  t = lookup_table_0_1(q_75, t);
  t_75 = t;
  t = term_m_31;
  r_75 = t;
  t = t_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(r_75, p_75, s_75, t);
  t = p_75;
  t = c_172(t);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_172(t);
        t = report_success_0_0(t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            {
              ATerm t_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_9, m_9, n_9, t);
                  LocalPopChoice(u_31);
                }
              else
                {
                  t = t_31;
                  {
                    ATerm v_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(w_31);
                      }
                    else
                      {
                        t = v_31;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = input_1_0(o_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL;
  t = term_c_24;
  v_75 = t;
  t = term_b_10;
  w_75 = t;
  t = term_x_31;
  t = x_7(v_75, w_75, t);
  t = term_y_31;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = output_1_0(lift_definitions_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(j_9, default_system_usage_0_0, default_system_about_0_0, _id, k_9, t);
  return(t);
}

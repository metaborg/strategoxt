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
static ATerm term_x_31;
static ATerm term_w_31;
static ATerm term_v_31;
static ATerm term_k_31;
static ATerm term_j_31;
static ATerm term_i_31;
static ATerm term_d_31;
static ATerm term_c_31;
static ATerm term_n_30;
static ATerm term_l_30;
static ATerm term_k_30;
static ATerm term_j_30;
static ATerm term_i_30;
static ATerm term_d_30;
static ATerm term_y_29;
static ATerm term_w_29;
static ATerm term_v_29;
static ATerm term_t_29;
static ATerm term_s_29;
static ATerm term_r_29;
static ATerm term_q_29;
static ATerm term_n_29;
static ATerm term_m_29;
static ATerm term_j_29;
static ATerm term_i_29;
static ATerm term_h_29;
static ATerm term_u_28;
static ATerm term_t_28;
static ATerm term_s_28;
static ATerm term_q_28;
static ATerm term_i_28;
static ATerm term_b_28;
static ATerm term_y_27;
static ATerm term_v_27;
static ATerm term_u_27;
static ATerm term_t_27;
static ATerm term_q_27;
static ATerm term_p_27;
static ATerm term_n_27;
static ATerm term_m_27;
static ATerm term_l_27;
static ATerm term_k_27;
static ATerm term_j_27;
static ATerm term_d_27;
static ATerm term_r_26;
static ATerm term_p_26;
static ATerm term_o_26;
static ATerm term_n_26;
static ATerm term_i_26;
static ATerm term_z_25;
static ATerm term_u_25;
static ATerm term_r_25;
static ATerm term_p_25;
static ATerm term_n_25;
static ATerm term_k_25;
static ATerm term_i_25;
static ATerm term_e_24;
static ATerm term_c_24;
static ATerm term_z_23;
static ATerm term_y_23;
static ATerm term_v_23;
static ATerm term_o_23;
static ATerm term_h_23;
static ATerm term_d_23;
static ATerm term_z_22;
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
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(10);
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
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_n_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_u_25);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_p_26);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_m_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_u_27, term_b_10);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_l_27);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_b_10);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_t_29, term_b_10);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_b_10);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, (ATerm) ATempty);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_i_30);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_q_29);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_b_10);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm x_155 (ATerm), ATerm t);
static ATerm x_1 (ATerm o_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_6 (ATerm h_46, ATerm i_46, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_162 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm v_136 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm n_6 (ATerm g_27, ATerm f_27, ATerm t);
ATerm foldr_3_0 (ATerm f_161 (ATerm), ATerm g_161 (ATerm), ATerm h_161 (ATerm), ATerm t);
static ATerm r_6 (ATerm v_157 (ATerm), ATerm y_69, ATerm x_69, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm w_6 (ATerm q_881, ATerm v_881, ATerm y_88, ATerm t);
ATerm while_not_2_0 (ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_144 (ATerm), ATerm s_144 (ATerm), ATerm t_144 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm x_27 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t);
static ATerm u_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm free_vars_3_0 (ATerm z_164 (ATerm), ATerm a_165 (ATerm), ATerm b_165 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm w_136 (ATerm), ATerm t);
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
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
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
ATerm partition_1_0 (ATerm s_162 (ATerm), ATerm t);
static ATerm y_6 (ATerm c_26, ATerm b_26, ATerm t);
static ATerm z_6 (ATerm d_158 (ATerm), ATerm e_158 (ATerm), ATerm e_70, ATerm d_70, ATerm t);
static ATerm a_7 (ATerm a_158 (ATerm), ATerm a_70, ATerm z_69, ATerm t);
ATerm genzip_4_0 (ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm q_142 (ATerm), ATerm r_142 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm CollectSplit_2_0 (ATerm o_159 (ATerm), ATerm p_159 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm m_159 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm e_7 (ATerm v_25, ATerm w_25, ATerm x_25, ATerm y_25, ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm f_7 (ATerm z_149 (ATerm), ATerm m_44, ATerm j_44, ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm g_7 (ATerm s_35, ATerm t_35, ATerm t);
static ATerm h_7 (ATerm y_33, ATerm z_33, ATerm t);
static ATerm j_7 (ATerm m_145 (ATerm), ATerm q_264, ATerm e_34, ATerm t);
static ATerm i_7 (ATerm u_33, ATerm v_33, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm output_1_0 (ATerm o_171 (ATerm), ATerm t);
static ATerm n_61 (ATerm h_61, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_7 (ATerm a_34, ATerm t);
static ATerm l_7 (ATerm l_79, ATerm m_79, ATerm t);
static ATerm m_7 (ATerm u_35, ATerm v_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_62 (ATerm x_61, ATerm t);
static ATerm z_62 (ATerm b_62, ATerm c_62, ATerm d_62, ATerm t);
static ATerm a_63 (ATerm l_62, ATerm m_62, ATerm n_62, ATerm t);
static ATerm n_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm p_171 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_155 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_2_0 (ATerm n_173 (ATerm), ATerm o_173 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_7 (ATerm o_39, ATerm p_39, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_7 (ATerm w_45, ATerm x_45, ATerm v_45, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_7 (ATerm n_42, ATerm o_42, ATerm t);
ATerm foldr_2_0 (ATerm d_161 (ATerm), ATerm e_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_147 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_7 (ATerm o_50, ATerm p_50, ATerm q_50, ATerm t);
ATerm lookup_table_0_1 (ATerm i_47, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_50, ATerm x_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_7 (ATerm t_50, ATerm u_50, ATerm t);
static ATerm r_7 (ATerm y_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_155 (ATerm), ATerm t);
static ATerm y_7 (ATerm r_50, ATerm s_50, ATerm t);
static ATerm t_7 (ATerm p_47, ATerm q_47, ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_173 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm parse_options_3_0 (ATerm f_173 (ATerm), ATerm g_173 (ATerm), ATerm h_173 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm i_171 (ATerm), ATerm j_171 (ATerm), ATerm k_171 (ATerm), ATerm l_171 (ATerm), ATerm m_171 (ATerm), ATerm t);
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
ATerm at_end_1_0 (ATerm x_155 (ATerm), ATerm t)
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
        t = x_155(t);
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
static ATerm j_6 (ATerm h_46, ATerm i_46, ATerm t)
{
  ATerm y_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  t = t_7(h_46, i_46, t);
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
        t = j_6(f_3, v_2, t);
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
              ATerm s_3 = NULL;
              t = term_z_9;
              s_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_9, v_2);
              t = j_6(s_3, v_2, t);
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
                    t = j_6(b_4, v_2, t);
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
                      t = j_6(l_4, v_2, t);
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
ATerm filter_1_0 (ATerm h_162 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,e_4 = NULL,g_4 = NULL;
  a_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_4 = ATgetFirst((ATermList) t);
          g_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 = NULL,t_4 = NULL,u_4 = NULL,y_0 = NULL;
            t = SSLgetAnnotations(a_4);
            q_4 = t;
            t = e_4;
            t = h_162(t);
            t_4 = t;
            t = g_4;
            t = filter_1_0(h_162, t);
            u_4 = t;
            t = (ATerm) ATinsert(CheckATermList(u_4), t_4);
            y_0 = t;
            t = SSLsetAnnotations(y_0, q_4);
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = g_4;
            t = filter_1_0(h_162, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
      {
        ATerm f_5 = NULL,j_5 = NULL,n_5 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(r_16);
        f_5 = t;
        t = s_16;
        t = r_136(t);
        j_5 = t;
        t = t_16;
        t = r_136(t);
        n_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_5, n_5);
        a_1 = t;
        t = SSLsetAnnotations(a_1, f_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_16 = ATgetArgument(t, 0);
          t_16 = ATgetArgument(t, 1);
          o_16 = ATgetArgument(t, 2);
          {
            ATerm c_6 = NULL,h_6 = NULL,i_6 = NULL,k_6 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(r_16);
            c_6 = t;
            t = s_16;
            t = t_136(t);
            h_6 = t;
            t = t_16;
            t = t_136(t);
            i_6 = t;
            t = o_16;
            t = r_136(t);
            k_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_6, i_6, k_6);
            b_1 = t;
            t = SSLsetAnnotations(b_1, c_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              s_16 = ATgetArgument(t, 0);
              t_16 = ATgetArgument(t, 1);
              o_16 = ATgetArgument(t, 2);
              n_16 = ATgetArgument(t, 3);
              {
                ATerm c_7 = NULL,z_7 = NULL,b_8 = NULL,c_8 = NULL,f_8 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(r_16);
                c_7 = t;
                t = s_16;
                t = t_136(t);
                z_7 = t;
                t = t_16;
                t = t_136(t);
                b_8 = t;
                t = o_16;
                t = t_136(t);
                c_8 = t;
                t = n_16;
                t = r_136(t);
                f_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_7, b_8, c_8, f_8);
                e_1 = t;
                t = SSLsetAnnotations(e_1, c_7);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  s_16 = ATgetArgument(t, 0);
                  t_16 = ATgetArgument(t, 1);
                  o_16 = ATgetArgument(t, 2);
                  n_16 = ATgetArgument(t, 3);
                  {
                    ATerm w_8 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,f_1 = NULL;
                    t = SSLgetAnnotations(r_16);
                    w_8 = t;
                    t = s_16;
                    t = t_136(t);
                    c_9 = t;
                    t = t_16;
                    t = t_136(t);
                    d_9 = t;
                    t = o_16;
                    t = t_136(t);
                    e_9 = t;
                    t = n_16;
                    t = r_136(t);
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
                      s_16 = ATgetArgument(t, 0);
                      t_16 = ATgetArgument(t, 1);
                      o_16 = ATgetArgument(t, 2);
                      {
                        ATerm r_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,l_1 = NULL;
                        t = SSLgetAnnotations(r_16);
                        r_9 = t;
                        t = s_16;
                        t = t_136(t);
                        w_9 = t;
                        t = t_16;
                        t = t_136(t);
                        x_9 = t;
                        t = o_16;
                        t = t_136(t);
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
                          s_16 = ATgetArgument(t, 0);
                          t_16 = ATgetArgument(t, 1);
                          {
                            ATerm b_11 = NULL,f_11 = NULL,m_11 = NULL,a_2 = NULL;
                            t = SSLgetAnnotations(r_16);
                            b_11 = t;
                            t = s_16;
                            t = t_136(t);
                            f_11 = t;
                            t = t_16;
                            t = r_136(t);
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
                              s_16 = ATgetArgument(t, 0);
                              t_16 = ATgetArgument(t, 1);
                              {
                                ATerm y_11 = NULL,g_12 = NULL,h_12 = NULL,b_2 = NULL;
                                t = SSLgetAnnotations(r_16);
                                y_11 = t;
                                t = s_16;
                                t = t_136(t);
                                g_12 = t;
                                t = t_16;
                                t = r_136(t);
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
                                  s_16 = ATgetArgument(t, 0);
                                  t_16 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_12 = NULL,u_12 = NULL,v_12 = NULL,c_2 = NULL;
                                    t = SSLgetAnnotations(r_16);
                                    q_12 = t;
                                    t = s_16;
                                    t = t_136(t);
                                    u_12 = t;
                                    t = t_16;
                                    t = r_136(t);
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
                                      s_16 = ATgetArgument(t, 0);
                                      t_16 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(r_16);
                                  f_13 = t;
                                  t = s_16;
                                  t = t_136(t);
                                  j_13 = t;
                                  t = t_16;
                                  t = r_136(t);
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
ATerm dynrule_sargs_1_0 (ATerm v_136 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,e_18 = NULL;
  ATerm q_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          b_18 = ATgetArgument(t, 0);
          {
            ATerm u_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_10);
      t = b_18;
      if(match_cons(t, sym_DynRuleId_1))
        {
          c_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_18;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm v_10 = ATgetArgument(t, 0);
          e_18 = ATgetArgument(t, 1);
          {
            ATerm w_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_18;
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
                b_18 = ATgetArgument(t, 0);
                {
                  ATerm z_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_10);
            t = b_18;
            if(match_cons(t, sym_DynRuleId_1))
              {
                c_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_18;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_11 = ATgetArgument(t, 0);
                e_18 = ATgetArgument(t, 1);
                {
                  ATerm c_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = e_18;
          }
        else
          {
            t = x_10;
            if(match_cons(t, sym_AddDynRule_2))
              {
                b_18 = ATgetArgument(t, 0);
                {
                  ATerm d_11 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = b_18;
            if(match_cons(t, sym_DynRuleId_1))
              {
                c_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_18;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_11 = ATgetArgument(t, 0);
                e_18 = ATgetArgument(t, 1);
                {
                  ATerm g_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = e_18;
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
  ATerm z_18 = NULL;
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm q_11 = ATgetArgument(t, 0);
          z_18 = ATgetArgument(t, 1);
          {
            ATerm r_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_11);
      t = z_18;
      t = map_1_0(q_0, t);
    }
  else
    {
      t = o_11;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm s_11 = ATgetArgument(t, 0);
          z_18 = ATgetArgument(t, 1);
          {
            ATerm t_11 = ATgetArgument(t, 2);
          }
          {
            ATerm u_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = z_18;
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
static ATerm n_6 (ATerm g_27, ATerm f_27, ATerm t)
{
  t = g_27;
  t = map_1_0(u_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_161 (ATerm), ATerm g_161 (ATerm), ATerm h_161 (ATerm), ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_21;
      t = f_161(t);
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
      t = h_161(t);
      v_21 = t;
      t = s_21;
      t = foldr_3_0(f_161, g_161, h_161, t);
      w_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_21, w_21);
      t = g_161(t);
    }
  return(t);
}
static ATerm r_6 (ATerm v_157 (ATerm), ATerm y_69, ATerm x_69, ATerm t)
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
                  t = x_69;
                  return(t);
                }
                t = z_6(v_157, x_0, s_22, t_22, t);
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
  t = y_69;
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
static ATerm w_6 (ATerm q_881, ATerm v_881, ATerm y_88, ATerm t)
{
  ATerm g_23 = NULL,k_23 = NULL,m_23 = NULL,n_23 = NULL;
  t = SSL_explode_term(v_881);
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_881);
  if(match_cons(t, sym__2))
    {
      if((g_23 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_23, m_23);
  t = genzip_4_0(z_0, c_1, d_1, _id, t);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_23, y_88);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm t)
{
  static ATerm w_23 (ATerm t);
  static ATerm w_23 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_144(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = p_144(t);
        t = w_23(t);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm for_3_0 (ATerm r_144 (ATerm), ATerm s_144 (ATerm), ATerm t_144 (ATerm), ATerm t)
{
  t = r_144(t);
  t = while_not_2_0(s_144, t_144, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_24);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,p_2 = NULL;
  q_24 = t;
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_24);
  j_24 = t;
  t = p_24;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_24, p_24);
  p_2 = t;
  t = SSLsetAnnotations(p_2, j_24);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,a_27 = NULL;
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
      a_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_27(v_26, w_26, u_26, t);
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_26), x_26), a_27);
          }
      }
    }
  else
    {
      t = x_27(v_26, w_26, u_26, t);
    }
  return(t);
}
static ATerm x_27 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm w_24 = NULL,z_24 = NULL,q_2 = NULL,o_25 = NULL,t_25 = NULL,f_26 = NULL,g_26 = NULL;
  t = SSLgetAnnotations(t_24);
  w_24 = t;
  t = s_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_25 = ATgetFirst((ATermList) t);
      g_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_25;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_26;
        if((t_25 != t))
          {
            _fail(t);
          }
        t = g_26;
        LocalPopChoice(r_12);
      }
    else
      {
        t = p_12;
        t = s_24;
        t = w_6(t_25, f_26, g_26, t);
      }
  }
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_24, z_24);
  q_2 = t;
  t = SSLsetAnnotations(q_2, w_24);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      if((w_27 != ATgetArgument(t, 1)))
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
        ATerm i_27 = NULL,r_27 = NULL,s_27 = NULL;
        i_27 = t;
        if(match_cons(t, sym__2))
          {
            r_27 = ATgetArgument(t, 0);
            s_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_27;
        t = r_6(u_1, r_27, s_27, t);
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
  t = a_7(f_2, g_14, i_14, t);
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
  ATerm s_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(i_2, s_14, z_14, t);
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
ATerm free_vars_3_0 (ATerm z_164 (ATerm), ATerm a_165 (ATerm), ATerm b_165 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm r_28 (ATerm t);
  static ATerm r_28 (ATerm t)
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_164(t);
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
              t = a_165(t);
              a_28 = t;
              t = z_27;
              {
                static ATerm v_1 (ATerm t);
                static ATerm v_1 (ATerm t)
                {
                  ATerm d_28 = NULL;
                  t = r_28(t);
                  d_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_28, a_28);
                  t = diff_0_0(t);
                  return(t);
                }
                t = b_165(v_1, r_28, w_1, t);
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
                t = foldr_3_0(g_2, h_2, r_28, t);
              }
            }
        }
      }
    return(t);
  }
  t = r_28(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,s_39 = NULL,u_39 = NULL,x_39 = NULL,z_39 = NULL;
  x_39 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_39 = ATgetArgument(t, 0);
      u_39 = ATgetArgument(t, 1);
      {
        ATerm k_15 = NULL,n_15 = NULL,u_15 = NULL,t_2 = NULL;
        t = SSLgetAnnotations(x_39);
        k_15 = t;
        t = z_39;
        t = p_136(t);
        n_15 = t;
        t = u_39;
        t = n_136(t);
        u_15 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_15, u_15);
        t_2 = t;
        t = SSLsetAnnotations(t_2, k_15);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          z_39 = ATgetArgument(t, 0);
          {
            ATerm h_16 = NULL,p_16 = NULL,q_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,w_2 = NULL,u_2 = NULL;
            t = SSLgetAnnotations(x_39);
            h_16 = t;
            t = z_39;
            if(match_cons(t, sym_Rule_3))
              {
                q_16 = ATgetArgument(t, 0);
                v_16 = ATgetArgument(t, 1);
                w_16 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_39);
            p_16 = t;
            t = q_16;
            t = n_136(t);
            x_16 = t;
            t = v_16;
            t = n_136(t);
            a_17 = t;
            t = w_16;
            t = n_136(t);
            b_17 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, x_16, a_17, b_17);
            u_2 = t;
            t = SSLsetAnnotations(u_2, p_16);
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
              z_39 = ATgetArgument(t, 0);
              u_39 = ATgetArgument(t, 1);
              n_39 = ATgetArgument(t, 2);
              {
                ATerm q_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_2 = NULL;
                t = SSLgetAnnotations(x_39);
                q_17 = t;
                t = z_39;
                t = p_136(t);
                u_17 = t;
                t = u_39;
                t = p_136(t);
                v_17 = t;
                t = n_39;
                t = p_136(t);
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
                  z_39 = ATgetArgument(t, 0);
                  u_39 = ATgetArgument(t, 1);
                  n_39 = ATgetArgument(t, 2);
                  s_39 = ATgetArgument(t, 3);
                  {
                    ATerm r_18 = NULL,w_18 = NULL,b_19 = NULL,c_19 = NULL,h_19 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(x_39);
                    r_18 = t;
                    t = z_39;
                    t = p_136(t);
                    w_18 = t;
                    t = u_39;
                    t = p_136(t);
                    b_19 = t;
                    t = n_39;
                    t = p_136(t);
                    c_19 = t;
                    t = s_39;
                    t = n_136(t);
                    h_19 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, w_18, b_19, c_19, h_19);
                    y_2 = t;
                    t = SSLsetAnnotations(y_2, r_18);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_39 = ATgetArgument(t, 0);
                      u_39 = ATgetArgument(t, 1);
                      n_39 = ATgetArgument(t, 2);
                      s_39 = ATgetArgument(t, 3);
                      {
                        ATerm v_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,z_2 = NULL;
                        t = SSLgetAnnotations(x_39);
                        v_19 = t;
                        t = z_39;
                        t = p_136(t);
                        b_20 = t;
                        t = u_39;
                        t = p_136(t);
                        c_20 = t;
                        t = n_39;
                        t = p_136(t);
                        d_20 = t;
                        t = s_39;
                        t = n_136(t);
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
                          z_39 = ATgetArgument(t, 0);
                          u_39 = ATgetArgument(t, 1);
                          {
                            ATerm r_20 = NULL,v_20 = NULL,w_20 = NULL,c_3 = NULL;
                            t = SSLgetAnnotations(x_39);
                            r_20 = t;
                            t = z_39;
                            t = p_136(t);
                            v_20 = t;
                            t = u_39;
                            t = n_136(t);
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
                              z_39 = ATgetArgument(t, 0);
                              u_39 = ATgetArgument(t, 1);
                              {
                                ATerm n_21 = NULL,z_21 = NULL,a_22 = NULL,g_3 = NULL;
                                t = SSLgetAnnotations(x_39);
                                n_21 = t;
                                t = z_39;
                                t = p_136(t);
                                z_21 = t;
                                t = u_39;
                                t = n_136(t);
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
                                  z_39 = ATgetArgument(t, 0);
                                  u_39 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_22 = NULL,x_22 = NULL,y_22 = NULL,h_3 = NULL;
                                    t = SSLgetAnnotations(x_39);
                                    n_22 = t;
                                    t = z_39;
                                    t = p_136(t);
                                    x_22 = t;
                                    t = u_39;
                                    t = n_136(t);
                                    y_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, x_22, y_22);
                                    h_3 = t;
                                    t = SSLsetAnnotations(h_3, n_22);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      z_39 = ATgetArgument(t, 0);
                                      {
                                        ATerm j_23 = NULL,x_23 = NULL,i_3 = NULL;
                                        t = SSLgetAnnotations(x_39);
                                        j_23 = t;
                                        t = z_39;
                                        t = n_136(t);
                                        x_23 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, x_23);
                                        i_3 = t;
                                        t = SSLsetAnnotations(i_3, j_23);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          z_39 = ATgetArgument(t, 0);
                                          {
                                            ATerm d_24 = NULL,f_24 = NULL,j_3 = NULL;
                                            t = SSLgetAnnotations(x_39);
                                            d_24 = t;
                                            t = z_39;
                                            t = n_136(t);
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
                                              z_39 = ATgetArgument(t, 0);
                                              {
                                                ATerm n_24 = NULL,v_24 = NULL,k_3 = NULL;
                                                t = SSLgetAnnotations(x_39);
                                                n_24 = t;
                                                t = z_39;
                                                t = n_136(t);
                                                v_24 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, v_24);
                                                k_3 = t;
                                                t = SSLsetAnnotations(k_3, n_24);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  z_39 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm g_25 = NULL,j_25 = NULL,l_3 = NULL;
                                                    t = SSLgetAnnotations(x_39);
                                                    g_25 = t;
                                                    t = z_39;
                                                    t = n_136(t);
                                                    j_25 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, j_25);
                                                    l_3 = t;
                                                    t = SSLsetAnnotations(l_3, g_25);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm q_25 = NULL,s_25 = NULL,p_3 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      z_39 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(x_39);
                                                  q_25 = t;
                                                  t = z_39;
                                                  t = n_136(t);
                                                  s_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, s_25);
                                                  p_3 = t;
                                                  t = SSLsetAnnotations(p_3, q_25);
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
ATerm dynrule_targs_1_0 (ATerm w_136 (ATerm), ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,w_41 = NULL;
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          q_41 = ATgetArgument(t, 0);
          {
            ATerm e_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_13);
      t = q_41;
      if(match_cons(t, sym_DynRuleId_1))
        {
          r_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_41;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm g_13 = ATgetArgument(t, 0);
          ATerm h_13 = ATgetArgument(t, 1);
          w_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_41;
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
                q_41 = ATgetArgument(t, 0);
                {
                  ATerm m_13 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_13);
            t = q_41;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_41;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm n_13 = ATgetArgument(t, 0);
                ATerm o_13 = ATgetArgument(t, 1);
                w_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_41;
          }
        else
          {
            t = i_13;
            if(match_cons(t, sym_AddDynRule_2))
              {
                q_41 = ATgetArgument(t, 0);
                {
                  ATerm p_13 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = q_41;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_41;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm q_13 = ATgetArgument(t, 0);
                ATerm r_13 = ATgetArgument(t, 1);
                w_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_41;
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
  ATerm c_43 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_43 = ATgetArgument(t, 0);
          {
            ATerm z_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_13);
      t = c_43;
    }
  else
    {
      t = x_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_43;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm p_42 = NULL;
  ATerm a_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_14 = ATgetArgument(t, 0);
          ATerm f_14 = ATgetArgument(t, 1);
          p_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(d_14);
      t = p_42;
      t = map_1_0(j_2, t);
    }
  else
    {
      t = a_14;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm h_14 = ATgetArgument(t, 0);
          ATerm k_14 = ATgetArgument(t, 1);
          p_42 = ATgetArgument(t, 2);
          {
            ATerm n_14 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = p_42;
      t = map_1_0(k_2, t);
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm q_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_44);
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
              ATerm t_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_44 = ATgetArgument(t, 0);
                      w_44 = ATgetArgument(t, 1);
                      x_44 = ATgetArgument(t, 2);
                      y_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_44;
                  t = map_1_0(o_2, t);
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = t_14;
                  {
                    ATerm v_14 = t;
                    int w_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_14);
                      }
                    else
                      {
                        t = v_14;
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
  ATerm g_45 = NULL;
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_45 = ATgetArgument(t, 0);
          {
            ATerm b_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_14);
      t = g_45;
    }
  else
    {
      t = x_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_45;
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
  ATerm n_45 = NULL;
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_45 = ATgetArgument(t, 0);
          {
            ATerm e_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_15);
      t = n_45;
    }
  else
    {
      t = c_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_45;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm r_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_45);
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
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            {
              ATerm j_15 = t;
              int l_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_45 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_45 = ATgetArgument(t, 0);
                      b_46 = ATgetArgument(t, 1);
                      c_46 = ATgetArgument(t, 2);
                      d_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_46;
                  t = map_1_0(d_3, t);
                  LocalPopChoice(l_15);
                }
              else
                {
                  t = j_15;
                  {
                    ATerm m_15 = t;
                    int o_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_15);
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
  ATerm q_46 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_46 = ATgetArgument(t, 0);
          {
            ATerm r_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_15);
      t = q_46;
    }
  else
    {
      t = p_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_46;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = map_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm y_46 = NULL;
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_46 = ATgetArgument(t, 0);
          {
            ATerm v_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_15);
      t = y_46;
    }
  else
    {
      t = s_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_46;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
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
static ATerm o_3 (ATerm t)
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
                  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,s_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_47 = ATgetArgument(t, 0);
                      n_47 = ATgetArgument(t, 1);
                      o_47 = ATgetArgument(t, 2);
                      s_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_47;
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
  ATerm j_48 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_48 = ATgetArgument(t, 0);
          {
            ATerm g_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_16);
      t = j_48;
    }
  else
    {
      t = e_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_48;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = map_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm q_48 = NULL;
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_16);
      t = q_48;
    }
  else
    {
      t = i_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_48;
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
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        ATerm u_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = u_16;
            {
              ATerm z_16 = t;
              int d_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_49 = ATgetArgument(t, 0);
                      d_49 = ATgetArgument(t, 1);
                      e_49 = ATgetArgument(t, 2);
                      f_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_49;
                  t = map_1_0(w_3, t);
                  LocalPopChoice(d_17);
                }
              else
                {
                  t = z_16;
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
                        t = dynrule_targs_1_0(x_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm m_49 = NULL;
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_49 = ATgetArgument(t, 0);
          {
            ATerm i_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_17);
      t = m_49;
    }
  else
    {
      t = g_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_49;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = map_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm r_49 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_49 = ATgetArgument(t, 0);
          {
            ATerm l_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_17);
      t = r_49;
    }
  else
    {
      t = j_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_49;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm v_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_49);
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
                  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_49 = ATgetArgument(t, 0);
                      y_49 = ATgetArgument(t, 1);
                      z_49 = ATgetArgument(t, 2);
                      a_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_49;
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
                        t = dynrule_targs_1_0(f_4, t);
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
  ATerm h_50 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_50 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = h_50;
    }
  else
    {
      t = y_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_50;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = map_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm m_50 = NULL;
  ATerm d_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_50 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_18);
      t = m_50;
    }
  else
    {
      t = d_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_50;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm i_44 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      i_44 = ATgetArgument(t, 0);
      t = i_44;
      t = free_vars_3_0(l_2, m_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          i_44 = ATgetArgument(t, 0);
          t = i_44;
          t = free_vars_3_0(a_3, b_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              i_44 = ATgetArgument(t, 0);
              t = i_44;
              t = free_vars_3_0(n_3, o_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_44 = ATgetArgument(t, 0);
                  t = i_44;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      i_44 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_44;
                  t = free_vars_3_0(z_3, c_4, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm n_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_51);
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
                  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_51 = ATgetArgument(t, 0);
                      q_51 = ATgetArgument(t, 1);
                      r_51 = ATgetArgument(t, 2);
                      s_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_51;
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
  ATerm z_51 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_51 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_18);
      t = z_51;
    }
  else
    {
      t = p_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_51;
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
  ATerm e_52 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_52 = ATgetArgument(t, 0);
          {
            ATerm v_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_18);
      t = e_52;
    }
  else
    {
      t = t_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_52;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm g_51 = NULL,k_51 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      k_51 = ATgetArgument(t, 0);
      t = k_51;
      if(match_cons(t, sym_Rule_3))
        {
          g_51 = ATgetArgument(t, 0);
          {
            ATerm x_18 = ATgetArgument(t, 1);
          }
          {
            ATerm y_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = g_51;
      t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          k_51 = ATgetArgument(t, 0);
          {
            ATerm a_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_51;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm r_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_52);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            {
              ATerm i_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_52 = ATgetArgument(t, 0);
                      u_52 = ATgetArgument(t, 1);
                      v_52 = ATgetArgument(t, 2);
                      w_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_52;
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
  ATerm d_53 = NULL;
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_53 = ATgetArgument(t, 0);
          {
            ATerm p_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_19);
      t = d_53;
    }
  else
    {
      t = n_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_53;
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
  ATerm i_53 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_53 = ATgetArgument(t, 0);
          {
            ATerm s_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_19);
      t = i_53;
    }
  else
    {
      t = q_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_53;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm l_53 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      l_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_53);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
      m_53 = t;
      if(match_cons(t, sym_Let_2))
        {
          n_53 = ATgetArgument(t, 0);
          o_53 = ATgetArgument(t, 1);
          t = m_53;
          t = n_6(n_53, o_53, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              n_53 = ATgetArgument(t, 0);
              o_53 = ATgetArgument(t, 1);
              p_53 = ATgetArgument(t, 2);
              t = o_53;
              t = map_1_0(y_4, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  n_53 = ATgetArgument(t, 0);
                  o_53 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, n_53);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_53 = ATgetArgument(t, 0);
                      o_53 = ATgetArgument(t, 1);
                      p_53 = ATgetArgument(t, 2);
                      q_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_53;
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
  ATerm y_53 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_53 = ATgetArgument(t, 0);
          {
            ATerm a_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = y_53;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_53;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm j_54 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_54 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_20);
      t = j_54;
    }
  else
    {
      t = f_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_54;
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
  ATerm o_54 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_54 = ATgetArgument(t, 0);
          {
            ATerm k_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = o_54;
    }
  else
    {
      t = i_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_54;
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
  ATerm p_52 = NULL,q_52 = NULL;
  p_52 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      ATerm n_20 = ATgetArgument(t, 1);
      ATerm o_20 = ATgetArgument(t, 2);
      ATerm p_20 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  q_52 = t;
  t = p_52;
  t = free_vars_3_0(o_4, p_4, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_52;
  t = free_vars_3_0(w_4, x_4, sboundin_3_0, t);
  t = filter_1_0(c_5, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_52;
  return(t);
}
ATerm partition_1_0 (ATerm s_162 (ATerm), ATerm t)
{
  static ATerm w_55 (ATerm t);
  static ATerm w_55 (ATerm t)
  {
    ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
    t_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_q_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_55 = ATgetFirst((ATermList) t);
            v_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_26 = NULL,s_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,o_27 = NULL,o_5 = NULL;
              t = SSLgetAnnotations(t_55);
              b_27 = t;
              t = u_55;
              t = s_162(t);
              q_26 = t;
              t = (ATerm) ATinsert(CheckATermList(v_55), q_26);
              o_5 = t;
              t = SSLsetAnnotations(o_5, b_27);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_20 = ATgetFirst((ATermList) t);
                  y_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_26;
              t = w_55(t);
              s_26 = t;
              t = SSL_explode_term(s_26);
              if(match_cons(t, sym__2))
                {
                  ATerm y_20 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm z_20 = ATgetArgument(t, 1);
                    if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
                      {
                        z_26 = ATgetFirst((ATermList) z_20);
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
              t = SSL_explode_term(s_26);
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
                            o_27 = ATgetFirst((ATermList) e_21);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_26), q_26), o_27);
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              {
                ATerm f_28 = NULL,j_28 = NULL,m_28 = NULL,n_28 = NULL,x_28 = NULL,p_5 = NULL;
                t = SSLgetAnnotations(t_55);
                n_28 = t;
                t = (ATerm) ATinsert(CheckATermList(v_55), u_55);
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
                t = w_55(t);
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
                          ATerm o_21 = ATgetFirst((ATermList) m_21);
                          ATerm p_21 = (ATerm) ATgetNext((ATermList) m_21);
                          if(((ATgetType(p_21) == AT_LIST) && !(ATisEmpty(p_21))))
                            {
                              x_28 = ATgetFirst((ATermList) p_21);
                              {
                                ATerm t_21 = (ATerm) ATgetNext((ATermList) p_21);
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
                t = (ATerm) ATmakeAppl(sym__2, m_28, (ATerm) ATinsert(CheckATermList(x_28), u_55));
              }
            }
        }
      }
    return(t);
  }
  t = w_55(t);
  return(t);
}
static ATerm y_6 (ATerm c_26, ATerm b_26, ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  t = c_26;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      z_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_56;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, z_55, b_26), a_56);
  return(t);
}
static ATerm z_6 (ATerm d_158 (ATerm), ATerm e_158 (ATerm), ATerm e_70, ATerm d_70, ATerm t)
{
  t = e_158(t);
  {
    static ATerm d_5 (ATerm t);
    static ATerm d_5 (ATerm t)
    {
      ATerm b_56 = NULL;
      b_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_70, b_56);
      t = d_158(t);
      return(t);
    }
    t = fetch_1_0(d_5, t);
  }
  t = d_70;
  return(t);
}
static ATerm a_7 (ATerm a_158 (ATerm), ATerm a_70, ATerm z_69, ATerm t)
{
  static ATerm r_56 (ATerm t);
  static ATerm r_56 (ATerm t)
  {
    ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
    m_56 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_69;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_56 = ATgetFirst((ATermList) t);
            o_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_56;
              {
                static ATerm e_5 (ATerm t);
                static ATerm e_5 (ATerm t)
                {
                  t = z_69;
                  return(t);
                }
                t = z_6(a_158, e_5, n_56, o_56, t);
              }
              t = r_56(t);
              LocalPopChoice(x_21);
            }
          else
            {
              t = u_21;
              {
                ATerm c_29 = NULL,f_29 = NULL,z_5 = NULL;
                t = SSLgetAnnotations(m_56);
                c_29 = t;
                t = o_56;
                t = r_56(t);
                f_29 = t;
                t = (ATerm) ATinsert(CheckATermList(f_29), n_56);
                z_5 = t;
                t = SSLsetAnnotations(z_5, c_29);
              }
            }
        }
      }
    return(t);
  }
  t = a_70;
  t = r_56(t);
  return(t);
}
ATerm genzip_4_0 (ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm q_142 (ATerm), ATerm r_142 (ATerm), ATerm t)
{
  static ATerm z_56 (ATerm t);
  static ATerm z_56 (ATerm t)
  {
    ATerm y_21 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_142(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = y_21;
        {
          ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,g_6 = NULL;
          t = p_142(t);
          y_56 = t;
          if(match_cons(t, sym__2))
            {
              u_56 = ATgetArgument(t, 0);
              v_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_56);
          t_56 = t;
          t = u_56;
          t = r_142(t);
          w_56 = t;
          t = v_56;
          t = z_56(t);
          x_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_56, x_56);
          g_6 = t;
          t = SSLsetAnnotations(g_6, t_56);
          t = q_142(t);
        }
      }
    return(t);
  }
  t = z_56(t);
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
  ATerm n_57 = NULL,o_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_57 = ATgetFirst((ATermList) t);
      o_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_57, o_57);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(match_cons(c_22, sym__2))
        {
          p_57 = ATgetArgument(c_22, 0);
          q_57 = ATgetArgument(c_22, 1);
        }
      else
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(match_cons(d_22, sym__2))
          {
            r_57 = ATgetArgument(d_22, 0);
            s_57 = ATgetArgument(d_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_57), p_57), (ATerm) ATinsert(CheckATermList(s_57), q_57));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL;
  if(match_cons(t, sym__2))
    {
      t_57 = ATgetArgument(t, 0);
      u_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(m_5, t_57, u_57, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm v_57 = NULL;
  if(match_cons(t, sym__2))
    {
      v_57 = ATgetArgument(t, 0);
      if((v_57 != ATgetArgument(t, 1)))
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
ATerm CollectSplit_2_0 (ATerm o_159 (ATerm), ATerm p_159 (ATerm), ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  k_57 = t;
  l_57 = t;
  t = SSL_explode_term(l_57);
  if(match_cons(t, sym__2))
    {
      c_57 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_57);
  e_57 = t;
  t = a_57;
  t = genzip_4_0(g_5, h_5, i_5, o_159, t);
  if(match_cons(t, sym__2))
    {
      d_57 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(c_57, d_57);
  j_57 = t;
  t = SSLsetAnnotations(j_57, e_57);
  t = p_159(t);
  if(match_cons(t, sym__2))
    {
      f_57 = ATgetArgument(t, 0);
      g_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_57;
  t = foldr_2_0(k_5, l_5, t);
  i_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_57, i_57);
  t = a_7(q_5, g_57, i_57, t);
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_57, h_57);
  return(t);
}
ATerm collect_split_1_0 (ATerm m_159 (ATerm), ATerm t)
{
  static ATerm z_57 (ATerm t);
  static ATerm z_57 (ATerm t)
  {
    static ATerm r_5 (ATerm t);
    static ATerm r_5 (ATerm t)
    {
      ATerm e_22 = t;
      int f_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_159(t);
          LocalPopChoice(f_22);
        }
      else
        {
          t = e_22;
          {
            ATerm x_57 = NULL;
            x_57 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_57, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(z_57, r_5, t);
    return(t);
  }
  t = z_57(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      d_58 = ATgetArgument(t, 0);
      e_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(d_58, e_58, t);
  return(t);
}
static ATerm e_7 (ATerm v_25, ATerm w_25, ATerm x_25, ATerm y_25, ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  t = y_25;
  t = collect_split_1_0(s_5, t);
  if(match_cons(t, sym__2))
    {
      a_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_58, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, v_25, w_25, x_25, a_58)));
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
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      h_58 = ATgetArgument(t, 0);
      i_58 = ATgetArgument(t, 1);
      j_58 = ATgetArgument(t, 2);
      {
        ATerm o_58 = NULL;
        t = term_h_22;
        o_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_58, term_h_22);
        t = f_7(t_5, h_58, o_58, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, h_58, i_58, j_58);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          h_58 = ATgetArgument(t, 0);
          i_58 = ATgetArgument(t, 1);
          j_58 = ATgetArgument(t, 2);
          k_58 = ATgetArgument(t, 3);
          {
            ATerm t_58 = NULL;
            t = term_j_22;
            t_58 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_58, term_j_22);
            t = f_7(u_5, h_58, t_58, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, h_58, i_58, j_58, k_58);
          }
        }
      else
        {
          ATerm y_58 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              h_58 = ATgetArgument(t, 0);
              i_58 = ATgetArgument(t, 1);
              j_58 = ATgetArgument(t, 2);
              k_58 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_l_22;
          y_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_58, term_l_22);
          t = f_7(v_5, h_58, y_58, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, h_58, i_58, j_58, k_58);
        }
    }
  return(t);
}
static ATerm f_7 (ATerm z_149 (ATerm), ATerm m_44, ATerm j_44, ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  c_59 = t;
  t = z_149(t);
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_58, m_44, j_44);
  t = u_7(z_58, m_44, j_44, t);
  {
    ATerm m_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL;
        t = term_p_22;
        h_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_58, term_p_22);
        t = t_7(z_58, h_59, t);
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
        LocalPopChoice(o_22);
      }
    else
      {
        t = m_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_59 = ATgetFirst((ATermList) t);
      b_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_58, term_p_22, (ATerm) ATinsert(CheckATermList(b_59), (ATerm) ATinsert(CheckATermList(a_59), m_44)));
  t = lookup_table_0_1(z_58, t);
  g_59 = t;
  t = term_p_22;
  d_59 = t;
  t = (ATerm) ATinsert(CheckATermList(b_59), (ATerm) ATinsert(CheckATermList(a_59), m_44));
  e_59 = t;
  t = g_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(d_59, e_59, f_59, t);
  t = c_59;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  j_59 = t;
  t = term_v_22;
  k_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_59, term_v_22);
  t = f_7(x_5, j_59, k_59, t);
  t = j_59;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_z_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm i_59 = NULL;
  i_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_w_22);
  t = map_1_0(w_5, t);
  t = i_59;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,a_8 = NULL;
  x_59 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_59);
  u_59 = t;
  t = v_59;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(b_6, t);
  t = concat_0_0(t);
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_59);
  a_8 = t;
  t = SSLsetAnnotations(a_8, u_59);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  c_60 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
      a_60 = ATgetArgument(t, 2);
      b_60 = ATgetArgument(t, 3);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_60;
            t = e_7(y_59, z_59, a_60, b_60, t);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = (ATerm) ATinsert(ATempty, c_60);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, c_60);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,e_8 = NULL,d_8 = NULL;
  t = declare_standard_strategies_0_0(t);
  t_59 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_59);
  m_59 = t;
  t = n_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_59 = ATgetFirst((ATermList) t);
      q_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_59);
  o_59 = t;
  t = q_59;
  t = Cons_2_0(y_5, a_6, t);
  r_59 = t;
  t = (ATerm) ATinsert(CheckATermList(r_59), p_59);
  d_8 = t;
  t = SSLsetAnnotations(d_8, o_59);
  s_59 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_59);
  e_8 = t;
  t = SSLsetAnnotations(e_8, m_59);
  return(t);
}
static ATerm g_7 (ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm j_60 = NULL;
  t = SSL_fputc(s_35, t_35);
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_60);
  return(t);
}
static ATerm h_7 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm k_60 = NULL;
  t = SSL_write_term_to_stream_text(y_33, z_33);
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_60);
  return(t);
}
static ATerm j_7 (ATerm m_145 (ATerm), ATerm q_264, ATerm e_34, ATerm t)
{
  ATerm l_60 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_264, term_d_23);
  t = n_7(t);
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_60, e_34);
  t = m_145(t);
  t = fclose_0_0(t);
  t = e_34;
  return(t);
}
static ATerm i_7 (ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm m_60 = NULL;
  t = SSL_write_term_to_stream_baf(u_33, v_33);
  m_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_60);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(match_cons(e_23, sym_Stream_1))
        {
          t_60 = ATgetArgument(e_23, 0);
        }
      else
        _fail(t);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(t_60, u_60, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(match_cons(f_23, sym_Stream_1))
        {
          y_60 = ATgetArgument(f_23, 0);
        }
      else
        _fail(t);
      z_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(y_60, z_60, t);
  v_60 = t;
  t = term_h_23;
  w_60 = t;
  t = v_60;
  if(match_cons(t, sym_Stream_1))
    {
      x_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, v_60);
  t = g_7(w_60, x_60, t);
  return(t);
}
ATerm output_1_0 (ATerm o_171 (ATerm), ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  t = o_171(t);
  o_60 = t;
  {
    ATerm i_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_60 = NULL,q_60 = NULL;
        t = term_o_23;
        p_60 = t;
        t = term_v_23;
        q_60 = t;
        t = term_y_23;
        t = t_7(p_60, q_60, t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = i_23;
        t = term_z_23;
      }
  }
  n_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_60, o_60);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_60 = NULL,s_60 = NULL;
        t = term_o_23;
        r_60 = t;
        t = term_c_24;
        s_60 = t;
        t = term_e_24;
        t = t_7(r_60, s_60, t);
        t = (ATerm) ATmakeAppl(sym__2, n_60, o_60);
        LocalPopChoice(b_24);
        if(match_cons(t, sym__2))
          {
            ATerm g_24 = ATgetArgument(t, 0);
            ATerm h_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7(d_6, n_60, o_60, t);
      }
    else
      {
        t = a_24;
        if(match_cons(t, sym__2))
          {
            ATerm k_24 = ATgetArgument(t, 0);
            ATerm l_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7(e_6, n_60, o_60, t);
      }
  }
  return(t);
}
static ATerm n_61 (ATerm h_61, ATerm t)
{
  t = SSL_fclose(h_61);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL;
  l_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_61 = ATgetArgument(t, 0);
      {
        ATerm m_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_61);
            LocalPopChoice(u_24);
          }
        else
          {
            t = m_24;
            t = n_61(l_61, t);
          }
      }
    }
  else
    {
      t = n_61(l_61, t);
    }
  return(t);
}
static ATerm k_7 (ATerm a_34, ATerm t)
{
  t = SSL_read_term_from_stream(a_34);
  return(t);
}
static ATerm l_7 (ATerm l_79, ATerm m_79, ATerm t)
{
  t = SSL_strcat(l_79, m_79);
  return(t);
}
static ATerm m_7 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm o_61 = NULL;
  t = SSL_fopen(u_35, v_35);
  o_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_61);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_61 = NULL;
  t = SSL_stdin_stream();
  p_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_61);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_61 = NULL;
  t = SSL_stdout_stream();
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_61);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_61 = NULL;
  t = SSL_stderr_stream();
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_61);
  return(t);
}
static ATerm y_62 (ATerm x_61, ATerm t)
{
  ATerm y_61 = NULL;
  t = SSL_explode_term(x_61);
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_24 = ATgetArgument(t, 1);
        if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
          {
            y_61 = ATgetFirst((ATermList) y_24);
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
  t = y_61;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_61;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_61;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_61;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_62 (ATerm b_62, ATerm c_62, ATerm d_62, ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,j_62 = NULL,j_8 = NULL;
  t = SSLgetAnnotations(d_62);
  g_62 = t;
  t = b_62;
  if(match_cons(t, sym_Path_1))
    {
      j_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_62, c_62);
  j_8 = t;
  t = SSLsetAnnotations(j_8, g_62);
  if(match_cons(t, sym__2))
    {
      e_62 = ATgetArgument(t, 0);
      f_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(e_62, f_62, t);
  return(t);
}
static ATerm a_63 (ATerm l_62, ATerm m_62, ATerm n_62, ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,t_62 = NULL,s_8 = NULL;
  t = SSLgetAnnotations(n_62);
  q_62 = t;
  t = SSL_is_string(l_62);
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_62, m_62);
  s_8 = t;
  t = SSLsetAnnotations(s_8, q_62);
  if(match_cons(t, sym__2))
    {
      o_62 = ATgetArgument(t, 0);
      p_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(o_62, p_62, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL;
  v_62 = t;
  if(match_cons(t, sym__2))
    {
      w_62 = ATgetArgument(t, 0);
      x_62 = ATgetArgument(t, 1);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_62(v_62, t);
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
                  t = z_62(w_62, x_62, v_62, t);
                  LocalPopChoice(e_25);
                }
              else
                {
                  t = d_25;
                  t = a_63(w_62, x_62, v_62, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_62(v_62, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,j_63 = NULL;
  j_63 = t;
  {
    ATerm f_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_63, term_i_25);
        t = n_7(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = f_25;
        {
          ATerm u_29 = NULL,x_29 = NULL;
          t = term_k_25;
          x_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_25, j_63);
          t = l_7(x_29, j_63, t);
          u_29 = t;
          t = SSL_perror(u_29);
          _fail(t);
        }
      }
  }
  d_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(e_63, t);
  c_63 = t;
  t = d_63;
  t = fclose_0_0(t);
  t = c_63;
  return(t);
}
ATerm input_1_0 (ATerm p_171 (ATerm), ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_63 = NULL,n_63 = NULL;
      t = term_o_23;
      m_63 = t;
      t = term_n_25;
      n_63 = t;
      t = term_p_25;
      t = t_7(m_63, n_63, t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      t = term_r_25;
    }
  t = ReadFromFile_0_0(t);
  t = p_171(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL;
  t = term_o_23;
  o_63 = t;
  t = term_u_25;
  p_63 = t;
  t = term_z_25;
  t = t_7(o_63, p_63, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  r_63 = t;
  {
    ATerm a_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_26 = ATgetFirst((ATermList) t);
                ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_63;
          }
        LocalPopChoice(d_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATinsert(ATempty, r_63);
      }
  }
  s_63 = t;
  t = term_z_23;
  t_63 = t;
  t = SSL_printnl(t_63, s_63);
  t = r_63;
  return(t);
}
ATerm map_1_0 (ATerm i_155 (ATerm), ATerm t)
{
  static ATerm l_64 (ATerm t);
  static ATerm l_64 (ATerm t)
  {
    ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
    i_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_64;
      }
    else
      {
        ATerm m_30 = NULL,p_30 = NULL,q_30 = NULL,t_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_64 = ATgetFirst((ATermList) t);
            k_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_64);
        m_30 = t;
        t = j_64;
        t = i_155(t);
        p_30 = t;
        t = k_64;
        t = l_64(t);
        q_30 = t;
        t = (ATerm) ATinsert(CheckATermList(q_30), p_30);
        t_9 = t;
        t = SSLsetAnnotations(t_9, m_30);
      }
    return(t);
  }
  t = l_64(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_64 = ATgetFirst((ATermList) t);
      p_64 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_64 = NULL,u_64 = NULL;
        static ATerm f_6 (ATerm t);
        static ATerm f_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_64)), not_null(u_64));
          return(t);
        }
        t = p_64;
        t = r_0(t);
        if(((t_64 != NULL) && (t_64 != t)))
          _fail(t);
        else
          t_64 = t;
        t = o_64;
        t = p_0(t);
        if(((u_64 != NULL) && (u_64 != t)))
          _fail(t);
        else
          u_64 = t;
        t = p_64;
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
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,h_10 = NULL;
  e_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_65);
  c_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_65);
  h_10 = t;
  t = SSLsetAnnotations(h_10, c_65);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm i_65 = NULL;
  i_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_65), term_i_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm n_173 (ATerm), ATerm o_173 (ATerm), ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_65 = NULL,b_65 = NULL;
      t = term_o_23;
      a_65 = t;
      t = term_u_25;
      b_65 = t;
      t = term_z_25;
      t = t_7(a_65, b_65, t);
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
        t = n_173(t);
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
  y_64 = t;
  t = term_p_26;
  z_64 = t;
  t = term_r_26;
  t = t_7(y_64, z_64, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(o_6, t);
  {
    ATerm t_26 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_65 = NULL;
        t = o_173(t);
        j_65 = t;
        t = (ATerm) ATinsert(CheckATermList(j_65), term_d_27);
        t = echo_0_0(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = t_26;
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,j_10 = NULL;
  r_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_65);
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_65);
  j_10 = t;
  t = SSLsetAnnotations(j_10, p_65);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_65 = NULL;
  m_65 = t;
  {
    ATerm e_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_65 = NULL,o_65 = NULL;
        t = term_o_23;
        n_65 = t;
        t = term_u_25;
        o_65 = t;
        t = term_z_25;
        t = t_7(n_65, o_65, t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = e_27;
        t = fetch_1_0(p_6, t);
      }
  }
  t = m_65;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm t_65 = NULL;
  t_65 = t;
  if(match_string(t, "-k"))
    {
      t = t_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_65;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
  u_65 = t;
  t = SSL_string_to_int(u_65);
  v_65 = t;
  t = term_j_27;
  w_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_27, v_65);
  t = w_7(w_65, v_65, t);
  t = u_65;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, s_6, t_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm y_65 = NULL;
  y_65 = t;
  if(match_string(t, "-S"))
    {
      t = y_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_65;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL;
  t = term_l_27;
  z_65 = t;
  t = term_m_27;
  a_66 = t;
  t = term_n_27;
  t = w_7(z_65, a_66, t);
  t = term_p_27;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_q_27;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  t = SSL_string_to_int(b_66);
  c_66 = t;
  t = term_l_27;
  d_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_27, c_66);
  t = w_7(d_66, c_66, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_66);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_t_27;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  t = term_u_27;
  e_66 = t;
  t = term_b_10;
  f_66 = t;
  t = term_v_27;
  t = w_7(e_66, f_66, t);
  t = term_y_27;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, x_6, t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = c_28;
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_7, d_7, p_7, t);
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            t = Option_3_0(s_7, v_7, g_8, t);
          }
      }
    }
  return(t);
}
static ATerm w_7 (ATerm o_39, ATerm p_39, ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL;
  t = term_o_23;
  g_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_23, o_39, p_39);
  t = lookup_table_0_1(g_66, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(o_39, p_39, h_66, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_23, o_39, p_39);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
      t = term_b_10;
      t = g_0(t);
      n_66 = t;
      t = term_o_26;
      o_66 = t;
      t = term_p_26;
      p_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, n_66);
      t = u_7(o_66, p_66, n_66, t);
      _fail(t);
    }
  else
    {
      ATerm s_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_66 = ATgetFirst((ATermList) t);
          m_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_66;
      t = d_0(t);
      t = term_b_10;
      t = f_0(t);
      s_66 = t;
      t = (ATerm) ATinsert(CheckATermList(m_66), s_66);
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  if(match_string(t, "-o"))
    {
      t = u_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_66;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL;
  v_66 = t;
  t = term_v_23;
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, v_66);
  t = w_7(w_66, v_66, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_66);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_i_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_8, i_8, k_8, t);
  return(t);
}
static ATerm u_7 (ATerm w_45, ATerm x_45, ATerm v_45, ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_45, x_45);
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_28 = ATgetArgument(t, 0);
            ATerm p_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_45, x_45);
        t = t_7(w_45, x_45, t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = (ATerm) ATempty;
      }
  }
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_45, x_45, (ATerm) ATinsert(CheckATermList(z_66), v_45));
  t = lookup_table_0_1(w_45, t);
  c_67 = t;
  t = (ATerm) ATinsert(CheckATermList(z_66), v_45);
  a_67 = t;
  t = c_67;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(x_45, a_67, b_67, t);
  t = y_66;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
      t = term_b_10;
      t = n_0(t);
      s_67 = t;
      t = term_o_26;
      t_67 = t;
      t = term_p_26;
      u_67 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, s_67);
      t = u_7(t_67, u_67, s_67, t);
      _fail(t);
    }
  else
    {
      ATerm y_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_67 = ATgetFirst((ATermList) t);
          k_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_67 = ATgetFirst((ATermList) t);
          m_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_67;
      t = j_0(t);
      t = l_67;
      t = l_0(t);
      y_67 = t;
      t = (ATerm) ATinsert(CheckATermList(m_67), y_67);
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm a_68 = NULL;
  a_68 = t;
  if(match_string(t, "-i"))
    {
      t = a_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_68;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  b_68 = t;
  t = term_n_25;
  c_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_25, b_68);
  t = w_7(c_68, b_68, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_68);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_8, m_8, n_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_10;
  t = whoami_0_0(t);
  d_68 = t;
  t = term_s_28;
  f_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_28), d_68);
  g_68 = t;
  t = SSL_printnl(f_68, g_68);
  t = term_u_28;
  e_68 = t;
  t = SSL_exit(e_68);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL;
  t = term_o_23;
  h_68 = t;
  t = term_u_25;
  i_68 = t;
  t = term_z_25;
  t = t_7(h_68, i_68, t);
  return(t);
}
static ATerm o_7 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_42, o_42);
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      t = SSL_addr(n_42, o_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_161 (ATerm), ATerm e_161 (ATerm), ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
  m_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_68;
      t = d_161(t);
    }
  else
    {
      ATerm r_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_68 = ATgetFirst((ATermList) t);
          o_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_68;
      t = foldr_2_0(d_161, e_161, t);
      r_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_68, r_68);
      t = e_161(t);
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
  t = term_m_27;
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
  t = o_7(e_31, g_31, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_68 = NULL,y_30 = NULL,a_31 = NULL;
  t = times_0_0(t);
  a_31 = t;
  t = SSL_explode_term(a_31);
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_30;
  t = foldr_2_0(o_8, p_8, t);
  u_68 = t;
  t = SSL_TicksToSeconds(u_68);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  if(match_cons(t, sym__2))
    {
      g_69 = ATgetArgument(t, 0);
      h_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_69;
        if((g_69 != t))
          {
            _fail(t);
          }
        t = f_69;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
        {
          ATerm b_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_69, h_69);
              LocalPopChoice(d_29);
            }
          else
            {
              t = b_29;
              t = SSL_gtr(g_69, h_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_147 (ATerm), ATerm t)
{
  ATerm l_69 = NULL;
  l_69 = t;
  {
    ATerm e_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
        t = term_o_23;
        o_69 = t;
        t = term_l_27;
        p_69 = t;
        t = term_h_29;
        t = t_7(o_69, p_69, t);
        n_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_69, term_u_28);
        t = geq_0_0(t);
        t = l_69;
        t = d_147(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = e_29;
        t = l_69;
      }
  }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,u_69 = NULL,v_69 = NULL;
  t = run_time_0_0(t);
  r_69 = t;
  t = term_b_10;
  t = whoami_0_0(t);
  s_69 = t;
  t = term_s_28;
  u_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_29), r_69), term_i_29), s_69);
  v_69 = t;
  t = SSL_printnl(u_69, v_69);
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_29), r_69), term_i_29), s_69));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_69 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_27;
  w_69 = t;
  t = SSL_exit(w_69);
  return(t);
}
static ATerm x_7 (ATerm o_50, ATerm p_50, ATerm q_50, ATerm t)
{
  ATerm b_70 = NULL;
  t = SSL_hashtable_put(q_50, o_50, p_50);
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_70);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_47, ATerm t)
{
  ATerm p_70 = NULL;
  t = table_hashtable_0_0(t);
  p_70 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_32 = NULL;
        t = p_70;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_7(i_47, c_32, t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm n_32 = NULL;
          t = i_47;
          t = table_create_0_0(t);
          t = p_70;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_7(i_47, n_32, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_50, ATerm x_50, ATerm t)
{
  ATerm s_70 = NULL;
  t = SSL_hashtable_create(w_50, x_50);
  s_70 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_70);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,c_71 = NULL,e_71 = NULL,f_71 = NULL;
  t_70 = t;
  t = term_m_29;
  e_71 = t;
  t = term_n_29;
  f_71 = t;
  t = t_70;
  t = new_hashtable_0_2(e_71, f_71, t);
  u_70 = t;
  t = t_70;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(t_70, u_70, c_71, t);
  t = t_70;
  return(t);
}
static ATerm q_7 (ATerm t_50, ATerm u_50, ATerm t)
{
  ATerm g_71 = NULL;
  t = SSL_hashtable_remove(u_50, t_50);
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_71);
  return(t);
}
static ATerm r_7 (ATerm y_50, ATerm t)
{
  ATerm h_71 = NULL;
  t = SSL_hashtable_destroy(y_50);
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_71);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_71 = NULL;
  t = SSL_table_hashtable();
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_71);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,p_71 = NULL,q_71 = NULL;
  j_71 = t;
  t = table_hashtable_0_0(t);
  k_71 = t;
  t = lookup_table_0_1(j_71, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(q_71, t);
  t = k_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(j_71, p_71, t);
  t = j_71;
  return(t);
}
ATerm fetch_1_0 (ATerm q_155 (ATerm), ATerm t)
{
  static ATerm n_72 (ATerm t);
  static ATerm n_72 (ATerm t)
  {
    ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
    k_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_72 = ATgetFirst((ATermList) t);
        m_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_33 = NULL,d_33 = NULL,l_10 = NULL;
          t = SSLgetAnnotations(k_72);
          a_33 = t;
          t = l_72;
          t = q_155(t);
          d_33 = t;
          t = (ATerm) ATinsert(CheckATermList(m_72), d_33);
          l_10 = t;
          t = SSLsetAnnotations(l_10, a_33);
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          {
            ATerm d_34 = NULL,i_34 = NULL,m_10 = NULL;
            t = SSLgetAnnotations(k_72);
            d_34 = t;
            t = m_72;
            t = n_72(t);
            i_34 = t;
            t = (ATerm) ATinsert(CheckATermList(i_34), l_72);
            m_10 = t;
            t = SSLsetAnnotations(m_10, d_34);
          }
        }
    }
    return(t);
  }
  t = n_72(t);
  return(t);
}
static ATerm y_7 (ATerm r_50, ATerm s_50, ATerm t)
{
  t = SSL_hashtable_get(s_50, r_50);
  return(t);
}
static ATerm t_7 (ATerm p_47, ATerm q_47, ATerm t)
{
  ATerm q_72 = NULL;
  t = lookup_table_0_1(p_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(q_47, q_72, t);
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
  ATerm s_72 = NULL,t_72 = NULL;
  t = term_q_29;
  s_72 = t;
  t = term_b_10;
  t_72 = t;
  t = term_r_29;
  t = w_7(s_72, t_72, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_s_29;
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
  ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL;
  t = term_q_29;
  x_72 = t;
  t = term_b_10;
  y_72 = t;
  t = term_r_29;
  t = w_7(x_72, y_72, t);
  t = term_t_29;
  v_72 = t;
  t = term_b_10;
  w_72 = t;
  t = term_v_29;
  t = w_7(v_72, w_72, t);
  t = term_w_29;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_8, t_8, u_8, t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      t = Option_3_0(v_8, x_8, y_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,p_10 = NULL;
  e_73 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_73 = ATgetFirst((ATermList) t);
      b_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_73);
  z_72 = t;
  t = a_73;
  t = m_111(t);
  c_73 = t;
  t = b_73;
  t = n_111(t);
  d_73 = t;
  t = (ATerm) ATinsert(CheckATermList(d_73), c_73);
  p_10 = t;
  t = SSLsetAnnotations(p_10, z_72);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_173 (ATerm), ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,o_73 = NULL,p_73 = NULL,r_10 = NULL;
  j_73 = t;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_30;
        t = i_173(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
      }
  }
  t = j_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_73 = ATgetFirst((ATermList) t);
      m_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_73);
  k_73 = t;
  t = term_u_25;
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_25, l_73);
  t = w_7(p_73, l_73, t);
  t = m_73;
  {
    static ATerm z_73 (ATerm t);
    static ATerm z_73 (ATerm t)
    {
      ATerm e_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_73 = NULL;
              s_73 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_73;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              t = i_173(t);
              t = Cons_2_0(_id, z_73, t);
            }
          LocalPopChoice(f_30);
        }
      else
        {
          t = e_30;
          {
            ATerm v_73 = NULL,w_73 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_73 = ATgetFirst((ATermList) t);
                w_73 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_73), (ATerm) ATmakeAppl(sym_Undefined_1, v_73));
          }
        }
      return(t);
    }
    t = z_73(t);
  }
  o_73 = t;
  t = (ATerm) ATinsert(CheckATermList(o_73), (ATerm) ATmakeAppl(sym_Program_1, l_73));
  r_10 = t;
  t = SSLsetAnnotations(r_10, k_73);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm m_74 = NULL;
  m_74 = t;
  if(match_string(t, "--help"))
    {
      t = m_74;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_74;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_74;
        }
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm n_74 = NULL,p_74 = NULL;
  t = term_i_30;
  n_74 = t;
  t = term_b_10;
  p_74 = t;
  t = term_j_30;
  t = w_7(n_74, p_74, t);
  t = term_k_30;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm f_173 (ATerm), ATerm g_173 (ATerm), ATerm h_173 (ATerm), ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL;
  g_74 = t;
  t = term_o_26;
  h_74 = t;
  t = term_n_30;
  t = lookup_table_0_1(h_74, t);
  l_74 = t;
  t = term_p_26;
  i_74 = t;
  t = (ATerm) ATempty;
  j_74 = t;
  t = l_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(i_74, j_74, k_74, t);
  t = g_74;
  {
    static ATerm z_8 (ATerm t);
    static ATerm z_8 (ATerm t)
    {
      ATerm o_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_173(t);
          LocalPopChoice(r_30);
        }
      else
        {
          t = o_30;
          {
            ATerm s_30 = t;
            int t_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_9, b_9, g_9, t);
                LocalPopChoice(t_30);
              }
            else
              {
                t = s_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_8, t);
  }
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_75 = NULL;
        a_75 = t;
        {
          ATerm w_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_35 = NULL;
              t = a_75;
              {
                ATerm z_30 = t;
                int b_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_35 = NULL,j_35 = NULL;
                    t = term_o_23;
                    c_35 = t;
                    t = term_i_30;
                    j_35 = t;
                    t = term_c_31;
                    t = t_7(c_35, j_35, t);
                    LocalPopChoice(b_31);
                  }
                else
                  {
                    t = z_30;
                    t = fetch_1_0(h_9, t);
                  }
              }
              t = a_75;
              t = g_173(t);
              t = term_m_27;
              b_35 = t;
              t = SSL_exit(b_35);
              LocalPopChoice(x_30);
            }
          else
            {
              t = w_30;
              {
                ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
                t = term_o_23;
                p_35 = t;
                t = term_q_29;
                q_35 = t;
                t = term_d_31;
                t = t_7(p_35, q_35, t);
                t = a_75;
                t = h_173(t);
                t = term_m_27;
                o_35 = t;
                t = SSL_exit(o_35);
              }
            }
        }
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        {
          ATerm f_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL;
              static ATerm i_9 (ATerm t);
              static ATerm i_9 (ATerm t)
              {
                ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL,t_10 = NULL;
                g_75 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_75 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_75);
                e_75 = t;
                t = f_75;
                if(((e_74 != NULL) && (e_74 != t)))
                  _fail(t);
                else
                  e_74 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_75);
                t_10 = t;
                t = SSLsetAnnotations(t_10, e_75);
                return(t);
              }
              t = fetch_1_0(i_9, t);
              t = term_s_28;
              c_75 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_74)), term_i_31);
              d_75 = t;
              t = SSL_printnl(c_75, d_75);
              t = (ATerm) ATmakeAppl(sym__2, term_s_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_74)), term_i_31));
              t = g_173(t);
              t = term_u_28;
              b_75 = t;
              t = SSL_exit(b_75);
              LocalPopChoice(h_31);
            }
          else
            {
              t = f_31;
            }
        }
      }
  }
  f_74 = t;
  t = term_o_26;
  t = table_destroy_0_0(t);
  t = f_74;
  return(t);
}
ATerm option_wrap_5_0 (ATerm i_171 (ATerm), ATerm j_171 (ATerm), ATerm k_171 (ATerm), ATerm l_171 (ATerm), ATerm m_171 (ATerm), ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL;
  t = parse_options_3_0(i_171, j_171, k_171, t);
  l_75 = t;
  t = term_j_31;
  t = table_create_0_0(t);
  t = term_j_31;
  m_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_31, term_k_31, l_75);
  t = lookup_table_0_1(m_75, t);
  p_75 = t;
  t = term_k_31;
  n_75 = t;
  t = p_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(n_75, l_75, o_75, t);
  t = l_75;
  t = l_171(t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_171(t);
        t = report_success_0_0(t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(l_9, m_9, n_9, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(u_31);
                      }
                    else
                      {
                        t = t_31;
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
  ATerm r_75 = NULL,s_75 = NULL;
  t = term_c_24;
  r_75 = t;
  t = term_b_10;
  s_75 = t;
  t = term_v_31;
  t = w_7(r_75, s_75, t);
  t = term_w_31;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_x_31;
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

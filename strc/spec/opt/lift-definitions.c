#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_DynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_LRule_1;
Symbol sym_Path_2;
Symbol sym_Rec_2;
Symbol sym_Scope_2;
Symbol sym_Let_2;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym_Hashtable_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_LRule_1;
Symbol sym_Path_2;
Symbol sym_Rec_2;
Symbol sym_Scope_2;
Symbol sym_Let_2;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
static void init_module_constructors (void)
{
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
ATerm term_b_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_c_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_z_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_f_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_t_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_d_21;
ATerm term_f_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_r_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_f_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_m_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_v_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_v_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_v_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_v_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__3, term_n_27, term_o_27, (ATerm) ATempty);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_x_29);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_b_29);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_v_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_142 (ATerm), ATerm t);
static ATerm d_2 (ATerm q_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_6 (ATerm h_45, ATerm i_45, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_148 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm k_125 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm k_6 (ATerm j_26, ATerm i_26, ATerm t);
ATerm foldr_3_0 (ATerm r_147 (ATerm), ATerm s_147 (ATerm), ATerm t_147 (ATerm), ATerm t);
static ATerm o_6 (ATerm h_144 (ATerm), ATerm x_63, ATerm w_63, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm t_6 (ATerm s_820, ATerm x_820, ATerm l_81, ATerm t);
ATerm while_not_2_0 (ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm i_133 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm h_28 (ATerm x_25, ATerm y_25, ATerm z_25, ATerm t);
static ATerm w_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm free_vars_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm l_125 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm c_149 (ATerm), ATerm t);
static ATerm v_6 (ATerm f_25, ATerm e_25, ATerm t);
static ATerm w_6 (ATerm p_144 (ATerm), ATerm q_144 (ATerm), ATerm d_64, ATerm c_64, ATerm t);
static ATerm x_6 (ATerm m_144 (ATerm), ATerm z_63, ATerm y_63, ATerm t);
ATerm genzip_4_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm CollectSplit_2_0 (ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm y_145 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm b_7 (ATerm y_24, ATerm z_24, ATerm a_25, ATerm b_25, ATerm t);
ATerm map_1_0 (ATerm s_141 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm c_7 (ATerm n_138 (ATerm), ATerm s_43, ATerm q_43, ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm e_7 (ATerm v_34, ATerm w_34, ATerm t);
static ATerm f_7 (ATerm b_33, ATerm c_33, ATerm t);
static ATerm h_7 (ATerm b_134 (ATerm), ATerm a_250, ATerm h_33, ATerm t);
static ATerm g_7 (ATerm x_32, ATerm y_32, ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm t_155 (ATerm), ATerm t);
static ATerm m_65 (ATerm c_65, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_7 (ATerm d_33, ATerm t);
static ATerm j_7 (ATerm c_73, ATerm d_73, ATerm t);
static ATerm k_7 (ATerm x_34, ATerm y_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_66 (ATerm w_65, ATerm t);
static ATerm z_66 (ATerm a_66, ATerm b_66, ATerm c_66, ATerm t);
static ATerm a_67 (ATerm k_66, ATerm l_66, ATerm m_66, ATerm t);
static ATerm l_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_142 (ATerm), ATerm t);
static ATerm q_7 (ATerm s_46, ATerm t_46, ATerm t);
ATerm if_verbose2_1_0 (ATerm t_135 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_7 (ATerm r_38, ATerm s_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_7 (ATerm w_44, ATerm x_44, ATerm v_44, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_7 (ATerm a_42, ATerm b_42, ATerm t);
ATerm foldr_2_0 (ATerm p_147 (ATerm), ATerm q_147 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_135 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_7 (ATerm r_49, ATerm s_49, ATerm t_49, ATerm t);
static ATerm v_7 (ATerm u_49, ATerm v_49, ATerm t);
ATerm lookup_table_0_1 (ATerm l_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm z_49, ATerm a_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm o_7 (ATerm w_49, ATerm x_49, ATerm t);
static ATerm p_7 (ATerm b_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_158 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm parse_options_3_0 (ATerm w_158 (ATerm), ATerm x_158 (ATerm), ATerm y_158 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm z_156 (ATerm), ATerm a_157 (ATerm), ATerm b_157 (ATerm), ATerm c_157 (ATerm), ATerm d_157 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm iowrap_3_0 (ATerm c_156 (ATerm), ATerm d_156 (ATerm), ATerm e_156 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,i_0 = NULL,m_0 = NULL,n_0 = NULL;
  a_0 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_s_9;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_9), c_0), term_t_9);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_v_9;
  i_0 = t;
  t = SSL_exit(i_0);
  t = a_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL;
  q_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_0;
    }
  else
    {
      static ATerm p_0 (ATerm t);
      static ATerm p_0 (ATerm t)
      {
        t = not_null(s_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_0 = ATgetFirst((ATermList) t);
          if(((s_0 != NULL) && (s_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_0;
      t = at_end_1_0(p_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_142 (ATerm), ATerm t)
{
  static ATerm m_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL;
    l_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_1 = ATgetFirst((ATermList) t);
        k_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_1 = NULL,o_1 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(l_1);
          a_1 = t;
          t = k_1;
          t = m_1(t);
          o_1 = t;
          t = (ATerm) ATinsert(CheckATermList(o_1), j_1);
          y_0 = t;
          t = SSLsetAnnotations(y_0, a_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_1;
        t = j_142(t);
      }
    return(t);
  }
  t = m_1(t);
  return(t);
}
static ATerm d_2 (ATerm q_1, ATerm t)
{
  ATerm r_1 = NULL;
  t = SSL_explode_term(q_1);
  if(match_cons(t, sym__2))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,y_1 = NULL;
  y_1 = t;
  if(match_cons(t, sym__2))
    {
      u_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_0 (ATerm t);
            static ATerm t_0 (ATerm t)
            {
              t = v_1;
              return(t);
            }
            t = u_1;
            t = at_end_1_0(t_0, t);
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            t = d_2(y_1, t);
          }
      }
    }
  else
    {
      t = d_2(y_1, t);
    }
  return(t);
}
static ATerm g_6 (ATerm h_45, ATerm i_45, ATerm t)
{
  ATerm e_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  t = q_7(h_45, i_45, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_2 = ATgetFirst((ATermList) t);
      {
        ATerm z_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_2;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_3 = NULL;
        t = term_f_10;
        h_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_10, y_2);
        t = g_6(h_3, y_2, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm k_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_10) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_v_0;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_3 = NULL;
              t = term_f_10;
              o_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_10, y_2);
              t = g_6(o_3, y_2, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm n_10 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_10) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_v_0;
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
              {
                ATerm q_10 = t;
                int r_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_3 = NULL;
                    t = term_f_10;
                    u_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_f_10, y_2);
                    t = g_6(u_3, y_2, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm t_10 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) t_10) != ATmakeSymbol("e_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_v_0;
                    LocalPopChoice(r_10);
                  }
                else
                  {
                    t = q_10;
                    {
                      ATerm a_4 = NULL;
                      t = term_f_10;
                      a_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_f_10, y_2);
                      t = g_6(a_4, y_2, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm v_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) v_10) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_v_0;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_148 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,r_4 = NULL;
  o_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_4 = ATgetFirst((ATermList) t);
          r_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 = NULL,w_4 = NULL,x_4 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(o_4);
            q_4 = t;
            t = p_4;
            t = t_148(t);
            w_4 = t;
            t = r_4;
            t = filter_1_0(t_148, t);
            x_4 = t;
            t = (ATerm) ATinsert(CheckATermList(x_4), w_4);
            c_1 = t;
            t = SSLsetAnnotations(c_1, q_4);
            LocalPopChoice(z_10);
          }
        else
          {
            t = x_10;
            t = r_4;
            t = filter_1_0(t_148, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      {
        ATerm f_5 = NULL,i_5 = NULL,j_5 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(e_17);
        f_5 = t;
        t = f_17;
        t = g_125(t);
        i_5 = t;
        t = g_17;
        t = g_125(t);
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, i_5, j_5);
        e_1 = t;
        t = SSLsetAnnotations(e_1, f_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_17 = ATgetArgument(t, 0);
          g_17 = ATgetArgument(t, 1);
          d_17 = ATgetArgument(t, 2);
          {
            ATerm t_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(e_17);
            t_5 = t;
            t = f_17;
            t = i_125(t);
            a_6 = t;
            t = g_17;
            t = i_125(t);
            b_6 = t;
            t = d_17;
            t = g_125(t);
            c_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_6, b_6, c_6);
            g_1 = t;
            t = SSLsetAnnotations(g_1, t_5);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_17 = ATgetArgument(t, 0);
              g_17 = ATgetArgument(t, 1);
              d_17 = ATgetArgument(t, 2);
              c_17 = ATgetArgument(t, 3);
              {
                ATerm r_6 = NULL,a_7 = NULL,n_7 = NULL,s_7 = NULL,w_7 = NULL,h_1 = NULL;
                t = SSLgetAnnotations(e_17);
                r_6 = t;
                t = f_17;
                t = i_125(t);
                a_7 = t;
                t = g_17;
                t = i_125(t);
                n_7 = t;
                t = d_17;
                t = i_125(t);
                s_7 = t;
                t = c_17;
                t = g_125(t);
                w_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_7, n_7, s_7, w_7);
                h_1 = t;
                t = SSLsetAnnotations(h_1, r_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_17 = ATgetArgument(t, 0);
                  g_17 = ATgetArgument(t, 1);
                  d_17 = ATgetArgument(t, 2);
                  c_17 = ATgetArgument(t, 3);
                  {
                    ATerm p_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,i_1 = NULL;
                    t = SSLgetAnnotations(e_17);
                    p_8 = t;
                    t = f_17;
                    t = i_125(t);
                    v_8 = t;
                    t = g_17;
                    t = i_125(t);
                    w_8 = t;
                    t = d_17;
                    t = i_125(t);
                    x_8 = t;
                    t = c_17;
                    t = g_125(t);
                    y_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, v_8, w_8, x_8, y_8);
                    i_1 = t;
                    t = SSLsetAnnotations(i_1, p_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      f_17 = ATgetArgument(t, 0);
                      g_17 = ATgetArgument(t, 1);
                      d_17 = ATgetArgument(t, 2);
                      {
                        ATerm l_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,n_1 = NULL;
                        t = SSLgetAnnotations(e_17);
                        l_9 = t;
                        t = f_17;
                        t = i_125(t);
                        p_9 = t;
                        t = g_17;
                        t = i_125(t);
                        q_9 = t;
                        t = d_17;
                        t = i_125(t);
                        r_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, p_9, q_9, r_9);
                        n_1 = t;
                        t = SSLsetAnnotations(n_1, l_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          f_17 = ATgetArgument(t, 0);
                          g_17 = ATgetArgument(t, 1);
                          {
                            ATerm u_10 = NULL,y_10 = NULL,f_11 = NULL,z_1 = NULL;
                            t = SSLgetAnnotations(e_17);
                            u_10 = t;
                            t = f_17;
                            t = i_125(t);
                            y_10 = t;
                            t = g_17;
                            t = g_125(t);
                            f_11 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_10, f_11);
                            z_1 = t;
                            t = SSLsetAnnotations(z_1, u_10);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              f_17 = ATgetArgument(t, 0);
                              g_17 = ATgetArgument(t, 1);
                              {
                                ATerm r_11 = NULL,z_11 = NULL,a_12 = NULL,b_2 = NULL;
                                t = SSLgetAnnotations(e_17);
                                r_11 = t;
                                t = f_17;
                                t = i_125(t);
                                z_11 = t;
                                t = g_17;
                                t = g_125(t);
                                a_12 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, z_11, a_12);
                                b_2 = t;
                                t = SSLsetAnnotations(b_2, r_11);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  f_17 = ATgetArgument(t, 0);
                                  g_17 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_12 = NULL,n_12 = NULL,o_12 = NULL,f_2 = NULL;
                                    t = SSLgetAnnotations(e_17);
                                    j_12 = t;
                                    t = f_17;
                                    t = i_125(t);
                                    n_12 = t;
                                    t = g_17;
                                    t = g_125(t);
                                    o_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_12, o_12);
                                    f_2 = t;
                                    t = SSLsetAnnotations(f_2, j_12);
                                  }
                                }
                              else
                                {
                                  ATerm y_12 = NULL,c_13 = NULL,d_13 = NULL,g_2 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      f_17 = ATgetArgument(t, 0);
                                      g_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(e_17);
                                  y_12 = t;
                                  t = f_17;
                                  t = i_125(t);
                                  c_13 = t;
                                  t = g_17;
                                  t = g_125(t);
                                  d_13 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, c_13, d_13);
                                  g_2 = t;
                                  t = SSLsetAnnotations(g_2, y_12);
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
ATerm dynrule_sargs_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  ATerm m_18 = NULL,r_18 = NULL,u_18 = NULL;
  ATerm a_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          m_18 = ATgetArgument(t, 0);
          {
            ATerm e_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_11);
      t = m_18;
      if(match_cons(t, sym_DynRuleId_1))
        {
          r_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_18;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm g_11 = ATgetArgument(t, 0);
          u_18 = ATgetArgument(t, 1);
          {
            ATerm h_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_18;
    }
  else
    {
      t = a_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                m_18 = ATgetArgument(t, 0);
                {
                  ATerm m_11 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_11);
            t = m_18;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_18;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm n_11 = ATgetArgument(t, 0);
                u_18 = ATgetArgument(t, 1);
                {
                  ATerm o_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_18;
          }
        else
          {
            t = j_11;
            if(match_cons(t, sym_AddDynRule_2))
              {
                m_18 = ATgetArgument(t, 0);
                {
                  ATerm p_11 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = m_18;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_18;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm q_11 = ATgetArgument(t, 0);
                u_18 = ATgetArgument(t, 1);
                {
                  ATerm s_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_18;
          }
      }
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm v_20 = NULL;
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_20 = ATgetArgument(t, 0);
          {
            ATerm v_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_11);
      t = v_20;
    }
  else
    {
      t = t_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_20;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm f_21 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_21 = ATgetArgument(t, 0);
          {
            ATerm y_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_11);
      t = f_21;
    }
  else
    {
      t = w_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_21;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm d_20 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm d_12 = ATgetArgument(t, 0);
          d_20 = ATgetArgument(t, 1);
          {
            ATerm e_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_12);
      t = d_20;
      t = map_1_0(u_0, t);
    }
  else
    {
      t = b_12;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm f_12 = ATgetArgument(t, 0);
          d_20 = ATgetArgument(t, 1);
          {
            ATerm g_12 = ATgetArgument(t, 2);
          }
          {
            ATerm h_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_20;
      t = map_1_0(w_0, t);
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm k_21 = NULL;
  ATerm i_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_21 = ATgetArgument(t, 0);
          {
            ATerm l_12 = ATgetArgument(t, 1);
          }
          {
            ATerm m_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_12);
      t = k_21;
    }
  else
    {
      t = i_12;
      if(match_cons(t, sym_SDefT_4))
        {
          k_21 = ATgetArgument(t, 0);
          {
            ATerm p_12 = ATgetArgument(t, 1);
          }
          {
            ATerm q_12 = ATgetArgument(t, 2);
          }
          {
            ATerm r_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_21;
    }
  return(t);
}
static ATerm k_6 (ATerm j_26, ATerm i_26, ATerm t)
{
  t = j_26;
  t = map_1_0(x_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_147 (ATerm), ATerm s_147 (ATerm), ATerm t_147 (ATerm), ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_21;
      t = r_147(t);
    }
  else
    {
      ATerm y_21 = NULL,b_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_21 = ATgetFirst((ATermList) t);
          v_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_21;
      t = t_147(t);
      y_21 = t;
      t = v_21;
      t = foldr_3_0(r_147, s_147, t_147, t);
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_21, b_22);
      t = s_147(t);
    }
  return(t);
}
static ATerm o_6 (ATerm h_144 (ATerm), ATerm x_63, ATerm w_63, ATerm t)
{
  static ATerm k_23 (ATerm t);
  static ATerm k_23 (ATerm t)
  {
    ATerm z_22 = NULL,a_23 = NULL,d_23 = NULL;
    z_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_23 = ATgetFirst((ATermList) t);
            d_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_22;
              {
                static ATerm z_0 (ATerm t);
                static ATerm z_0 (ATerm t)
                {
                  t = w_63;
                  return(t);
                }
                t = w_6(h_144, z_0, a_23, d_23, t);
              }
              t = k_23(t);
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
              {
                ATerm m_13 = NULL,p_13 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(z_22);
                m_13 = t;
                t = d_23;
                t = k_23(t);
                p_13 = t;
                t = (ATerm) ATinsert(CheckATermList(p_13), a_23);
                q_2 = t;
                t = SSLsetAnnotations(q_2, m_13);
              }
            }
        }
      }
    return(t);
  }
  t = x_63;
  t = k_23(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      if(((ATgetType(u_12) != AT_LIST) || !(ATisEmpty(u_12))))
        _fail(t);
      {
        ATerm v_12 = ATgetArgument(t, 1);
        if(((ATgetType(v_12) != AT_LIST) || !(ATisEmpty(v_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,y_23 = NULL,z_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if(((ATgetType(w_12) == AT_LIST) && !(ATisEmpty(w_12))))
        {
          v_23 = ATgetFirst((ATermList) w_12);
          w_23 = (ATerm) ATgetNext((ATermList) w_12);
        }
      else
        _fail(t);
      {
        ATerm x_12 = ATgetArgument(t, 1);
        if(((ATgetType(x_12) == AT_LIST) && !(ATisEmpty(x_12))))
          {
            y_23 = ATgetFirst((ATermList) x_12);
            z_23 = (ATerm) ATgetNext((ATermList) x_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_23, y_23), (ATerm) ATmakeAppl(sym__2, w_23, z_23));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_24), a_24);
  return(t);
}
static ATerm t_6 (ATerm s_820, ATerm x_820, ATerm l_81, ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  t = SSL_explode_term(x_820);
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      p_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_820);
  if(match_cons(t, sym__2))
    {
      if((n_23 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_23, p_23);
  t = genzip_4_0(b_1, d_1, f_1, _id, t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_23, l_81);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm t)
{
  static ATerm l_24 (ATerm t);
  static ATerm l_24 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_133(t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = e_133(t);
        t = l_24(t);
      }
    return(t);
  }
  t = l_24(t);
  return(t);
}
ATerm for_3_0 (ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm i_133 (ATerm), ATerm t)
{
  t = g_133(t);
  t = while_not_2_0(h_133, i_133, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_25);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm p_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,s_2 = NULL;
  w_25 = t;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_25);
  p_25 = t;
  t = v_25;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
  s_2 = t;
  t = SSLsetAnnotations(s_2, p_25);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  g_27 = t;
  if(match_cons(t, sym__2))
    {
      h_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_27 = ATgetFirst((ATermList) t);
      l_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_28(h_27, j_27, g_27, t);
            LocalPopChoice(e_13);
          }
        else
          {
            t = b_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_27), k_27), l_27);
          }
      }
    }
  else
    {
      t = h_28(h_27, j_27, g_27, t);
    }
  return(t);
}
static ATerm h_28 (ATerm x_25, ATerm y_25, ATerm z_25, ATerm t)
{
  ATerm c_26 = NULL,g_26 = NULL,t_2 = NULL,o_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  t = SSLgetAnnotations(z_25);
  c_26 = t;
  t = y_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_26 = ATgetFirst((ATermList) t);
      w_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_26;
  if(match_cons(t, sym__2))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_26;
        if((u_26 != t))
          {
            _fail(t);
          }
        t = w_26;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = y_25;
        t = t_6(u_26, v_26, w_26, t);
      }
  }
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, g_26);
  t_2 = t;
  t = SSLsetAnnotations(t_2, c_26);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm g_28 = NULL;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      if((g_28 != ATgetArgument(t, 1)))
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
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_1, s_1, t_1, t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm t_27 = NULL,u_27 = NULL,y_27 = NULL;
        t_27 = t;
        if(match_cons(t, sym__2))
          {
            u_27 = ATgetArgument(t, 0);
            y_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_27;
        t = o_6(w_1, u_27, y_27, t);
      }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm z_13 = NULL,b_14 = NULL;
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(i_2, z_13, b_14, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      if((c_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(l_2, m_14, n_14, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      o_14 = ATgetArgument(t, 0);
      if((o_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm d_29 (ATerm t);
  static ATerm d_29 (ATerm t)
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_151(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
          ATerm l_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_28 = NULL,l_28 = NULL,u_13 = NULL,v_13 = NULL;
              j_28 = t;
              t = k_151(t);
              l_28 = t;
              t = j_28;
              {
                static ATerm x_1 (ATerm t);
                static ATerm x_1 (ATerm t)
                {
                  ATerm o_28 = NULL;
                  t = d_29(t);
                  o_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_28, l_28);
                  t = diff_0_0(t);
                  return(t);
                }
                t = l_151(x_1, d_29, a_2, t);
              }
              v_13 = t;
              t = SSL_explode_term(v_13);
              if(match_cons(t, sym__2))
                {
                  ATerm o_13 = ATgetArgument(t, 0);
                  u_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_13;
              t = foldr_3_0(c_2, h_2, _id, t);
              LocalPopChoice(n_13);
            }
          else
            {
              t = l_13;
              {
                ATerm e_14 = NULL,f_14 = NULL;
                f_14 = t;
                t = SSL_explode_term(f_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_13 = ATgetArgument(t, 0);
                    e_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_14;
                t = foldr_3_0(j_2, k_2, d_29, t);
              }
            }
        }
      }
    return(t);
  }
  t = d_29(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  v_40 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
      {
        ATerm c_15 = NULL,h_15 = NULL,i_15 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(v_40);
        c_15 = t;
        t = w_40;
        t = e_125(t);
        h_15 = t;
        t = u_40;
        t = c_125(t);
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_15, i_15);
        w_2 = t;
        t = SSLsetAnnotations(w_2, c_15);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          w_40 = ATgetArgument(t, 0);
          {
            ATerm z_15 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,m_16 = NULL,n_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,z_2 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(v_40);
            z_15 = t;
            t = w_40;
            if(match_cons(t, sym_Rule_3))
              {
                e_16 = ATgetArgument(t, 0);
                f_16 = ATgetArgument(t, 1);
                m_16 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_40);
            d_16 = t;
            t = e_16;
            t = c_125(t);
            n_16 = t;
            t = f_16;
            t = c_125(t);
            s_16 = t;
            t = m_16;
            t = c_125(t);
            t_16 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, n_16, s_16, t_16);
            x_2 = t;
            t = SSLsetAnnotations(x_2, d_16);
            u_16 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, u_16);
            z_2 = t;
            t = SSLsetAnnotations(z_2, z_15);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              w_40 = ATgetArgument(t, 0);
              u_40 = ATgetArgument(t, 1);
              r_40 = ATgetArgument(t, 2);
              {
                ATerm o_17 = NULL,u_17 = NULL,v_17 = NULL,z_17 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(v_40);
                o_17 = t;
                t = w_40;
                t = e_125(t);
                u_17 = t;
                t = u_40;
                t = e_125(t);
                v_17 = t;
                t = r_40;
                t = e_125(t);
                z_17 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, u_17, v_17, z_17);
                c_3 = t;
                t = SSLsetAnnotations(c_3, o_17);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  w_40 = ATgetArgument(t, 0);
                  u_40 = ATgetArgument(t, 1);
                  r_40 = ATgetArgument(t, 2);
                  s_40 = ATgetArgument(t, 3);
                  {
                    ATerm k_18 = NULL,s_18 = NULL,y_18 = NULL,z_18 = NULL,c_19 = NULL,d_3 = NULL;
                    t = SSLgetAnnotations(v_40);
                    k_18 = t;
                    t = w_40;
                    t = e_125(t);
                    s_18 = t;
                    t = u_40;
                    t = e_125(t);
                    y_18 = t;
                    t = r_40;
                    t = e_125(t);
                    z_18 = t;
                    t = s_40;
                    t = c_125(t);
                    c_19 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, s_18, y_18, z_18, c_19);
                    d_3 = t;
                    t = SSLsetAnnotations(d_3, k_18);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_40 = ATgetArgument(t, 0);
                      u_40 = ATgetArgument(t, 1);
                      r_40 = ATgetArgument(t, 2);
                      s_40 = ATgetArgument(t, 3);
                      {
                        ATerm o_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(v_40);
                        o_19 = t;
                        t = w_40;
                        t = e_125(t);
                        u_19 = t;
                        t = u_40;
                        t = e_125(t);
                        v_19 = t;
                        t = r_40;
                        t = e_125(t);
                        w_19 = t;
                        t = s_40;
                        t = c_125(t);
                        x_19 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, u_19, v_19, w_19, x_19);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, o_19);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          w_40 = ATgetArgument(t, 0);
                          u_40 = ATgetArgument(t, 1);
                          {
                            ATerm k_20 = NULL,o_20 = NULL,p_20 = NULL,i_3 = NULL;
                            t = SSLgetAnnotations(v_40);
                            k_20 = t;
                            t = w_40;
                            t = e_125(t);
                            o_20 = t;
                            t = u_40;
                            t = c_125(t);
                            p_20 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, o_20, p_20);
                            i_3 = t;
                            t = SSLsetAnnotations(i_3, k_20);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              w_40 = ATgetArgument(t, 0);
                              u_40 = ATgetArgument(t, 1);
                              {
                                ATerm l_21 = NULL,z_21 = NULL,a_22 = NULL,j_3 = NULL;
                                t = SSLgetAnnotations(v_40);
                                l_21 = t;
                                t = w_40;
                                t = e_125(t);
                                z_21 = t;
                                t = u_40;
                                t = c_125(t);
                                a_22 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, z_21, a_22);
                                j_3 = t;
                                t = SSLsetAnnotations(j_3, l_21);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  w_40 = ATgetArgument(t, 0);
                                  u_40 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_22 = NULL,u_22 = NULL,v_22 = NULL,p_3 = NULL;
                                    t = SSLgetAnnotations(v_40);
                                    l_22 = t;
                                    t = w_40;
                                    t = e_125(t);
                                    u_22 = t;
                                    t = u_40;
                                    t = c_125(t);
                                    v_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_22, v_22);
                                    p_3 = t;
                                    t = SSLsetAnnotations(p_3, l_22);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      w_40 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_23 = NULL,s_23 = NULL,v_3 = NULL;
                                        t = SSLgetAnnotations(v_40);
                                        i_23 = t;
                                        t = w_40;
                                        t = c_125(t);
                                        s_23 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, s_23);
                                        v_3 = t;
                                        t = SSLsetAnnotations(v_3, i_23);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          w_40 = ATgetArgument(t, 0);
                                          {
                                            ATerm e_24 = NULL,h_24 = NULL,b_4 = NULL;
                                            t = SSLgetAnnotations(v_40);
                                            e_24 = t;
                                            t = w_40;
                                            t = c_125(t);
                                            h_24 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_24);
                                            b_4 = t;
                                            t = SSLsetAnnotations(b_4, e_24);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              w_40 = ATgetArgument(t, 0);
                                              {
                                                ATerm o_24 = NULL,q_24 = NULL,c_4 = NULL;
                                                t = SSLgetAnnotations(v_40);
                                                o_24 = t;
                                                t = w_40;
                                                t = c_125(t);
                                                q_24 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, q_24);
                                                c_4 = t;
                                                t = SSLsetAnnotations(c_4, o_24);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  w_40 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm w_24 = NULL,c_25 = NULL,d_4 = NULL;
                                                    t = SSLgetAnnotations(v_40);
                                                    w_24 = t;
                                                    t = w_40;
                                                    t = c_125(t);
                                                    c_25 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, c_25);
                                                    d_4 = t;
                                                    t = SSLsetAnnotations(d_4, w_24);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm k_25 = NULL,m_25 = NULL,e_4 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      w_40 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(v_40);
                                                  k_25 = t;
                                                  t = w_40;
                                                  t = c_125(t);
                                                  m_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, m_25);
                                                  e_4 = t;
                                                  t = SSLsetAnnotations(e_4, k_25);
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
ATerm dynrule_targs_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm l_42 = NULL,o_42 = NULL,t_42 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          l_42 = ATgetArgument(t, 0);
          {
            ATerm t_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_13);
      t = l_42;
      if(match_cons(t, sym_DynRuleId_1))
        {
          o_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_42;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm w_13 = ATgetArgument(t, 0);
          ATerm x_13 = ATgetArgument(t, 1);
          t_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_42;
    }
  else
    {
      t = r_13;
      {
        ATerm y_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                l_42 = ATgetArgument(t, 0);
                {
                  ATerm d_14 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_14);
            t = l_42;
            if(match_cons(t, sym_DynRuleId_1))
              {
                o_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_42;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm g_14 = ATgetArgument(t, 0);
                ATerm h_14 = ATgetArgument(t, 1);
                t_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_42;
          }
        else
          {
            t = y_13;
            if(match_cons(t, sym_AddDynRule_2))
              {
                l_42 = ATgetArgument(t, 0);
                {
                  ATerm i_14 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = l_42;
            if(match_cons(t, sym_DynRuleId_1))
              {
                o_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_42;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_14 = ATgetArgument(t, 0);
                ATerm k_14 = ATgetArgument(t, 1);
                t_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_42;
          }
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm p_43 = NULL;
  ATerm l_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_43 = ATgetArgument(t, 0);
          {
            ATerm q_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_14);
      t = p_43;
    }
  else
    {
      t = l_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_43;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm j_44 = NULL;
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_44 = ATgetArgument(t, 0);
          {
            ATerm t_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_14);
      t = j_44;
    }
  else
    {
      t = r_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_44;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm i_43 = NULL;
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm w_14 = ATgetArgument(t, 0);
          ATerm x_14 = ATgetArgument(t, 1);
          i_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(v_14);
      t = i_43;
      t = map_1_0(m_2, t);
    }
  else
    {
      t = u_14;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm y_14 = ATgetArgument(t, 0);
          ATerm z_14 = ATgetArgument(t, 1);
          i_43 = ATgetArgument(t, 2);
          {
            ATerm a_15 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_43;
      t = map_1_0(n_2, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm t_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_45);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm b_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = b_15;
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            {
              ATerm g_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_45 = ATgetArgument(t, 0);
                      w_45 = ATgetArgument(t, 1);
                      x_45 = ATgetArgument(t, 2);
                      y_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_45;
                  t = map_1_0(r_2, t);
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = g_15;
                  {
                    ATerm k_15 = t;
                    int l_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_15);
                      }
                    else
                      {
                        t = k_15;
                        t = dynrule_targs_1_0(u_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm j_46 = NULL;
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_46 = ATgetArgument(t, 0);
          {
            ATerm o_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_15);
      t = j_46;
    }
  else
    {
      t = m_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_46;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = map_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm w_46 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_46 = ATgetArgument(t, 0);
          {
            ATerm r_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_15);
      t = w_46;
    }
  else
    {
      t = p_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_46;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm c_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_47);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm w_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_47 = ATgetArgument(t, 0);
                      i_47 = ATgetArgument(t, 1);
                      j_47 = ATgetArgument(t, 2);
                      k_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_47;
                  t = map_1_0(e_3, t);
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = w_15;
                  {
                    ATerm y_15 = t;
                    int a_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_16);
                      }
                    else
                      {
                        t = y_15;
                        t = dynrule_targs_1_0(f_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm y_47 = NULL;
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_47 = ATgetArgument(t, 0);
          {
            ATerm g_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_16);
      t = y_47;
    }
  else
    {
      t = b_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_47;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = map_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm i_48 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_48 = ATgetArgument(t, 0);
          {
            ATerm j_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = i_48;
    }
  else
    {
      t = h_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_48;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm p_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_48);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            {
              ATerm q_16 = t;
              int r_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_48 = NULL,u_48 = NULL,x_48 = NULL,z_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_48 = ATgetArgument(t, 0);
                      u_48 = ATgetArgument(t, 1);
                      x_48 = ATgetArgument(t, 2);
                      z_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_48;
                  t = map_1_0(n_3, t);
                  LocalPopChoice(r_16);
                }
              else
                {
                  t = q_16;
                  {
                    ATerm v_16 = t;
                    int w_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_16);
                      }
                    else
                      {
                        t = v_16;
                        t = dynrule_targs_1_0(q_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm j_49 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_49 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = j_49;
    }
  else
    {
      t = x_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_49;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = map_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm o_49 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_49 = ATgetArgument(t, 0);
          {
            ATerm h_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_17);
      t = o_49;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_49;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm c_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_50);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_50 = ATgetArgument(t, 0);
                      f_50 = ATgetArgument(t, 1);
                      g_50 = ATgetArgument(t, 2);
                      h_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_50;
                  t = map_1_0(w_3, t);
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  {
                    ATerm p_17 = t;
                    int q_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_17);
                      }
                    else
                      {
                        t = p_17;
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
  ATerm o_50 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_50 = ATgetArgument(t, 0);
          {
            ATerm t_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_17);
      t = o_50;
    }
  else
    {
      t = r_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_50;
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
  ATerm v_50 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_50 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_17);
      t = v_50;
    }
  else
    {
      t = w_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_50;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm d_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_51);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            {
              ATerm e_18 = t;
              int f_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_51 = NULL,i_51 = NULL,l_51 = NULL,m_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_51 = ATgetArgument(t, 0);
                      i_51 = ATgetArgument(t, 1);
                      l_51 = ATgetArgument(t, 2);
                      m_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_51;
                  t = map_1_0(g_4, t);
                  LocalPopChoice(f_18);
                }
              else
                {
                  t = e_18;
                  {
                    ATerm g_18 = t;
                    int h_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_18);
                      }
                    else
                      {
                        t = g_18;
                        t = dynrule_targs_1_0(h_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm u_51 = NULL;
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_51 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = u_51;
    }
  else
    {
      t = i_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_51;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = map_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm z_51 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_51 = ATgetArgument(t, 0);
          {
            ATerm p_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = z_51;
    }
  else
    {
      t = n_18;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm p_45 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      p_45 = ATgetArgument(t, 0);
      t = p_45;
      t = free_vars_3_0(o_2, p_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          p_45 = ATgetArgument(t, 0);
          t = p_45;
          t = free_vars_3_0(a_3, b_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              p_45 = ATgetArgument(t, 0);
              t = p_45;
              t = free_vars_3_0(l_3, m_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_45 = ATgetArgument(t, 0);
                  t = p_45;
                  t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      p_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_45;
                  t = free_vars_3_0(z_3, f_4, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm o_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_52);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm q_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = q_18;
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            {
              ATerm x_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_52 = ATgetArgument(t, 0);
                      r_52 = ATgetArgument(t, 1);
                      s_52 = ATgetArgument(t, 2);
                      t_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_52;
                  t = map_1_0(l_4, t);
                  LocalPopChoice(a_19);
                }
              else
                {
                  t = x_18;
                  {
                    ATerm b_19 = t;
                    int d_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_19);
                      }
                    else
                      {
                        t = b_19;
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
static ATerm l_4 (ATerm t)
{
  ATerm a_53 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_53 = ATgetArgument(t, 0);
          {
            ATerm g_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_19);
      t = a_53;
    }
  else
    {
      t = e_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_53;
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
  ATerm f_53 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_53 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = f_53;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_53;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_52 = NULL,l_52 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      l_52 = ATgetArgument(t, 0);
      t = l_52;
      if(match_cons(t, sym_Rule_3))
        {
          h_52 = ATgetArgument(t, 0);
          {
            ATerm k_19 = ATgetArgument(t, 1);
          }
          {
            ATerm l_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_52;
      t = free_vars_3_0(j_4, k_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          l_52 = ATgetArgument(t, 0);
          {
            ATerm m_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_52;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm s_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_53);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = n_19;
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_53 = ATgetArgument(t, 0);
                      v_53 = ATgetArgument(t, 1);
                      w_53 = ATgetArgument(t, 2);
                      x_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_53;
                  t = map_1_0(u_4, t);
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = s_19;
                  {
                    ATerm y_19 = t;
                    int z_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_19);
                      }
                    else
                      {
                        t = y_19;
                        t = dynrule_targs_1_0(v_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_54 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_54 = ATgetArgument(t, 0);
          {
            ATerm c_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_20);
      t = e_54;
    }
  else
    {
      t = a_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_54;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = map_1_0(y_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm j_54 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_54 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_20);
      t = j_54;
    }
  else
    {
      t = e_20;
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
static ATerm z_4 (ATerm t)
{
  ATerm m_54 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      m_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_54);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
      n_54 = t;
      if(match_cons(t, sym_Let_2))
        {
          o_54 = ATgetArgument(t, 0);
          p_54 = ATgetArgument(t, 1);
          t = n_54;
          t = k_6(o_54, p_54, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              o_54 = ATgetArgument(t, 0);
              p_54 = ATgetArgument(t, 1);
              q_54 = ATgetArgument(t, 2);
              t = p_54;
              t = map_1_0(b_5, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  o_54 = ATgetArgument(t, 0);
                  p_54 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, o_54);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_54 = ATgetArgument(t, 0);
                      p_54 = ATgetArgument(t, 1);
                      q_54 = ATgetArgument(t, 2);
                      r_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_54;
                  t = map_1_0(c_5, t);
                }
            }
        }
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = j_20;
            t = dynrule_sargs_1_0(d_5, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm z_54 = NULL;
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_54 = ATgetArgument(t, 0);
          {
            ATerm q_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_20);
      t = z_54;
    }
  else
    {
      t = m_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_54;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm k_55 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_55 = ATgetArgument(t, 0);
          {
            ATerm t_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_20);
      t = k_55;
    }
  else
    {
      t = r_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_55;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = map_1_0(e_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm p_55 = NULL;
  ATerm u_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_55 = ATgetArgument(t, 0);
          {
            ATerm x_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_20);
      t = p_55;
    }
  else
    {
      t = u_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_55;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm y_20 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_20;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  q_53 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      ATerm a_21 = ATgetArgument(t, 1);
      ATerm b_21 = ATgetArgument(t, 2);
      ATerm c_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  r_53 = t;
  t = q_53;
  t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_53;
  t = free_vars_3_0(z_4, a_5, sboundin_3_0, t);
  t = filter_1_0(g_5, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_53;
  return(t);
}
ATerm partition_1_0 (ATerm c_149 (ATerm), ATerm t)
{
  static ATerm x_56 (ATerm t);
  static ATerm x_56 (ATerm t)
  {
    ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
    u_56 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_d_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_56 = ATgetFirst((ATermList) t);
            w_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,p_27 = NULL,b_8 = NULL;
              t = SSLgetAnnotations(u_56);
              t_26 = t;
              t = v_56;
              t = c_149(t);
              n_26 = t;
              t = (ATerm) ATinsert(CheckATermList(w_56), n_26);
              b_8 = t;
              t = SSLsetAnnotations(b_8, t_26);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm h_21 = ATgetFirst((ATermList) t);
                  r_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_26;
              t = x_56(t);
              q_26 = t;
              t = SSL_explode_term(q_26);
              if(match_cons(t, sym__2))
                {
                  ATerm i_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_21) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_21 = ATgetArgument(t, 1);
                    if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
                      {
                        s_26 = ATgetFirst((ATermList) j_21);
                        {
                          ATerm m_21 = (ATerm) ATgetNext((ATermList) j_21);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(q_26);
              if(match_cons(t, sym__2))
                {
                  ATerm n_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_21) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_21 = ATgetArgument(t, 1);
                    if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
                      {
                        ATerm p_21 = ATgetFirst((ATermList) o_21);
                        ATerm q_21 = (ATerm) ATgetNext((ATermList) o_21);
                        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
                          {
                            p_27 = ATgetFirst((ATermList) q_21);
                            {
                              ATerm r_21 = (ATerm) ATgetNext((ATermList) q_21);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_26), n_26), p_27);
              LocalPopChoice(g_21);
            }
          else
            {
              t = e_21;
              {
                ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,w_28 = NULL,d_8 = NULL;
                t = SSLgetAnnotations(u_56);
                d_28 = t;
                t = (ATerm) ATinsert(CheckATermList(w_56), v_56);
                d_8 = t;
                t = SSLsetAnnotations(d_8, d_28);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm s_21 = ATgetFirst((ATermList) t);
                    b_28 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_28;
                t = x_56(t);
                a_28 = t;
                t = SSL_explode_term(a_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_21 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm x_21 = ATgetArgument(t, 1);
                      if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
                        {
                          c_28 = ATgetFirst((ATermList) x_21);
                          {
                            ATerm c_22 = (ATerm) ATgetNext((ATermList) x_21);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(a_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm e_22 = ATgetArgument(t, 1);
                      if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
                        {
                          ATerm f_22 = ATgetFirst((ATermList) e_22);
                          ATerm g_22 = (ATerm) ATgetNext((ATermList) e_22);
                          if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
                            {
                              w_28 = ATgetFirst((ATermList) g_22);
                              {
                                ATerm h_22 = (ATerm) ATgetNext((ATermList) g_22);
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
                t = (ATerm) ATmakeAppl(sym__2, c_28, (ATerm) ATinsert(CheckATermList(w_28), v_56));
              }
            }
        }
      }
    return(t);
  }
  t = x_56(t);
  return(t);
}
static ATerm v_6 (ATerm f_25, ATerm e_25, ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  t = f_25;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      b_57 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_57;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, a_57, e_25), b_57);
  return(t);
}
static ATerm w_6 (ATerm p_144 (ATerm), ATerm q_144 (ATerm), ATerm d_64, ATerm c_64, ATerm t)
{
  t = q_144(t);
  {
    static ATerm h_5 (ATerm t);
    static ATerm h_5 (ATerm t)
    {
      ATerm c_57 = NULL;
      c_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_64, c_57);
      t = p_144(t);
      return(t);
    }
    t = fetch_1_0(h_5, t);
  }
  t = c_64;
  return(t);
}
static ATerm x_6 (ATerm m_144 (ATerm), ATerm z_63, ATerm y_63, ATerm t)
{
  static ATerm s_57 (ATerm t);
  static ATerm s_57 (ATerm t)
  {
    ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
    n_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_63;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_57 = ATgetFirst((ATermList) t);
            p_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_57;
              {
                static ATerm k_5 (ATerm t);
                static ATerm k_5 (ATerm t)
                {
                  t = y_63;
                  return(t);
                }
                t = w_6(m_144, k_5, o_57, p_57, t);
              }
              t = s_57(t);
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              {
                ATerm f_29 = NULL,i_29 = NULL,g_8 = NULL;
                t = SSLgetAnnotations(n_57);
                f_29 = t;
                t = p_57;
                t = s_57(t);
                i_29 = t;
                t = (ATerm) ATinsert(CheckATermList(i_29), o_57);
                g_8 = t;
                t = SSLsetAnnotations(g_8, f_29);
              }
            }
        }
      }
    return(t);
  }
  t = z_63;
  t = s_57(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t)
{
  static ATerm a_58 (ATerm t);
  static ATerm a_58 (ATerm t)
  {
    ATerm k_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_131(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = k_22;
        {
          ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,u_8 = NULL;
          t = e_131(t);
          z_57 = t;
          if(match_cons(t, sym__2))
            {
              v_57 = ATgetArgument(t, 0);
              w_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_57);
          u_57 = t;
          t = v_57;
          t = g_131(t);
          x_57 = t;
          t = w_57;
          t = a_58(t);
          y_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_57, y_57);
          u_8 = t;
          t = SSLsetAnnotations(u_8, u_57);
          t = f_131(t);
        }
      }
    return(t);
  }
  t = a_58(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_21;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_58 = ATgetFirst((ATermList) t);
      p_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if(match_cons(n_22, sym__2))
        {
          q_58 = ATgetArgument(n_22, 0);
          r_58 = ATgetArgument(n_22, 1);
        }
      else
        _fail(t);
      {
        ATerm o_22 = ATgetArgument(t, 1);
        if(match_cons(o_22, sym__2))
          {
            s_58 = ATgetArgument(o_22, 0);
            t_58 = ATgetArgument(o_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_58), q_58), (ATerm) ATinsert(CheckATermList(t_58), r_58));
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL;
  if(match_cons(t, sym__2))
    {
      u_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(q_5, u_58, v_58, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm w_58 = NULL;
  if(match_cons(t, sym__2))
    {
      w_58 = ATgetArgument(t, 0);
      if((w_58 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm x_58 = NULL;
  if(match_cons(t, sym__2))
    {
      x_58 = ATgetArgument(t, 0);
      if((x_58 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  l_58 = t;
  m_58 = t;
  t = SSL_explode_term(m_58);
  if(match_cons(t, sym__2))
    {
      d_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_58);
  f_58 = t;
  t = b_58;
  t = genzip_4_0(l_5, m_5, n_5, a_146, t);
  if(match_cons(t, sym__2))
    {
      e_58 = ATgetArgument(t, 0);
      c_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(d_58, e_58);
  k_58 = t;
  t = SSLsetAnnotations(k_58, f_58);
  t = b_146(t);
  if(match_cons(t, sym__2))
    {
      g_58 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_58;
  t = foldr_2_0(o_5, p_5, t);
  j_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_58, j_58);
  t = x_6(r_5, h_58, j_58, t);
  i_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_58, i_58);
  return(t);
}
ATerm collect_split_1_0 (ATerm y_145 (ATerm), ATerm t)
{
  static ATerm a_59 (ATerm t);
  static ATerm a_59 (ATerm t)
  {
    static ATerm s_5 (ATerm t);
    static ATerm s_5 (ATerm t)
    {
      ATerm p_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_145(t);
          LocalPopChoice(q_22);
        }
      else
        {
          t = p_22;
          {
            ATerm y_58 = NULL;
            y_58 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_58, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(a_59, s_5, t);
    return(t);
  }
  t = a_59(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      e_59 = ATgetArgument(t, 0);
      f_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(e_59, f_59, t);
  return(t);
}
static ATerm b_7 (ATerm y_24, ATerm z_24, ATerm a_25, ATerm b_25, ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL;
  t = b_25;
  t = collect_split_1_0(u_5, t);
  if(match_cons(t, sym__2))
    {
      b_59 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_59, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, y_24, z_24, a_25, b_59)));
  t = conc_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm s_141 (ATerm), ATerm t)
{
  static ATerm u_59 (ATerm t);
  static ATerm u_59 (ATerm t)
  {
    ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
    r_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_59;
      }
    else
      {
        ATerm q_29 = NULL,t_29 = NULL,u_29 = NULL,i_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_59 = ATgetFirst((ATermList) t);
            t_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_59);
        q_29 = t;
        t = s_59;
        t = s_141(t);
        t_29 = t;
        t = t_59;
        t = u_59(t);
        u_29 = t;
        t = (ATerm) ATinsert(CheckATermList(u_29), t_29);
        i_9 = t;
        t = SSLsetAnnotations(i_9, q_29);
      }
    return(t);
  }
  t = u_59(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_f_10;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_f_10;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
      a_60 = ATgetArgument(t, 2);
      {
        ATerm f_60 = NULL;
        t = term_s_22;
        f_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_59, term_s_22);
        t = c_7(v_5, y_59, f_60, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, y_59, z_59, a_60);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          y_59 = ATgetArgument(t, 0);
          z_59 = ATgetArgument(t, 1);
          a_60 = ATgetArgument(t, 2);
          b_60 = ATgetArgument(t, 3);
          {
            ATerm k_60 = NULL;
            t = term_w_22;
            k_60 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_59, term_w_22);
            t = c_7(w_5, y_59, k_60, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, y_59, z_59, a_60, b_60);
          }
        }
      else
        {
          ATerm p_60 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              y_59 = ATgetArgument(t, 0);
              z_59 = ATgetArgument(t, 1);
              a_60 = ATgetArgument(t, 2);
              b_60 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_y_22;
          p_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_59, term_y_22);
          t = c_7(x_5, y_59, p_60, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, y_59, z_59, a_60, b_60);
        }
    }
  return(t);
}
static ATerm c_7 (ATerm n_138 (ATerm), ATerm s_43, ATerm q_43, ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
  t_60 = t;
  t = n_138(t);
  q_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_60, s_43, q_43);
  t = r_7(q_60, s_43, q_43, t);
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_60 = NULL;
        t = term_e_23;
        y_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_60, term_e_23);
        t = q_7(q_60, y_60, t);
        {
          ATerm f_23 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_23;
            }
        }
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_60 = ATgetFirst((ATermList) t);
      s_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_60, term_e_23, (ATerm) ATinsert(CheckATermList(s_60), (ATerm) ATinsert(CheckATermList(r_60), s_43)));
  t = lookup_table_0_1(q_60, t);
  x_60 = t;
  t = term_e_23;
  u_60 = t;
  t = (ATerm) ATinsert(CheckATermList(s_60), (ATerm) ATinsert(CheckATermList(r_60), s_43));
  v_60 = t;
  t = x_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(u_60, v_60, w_60, t);
  t = t_60;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL;
  a_61 = t;
  t = term_h_23;
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_61, term_h_23);
  t = c_7(z_5, a_61, b_61, t);
  t = a_61;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm z_60 = NULL;
  z_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_23), term_j_23);
  t = map_1_0(y_5, t);
  t = z_60;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm l_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,a_10 = NULL;
  t_61 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_61);
  l_61 = t;
  t = r_61;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(f_6, t);
  t = concat_0_0(t);
  s_61 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_61);
  a_10 = t;
  t = SSLsetAnnotations(a_10, l_61);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
  y_61 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_61 = ATgetArgument(t, 0);
      v_61 = ATgetArgument(t, 1);
      w_61 = ATgetArgument(t, 2);
      x_61 = ATgetArgument(t, 3);
      {
        ATerm m_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_61;
            t = b_7(u_61, v_61, w_61, x_61, t);
            LocalPopChoice(r_23);
          }
        else
          {
            t = m_23;
            t = (ATerm) ATinsert(ATempty, y_61);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, y_61);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,c_10 = NULL,b_10 = NULL;
  t = declare_standard_strategies_0_0(t);
  k_61 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_61);
  d_61 = t;
  t = e_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_61 = ATgetFirst((ATermList) t);
      h_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_61);
  f_61 = t;
  t = h_61;
  t = Cons_2_0(d_6, e_6, t);
  i_61 = t;
  t = (ATerm) ATinsert(CheckATermList(i_61), g_61);
  b_10 = t;
  t = SSLsetAnnotations(b_10, f_61);
  j_61 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_61);
  c_10 = t;
  t = SSLsetAnnotations(c_10, d_61);
  return(t);
}
static ATerm e_7 (ATerm v_34, ATerm w_34, ATerm t)
{
  ATerm f_62 = NULL;
  t = SSL_fputc(v_34, w_34);
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_62);
  return(t);
}
static ATerm f_7 (ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm g_62 = NULL;
  t = SSL_write_term_to_stream_text(b_33, c_33);
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_62);
  return(t);
}
static ATerm h_7 (ATerm b_134 (ATerm), ATerm a_250, ATerm h_33, ATerm t)
{
  ATerm h_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_250, term_t_23);
  t = l_7(t);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_62, h_33);
  t = b_134(t);
  t = fclose_0_0(t);
  t = h_33;
  return(t);
}
static ATerm g_7 (ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm i_62 = NULL;
  t = SSL_write_term_to_stream_baf(x_32, y_32);
  i_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_62);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if(match_cons(u_23, sym_Stream_1))
        {
          p_30 = ATgetArgument(u_23, 0);
        }
      else
        _fail(t);
      q_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(p_30, q_30, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm g_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,m_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_23 = ATgetArgument(t, 0);
      if(match_cons(x_23, sym_Stream_1))
        {
          k_31 = ATgetArgument(x_23, 0);
        }
      else
        _fail(t);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(k_31, m_31, t);
  g_31 = t;
  t = term_c_24;
  i_31 = t;
  t = g_31;
  if(match_cons(t, sym_Stream_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, g_31);
  t = e_7(i_31, j_31, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,a_64 = NULL,b_64 = NULL,h_10 = NULL,g_10 = NULL;
  n_62 = t;
  if(match_cons(t, sym__2))
    {
      u_62 = ATgetArgument(t, 0);
      v_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  t_62 = t;
  t = u_62;
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_6 (ATerm t);
        static ATerm h_6 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((m_62 != NULL) && (m_62 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_6, t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = d_24;
        t = term_g_24;
        m_62 = t;
      }
  }
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_62, v_62);
  g_10 = t;
  t = SSLsetAnnotations(g_10, t_62);
  t = n_62;
  if(match_cons(t, sym__2))
    {
      p_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_62, (ATerm) ATmakeAppl(sym__2, not_null(m_62), q_62));
  h_10 = t;
  t = SSLsetAnnotations(h_10, o_62);
  s_62 = t;
  if(match_cons(t, sym__2))
    {
      a_64 = ATgetArgument(t, 0);
      b_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_30 = NULL,i_30 = NULL,l_30 = NULL,m_30 = NULL,o_30 = NULL,i_10 = NULL;
        t = SSLgetAnnotations(s_62);
        b_30 = t;
        t = a_64;
        t = fetch_1_0(i_6, t);
        i_30 = t;
        t = b_64;
        if(match_cons(t, sym__2))
          {
            m_30 = ATgetArgument(t, 0);
            o_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_7(j_6, m_30, o_30, t);
        l_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_30, l_30);
        i_10 = t;
        t = SSLsetAnnotations(i_10, b_30);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        {
          ATerm y_30 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,j_10 = NULL;
          t = SSLgetAnnotations(s_62);
          y_30 = t;
          t = b_64;
          if(match_cons(t, sym__2))
            {
              d_31 = ATgetArgument(t, 0);
              e_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_7(l_6, d_31, e_31, t);
          c_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_64, c_31);
          j_10 = t;
          t = SSLsetAnnotations(j_10, y_30);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm t_155 (ATerm), ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  n_64 = t;
  t = dtime_0_0(t);
  t = n_64;
  t = t_155(t);
  m_64 = t;
  t = dtime_0_0(t);
  j_64 = t;
  t = m_64;
  if(match_cons(t, sym__2))
    {
      k_64 = ATgetArgument(t, 0);
      l_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_64), (ATerm) ATmakeAppl(sym_Runtime_1, j_64)), l_64);
  return(t);
}
static ATerm m_65 (ATerm c_65, ATerm t)
{
  t = SSL_fclose(c_65);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL;
  g_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_65 = ATgetArgument(t, 0);
      {
        ATerm k_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_65);
            LocalPopChoice(m_24);
          }
        else
          {
            t = k_24;
            t = m_65(g_65, t);
          }
      }
    }
  else
    {
      t = m_65(g_65, t);
    }
  return(t);
}
static ATerm i_7 (ATerm d_33, ATerm t)
{
  t = SSL_read_term_from_stream(d_33);
  return(t);
}
static ATerm j_7 (ATerm c_73, ATerm d_73, ATerm t)
{
  t = SSL_strcat(c_73, d_73);
  return(t);
}
static ATerm k_7 (ATerm x_34, ATerm y_34, ATerm t)
{
  ATerm n_65 = NULL;
  t = SSL_fopen(x_34, y_34);
  n_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_65);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_65 = NULL;
  t = SSL_stdin_stream();
  o_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_65);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_65 = NULL;
  t = SSL_stdout_stream();
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_65);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_65 = NULL;
  t = SSL_stderr_stream();
  q_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_65);
  return(t);
}
static ATerm y_66 (ATerm w_65, ATerm t)
{
  ATerm x_65 = NULL;
  t = SSL_explode_term(w_65);
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_24 = ATgetArgument(t, 1);
        if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
          {
            x_65 = ATgetFirst((ATermList) p_24);
            {
              ATerm r_24 = (ATerm) ATgetNext((ATermList) p_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_65;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_65;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_65;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_65;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_66 (ATerm a_66, ATerm b_66, ATerm c_66, ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL,i_66 = NULL,o_10 = NULL;
  t = SSLgetAnnotations(c_66);
  f_66 = t;
  t = a_66;
  if(match_cons(t, sym_Path_1))
    {
      i_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_66, b_66);
  o_10 = t;
  t = SSLsetAnnotations(o_10, f_66);
  if(match_cons(t, sym__2))
    {
      d_66 = ATgetArgument(t, 0);
      e_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(d_66, e_66, t);
  return(t);
}
static ATerm a_67 (ATerm k_66, ATerm l_66, ATerm m_66, ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,t_66 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(m_66);
  p_66 = t;
  t = SSL_is_string(k_66);
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_66, l_66);
  p_10 = t;
  t = SSLsetAnnotations(p_10, p_66);
  if(match_cons(t, sym__2))
    {
      n_66 = ATgetArgument(t, 0);
      o_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(n_66, o_66, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  v_66 = t;
  if(match_cons(t, sym__2))
    {
      w_66 = ATgetArgument(t, 0);
      x_66 = ATgetArgument(t, 1);
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_66(v_66, t);
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            {
              ATerm u_24 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_66(w_66, x_66, v_66, t);
                  LocalPopChoice(v_24);
                }
              else
                {
                  t = u_24;
                  t = a_67(w_66, x_66, v_66, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_66(v_66, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,j_67 = NULL;
  j_67 = t;
  {
    ATerm x_24 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_67, term_g_25);
        t = l_7(t);
        LocalPopChoice(d_25);
      }
    else
      {
        t = x_24;
        {
          ATerm j_32 = NULL,k_32 = NULL;
          t = term_h_25;
          k_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_25, j_67);
          t = j_7(k_32, j_67, t);
          j_32 = t;
          t = SSL_perror(j_32);
          _fail(t);
        }
      }
  }
  d_67 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(e_67, t);
  c_67 = t;
  t = d_67;
  t = fclose_0_0(t);
  t = c_67;
  return(t);
}
ATerm fetch_1_0 (ATerm c_142 (ATerm), ATerm t)
{
  static ATerm i_68 (ATerm t);
  static ATerm i_68 (ATerm t)
  {
    ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
    f_68 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_68 = ATgetFirst((ATermList) t);
        h_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_32 = NULL,e_33 = NULL,s_10 = NULL;
          t = SSLgetAnnotations(f_68);
          r_32 = t;
          t = g_68;
          t = c_142(t);
          e_33 = t;
          t = (ATerm) ATinsert(CheckATermList(h_68), e_33);
          s_10 = t;
          t = SSLsetAnnotations(s_10, r_32);
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          {
            ATerm x_33 = NULL,a_34 = NULL,w_10 = NULL;
            t = SSLgetAnnotations(f_68);
            x_33 = t;
            t = h_68;
            t = i_68(t);
            a_34 = t;
            t = (ATerm) ATinsert(CheckATermList(a_34), g_68);
            w_10 = t;
            t = SSLsetAnnotations(w_10, x_33);
          }
        }
    }
    return(t);
  }
  t = i_68(t);
  return(t);
}
static ATerm q_7 (ATerm s_46, ATerm t_46, ATerm t)
{
  ATerm m_68 = NULL;
  t = lookup_table_0_1(s_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(t_46, m_68, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_135 (ATerm), ATerm t)
{
  ATerm p_68 = NULL;
  p_68 = t;
  {
    ATerm l_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
        t = term_q_25;
        s_68 = t;
        t = term_r_25;
        t_68 = t;
        t = term_s_25;
        t = q_7(s_68, t_68, t);
        r_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_68, term_t_25);
        t = geq_0_0(t);
        t = p_68;
        t = t_135(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = l_25;
        t = p_68;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
  w_68 = t;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_68;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_26 = ATgetFirst((ATermList) t);
                ATerm e_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_68;
          }
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATinsert(ATempty, w_68);
      }
  }
  x_68 = t;
  t = term_g_24;
  y_68 = t;
  t = SSL_printnl(y_68, x_68);
  t = w_68;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL;
  t = term_q_25;
  c_69 = t;
  t = term_f_26;
  d_69 = t;
  t = term_h_26;
  t = q_7(c_69, d_69, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm f_69 = NULL;
  f_69 = t;
  if(match_string(t, "-k"))
    {
      t = f_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_69;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
  g_69 = t;
  t = SSL_string_to_int(g_69);
  h_69 = t;
  t = term_k_26;
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, h_69);
  t = t_7(i_69, h_69, t);
  t = g_69;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_6, n_6, p_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm k_69 = NULL;
  k_69 = t;
  if(match_string(t, "-S"))
    {
      t = k_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_69;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL;
  t = term_r_25;
  l_69 = t;
  t = term_m_26;
  m_69 = t;
  t = term_p_26;
  t = t_7(l_69, m_69, t);
  t = term_x_26;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
  n_69 = t;
  t = SSL_string_to_int(n_69);
  o_69 = t;
  t = term_r_25;
  p_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_25, o_69);
  t = t_7(p_69, o_69, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_69);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_z_26;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  t = term_a_27;
  q_69 = t;
  t = term_v_0;
  r_69 = t;
  t = term_b_27;
  t = t_7(q_69, r_69, t);
  t = term_c_27;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_6, s_6, u_6, t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm i_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_6, z_6, d_7, t);
            LocalPopChoice(m_27);
          }
        else
          {
            t = i_27;
            t = Option_3_0(x_7, y_7, z_7, t);
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL;
  t = term_q_25;
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_25, r_38, s_38);
  t = lookup_table_0_1(s_69, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(r_38, s_38, t_69, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_25, r_38, s_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
      t = term_v_0;
      t = g_0(t);
      z_69 = t;
      t = term_n_27;
      a_70 = t;
      t = term_o_27;
      b_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_27, term_o_27, z_69);
      t = r_7(a_70, b_70, z_69, t);
      _fail(t);
    }
  else
    {
      ATerm e_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_69 = ATgetFirst((ATermList) t);
          y_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_69;
      t = d_0(t);
      t = term_v_0;
      t = f_0(t);
      e_70 = t;
      t = (ATerm) ATinsert(CheckATermList(y_69), e_70);
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm g_70 = NULL;
  g_70 = t;
  if(match_string(t, "-o"))
    {
      t = g_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_70;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL;
  h_70 = t;
  t = term_q_27;
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_27, h_70);
  t = t_7(i_70, h_70, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_70);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_8, c_8, e_8, t);
  return(t);
}
static ATerm r_7 (ATerm w_44, ATerm x_44, ATerm v_44, ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_44, x_44);
  {
    ATerm s_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_27 = ATgetArgument(t, 0);
            ATerm x_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_44, x_44);
        t = q_7(w_44, x_44, t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = s_27;
        t = (ATerm) ATempty;
      }
  }
  l_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_44, x_44, (ATerm) ATinsert(CheckATermList(l_70), v_44));
  t = lookup_table_0_1(w_44, t);
  o_70 = t;
  t = (ATerm) ATinsert(CheckATermList(l_70), v_44);
  m_70 = t;
  t = o_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(x_44, m_70, n_70, t);
  t = k_70;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
      t = term_v_0;
      t = o_0(t);
      z_70 = t;
      t = term_n_27;
      a_71 = t;
      t = term_o_27;
      b_71 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_27, term_o_27, z_70);
      t = r_7(a_71, b_71, z_70, t);
      _fail(t);
    }
  else
    {
      ATerm f_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_70 = ATgetFirst((ATermList) t);
          w_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_70 = ATgetFirst((ATermList) t);
          y_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_70;
      t = j_0(t);
      t = x_70;
      t = l_0(t);
      f_71 = t;
      t = (ATerm) ATinsert(CheckATermList(y_70), f_71);
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm h_71 = NULL;
  h_71 = t;
  if(match_string(t, "-i"))
    {
      t = h_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_71;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL;
  i_71 = t;
  t = term_z_27;
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_27, i_71);
  t = t_7(j_71, i_71, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_71);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_8, h_8, i_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_0;
  t = whoami_0_0(t);
  k_71 = t;
  t = term_s_9;
  m_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_28), k_71);
  n_71 = t;
  t = SSL_printnl(m_71, n_71);
  t = term_v_9;
  l_71 = t;
  t = SSL_exit(l_71);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL;
  t = term_q_25;
  o_71 = t;
  t = term_f_26;
  p_71 = t;
  t = term_h_26;
  t = q_7(o_71, p_71, t);
  return(t);
}
static ATerm m_7 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm i_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_42, b_42);
      LocalPopChoice(k_28);
    }
  else
    {
      t = i_28;
      t = SSL_addr(a_42, b_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_147 (ATerm), ATerm q_147 (ATerm), ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
  r_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_71;
      t = p_147(t);
    }
  else
    {
      ATerm w_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_71 = ATgetFirst((ATermList) t);
          t_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_71;
      t = foldr_2_0(p_147, q_147, t);
      w_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_71, w_71);
      t = q_147(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL;
  if(match_cons(t, sym__2))
    {
      c_35 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(c_35, d_35, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_71 = NULL,u_34 = NULL,z_34 = NULL;
  t = times_0_0(t);
  z_34 = t;
  t = SSL_explode_term(z_34);
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      u_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_34;
  t = foldr_2_0(j_8, k_8, t);
  z_71 = t;
  t = SSL_TicksToSeconds(z_71);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  k_72 = t;
  if(match_cons(t, sym__2))
    {
      l_72 = ATgetArgument(t, 0);
      m_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_72;
        if((l_72 != t))
          {
            _fail(t);
          }
        t = k_72;
        LocalPopChoice(p_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATmakeAppl(sym__2, l_72, m_72);
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_72, m_72);
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              t = SSL_gtr(l_72, m_72);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_72, m_72);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_135 (ATerm), ATerm t)
{
  ATerm q_72 = NULL;
  q_72 = t;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
        t = term_q_25;
        t_72 = t;
        t = term_r_25;
        u_72 = t;
        t = term_s_25;
        t = q_7(t_72, u_72, t);
        s_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_72, term_v_9);
        t = geq_0_0(t);
        t = q_72;
        t = s_135(t);
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = q_72;
      }
  }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,z_72 = NULL,a_73 = NULL;
  t = run_time_0_0(t);
  w_72 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  x_72 = t;
  t = term_s_9;
  z_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_28), w_72), term_u_28), x_72);
  a_73 = t;
  t = SSL_printnl(z_72, a_73);
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_28), w_72), term_u_28), x_72));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_73 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_26;
  b_73 = t;
  t = SSL_exit(b_73);
  return(t);
}
static ATerm u_7 (ATerm r_49, ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm e_73 = NULL;
  t = SSL_hashtable_put(t_49, r_49, s_49);
  e_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_73);
  return(t);
}
static ATerm v_7 (ATerm u_49, ATerm v_49, ATerm t)
{
  t = SSL_hashtable_get(v_49, u_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_46, ATerm t)
{
  ATerm n_73 = NULL;
  t = table_hashtable_0_0(t);
  n_73 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_36 = NULL;
        t = n_73;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_7(l_46, a_36, t);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        {
          ATerm k_36 = NULL;
          t = l_46;
          t = table_create_0_0(t);
          t = n_73;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(l_46, k_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm q_73 = NULL;
  t = SSL_hashtable_create(z_49, a_50);
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_73);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL,v_73 = NULL,w_73 = NULL;
  r_73 = t;
  t = term_z_28;
  v_73 = t;
  t = term_a_29;
  w_73 = t;
  t = r_73;
  t = new_hashtable_0_2(v_73, w_73, t);
  s_73 = t;
  t = r_73;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(r_73, s_73, t_73, t);
  t = r_73;
  return(t);
}
static ATerm o_7 (ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm x_73 = NULL;
  t = SSL_hashtable_remove(x_49, w_49);
  x_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_73);
  return(t);
}
static ATerm p_7 (ATerm b_50, ATerm t)
{
  ATerm y_73 = NULL;
  t = SSL_hashtable_destroy(b_50);
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_73);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_73 = NULL;
  t = SSL_table_hashtable();
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_73);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL;
  a_74 = t;
  t = table_hashtable_0_0(t);
  b_74 = t;
  t = lookup_table_0_1(a_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(d_74, t);
  t = b_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(a_74, c_74, t);
  t = a_74;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL;
  t = term_b_29;
  e_74 = t;
  t = term_v_0;
  f_74 = t;
  t = term_c_29;
  t = t_7(e_74, f_74, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_e_29;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  t = term_b_29;
  i_74 = t;
  t = term_v_0;
  j_74 = t;
  t = term_c_29;
  t = t_7(i_74, j_74, t);
  t = term_g_29;
  g_74 = t;
  t = term_v_0;
  h_74 = t;
  t = term_h_29;
  t = t_7(g_74, h_74, t);
  t = term_j_29;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_8, n_8, o_8, t);
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      t = Option_3_0(q_8, r_8, s_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,b_11 = NULL;
  p_74 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_74 = ATgetFirst((ATermList) t);
      m_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_74);
  k_74 = t;
  t = l_74;
  t = a_110(t);
  n_74 = t;
  t = m_74;
  t = b_110(t);
  o_74 = t;
  t = (ATerm) ATinsert(CheckATermList(o_74), n_74);
  b_11 = t;
  t = SSLsetAnnotations(b_11, k_74);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_158 (ATerm), ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,z_74 = NULL,a_75 = NULL,d_11 = NULL;
  u_74 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_29;
        t = z_158(t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
      }
  }
  t = u_74;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_74 = ATgetFirst((ATermList) t);
      x_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_74);
  v_74 = t;
  t = term_f_26;
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, w_74);
  t = t_7(a_75, w_74, t);
  t = x_74;
  {
    static ATerm k_75 (ATerm t);
    static ATerm k_75 (ATerm t)
    {
      ATerm r_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_75 = NULL;
              d_75 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_75;
              LocalPopChoice(w_29);
            }
          else
            {
              t = v_29;
              t = z_158(t);
              t = Cons_2_0(_id, k_75, t);
            }
          LocalPopChoice(s_29);
        }
      else
        {
          t = r_29;
          {
            ATerm g_75 = NULL,h_75 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_75 = ATgetFirst((ATermList) t);
                h_75 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_75), (ATerm) ATmakeAppl(sym_Undefined_1, g_75));
          }
        }
      return(t);
    }
    t = k_75(t);
  }
  z_74 = t;
  t = (ATerm) ATinsert(CheckATermList(z_74), (ATerm) ATmakeAppl(sym_Program_1, w_74));
  d_11 = t;
  t = SSLsetAnnotations(d_11, v_74);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm x_75 = NULL;
  x_75 = t;
  if(match_string(t, "--help"))
    {
      t = x_75;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_75;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_75;
        }
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL;
  t = term_x_29;
  y_75 = t;
  t = term_v_0;
  z_75 = t;
  t = term_y_29;
  t = t_7(y_75, z_75, t);
  t = term_z_29;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm w_158 (ATerm), ATerm x_158 (ATerm), ATerm y_158 (ATerm), ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
  r_75 = t;
  t = term_n_27;
  s_75 = t;
  t = term_c_30;
  t = lookup_table_0_1(s_75, t);
  w_75 = t;
  t = term_o_27;
  t_75 = t;
  t = (ATerm) ATempty;
  u_75 = t;
  t = w_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(t_75, u_75, v_75, t);
  t = r_75;
  {
    static ATerm t_8 (ATerm t);
    static ATerm t_8 (ATerm t)
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_158(t);
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          {
            ATerm f_30 = t;
            int g_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_8, a_9, b_9, t);
                LocalPopChoice(g_30);
              }
            else
              {
                t = f_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_8, t);
  }
  {
    ATerm h_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_76 = NULL;
        k_76 = t;
        {
          ATerm k_30 = t;
          int n_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_36 = NULL;
              t = k_76;
              {
                ATerm r_30 = t;
                int s_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_36 = NULL,u_36 = NULL;
                    t = term_q_25;
                    t_36 = t;
                    t = term_x_29;
                    u_36 = t;
                    t = term_t_30;
                    t = q_7(t_36, u_36, t);
                    LocalPopChoice(s_30);
                  }
                else
                  {
                    t = r_30;
                    t = fetch_1_0(c_9, t);
                  }
              }
              t = k_76;
              t = x_158(t);
              t = term_m_26;
              s_36 = t;
              t = SSL_exit(s_36);
              LocalPopChoice(n_30);
            }
          else
            {
              t = k_30;
              {
                ATerm d_37 = NULL,f_37 = NULL,h_37 = NULL;
                t = term_q_25;
                f_37 = t;
                t = term_b_29;
                h_37 = t;
                t = term_u_30;
                t = q_7(f_37, h_37, t);
                t = k_76;
                t = y_158(t);
                t = term_m_26;
                d_37 = t;
                t = SSL_exit(d_37);
              }
            }
        }
        LocalPopChoice(j_30);
      }
    else
      {
        t = h_30;
        {
          ATerm v_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL;
              static ATerm d_9 (ATerm t);
              static ATerm d_9 (ATerm t)
              {
                ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL,i_11 = NULL;
                q_76 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_76 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_76);
                o_76 = t;
                t = p_76;
                if(((p_75 != NULL) && (p_75 != t)))
                  _fail(t);
                else
                  p_75 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_76);
                i_11 = t;
                t = SSLsetAnnotations(i_11, o_76);
                return(t);
              }
              t = fetch_1_0(d_9, t);
              t = term_s_9;
              m_76 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_75)), term_x_30);
              n_76 = t;
              t = SSL_printnl(m_76, n_76);
              t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_75)), term_x_30));
              t = x_158(t);
              t = term_v_9;
              l_76 = t;
              t = SSL_exit(l_76);
              LocalPopChoice(w_30);
            }
          else
            {
              t = v_30;
            }
        }
      }
  }
  q_75 = t;
  t = term_n_27;
  t = table_destroy_0_0(t);
  t = q_75;
  return(t);
}
ATerm option_wrap_5_0 (ATerm z_156 (ATerm), ATerm a_157 (ATerm), ATerm b_157 (ATerm), ATerm c_157 (ATerm), ATerm d_157 (ATerm), ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL;
  t = parse_options_3_0(z_156, a_157, b_157, t);
  v_76 = t;
  t = term_z_30;
  t = table_create_0_0(t);
  t = term_z_30;
  w_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_30, term_a_31, v_76);
  t = lookup_table_0_1(w_76, t);
  z_76 = t;
  t = term_a_31;
  x_76 = t;
  t = z_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(x_76, v_76, y_76, t);
  t = v_76;
  t = c_157(t);
  {
    ATerm b_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_157(t);
        t = report_success_0_0(t);
        LocalPopChoice(f_31);
      }
    else
      {
        t = b_31;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = if_verbose2_1_0(m_9, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL;
  t = term_h_31;
  a_77 = t;
  t = term_v_0;
  b_77 = t;
  t = term_l_31;
  t = t_7(a_77, b_77, t);
  t = term_n_31;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_o_31;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
  c_77 = t;
  t = term_q_25;
  g_77 = t;
  t = term_f_26;
  h_77 = t;
  t = term_h_26;
  t = q_7(g_77, h_77, t);
  d_77 = t;
  t = term_s_9;
  e_77 = t;
  t = (ATerm) ATinsert(ATempty, d_77);
  f_77 = t;
  t = SSL_printnl(e_77, f_77);
  t = c_77;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_156 (ATerm), ATerm d_156 (ATerm), ATerm e_156 (ATerm), ATerm t)
{
  static ATerm e_9 (ATerm t);
  static ATerm g_9 (ATerm t);
  static ATerm e_9 (ATerm t)
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_156(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
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
                          t = Option_3_0(h_9, j_9, k_9, t);
                          LocalPopChoice(w_31);
                        }
                      else
                        {
                          t = v_31;
                          {
                            ATerm x_31 = t;
                            int y_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(y_31);
                              }
                            else
                              {
                                t = x_31;
                                t = keep_option_0_0(t);
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
  static ATerm g_9 (ATerm t)
  {
    ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
    j_77 = t;
    {
      ATerm z_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm n_9 (ATerm t);
          static ATerm n_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_77 != NULL) && (i_77 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_9, t);
          LocalPopChoice(a_32);
        }
      else
        {
          t = z_31;
          t = term_b_32;
          i_77 = t;
        }
    }
    t = not_null(i_77);
    t = ReadFromFile_0_0(t);
    k_77 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_77, k_77);
    t = apply_strategy_1_0(c_156, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(e_9, e_156, default_system_about_0_0, f_9, g_9, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,l_11 = NULL;
  p_77 = t;
  if(match_cons(t, sym__2))
    {
      m_77 = ATgetArgument(t, 0);
      n_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_77);
  l_77 = t;
  t = n_77;
  t = lift_definitions_0_0(t);
  o_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_77, o_77);
  l_11 = t;
  t = SSLsetAnnotations(l_11, l_77);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(o_9, _fail, default_usage_0_0, t);
  return(t);
}

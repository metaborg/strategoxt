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
ATerm term_s_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_a_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_r_22;
ATerm term_s_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_a_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_o_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_x_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_f_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_y_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_a_2);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_a_2);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_a_2);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_a_2);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_l_31);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_k_30);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_a_2);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm p_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm y_160 (ATerm), ATerm z_160 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_144 (ATerm), ATerm t);
static ATerm o_3 (ATerm a_3, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm o_6 (ATerm i_45, ATerm j_45, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_150 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm d_126 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm s_6 (ATerm k_26, ATerm j_26, ATerm t);
ATerm foldr_3_0 (ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm m_149 (ATerm), ATerm t);
static ATerm w_6 (ATerm a_146 (ATerm), ATerm y_62, ATerm x_62, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm b_7 (ATerm z_826, ATerm e_827, ATerm o_80, ATerm t);
ATerm while_not_2_0 (ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm t);
ATerm for_3_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm r_29 (ATerm r_27, ATerm s_27, ATerm t_27, ATerm t);
static ATerm c_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm free_vars_3_0 (ATerm c_153 (ATerm), ATerm d_153 (ATerm), ATerm e_153 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm v_125 (ATerm), ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm e_126 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm v_150 (ATerm), ATerm t);
static ATerm d_7 (ATerm g_25, ATerm f_25, ATerm t);
static ATerm e_7 (ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm e_63, ATerm d_63, ATerm t);
static ATerm f_7 (ATerm f_146 (ATerm), ATerm a_63, ATerm z_62, ATerm t);
ATerm genzip_4_0 (ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm CollectSplit_2_0 (ATerm t_147 (ATerm), ATerm u_147 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm r_147 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm j_7 (ATerm z_24, ATerm a_25, ATerm b_25, ATerm c_25, ATerm t);
ATerm map_1_0 (ATerm l_143 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm k_7 (ATerm g_139 (ATerm), ATerm t_43, ATerm r_43, ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm m_7 (ATerm w_34, ATerm x_34, ATerm t);
static ATerm n_7 (ATerm c_33, ATerm d_33, ATerm t);
static ATerm p_7 (ATerm u_134 (ATerm), ATerm p_252, ATerm i_33, ATerm t);
static ATerm o_7 (ATerm y_32, ATerm z_32, ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm n_157 (ATerm), ATerm t);
static ATerm c_67 (ATerm w_66, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_7 (ATerm e_33, ATerm t);
static ATerm r_7 (ATerm h_72, ATerm i_72, ATerm t);
static ATerm s_7 (ATerm y_34, ATerm z_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_68 (ATerm m_67, ATerm t);
static ATerm p_68 (ATerm r_67, ATerm s_67, ATerm t_67, ATerm t);
static ATerm q_68 (ATerm b_68, ATerm c_68, ATerm d_68, ATerm t);
static ATerm t_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_143 (ATerm), ATerm t);
static ATerm y_7 (ATerm q_46, ATerm r_46, ATerm t);
ATerm if_verbose2_1_0 (ATerm m_136 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_8 (ATerm s_38, ATerm t_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_7 (ATerm x_44, ATerm y_44, ATerm w_44, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_7 (ATerm s_41, ATerm u_41, ATerm t);
ATerm foldr_2_0 (ATerm i_149 (ATerm), ATerm j_149 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_136 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_8 (ATerm l_49, ATerm m_49, ATerm n_49, ATerm t);
static ATerm d_8 (ATerm o_49, ATerm p_49, ATerm t);
ATerm lookup_table_0_1 (ATerm j_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_49, ATerm u_49, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_7 (ATerm q_49, ATerm r_49, ATerm t);
static ATerm x_7 (ATerm v_49, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_160 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm parse_options_3_0 (ATerm q_160 (ATerm), ATerm r_160 (ATerm), ATerm s_160 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm t_158 (ATerm), ATerm u_158 (ATerm), ATerm v_158 (ATerm), ATerm w_158 (ATerm), ATerm x_158 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm iowrap_3_0 (ATerm w_157 (ATerm), ATerm x_157 (ATerm), ATerm y_157 (ATerm), ATerm t);
static ATerm j_10 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,i_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_0 = ATgetFirst((ATermList) t);
      i_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_0)), not_null(t_0));
          return(t);
        }
        t = i_0;
        t = r_0(t);
        if(((s_0 != NULL) && (s_0 != t)))
          _fail(t);
        else
          s_0 = t;
        t = c_0;
        t = q_0(t);
        if(((t_0 != NULL) && (t_0 != t)))
          _fail(t);
        else
          t_0 = t;
        t = i_0;
        t = reverse_acc_2_0(q_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_2;
      t = r_0(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_2 = NULL;
  d_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_1);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_1);
  e_2 = t;
  t = SSLsetAnnotations(e_2, b_1);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm h_1 = NULL;
  h_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_1), term_k_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm y_160 (ATerm), ATerm z_160 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_0 = NULL,a_1 = NULL;
      t = term_n_10;
      z_0 = t;
      t = term_o_10;
      a_1 = t;
      t = term_p_10;
      t = y_7(z_0, a_1, t);
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      t = fetch_1_0(m_0, t);
    }
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_160(t);
        t = echo_0_0(t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
      }
  }
  t = term_u_10;
  t = echo_0_0(t);
  t = term_w_10;
  x_0 = t;
  t = term_x_10;
  y_0 = t;
  t = term_y_10;
  t = y_7(x_0, y_0, t);
  t = reverse_acc_2_0(_id, n_0, t);
  t = map_1_0(p_0, t);
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL;
        t = z_160(t);
        i_1 = t;
        t = (ATerm) ATinsert(CheckATermList(i_1), term_b_11);
        t = echo_0_0(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,g_2 = NULL;
  q_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_1);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_1);
  g_2 = t;
  t = SSLsetAnnotations(g_2, o_1);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_1 = NULL;
  l_1 = t;
  {
    ATerm c_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_1 = NULL,n_1 = NULL;
        t = term_n_10;
        m_1 = t;
        t = term_o_10;
        n_1 = t;
        t = term_p_10;
        t = y_7(m_1, n_1, t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = c_11;
        t = fetch_1_0(u_0, t);
      }
  }
  t = l_1;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,v_1 = NULL;
  s_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_1;
    }
  else
    {
      static ATerm v_0 (ATerm t);
      static ATerm v_0 (ATerm t)
      {
        t = not_null(v_1);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_1 = ATgetFirst((ATermList) t);
          if(((v_1 != NULL) && (v_1 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_1;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    ATerm o_2 = NULL,p_2 = NULL,s_2 = NULL;
    s_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_2 = ATgetFirst((ATermList) t);
        p_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_0 = NULL,y_1 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(s_2);
          w_0 = t;
          t = p_2;
          t = t_2(t);
          y_1 = t;
          t = (ATerm) ATinsert(CheckATermList(y_1), o_2);
          i_2 = t;
          t = SSLsetAnnotations(i_2, w_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_2;
        t = c_144(t);
      }
    return(t);
  }
  t = t_2(t);
  return(t);
}
static ATerm o_3 (ATerm a_3, ATerm t)
{
  ATerm b_3 = NULL;
  t = SSL_explode_term(a_3);
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_3;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,i_3 = NULL;
  i_3 = t;
  if(match_cons(t, sym__2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
      {
        ATerm i_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_1 (ATerm t);
            static ATerm e_1 (ATerm t)
            {
              t = e_3;
              return(t);
            }
            t = d_3;
            t = at_end_1_0(e_1, t);
            LocalPopChoice(k_11);
          }
        else
          {
            t = i_11;
            t = o_3(i_3, t);
          }
      }
    }
  else
    {
      t = o_3(i_3, t);
    }
  return(t);
}
static ATerm o_6 (ATerm i_45, ATerm j_45, ATerm t)
{
  ATerm q_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_45, j_45);
  t = y_7(i_45, j_45, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_3 = ATgetFirst((ATermList) t);
      {
        ATerm m_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_3;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm w_4 = NULL;
  w_4 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_3 = NULL;
        t = term_s_11;
        r_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, w_4);
        t = o_6(r_3, w_4, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm u_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_11) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_a_2;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        {
          ATerm v_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_3 = NULL;
              t = term_s_11;
              x_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_11, w_4);
              t = o_6(x_3, w_4, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm z_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) z_11) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_a_2;
              LocalPopChoice(y_11);
            }
          else
            {
              t = v_11;
              {
                ATerm c_12 = t;
                int d_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_4 = NULL;
                    t = term_s_11;
                    f_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_s_11, w_4);
                    t = o_6(f_4, w_4, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm e_12 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) e_12) != ATmakeSymbol("e_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_a_2;
                    LocalPopChoice(d_12);
                  }
                else
                  {
                    t = c_12;
                    {
                      ATerm o_4 = NULL;
                      t = term_s_11;
                      o_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_s_11, w_4);
                      t = o_6(o_4, w_4, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm f_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_a_2;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_150 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,a_6 = NULL,c_6 = NULL;
  t_5 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_5;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_6 = ATgetFirst((ATermList) t);
          c_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 = NULL,k_5 = NULL,l_5 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(t_5);
            d_5 = t;
            t = a_6;
            t = m_150(t);
            k_5 = t;
            t = c_6;
            t = filter_1_0(m_150, t);
            l_5 = t;
            t = (ATerm) ATinsert(CheckATermList(l_5), k_5);
            k_2 = t;
            t = SSLsetAnnotations(k_2, d_5);
            LocalPopChoice(l_12);
          }
        else
          {
            t = i_12;
            t = c_6;
            t = filter_1_0(m_150, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      {
        ATerm z_5 = NULL,f_6 = NULL,g_6 = NULL,m_2 = NULL;
        t = SSLgetAnnotations(f_18);
        z_5 = t;
        t = g_18;
        t = z_125(t);
        f_6 = t;
        t = h_18;
        t = z_125(t);
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_6, g_6);
        m_2 = t;
        t = SSLsetAnnotations(m_2, z_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_18 = ATgetArgument(t, 0);
          h_18 = ATgetArgument(t, 1);
          e_18 = ATgetArgument(t, 2);
          {
            ATerm r_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(f_18);
            r_6 = t;
            t = g_18;
            t = b_126(t);
            x_6 = t;
            t = h_18;
            t = b_126(t);
            y_6 = t;
            t = e_18;
            t = z_125(t);
            z_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, x_6, y_6, z_6);
            n_2 = t;
            t = SSLsetAnnotations(n_2, r_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              g_18 = ATgetArgument(t, 0);
              h_18 = ATgetArgument(t, 1);
              e_18 = ATgetArgument(t, 2);
              z_17 = ATgetArgument(t, 3);
              {
                ATerm g_8 = NULL,l_8 = NULL,m_8 = NULL,p_8 = NULL,r_8 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(f_18);
                g_8 = t;
                t = g_18;
                t = b_126(t);
                l_8 = t;
                t = h_18;
                t = b_126(t);
                m_8 = t;
                t = e_18;
                t = b_126(t);
                p_8 = t;
                t = z_17;
                t = z_125(t);
                r_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_8, m_8, p_8, r_8);
                q_2 = t;
                t = SSLsetAnnotations(q_2, g_8);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  g_18 = ATgetArgument(t, 0);
                  h_18 = ATgetArgument(t, 1);
                  e_18 = ATgetArgument(t, 2);
                  z_17 = ATgetArgument(t, 3);
                  {
                    ATerm e_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,n_9 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(f_18);
                    e_9 = t;
                    t = g_18;
                    t = b_126(t);
                    j_9 = t;
                    t = h_18;
                    t = b_126(t);
                    k_9 = t;
                    t = e_18;
                    t = b_126(t);
                    l_9 = t;
                    t = z_17;
                    t = z_125(t);
                    n_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, j_9, k_9, l_9, n_9);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, e_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      g_18 = ATgetArgument(t, 0);
                      h_18 = ATgetArgument(t, 1);
                      e_18 = ATgetArgument(t, 2);
                      {
                        ATerm y_9 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,u_2 = NULL;
                        t = SSLgetAnnotations(f_18);
                        y_9 = t;
                        t = g_18;
                        t = b_126(t);
                        d_10 = t;
                        t = h_18;
                        t = b_126(t);
                        e_10 = t;
                        t = e_18;
                        t = b_126(t);
                        f_10 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, d_10, e_10, f_10);
                        u_2 = t;
                        t = SSLsetAnnotations(u_2, y_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          g_18 = ATgetArgument(t, 0);
                          h_18 = ATgetArgument(t, 1);
                          {
                            ATerm q_10 = NULL,t_10 = NULL,v_10 = NULL,v_2 = NULL;
                            t = SSLgetAnnotations(f_18);
                            q_10 = t;
                            t = g_18;
                            t = b_126(t);
                            t_10 = t;
                            t = h_18;
                            t = z_125(t);
                            v_10 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, t_10, v_10);
                            v_2 = t;
                            t = SSLsetAnnotations(v_2, q_10);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              g_18 = ATgetArgument(t, 0);
                              h_18 = ATgetArgument(t, 1);
                              {
                                ATerm w_11 = NULL,g_12 = NULL,h_12 = NULL,w_2 = NULL;
                                t = SSLgetAnnotations(f_18);
                                w_11 = t;
                                t = g_18;
                                t = b_126(t);
                                g_12 = t;
                                t = h_18;
                                t = z_125(t);
                                h_12 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, g_12, h_12);
                                w_2 = t;
                                t = SSLsetAnnotations(w_2, w_11);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  g_18 = ATgetArgument(t, 0);
                                  h_18 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_12 = NULL,b_13 = NULL,c_13 = NULL,x_2 = NULL;
                                    t = SSLgetAnnotations(f_18);
                                    y_12 = t;
                                    t = g_18;
                                    t = b_126(t);
                                    b_13 = t;
                                    t = h_18;
                                    t = z_125(t);
                                    c_13 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_13, c_13);
                                    x_2 = t;
                                    t = SSLsetAnnotations(x_2, y_12);
                                  }
                                }
                              else
                                {
                                  ATerm l_13 = NULL,p_13 = NULL,r_13 = NULL,y_2 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      g_18 = ATgetArgument(t, 0);
                                      h_18 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(f_18);
                                  l_13 = t;
                                  t = g_18;
                                  t = b_126(t);
                                  p_13 = t;
                                  t = h_18;
                                  t = z_125(t);
                                  r_13 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, p_13, r_13);
                                  y_2 = t;
                                  t = SSLsetAnnotations(y_2, l_13);
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
ATerm dynrule_sargs_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,z_19 = NULL,n_20 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm o_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_12);
      t = l_19;
      if(match_cons(t, sym_DynRuleId_1))
        {
          z_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_19;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_12 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
          {
            ATerm q_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_20;
    }
  else
    {
      t = m_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                l_19 = ATgetArgument(t, 0);
                {
                  ATerm v_12 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_12);
            t = l_19;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_19;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm w_12 = ATgetArgument(t, 0);
                n_20 = ATgetArgument(t, 1);
                {
                  ATerm z_12 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = n_20;
          }
        else
          {
            t = r_12;
            if(match_cons(t, sym_AddDynRule_2))
              {
                l_19 = ATgetArgument(t, 0);
                {
                  ATerm a_13 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = l_19;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_19;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm d_13 = ATgetArgument(t, 0);
                n_20 = ATgetArgument(t, 1);
                {
                  ATerm e_13 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = n_20;
          }
      }
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm g_22 = NULL;
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_22 = ATgetArgument(t, 0);
          {
            ATerm h_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_13);
      t = g_22;
    }
  else
    {
      t = f_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_22;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm u_22 = NULL;
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_22 = ATgetArgument(t, 0);
          {
            ATerm k_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_13);
      t = u_22;
    }
  else
    {
      t = i_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_22;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm q_13 = ATgetArgument(t, 0);
          s_21 = ATgetArgument(t, 1);
          {
            ATerm t_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_13);
      t = s_21;
      t = map_1_0(f_1, t);
    }
  else
    {
      t = n_13;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm u_13 = ATgetArgument(t, 0);
          s_21 = ATgetArgument(t, 1);
          {
            ATerm v_13 = ATgetArgument(t, 2);
          }
          {
            ATerm w_13 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = s_21;
      t = map_1_0(g_1, t);
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm e_23 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_23 = ATgetArgument(t, 0);
          {
            ATerm z_13 = ATgetArgument(t, 1);
          }
          {
            ATerm b_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_13);
      t = e_23;
    }
  else
    {
      t = x_13;
      if(match_cons(t, sym_SDefT_4))
        {
          e_23 = ATgetArgument(t, 0);
          {
            ATerm c_14 = ATgetArgument(t, 1);
          }
          {
            ATerm e_14 = ATgetArgument(t, 2);
          }
          {
            ATerm f_14 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = e_23;
    }
  return(t);
}
static ATerm s_6 (ATerm k_26, ATerm j_26, ATerm t)
{
  t = k_26;
  t = map_1_0(j_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm m_149 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_23;
      t = k_149(t);
    }
  else
    {
      ATerm a_24 = NULL,b_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_23 = ATgetFirst((ATermList) t);
          x_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_23;
      t = m_149(t);
      a_24 = t;
      t = x_23;
      t = foldr_3_0(k_149, l_149, m_149, t);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_24, b_24);
      t = l_149(t);
    }
  return(t);
}
static ATerm w_6 (ATerm a_146 (ATerm), ATerm y_62, ATerm x_62, ATerm t)
{
  static ATerm u_25 (ATerm t);
  static ATerm u_25 (ATerm t)
  {
    ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
    p_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_25 = ATgetFirst((ATermList) t);
            r_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_25;
              {
                static ATerm k_1 (ATerm t);
                static ATerm k_1 (ATerm t)
                {
                  t = x_62;
                  return(t);
                }
                t = e_7(a_146, k_1, q_25, r_25, t);
              }
              t = u_25(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              {
                ATerm a_14 = NULL,d_14 = NULL,l_4 = NULL;
                t = SSLgetAnnotations(p_25);
                a_14 = t;
                t = r_25;
                t = u_25(t);
                d_14 = t;
                t = (ATerm) ATinsert(CheckATermList(d_14), q_25);
                l_4 = t;
                t = SSLsetAnnotations(l_4, a_14);
              }
            }
        }
      }
    return(t);
  }
  t = y_62;
  t = u_25(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
        _fail(t);
      {
        ATerm m_14 = ATgetArgument(t, 1);
        if(((ATgetType(m_14) != AT_LIST) || !(ATisEmpty(m_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_14 = ATgetArgument(t, 0);
      if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
        {
          l_26 = ATgetFirst((ATermList) n_14);
          m_26 = (ATerm) ATgetNext((ATermList) n_14);
        }
      else
        _fail(t);
      {
        ATerm q_14 = ATgetArgument(t, 1);
        if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
          {
            n_26 = ATgetFirst((ATermList) q_14);
            o_26 = (ATerm) ATgetNext((ATermList) q_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_26, n_26), (ATerm) ATmakeAppl(sym__2, m_26, o_26));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm p_26 = NULL,v_26 = NULL;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_26), p_26);
  return(t);
}
static ATerm b_7 (ATerm z_826, ATerm e_827, ATerm o_80, ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,g_26 = NULL;
  t = SSL_explode_term(e_827);
  if(match_cons(t, sym__2))
    {
      c_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_826);
  if(match_cons(t, sym__2))
    {
      if((c_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_26, e_26);
  t = genzip_4_0(r_1, u_1, w_1, _id, t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_26, o_80);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm t)
{
  static ATerm a_27 (ATerm t);
  static ATerm a_27 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_133(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = x_133(t);
        t = a_27(t);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm for_3_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm t)
{
  t = z_133(t);
  t = while_not_2_0(a_134, b_134, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_27);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,o_27 = NULL,p_27 = NULL,n_4 = NULL;
  p_27 = t;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_27);
  l_27 = t;
  t = o_27;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_27, o_27);
  n_4 = t;
  t = SSLsetAnnotations(n_4, l_27);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,a_29 = NULL,b_29 = NULL;
  v_28 = t;
  if(match_cons(t, sym__2))
    {
      w_28 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_29 = ATgetFirst((ATermList) t);
      b_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_29(w_28, x_28, v_28, t);
            LocalPopChoice(x_14);
          }
        else
          {
            t = u_14;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_28), a_29), b_29);
          }
      }
    }
  else
    {
      t = r_29(w_28, x_28, v_28, t);
    }
  return(t);
}
static ATerm r_29 (ATerm r_27, ATerm s_27, ATerm t_27, ATerm t)
{
  ATerm u_27 = NULL,z_27 = NULL,p_4 = NULL,c_28 = NULL,g_28 = NULL,h_28 = NULL,m_28 = NULL;
  t = SSLgetAnnotations(t_27);
  u_27 = t;
  t = s_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_28 = ATgetFirst((ATermList) t);
      m_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_28;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_28;
        if((g_28 != t))
          {
            _fail(t);
          }
        t = m_28;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = s_27;
        t = b_7(g_28, h_28, m_28, t);
      }
  }
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_27, z_27);
  p_4 = t;
  t = SSLsetAnnotations(p_4, u_27);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_29 = NULL;
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      if((q_29 != ATgetArgument(t, 1)))
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
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(x_1, z_1, b_2, t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm h_29 = NULL,i_29 = NULL,n_29 = NULL;
        h_29 = t;
        if(match_cons(t, sym__2))
          {
            i_29 = ATgetArgument(t, 0);
            n_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_29;
        t = w_6(c_2, i_29, n_29, t);
      }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  if(match_cons(t, sym__2))
    {
      o_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(l_2, o_14, p_14, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm r_14 = NULL;
  if(match_cons(t, sym__2))
    {
      r_14 = ATgetArgument(t, 0);
      if((r_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  if(match_cons(t, sym__2))
    {
      k_15 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(f_3, k_15, l_15, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      if((m_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_153 (ATerm), ATerm d_153 (ATerm), ATerm e_153 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_30 (ATerm t);
  static ATerm n_30 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_153(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_29 = NULL,w_29 = NULL,j_14 = NULL,k_14 = NULL;
              v_29 = t;
              t = d_153(t);
              w_29 = t;
              t = v_29;
              {
                static ATerm d_2 (ATerm t);
                static ATerm d_2 (ATerm t)
                {
                  ATerm y_29 = NULL;
                  t = n_30(t);
                  y_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_29, w_29);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_153(d_2, n_30, f_2, t);
              }
              k_14 = t;
              t = SSL_explode_term(k_14);
              if(match_cons(t, sym__2))
                {
                  ATerm g_15 = ATgetArgument(t, 0);
                  j_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_14;
              t = foldr_3_0(h_2, j_2, _id, t);
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              {
                ATerm v_14 = NULL,w_14 = NULL;
                w_14 = t;
                t = SSL_explode_term(w_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_15 = ATgetArgument(t, 0);
                    v_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_14;
                t = foldr_3_0(z_2, c_3, n_30, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_30(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm v_125 (ATerm), ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
  r_42 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
      {
        ATerm s_15 = NULL,f_16 = NULL,g_16 = NULL,s_4 = NULL;
        t = SSLgetAnnotations(r_42);
        s_15 = t;
        t = s_42;
        t = x_125(t);
        f_16 = t;
        t = q_42;
        t = v_125(t);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_16, g_16);
        s_4 = t;
        t = SSLsetAnnotations(s_4, s_15);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          s_42 = ATgetArgument(t, 0);
          {
            ATerm v_16 = NULL,b_17 = NULL,c_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,p_17 = NULL,q_17 = NULL,v_4 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(r_42);
            v_16 = t;
            t = s_42;
            if(match_cons(t, sym_Rule_3))
              {
                c_17 = ATgetArgument(t, 0);
                f_17 = ATgetArgument(t, 1);
                g_17 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_42);
            b_17 = t;
            t = c_17;
            t = v_125(t);
            h_17 = t;
            t = f_17;
            t = v_125(t);
            i_17 = t;
            t = g_17;
            t = v_125(t);
            p_17 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, h_17, i_17, p_17);
            t_4 = t;
            t = SSLsetAnnotations(t_4, b_17);
            q_17 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, q_17);
            v_4 = t;
            t = SSLsetAnnotations(v_4, v_16);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              s_42 = ATgetArgument(t, 0);
              q_42 = ATgetArgument(t, 1);
              o_42 = ATgetArgument(t, 2);
              {
                ATerm k_18 = NULL,s_18 = NULL,t_18 = NULL,w_18 = NULL,x_4 = NULL;
                t = SSLgetAnnotations(r_42);
                k_18 = t;
                t = s_42;
                t = x_125(t);
                s_18 = t;
                t = q_42;
                t = x_125(t);
                t_18 = t;
                t = o_42;
                t = x_125(t);
                w_18 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, s_18, t_18, w_18);
                x_4 = t;
                t = SSLsetAnnotations(x_4, k_18);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  s_42 = ATgetArgument(t, 0);
                  q_42 = ATgetArgument(t, 1);
                  o_42 = ATgetArgument(t, 2);
                  p_42 = ATgetArgument(t, 3);
                  {
                    ATerm i_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,z_4 = NULL;
                    t = SSLgetAnnotations(r_42);
                    i_19 = t;
                    t = s_42;
                    t = x_125(t);
                    p_19 = t;
                    t = q_42;
                    t = x_125(t);
                    q_19 = t;
                    t = o_42;
                    t = x_125(t);
                    r_19 = t;
                    t = p_42;
                    t = v_125(t);
                    s_19 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, p_19, q_19, r_19, s_19);
                    z_4 = t;
                    t = SSLsetAnnotations(z_4, i_19);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_42 = ATgetArgument(t, 0);
                      q_42 = ATgetArgument(t, 1);
                      o_42 = ATgetArgument(t, 2);
                      p_42 = ATgetArgument(t, 3);
                      {
                        ATerm f_20 = NULL,l_20 = NULL,m_20 = NULL,o_20 = NULL,p_20 = NULL,a_5 = NULL;
                        t = SSLgetAnnotations(r_42);
                        f_20 = t;
                        t = s_42;
                        t = x_125(t);
                        l_20 = t;
                        t = q_42;
                        t = x_125(t);
                        m_20 = t;
                        t = o_42;
                        t = x_125(t);
                        o_20 = t;
                        t = p_42;
                        t = v_125(t);
                        p_20 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_20, m_20, o_20, p_20);
                        a_5 = t;
                        t = SSLsetAnnotations(a_5, f_20);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          s_42 = ATgetArgument(t, 0);
                          q_42 = ATgetArgument(t, 1);
                          {
                            ATerm b_21 = NULL,f_21 = NULL,g_21 = NULL,b_5 = NULL;
                            t = SSLgetAnnotations(r_42);
                            b_21 = t;
                            t = s_42;
                            t = x_125(t);
                            f_21 = t;
                            t = q_42;
                            t = v_125(t);
                            g_21 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, f_21, g_21);
                            b_5 = t;
                            t = SSLsetAnnotations(b_5, b_21);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              s_42 = ATgetArgument(t, 0);
                              q_42 = ATgetArgument(t, 1);
                              {
                                ATerm t_21 = NULL,a_22 = NULL,c_22 = NULL,e_5 = NULL;
                                t = SSLgetAnnotations(r_42);
                                t_21 = t;
                                t = s_42;
                                t = x_125(t);
                                a_22 = t;
                                t = q_42;
                                t = v_125(t);
                                c_22 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, a_22, c_22);
                                e_5 = t;
                                t = SSLsetAnnotations(e_5, t_21);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  s_42 = ATgetArgument(t, 0);
                                  q_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_22 = NULL,s_22 = NULL,x_22 = NULL,g_5 = NULL;
                                    t = SSLgetAnnotations(r_42);
                                    p_22 = t;
                                    t = s_42;
                                    t = x_125(t);
                                    s_22 = t;
                                    t = q_42;
                                    t = v_125(t);
                                    x_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, s_22, x_22);
                                    g_5 = t;
                                    t = SSLsetAnnotations(g_5, p_22);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      s_42 = ATgetArgument(t, 0);
                                      {
                                        ATerm h_23 = NULL,j_23 = NULL,i_5 = NULL;
                                        t = SSLgetAnnotations(r_42);
                                        h_23 = t;
                                        t = s_42;
                                        t = v_125(t);
                                        j_23 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, j_23);
                                        i_5 = t;
                                        t = SSLsetAnnotations(i_5, h_23);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          s_42 = ATgetArgument(t, 0);
                                          {
                                            ATerm q_23 = NULL,e_24 = NULL,j_5 = NULL;
                                            t = SSLgetAnnotations(r_42);
                                            q_23 = t;
                                            t = s_42;
                                            t = v_125(t);
                                            e_24 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_24);
                                            j_5 = t;
                                            t = SSLsetAnnotations(j_5, q_23);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              s_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm k_24 = NULL,n_24 = NULL,n_5 = NULL;
                                                t = SSLgetAnnotations(r_42);
                                                k_24 = t;
                                                t = s_42;
                                                t = v_125(t);
                                                n_24 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, n_24);
                                                n_5 = t;
                                                t = SSLsetAnnotations(n_5, k_24);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  s_42 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm u_24 = NULL,w_24 = NULL,o_5 = NULL;
                                                    t = SSLgetAnnotations(r_42);
                                                    u_24 = t;
                                                    t = s_42;
                                                    t = v_125(t);
                                                    w_24 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, w_24);
                                                    o_5 = t;
                                                    t = SSLsetAnnotations(o_5, u_24);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm n_25 = NULL,x_25 = NULL,p_5 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      s_42 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(r_42);
                                                  n_25 = t;
                                                  t = s_42;
                                                  t = v_125(t);
                                                  x_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, x_25);
                                                  p_5 = t;
                                                  t = SSLsetAnnotations(p_5, n_25);
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
ATerm dynrule_targs_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,d_45 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          o_44 = ATgetArgument(t, 0);
          {
            ATerm n_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_15);
      t = o_44;
      if(match_cons(t, sym_DynRuleId_1))
        {
          p_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_44;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm o_15 = ATgetArgument(t, 0);
          ATerm p_15 = ATgetArgument(t, 1);
          d_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_45;
    }
  else
    {
      t = i_15;
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                o_44 = ATgetArgument(t, 0);
                {
                  ATerm t_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(r_15);
            t = o_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                p_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm u_15 = ATgetArgument(t, 0);
                ATerm v_15 = ATgetArgument(t, 1);
                d_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_45;
          }
        else
          {
            t = q_15;
            if(match_cons(t, sym_AddDynRule_2))
              {
                o_44 = ATgetArgument(t, 0);
                {
                  ATerm w_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = o_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                p_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm x_15 = ATgetArgument(t, 0);
                ATerm y_15 = ATgetArgument(t, 1);
                d_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_45;
          }
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm b_46 = NULL;
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_46 = ATgetArgument(t, 0);
          {
            ATerm b_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_16);
      t = b_46;
    }
  else
    {
      t = z_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_46;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm i_46 = NULL;
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_46 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_16);
      t = i_46;
    }
  else
    {
      t = c_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_46;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm u_45 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_16 = ATgetArgument(t, 0);
          ATerm k_16 = ATgetArgument(t, 1);
          u_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = u_45;
      t = map_1_0(g_3, t);
    }
  else
    {
      t = h_16;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_16 = ATgetArgument(t, 0);
          ATerm m_16 = ATgetArgument(t, 1);
          u_45 = ATgetArgument(t, 2);
          {
            ATerm n_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_45;
      t = map_1_0(h_3, t);
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm s_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_47);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm s_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_47 = NULL,z_47 = NULL,b_48 = NULL,c_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_47 = ATgetArgument(t, 0);
                      z_47 = ATgetArgument(t, 1);
                      b_48 = ATgetArgument(t, 2);
                      c_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_48;
                  t = map_1_0(l_3, t);
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = s_16;
                  {
                    ATerm u_16 = t;
                    int w_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_16);
                      }
                    else
                      {
                        t = u_16;
                        t = dynrule_targs_1_0(m_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm k_48 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_48 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = k_48;
    }
  else
    {
      t = x_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_48;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = map_1_0(n_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm z_48 = NULL;
  ATerm a_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_48 = ATgetArgument(t, 0);
          {
            ATerm e_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_17);
      t = z_48;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_48;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm h_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_49);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            {
              ATerm n_17 = t;
              int o_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_49 = ATgetArgument(t, 0);
                      w_49 = ATgetArgument(t, 1);
                      x_49 = ATgetArgument(t, 2);
                      y_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_49;
                  t = map_1_0(t_3, t);
                  LocalPopChoice(o_17);
                }
              else
                {
                  t = n_17;
                  {
                    ATerm r_17 = t;
                    int s_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_17);
                      }
                    else
                      {
                        t = r_17;
                        t = dynrule_targs_1_0(u_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm l_50 = NULL;
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_50 = ATgetArgument(t, 0);
          {
            ATerm v_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_17);
      t = l_50;
    }
  else
    {
      t = t_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_50;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = map_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm q_50 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_50 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_17);
      t = q_50;
    }
  else
    {
      t = w_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_50;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm u_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_50);
  return(t);
}
static ATerm y_3 (ATerm t)
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
              ATerm i_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_50 = ATgetArgument(t, 0);
                      x_50 = ATgetArgument(t, 1);
                      y_50 = ATgetArgument(t, 2);
                      z_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_50;
                  t = map_1_0(z_3, t);
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = i_18;
                  {
                    ATerm l_18 = t;
                    int m_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_18);
                      }
                    else
                      {
                        t = l_18;
                        t = dynrule_targs_1_0(a_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm g_51 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_51 = ATgetArgument(t, 0);
          {
            ATerm p_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = g_51;
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_51;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = map_1_0(b_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm l_51 = NULL;
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_51 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_18);
      t = l_51;
    }
  else
    {
      t = q_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_51;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_51);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm v_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = v_18;
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            {
              ATerm a_19 = t;
              int b_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_51 = ATgetArgument(t, 0);
                      a_52 = ATgetArgument(t, 1);
                      b_52 = ATgetArgument(t, 2);
                      c_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_52;
                  t = map_1_0(e_4, t);
                  LocalPopChoice(b_19);
                }
              else
                {
                  t = a_19;
                  {
                    ATerm c_19 = t;
                    int d_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_19);
                      }
                    else
                      {
                        t = c_19;
                        t = dynrule_targs_1_0(g_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm m_52 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_52 = ATgetArgument(t, 0);
          {
            ATerm g_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_19);
      t = m_52;
    }
  else
    {
      t = e_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_52;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = map_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm r_52 = NULL;
  ATerm h_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_52 = ATgetArgument(t, 0);
          {
            ATerm k_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_19);
      t = r_52;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_52;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm v_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_52);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm o_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = o_19;
            {
              ATerm u_19 = t;
              int v_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_52 = ATgetArgument(t, 0);
                      y_52 = ATgetArgument(t, 1);
                      z_52 = ATgetArgument(t, 2);
                      a_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_52;
                  t = map_1_0(k_4, t);
                  LocalPopChoice(v_19);
                }
              else
                {
                  t = u_19;
                  {
                    ATerm w_19 = t;
                    int x_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_19);
                      }
                    else
                      {
                        t = w_19;
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
  ATerm h_53 = NULL;
  ATerm y_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_53 = ATgetArgument(t, 0);
          {
            ATerm b_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_20);
      t = h_53;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_53;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = map_1_0(q_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm m_53 = NULL;
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_53 = ATgetArgument(t, 0);
          {
            ATerm e_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_20);
      t = m_53;
    }
  else
    {
      t = c_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_53;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_47 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_47 = ATgetArgument(t, 0);
      t = q_47;
      t = free_vars_3_0(j_3, k_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_47 = ATgetArgument(t, 0);
          t = q_47;
          t = free_vars_3_0(p_3, s_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_47 = ATgetArgument(t, 0);
              t = q_47;
              t = free_vars_3_0(w_3, y_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_47 = ATgetArgument(t, 0);
                  t = q_47;
                  t = free_vars_3_0(c_4, d_4, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      q_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_47;
                  t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm b_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_54);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm k_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_54 = ATgetArgument(t, 0);
                      e_54 = ATgetArgument(t, 1);
                      f_54 = ATgetArgument(t, 2);
                      g_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_54;
                  t = map_1_0(y_4, t);
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = k_20;
                  {
                    ATerm r_20 = t;
                    int s_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_20);
                      }
                    else
                      {
                        t = r_20;
                        t = dynrule_targs_1_0(c_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm n_54 = NULL;
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_54 = ATgetArgument(t, 0);
          {
            ATerm v_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_20);
      t = n_54;
    }
  else
    {
      t = t_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_54;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = map_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm s_54 = NULL;
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_54 = ATgetArgument(t, 0);
          {
            ATerm y_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_20);
      t = s_54;
    }
  else
    {
      t = w_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_54;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm u_53 = NULL,y_53 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      y_53 = ATgetArgument(t, 0);
      t = y_53;
      if(match_cons(t, sym_Rule_3))
        {
          u_53 = ATgetArgument(t, 0);
          {
            ATerm z_20 = ATgetArgument(t, 1);
          }
          {
            ATerm a_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_53;
      t = free_vars_3_0(r_4, u_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          y_53 = ATgetArgument(t, 0);
          {
            ATerm c_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_53;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm f_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_55);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            {
              ATerm j_21 = t;
              int k_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_55 = ATgetArgument(t, 0);
                      i_55 = ATgetArgument(t, 1);
                      j_55 = ATgetArgument(t, 2);
                      k_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_55;
                  t = map_1_0(q_5, t);
                  LocalPopChoice(k_21);
                }
              else
                {
                  t = j_21;
                  {
                    ATerm l_21 = t;
                    int m_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_21);
                      }
                    else
                      {
                        t = l_21;
                        t = dynrule_targs_1_0(r_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm r_55 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_55 = ATgetArgument(t, 0);
          {
            ATerm p_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_21);
      t = r_55;
    }
  else
    {
      t = n_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_55;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = map_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm w_55 = NULL;
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_55 = ATgetArgument(t, 0);
          {
            ATerm u_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_21);
      t = w_55;
    }
  else
    {
      t = q_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_55;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm z_55 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      z_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_55);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL;
      a_56 = t;
      if(match_cons(t, sym_Let_2))
        {
          b_56 = ATgetArgument(t, 0);
          c_56 = ATgetArgument(t, 1);
          t = a_56;
          t = s_6(b_56, c_56, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              b_56 = ATgetArgument(t, 0);
              c_56 = ATgetArgument(t, 1);
              d_56 = ATgetArgument(t, 2);
              t = c_56;
              t = map_1_0(w_5, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  b_56 = ATgetArgument(t, 0);
                  c_56 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, b_56);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_56 = ATgetArgument(t, 0);
                      c_56 = ATgetArgument(t, 1);
                      d_56 = ATgetArgument(t, 2);
                      e_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_56;
                  t = map_1_0(x_5, t);
                }
            }
        }
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = dynrule_sargs_1_0(y_5, t);
          }
      }
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm m_56 = NULL;
  ATerm z_21 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_56 = ATgetArgument(t, 0);
          {
            ATerm d_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_22);
      t = m_56;
    }
  else
    {
      t = z_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_56;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm x_56 = NULL;
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_56 = ATgetArgument(t, 0);
          {
            ATerm h_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_22);
      t = x_56;
    }
  else
    {
      t = e_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_56;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = map_1_0(b_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm c_57 = NULL;
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_57 = ATgetArgument(t, 0);
          {
            ATerm k_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_22);
      t = c_57;
    }
  else
    {
      t = i_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_57;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm l_22 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_22;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  d_55 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      ATerm n_22 = ATgetArgument(t, 1);
      ATerm o_22 = ATgetArgument(t, 2);
      ATerm q_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  e_55 = t;
  t = d_55;
  t = free_vars_3_0(h_5, m_5, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = d_55;
  t = free_vars_3_0(u_5, v_5, sboundin_3_0, t);
  t = filter_1_0(d_6, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_55;
  return(t);
}
ATerm partition_1_0 (ATerm v_150 (ATerm), ATerm t)
{
  static ATerm k_58 (ATerm t);
  static ATerm k_58 (ATerm t)
  {
    ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
    h_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_r_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_58 = ATgetFirst((ATermList) t);
            j_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,j_27 = NULL,d_11 = NULL;
              t = SSLgetAnnotations(h_58);
              c_27 = t;
              t = i_58;
              t = v_150(t);
              u_26 = t;
              t = (ATerm) ATinsert(CheckATermList(j_58), u_26);
              d_11 = t;
              t = SSLsetAnnotations(d_11, c_27);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_22 = ATgetFirst((ATermList) t);
                  z_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_26;
              t = k_58(t);
              y_26 = t;
              t = SSL_explode_term(y_26);
              if(match_cons(t, sym__2))
                {
                  ATerm y_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm z_22 = ATgetArgument(t, 1);
                    if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
                      {
                        b_27 = ATgetFirst((ATermList) z_22);
                        {
                          ATerm a_23 = (ATerm) ATgetNext((ATermList) z_22);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(y_26);
              if(match_cons(t, sym__2))
                {
                  ATerm b_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm c_23 = ATgetArgument(t, 1);
                    if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
                      {
                        ATerm d_23 = ATgetFirst((ATermList) c_23);
                        ATerm f_23 = (ATerm) ATgetNext((ATermList) c_23);
                        if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                          {
                            j_27 = ATgetFirst((ATermList) f_23);
                            {
                              ATerm g_23 = (ATerm) ATgetNext((ATermList) f_23);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_27), u_26), j_27);
              LocalPopChoice(v_22);
            }
          else
            {
              t = t_22;
              {
                ATerm e_28 = NULL,f_28 = NULL,i_28 = NULL,j_28 = NULL,z_28 = NULL,e_11 = NULL;
                t = SSLgetAnnotations(h_58);
                j_28 = t;
                t = (ATerm) ATinsert(CheckATermList(j_58), i_58);
                e_11 = t;
                t = SSLsetAnnotations(e_11, j_28);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm i_23 = ATgetFirst((ATermList) t);
                    f_28 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_28;
                t = k_58(t);
                e_28 = t;
                t = SSL_explode_term(e_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm l_23 = ATgetArgument(t, 1);
                      if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
                        {
                          i_28 = ATgetFirst((ATermList) l_23);
                          {
                            ATerm m_23 = (ATerm) ATgetNext((ATermList) l_23);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(e_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm o_23 = ATgetArgument(t, 1);
                      if(((ATgetType(o_23) == AT_LIST) && !(ATisEmpty(o_23))))
                        {
                          ATerm p_23 = ATgetFirst((ATermList) o_23);
                          ATerm r_23 = (ATerm) ATgetNext((ATermList) o_23);
                          if(((ATgetType(r_23) == AT_LIST) && !(ATisEmpty(r_23))))
                            {
                              z_28 = ATgetFirst((ATermList) r_23);
                              {
                                ATerm s_23 = (ATerm) ATgetNext((ATermList) r_23);
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
                t = (ATerm) ATmakeAppl(sym__2, i_28, (ATerm) ATinsert(CheckATermList(z_28), i_58));
              }
            }
        }
      }
    return(t);
  }
  t = k_58(t);
  return(t);
}
static ATerm d_7 (ATerm g_25, ATerm f_25, ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL;
  t = g_25;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      o_58 = ATgetArgument(t, 0);
      n_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_58;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, n_58, f_25), o_58);
  return(t);
}
static ATerm e_7 (ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm e_63, ATerm d_63, ATerm t)
{
  t = j_146(t);
  {
    static ATerm e_6 (ATerm t);
    static ATerm e_6 (ATerm t)
    {
      ATerm p_58 = NULL;
      p_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_63, p_58);
      t = i_146(t);
      return(t);
    }
    t = fetch_1_0(e_6, t);
  }
  t = d_63;
  return(t);
}
static ATerm f_7 (ATerm f_146 (ATerm), ATerm a_63, ATerm z_62, ATerm t)
{
  static ATerm f_59 (ATerm t);
  static ATerm f_59 (ATerm t)
  {
    ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
    a_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_59 = ATgetFirst((ATermList) t);
            c_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_59;
              {
                static ATerm h_6 (ATerm t);
                static ATerm h_6 (ATerm t)
                {
                  t = z_62;
                  return(t);
                }
                t = e_7(f_146, h_6, b_59, c_59, t);
              }
              t = f_59(t);
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              {
                ATerm l_29 = NULL,t_29 = NULL,h_11 = NULL;
                t = SSLgetAnnotations(a_59);
                l_29 = t;
                t = c_59;
                t = f_59(t);
                t_29 = t;
                t = (ATerm) ATinsert(CheckATermList(t_29), b_59);
                h_11 = t;
                t = SSLsetAnnotations(h_11, l_29);
              }
            }
        }
      }
    return(t);
  }
  t = a_63;
  t = f_59(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm t)
{
  static ATerm n_59 (ATerm t);
  static ATerm n_59 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_131(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,j_11 = NULL;
          t = x_131(t);
          m_59 = t;
          if(match_cons(t, sym__2))
            {
              i_59 = ATgetArgument(t, 0);
              j_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_59);
          h_59 = t;
          t = i_59;
          t = z_131(t);
          k_59 = t;
          t = j_59;
          t = n_59(t);
          l_59 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
          j_11 = t;
          t = SSLsetAnnotations(j_11, h_59);
          t = y_131(t);
        }
      }
    return(t);
  }
  t = n_59(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_22;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_60 = ATgetFirst((ATermList) t);
      c_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_60, c_60);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      if(match_cons(c_24, sym__2))
        {
          d_60 = ATgetArgument(c_24, 0);
          e_60 = ATgetArgument(c_24, 1);
        }
      else
        _fail(t);
      {
        ATerm d_24 = ATgetArgument(t, 1);
        if(match_cons(d_24, sym__2))
          {
            f_60 = ATgetArgument(d_24, 0);
            g_60 = ATgetArgument(d_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_60), d_60), (ATerm) ATinsert(CheckATermList(g_60), e_60));
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL;
  if(match_cons(t, sym__2))
    {
      h_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(n_6, h_60, i_60, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm j_60 = NULL;
  if(match_cons(t, sym__2))
    {
      j_60 = ATgetArgument(t, 0);
      if((j_60 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm k_60 = NULL;
  if(match_cons(t, sym__2))
    {
      k_60 = ATgetArgument(t, 0);
      if((k_60 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm t_147 (ATerm), ATerm u_147 (ATerm), ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
  y_59 = t;
  z_59 = t;
  t = SSL_explode_term(z_59);
  if(match_cons(t, sym__2))
    {
      q_59 = ATgetArgument(t, 0);
      o_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_59);
  s_59 = t;
  t = o_59;
  t = genzip_4_0(i_6, j_6, k_6, t_147, t);
  if(match_cons(t, sym__2))
    {
      r_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(q_59, r_59);
  x_59 = t;
  t = SSLsetAnnotations(x_59, s_59);
  t = u_147(t);
  if(match_cons(t, sym__2))
    {
      t_59 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_59;
  t = foldr_2_0(l_6, m_6, t);
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_59, w_59);
  t = f_7(p_6, u_59, w_59, t);
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_59, v_59);
  return(t);
}
ATerm collect_split_1_0 (ATerm r_147 (ATerm), ATerm t)
{
  static ATerm s_60 (ATerm t);
  static ATerm s_60 (ATerm t)
  {
    static ATerm q_6 (ATerm t);
    static ATerm q_6 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_147(t);
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          {
            ATerm l_60 = NULL;
            l_60 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_60, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(s_60, q_6, t);
    return(t);
  }
  t = s_60(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      w_60 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(w_60, x_60, t);
  return(t);
}
static ATerm j_7 (ATerm z_24, ATerm a_25, ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL;
  t = c_25;
  t = collect_split_1_0(t_6, t);
  if(match_cons(t, sym__2))
    {
      t_60 = ATgetArgument(t, 0);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_60, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, z_24, a_25, b_25, t_60)));
  t = conc_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm l_143 (ATerm), ATerm t)
{
  static ATerm o_61 (ATerm t);
  static ATerm o_61 (ATerm t)
  {
    ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
    l_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_61;
      }
    else
      {
        ATerm o_30 = NULL,r_30 = NULL,s_30 = NULL,l_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_61 = ATgetFirst((ATermList) t);
            n_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_61);
        o_30 = t;
        t = m_61;
        t = l_143(t);
        r_30 = t;
        t = n_61;
        t = o_61(t);
        s_30 = t;
        t = (ATerm) ATinsert(CheckATermList(s_30), r_30);
        l_11 = t;
        t = SSLsetAnnotations(l_11, o_30);
      }
    return(t);
  }
  t = o_61(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_s_11;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_s_11;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      s_61 = ATgetArgument(t, 0);
      t_61 = ATgetArgument(t, 1);
      u_61 = ATgetArgument(t, 2);
      {
        ATerm z_61 = NULL;
        t = term_i_24;
        z_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_61, term_i_24);
        t = k_7(u_6, s_61, z_61, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, s_61, t_61, u_61);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          s_61 = ATgetArgument(t, 0);
          t_61 = ATgetArgument(t, 1);
          u_61 = ATgetArgument(t, 2);
          v_61 = ATgetArgument(t, 3);
          {
            ATerm e_62 = NULL;
            t = term_l_24;
            e_62 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_61, term_l_24);
            t = k_7(v_6, s_61, e_62, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, s_61, t_61, u_61, v_61);
          }
        }
      else
        {
          ATerm j_62 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              s_61 = ATgetArgument(t, 0);
              t_61 = ATgetArgument(t, 1);
              u_61 = ATgetArgument(t, 2);
              v_61 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_o_24;
          j_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_61, term_o_24);
          t = k_7(a_7, s_61, j_62, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, s_61, t_61, u_61, v_61);
        }
    }
  return(t);
}
static ATerm k_7 (ATerm g_139 (ATerm), ATerm t_43, ATerm r_43, ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL;
  n_62 = t;
  t = g_139(t);
  k_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_62, t_43, r_43);
  t = z_7(k_62, t_43, r_43, t);
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_62 = NULL;
        t = term_r_24;
        s_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_62, term_r_24);
        t = y_7(k_62, s_62, t);
        {
          ATerm s_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_24;
            }
        }
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_62 = ATgetFirst((ATermList) t);
      m_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_62, term_r_24, (ATerm) ATinsert(CheckATermList(m_62), (ATerm) ATinsert(CheckATermList(l_62), t_43)));
  t = lookup_table_0_1(k_62, t);
  r_62 = t;
  t = term_r_24;
  o_62 = t;
  t = (ATerm) ATinsert(CheckATermList(m_62), (ATerm) ATinsert(CheckATermList(l_62), t_43));
  p_62 = t;
  t = r_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(o_62, p_62, q_62, t);
  t = n_62;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL;
  u_62 = t;
  t = term_v_24;
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_62, term_v_24);
  t = k_7(g_7, u_62, v_62, t);
  t = u_62;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm t_62 = NULL;
  t_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_24), term_x_24);
  t = map_1_0(c_7, t);
  t = t_62;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,n_11 = NULL;
  r_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_63);
  o_63 = t;
  t = p_63;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(l_7, t);
  t = concat_0_0(t);
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_63);
  n_11 = t;
  t = SSLsetAnnotations(n_11, o_63);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,c_64 = NULL,d_64 = NULL;
  d_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_63 = ATgetArgument(t, 0);
      t_63 = ATgetArgument(t, 1);
      u_63 = ATgetArgument(t, 2);
      c_64 = ATgetArgument(t, 3);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_64;
            t = j_7(s_63, t_63, u_63, c_64, t);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            t = (ATerm) ATinsert(ATempty, d_64);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, d_64);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,g_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,p_11 = NULL,o_11 = NULL;
  t = declare_standard_strategies_0_0(t);
  n_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_63);
  b_63 = t;
  t = c_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_63 = ATgetFirst((ATermList) t);
      k_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_63);
  g_63 = t;
  t = k_63;
  t = Cons_2_0(h_7, i_7, t);
  l_63 = t;
  t = (ATerm) ATinsert(CheckATermList(l_63), j_63);
  o_11 = t;
  t = SSLsetAnnotations(o_11, g_63);
  m_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_63);
  p_11 = t;
  t = SSLsetAnnotations(p_11, b_63);
  return(t);
}
static ATerm m_7 (ATerm w_34, ATerm x_34, ATerm t)
{
  ATerm k_64 = NULL;
  t = SSL_fputc(w_34, x_34);
  k_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_64);
  return(t);
}
static ATerm n_7 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm p_64 = NULL;
  t = SSL_write_term_to_stream_text(c_33, d_33);
  p_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_64);
  return(t);
}
static ATerm p_7 (ATerm u_134 (ATerm), ATerm p_252, ATerm i_33, ATerm t)
{
  ATerm q_64 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_252, term_h_25);
  t = t_7(t);
  q_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_64, i_33);
  t = u_134(t);
  t = fclose_0_0(t);
  t = i_33;
  return(t);
}
static ATerm o_7 (ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm r_64 = NULL;
  t = SSL_write_term_to_stream_baf(y_32, z_32);
  r_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_64);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      if(match_cons(i_25, sym_Stream_1))
        {
          g_31 = ATgetArgument(i_25, 0);
        }
      else
        _fail(t);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(g_31, h_31, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_25 = ATgetArgument(t, 0);
      if(match_cons(j_25, sym_Stream_1))
        {
          v_31 = ATgetArgument(j_25, 0);
        }
      else
        _fail(t);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(v_31, y_31, t);
  s_31 = t;
  t = term_k_25;
  t_31 = t;
  t = s_31;
  if(match_cons(t, sym_Stream_1))
    {
      u_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, s_31);
  t = m_7(t_31, u_31, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_66 = NULL,h_66 = NULL,x_11 = NULL,t_11 = NULL;
  w_64 = t;
  if(match_cons(t, sym__2))
    {
      d_65 = ATgetArgument(t, 0);
      e_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_64);
  c_65 = t;
  t = d_65;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm v_7 (ATerm t);
        static ATerm v_7 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_64 != NULL) && (v_64 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(v_7, t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = term_o_25;
        v_64 = t;
      }
  }
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_65, e_65);
  t_11 = t;
  t = SSLsetAnnotations(t_11, c_65);
  t = w_64;
  if(match_cons(t, sym__2))
    {
      y_64 = ATgetArgument(t, 0);
      z_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_64);
  x_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_64, (ATerm) ATmakeAppl(sym__2, not_null(v_64), z_64));
  x_11 = t;
  t = SSLsetAnnotations(x_11, x_64);
  b_65 = t;
  if(match_cons(t, sym__2))
    {
      g_66 = ATgetArgument(t, 0);
      h_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_30 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,a_12 = NULL;
        t = SSLgetAnnotations(b_65);
        z_30 = t;
        t = g_66;
        t = fetch_1_0(a_8, t);
        c_31 = t;
        t = h_66;
        if(match_cons(t, sym__2))
          {
            e_31 = ATgetArgument(t, 0);
            f_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_7(e_8, e_31, f_31, t);
        d_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
        a_12 = t;
        t = SSLsetAnnotations(a_12, z_30);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm m_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,b_12 = NULL;
          t = SSLgetAnnotations(b_65);
          m_31 = t;
          t = h_66;
          if(match_cons(t, sym__2))
            {
              q_31 = ATgetArgument(t, 0);
              r_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_7(f_8, q_31, r_31, t);
          p_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_66, p_31);
          b_12 = t;
          t = SSLsetAnnotations(b_12, m_31);
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
ATerm apply_strategy_1_0 (ATerm n_157 (ATerm), ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
  o_66 = t;
  t = dtime_0_0(t);
  t = o_66;
  t = n_157(t);
  n_66 = t;
  t = dtime_0_0(t);
  k_66 = t;
  t = n_66;
  if(match_cons(t, sym__2))
    {
      l_66 = ATgetArgument(t, 0);
      m_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_66), (ATerm) ATmakeAppl(sym_Runtime_1, k_66)), m_66);
  return(t);
}
static ATerm c_67 (ATerm w_66, ATerm t)
{
  t = SSL_fclose(w_66);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL;
  a_67 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_66 = ATgetArgument(t, 0);
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_66);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = c_67(a_67, t);
          }
      }
    }
  else
    {
      t = c_67(a_67, t);
    }
  return(t);
}
static ATerm q_7 (ATerm e_33, ATerm t)
{
  t = SSL_read_term_from_stream(e_33);
  return(t);
}
static ATerm r_7 (ATerm h_72, ATerm i_72, ATerm t)
{
  t = SSL_strcat(h_72, i_72);
  return(t);
}
static ATerm s_7 (ATerm y_34, ATerm z_34, ATerm t)
{
  ATerm d_67 = NULL;
  t = SSL_fopen(y_34, z_34);
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_67);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_67 = NULL;
  t = SSL_stdin_stream();
  e_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_67);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_67 = NULL;
  t = SSL_stdout_stream();
  f_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_67);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_67 = NULL;
  t = SSL_stderr_stream();
  g_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_67);
  return(t);
}
static ATerm o_68 (ATerm m_67, ATerm t)
{
  ATerm n_67 = NULL;
  t = SSL_explode_term(m_67);
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(((ATgetType(z_25) == AT_LIST) && !(ATisEmpty(z_25))))
          {
            n_67 = ATgetFirst((ATermList) z_25);
            {
              ATerm a_26 = (ATerm) ATgetNext((ATermList) z_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_67;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_67;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_67;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_67;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_68 (ATerm r_67, ATerm s_67, ATerm t_67, ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,z_67 = NULL,j_12 = NULL;
  t = SSLgetAnnotations(t_67);
  w_67 = t;
  t = r_67;
  if(match_cons(t, sym_Path_1))
    {
      z_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_67, s_67);
  j_12 = t;
  t = SSLsetAnnotations(j_12, w_67);
  if(match_cons(t, sym__2))
    {
      u_67 = ATgetArgument(t, 0);
      v_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(u_67, v_67, t);
  return(t);
}
static ATerm q_68 (ATerm b_68, ATerm c_68, ATerm d_68, ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,j_68 = NULL,k_12 = NULL;
  t = SSLgetAnnotations(d_68);
  g_68 = t;
  t = SSL_is_string(b_68);
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_68, c_68);
  k_12 = t;
  t = SSLsetAnnotations(k_12, g_68);
  if(match_cons(t, sym__2))
    {
      e_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(e_68, f_68, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
  l_68 = t;
  if(match_cons(t, sym__2))
    {
      m_68 = ATgetArgument(t, 0);
      n_68 = ATgetArgument(t, 1);
      {
        ATerm b_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_68(l_68, t);
            LocalPopChoice(f_26);
          }
        else
          {
            t = b_26;
            {
              ATerm h_26 = t;
              int i_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_68(m_68, n_68, l_68, t);
                  LocalPopChoice(i_26);
                }
              else
                {
                  t = h_26;
                  t = q_68(m_68, n_68, l_68, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_68(l_68, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,z_68 = NULL;
  z_68 = t;
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_68, term_s_26);
        t = t_7(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm n_32 = NULL,v_32 = NULL;
          t = term_t_26;
          v_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_26, z_68);
          t = r_7(v_32, z_68, t);
          n_32 = t;
          t = SSL_perror(n_32);
          _fail(t);
        }
      }
  }
  t_68 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(u_68, t);
  s_68 = t;
  t = t_68;
  t = fclose_0_0(t);
  t = s_68;
  return(t);
}
ATerm fetch_1_0 (ATerm v_143 (ATerm), ATerm t)
{
  static ATerm y_69 (ATerm t);
  static ATerm y_69 (ATerm t)
  {
    ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
    v_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_69 = ATgetFirst((ATermList) t);
        x_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_33 = NULL,p_33 = NULL,t_12 = NULL;
          t = SSLgetAnnotations(v_69);
          h_33 = t;
          t = w_69;
          t = v_143(t);
          p_33 = t;
          t = (ATerm) ATinsert(CheckATermList(x_69), p_33);
          t_12 = t;
          t = SSLsetAnnotations(t_12, h_33);
          LocalPopChoice(x_26);
        }
      else
        {
          t = w_26;
          {
            ATerm h_34 = NULL,n_34 = NULL,u_12 = NULL;
            t = SSLgetAnnotations(v_69);
            h_34 = t;
            t = x_69;
            t = y_69(t);
            n_34 = t;
            t = (ATerm) ATinsert(CheckATermList(n_34), w_69);
            u_12 = t;
            t = SSLsetAnnotations(u_12, h_34);
          }
        }
    }
    return(t);
  }
  t = y_69(t);
  return(t);
}
static ATerm y_7 (ATerm q_46, ATerm r_46, ATerm t)
{
  ATerm b_70 = NULL;
  t = lookup_table_0_1(q_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(r_46, b_70, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_136 (ATerm), ATerm t)
{
  ATerm e_70 = NULL;
  e_70 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
        t = term_n_10;
        h_70 = t;
        t = term_f_27;
        i_70 = t;
        t = term_g_27;
        t = y_7(h_70, i_70, t);
        g_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_70, term_h_27);
        t = geq_0_0(t);
        t = e_70;
        t = m_136(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = e_70;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  {
    ATerm i_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_70;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_27 = ATgetFirst((ATermList) t);
                ATerm v_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_70;
          }
        LocalPopChoice(n_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATinsert(ATempty, l_70);
      }
  }
  m_70 = t;
  t = term_o_25;
  n_70 = t;
  t = SSL_printnl(n_70, m_70);
  t = l_70;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL;
  t = term_n_10;
  r_70 = t;
  t = term_o_10;
  s_70 = t;
  t = term_p_10;
  t = y_7(r_70, s_70, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm u_70 = NULL;
  u_70 = t;
  if(match_string(t, "-k"))
    {
      t = u_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_70;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  t = SSL_string_to_int(v_70);
  w_70 = t;
  t = term_w_27;
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_27, w_70);
  t = b_8(x_70, w_70, t);
  t = v_70;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_8, i_8, j_8, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm z_70 = NULL;
  z_70 = t;
  if(match_string(t, "-S"))
    {
      t = z_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_70;
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  t = term_f_27;
  a_71 = t;
  t = term_y_27;
  b_71 = t;
  t = term_a_28;
  t = b_8(a_71, b_71, t);
  t = term_b_28;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL;
  c_71 = t;
  t = SSL_string_to_int(c_71);
  d_71 = t;
  t = term_f_27;
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, d_71);
  t = b_8(e_71, d_71, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_71);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_k_28;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL;
  t = term_l_28;
  f_71 = t;
  t = term_a_2;
  g_71 = t;
  t = term_n_28;
  t = b_8(f_71, g_71, t);
  t = term_o_28;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_8, n_8, o_8, t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_8, s_8, t_8, t);
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = Option_3_0(u_8, v_8, w_8, t);
          }
      }
    }
  return(t);
}
static ATerm b_8 (ATerm s_38, ATerm t_38, ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL;
  t = term_n_10;
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, s_38, t_38);
  t = lookup_table_0_1(h_71, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(s_38, t_38, i_71, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, s_38, t_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
      t = term_a_2;
      t = g_0(t);
      o_71 = t;
      t = term_w_10;
      p_71 = t;
      t = term_x_10;
      q_71 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, o_71);
      t = z_7(p_71, q_71, o_71, t);
      _fail(t);
    }
  else
    {
      ATerm t_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_71 = ATgetFirst((ATermList) t);
          n_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_71;
      t = d_0(t);
      t = term_a_2;
      t = f_0(t);
      t_71 = t;
      t = (ATerm) ATinsert(CheckATermList(n_71), t_71);
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm v_71 = NULL;
  v_71 = t;
  if(match_string(t, "-o"))
    {
      t = v_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_71;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL;
  w_71 = t;
  t = term_u_28;
  x_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, w_71);
  t = b_8(x_71, w_71, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_71);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_8, y_8, z_8, t);
  return(t);
}
static ATerm z_7 (ATerm x_44, ATerm y_44, ATerm w_44, ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL;
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_44, y_44);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            ATerm f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_44, y_44);
        t = y_7(x_44, y_44, t);
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATempty;
      }
  }
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_44, y_44, (ATerm) ATinsert(CheckATermList(a_72), w_44));
  t = lookup_table_0_1(x_44, t);
  d_72 = t;
  t = (ATerm) ATinsert(CheckATermList(a_72), w_44);
  b_72 = t;
  t = d_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(y_44, b_72, c_72, t);
  t = z_71;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
      t = term_a_2;
      t = o_0(t);
      q_72 = t;
      t = term_w_10;
      r_72 = t;
      t = term_x_10;
      s_72 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, q_72);
      t = z_7(r_72, s_72, q_72, t);
      _fail(t);
    }
  else
    {
      ATerm w_72 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_72 = ATgetFirst((ATermList) t);
          n_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_72;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_72 = ATgetFirst((ATermList) t);
          p_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_72;
      t = j_0(t);
      t = o_72;
      t = l_0(t);
      w_72 = t;
      t = (ATerm) ATinsert(CheckATermList(p_72), w_72);
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm y_72 = NULL;
  y_72 = t;
  if(match_string(t, "-i"))
    {
      t = y_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_72;
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  z_72 = t;
  t = term_g_29;
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_29, z_72);
  t = b_8(a_73, z_72, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_72);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_9, b_9, c_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_2;
  t = whoami_0_0(t);
  b_73 = t;
  t = term_k_29;
  d_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_29), b_73);
  e_73 = t;
  t = SSL_printnl(d_73, e_73);
  t = term_o_29;
  c_73 = t;
  t = SSL_exit(c_73);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  t = term_n_10;
  f_73 = t;
  t = term_o_10;
  g_73 = t;
  t = term_p_10;
  t = y_7(f_73, g_73, t);
  return(t);
}
static ATerm u_7 (ATerm s_41, ATerm u_41, ATerm t)
{
  ATerm p_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_41, u_41);
      LocalPopChoice(s_29);
    }
  else
    {
      t = p_29;
      t = SSL_addr(s_41, u_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_149 (ATerm), ATerm j_149 (ATerm), ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
  i_73 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_73;
      t = i_149(t);
    }
  else
    {
      ATerm n_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_73 = ATgetFirst((ATermList) t);
          k_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_73;
      t = foldr_2_0(i_149, j_149, t);
      n_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_73, n_73);
      t = j_149(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_y_27;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm j_35 = NULL,m_35 = NULL;
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(j_35, m_35, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_73 = NULL,b_35 = NULL,g_35 = NULL;
  t = times_0_0(t);
  g_35 = t;
  t = SSL_explode_term(g_35);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      b_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_35;
  t = foldr_2_0(d_9, f_9, t);
  q_73 = t;
  t = SSL_TicksToSeconds(q_73);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
  b_74 = t;
  if(match_cons(t, sym__2))
    {
      c_74 = ATgetArgument(t, 0);
      d_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_74;
        if((c_74 != t))
          {
            _fail(t);
          }
        t = b_74;
        LocalPopChoice(z_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATmakeAppl(sym__2, c_74, d_74);
        {
          ATerm a_30 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_74, d_74);
              LocalPopChoice(b_30);
            }
          else
            {
              t = a_30;
              t = SSL_gtr(c_74, d_74);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_74, d_74);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_136 (ATerm), ATerm t)
{
  ATerm h_74 = NULL;
  h_74 = t;
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL;
        t = term_n_10;
        k_74 = t;
        t = term_f_27;
        l_74 = t;
        t = term_g_27;
        t = y_7(k_74, l_74, t);
        j_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_74, term_o_29);
        t = geq_0_0(t);
        t = h_74;
        t = l_136(t);
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = h_74;
      }
  }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,q_74 = NULL,r_74 = NULL;
  t = run_time_0_0(t);
  n_74 = t;
  t = term_a_2;
  t = whoami_0_0(t);
  o_74 = t;
  t = term_k_29;
  q_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_30), n_74), term_e_30), o_74);
  r_74 = t;
  t = SSL_printnl(q_74, r_74);
  t = (ATerm) ATmakeAppl(sym__2, term_k_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_30), n_74), term_e_30), o_74));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_74 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_27;
  s_74 = t;
  t = SSL_exit(s_74);
  return(t);
}
static ATerm c_8 (ATerm l_49, ATerm m_49, ATerm n_49, ATerm t)
{
  ATerm t_74 = NULL;
  t = SSL_hashtable_put(n_49, l_49, m_49);
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_74);
  return(t);
}
static ATerm d_8 (ATerm o_49, ATerm p_49, ATerm t)
{
  t = SSL_hashtable_get(p_49, o_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_46, ATerm t)
{
  ATerm c_75 = NULL;
  t = table_hashtable_0_0(t);
  c_75 = t;
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_36 = NULL;
        t = c_75;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_8(j_46, a_36, t);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
          ATerm j_36 = NULL;
          t = j_46;
          t = table_create_0_0(t);
          t = c_75;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_8(j_46, j_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm f_75 = NULL;
  t = SSL_hashtable_create(t_49, u_49);
  f_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_75);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,k_75 = NULL,l_75 = NULL;
  g_75 = t;
  t = term_i_30;
  k_75 = t;
  t = term_j_30;
  l_75 = t;
  t = g_75;
  t = new_hashtable_0_2(k_75, l_75, t);
  h_75 = t;
  t = g_75;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(g_75, h_75, i_75, t);
  t = g_75;
  return(t);
}
static ATerm w_7 (ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm m_75 = NULL;
  t = SSL_hashtable_remove(r_49, q_49);
  m_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_75);
  return(t);
}
static ATerm x_7 (ATerm v_49, ATerm t)
{
  ATerm n_75 = NULL;
  t = SSL_hashtable_destroy(v_49);
  n_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_75);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_75 = NULL;
  t = SSL_table_hashtable();
  o_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_75);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
  p_75 = t;
  t = table_hashtable_0_0(t);
  q_75 = t;
  t = lookup_table_0_1(p_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(s_75, t);
  t = q_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(p_75, r_75, t);
  t = p_75;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL;
  t = term_k_30;
  t_75 = t;
  t = term_a_2;
  u_75 = t;
  t = term_l_30;
  t = b_8(t_75, u_75, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL;
  t = term_k_30;
  x_75 = t;
  t = term_a_2;
  y_75 = t;
  t = term_l_30;
  t = b_8(x_75, y_75, t);
  t = term_p_30;
  v_75 = t;
  t = term_a_2;
  w_75 = t;
  t = term_q_30;
  t = b_8(v_75, w_75, t);
  t = term_t_30;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_9, i_9, m_9, t);
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      t = Option_3_0(o_9, p_9, q_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,x_12 = NULL;
  e_76 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_76 = ATgetFirst((ATermList) t);
      b_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_76);
  z_75 = t;
  t = a_76;
  t = t_110(t);
  c_76 = t;
  t = b_76;
  t = u_110(t);
  d_76 = t;
  t = (ATerm) ATinsert(CheckATermList(d_76), c_76);
  x_12 = t;
  t = SSLsetAnnotations(x_12, z_75);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_160 (ATerm), ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,o_76 = NULL,p_76 = NULL,m_13 = NULL;
  j_76 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_31;
        t = t_160(t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
      }
  }
  t = j_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_76 = ATgetFirst((ATermList) t);
      m_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_76);
  k_76 = t;
  t = term_o_10;
  p_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, l_76);
  t = b_8(p_76, l_76, t);
  t = m_76;
  {
    static ATerm z_76 (ATerm t);
    static ATerm z_76 (ATerm t)
    {
      ATerm b_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_76 = NULL;
              s_76 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_76;
              LocalPopChoice(k_31);
            }
          else
            {
              t = j_31;
              t = t_160(t);
              t = Cons_2_0(_id, z_76, t);
            }
          LocalPopChoice(i_31);
        }
      else
        {
          t = b_31;
          {
            ATerm v_76 = NULL,w_76 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_76 = ATgetFirst((ATermList) t);
                w_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_76), (ATerm) ATmakeAppl(sym_Undefined_1, v_76));
          }
        }
      return(t);
    }
    t = z_76(t);
  }
  o_76 = t;
  t = (ATerm) ATinsert(CheckATermList(o_76), (ATerm) ATmakeAppl(sym_Program_1, l_76));
  m_13 = t;
  t = SSLsetAnnotations(m_13, k_76);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm m_77 = NULL;
  m_77 = t;
  if(match_string(t, "--help"))
    {
      t = m_77;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_77;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_77;
        }
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL;
  t = term_l_31;
  n_77 = t;
  t = term_a_2;
  o_77 = t;
  t = term_n_31;
  t = b_8(n_77, o_77, t);
  t = term_o_31;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_w_31;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm q_160 (ATerm), ATerm r_160 (ATerm), ATerm s_160 (ATerm), ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL;
  g_77 = t;
  t = term_w_10;
  h_77 = t;
  t = term_x_31;
  t = lookup_table_0_1(h_77, t);
  l_77 = t;
  t = term_x_10;
  i_77 = t;
  t = (ATerm) ATempty;
  j_77 = t;
  t = l_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(i_77, j_77, k_77, t);
  t = g_77;
  {
    static ATerm r_9 (ATerm t);
    static ATerm r_9 (ATerm t)
    {
      ATerm z_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_160(t);
          LocalPopChoice(a_32);
        }
      else
        {
          t = z_31;
          {
            ATerm b_32 = t;
            int c_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_9, t_9, u_9, t);
                LocalPopChoice(c_32);
              }
            else
              {
                t = b_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_9, t);
  }
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_77 = NULL;
        z_77 = t;
        {
          ATerm f_32 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_36 = NULL;
              t = z_77;
              {
                ATerm h_32 = t;
                int i_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_36 = NULL,t_36 = NULL;
                    t = term_n_10;
                    p_36 = t;
                    t = term_l_31;
                    t_36 = t;
                    t = term_j_32;
                    t = y_7(p_36, t_36, t);
                    LocalPopChoice(i_32);
                  }
                else
                  {
                    t = h_32;
                    t = fetch_1_0(v_9, t);
                  }
              }
              t = z_77;
              t = r_160(t);
              t = term_y_27;
              n_36 = t;
              t = SSL_exit(n_36);
              LocalPopChoice(g_32);
            }
          else
            {
              t = f_32;
              {
                ATerm h_37 = NULL,i_37 = NULL,m_37 = NULL;
                t = term_n_10;
                i_37 = t;
                t = term_k_30;
                m_37 = t;
                t = term_k_32;
                t = y_7(i_37, m_37, t);
                t = z_77;
                t = s_160(t);
                t = term_y_27;
                h_37 = t;
                t = SSL_exit(h_37);
              }
            }
        }
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        {
          ATerm l_32 = t;
          int m_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
              static ATerm w_9 (ATerm t);
              static ATerm w_9 (ATerm t)
              {
                ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL,s_13 = NULL;
                f_78 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_78 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_78);
                d_78 = t;
                t = e_78;
                if(((e_77 != NULL) && (e_77 != t)))
                  _fail(t);
                else
                  e_77 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_78);
                s_13 = t;
                t = SSLsetAnnotations(s_13, d_78);
                return(t);
              }
              t = fetch_1_0(w_9, t);
              t = term_k_29;
              b_78 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_77)), term_o_32);
              c_78 = t;
              t = SSL_printnl(b_78, c_78);
              t = (ATerm) ATmakeAppl(sym__2, term_k_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_77)), term_o_32));
              t = r_160(t);
              t = term_o_29;
              a_78 = t;
              t = SSL_exit(a_78);
              LocalPopChoice(m_32);
            }
          else
            {
              t = l_32;
            }
        }
      }
  }
  f_77 = t;
  t = term_w_10;
  t = table_destroy_0_0(t);
  t = f_77;
  return(t);
}
ATerm option_wrap_5_0 (ATerm t_158 (ATerm), ATerm u_158 (ATerm), ATerm v_158 (ATerm), ATerm w_158 (ATerm), ATerm x_158 (ATerm), ATerm t)
{
  ATerm k_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,x_78 = NULL;
  t = parse_options_3_0(t_158, u_158, v_158, t);
  k_78 = t;
  t = term_p_32;
  t = table_create_0_0(t);
  t = term_p_32;
  p_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, k_78);
  t = lookup_table_0_1(p_78, t);
  x_78 = t;
  t = term_q_32;
  q_78 = t;
  t = x_78;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(q_78, k_78, r_78, t);
  t = k_78;
  t = w_158(t);
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_158(t);
        t = report_success_0_0(t);
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = if_verbose2_1_0(h_10, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  t = term_t_32;
  y_78 = t;
  t = term_a_2;
  z_78 = t;
  t = term_u_32;
  t = b_8(y_78, z_78, t);
  t = term_w_32;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL;
  a_79 = t;
  t = term_n_10;
  e_79 = t;
  t = term_o_10;
  f_79 = t;
  t = term_p_10;
  t = y_7(e_79, f_79, t);
  b_79 = t;
  t = term_k_29;
  c_79 = t;
  t = (ATerm) ATinsert(ATempty, b_79);
  d_79 = t;
  t = SSL_printnl(c_79, d_79);
  t = a_79;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_157 (ATerm), ATerm x_157 (ATerm), ATerm y_157 (ATerm), ATerm t)
{
  static ATerm x_9 (ATerm t);
  static ATerm a_10 (ATerm t);
  static ATerm x_9 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_157(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              {
                ATerm j_33 = t;
                int k_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(k_33);
                  }
                else
                  {
                    t = j_33;
                    {
                      ATerm l_33 = t;
                      int m_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_10, c_10, g_10, t);
                          LocalPopChoice(m_33);
                        }
                      else
                        {
                          t = l_33;
                          {
                            ATerm n_33 = t;
                            int o_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_33);
                              }
                            else
                              {
                                t = n_33;
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
  static ATerm a_10 (ATerm t)
  {
    ATerm g_79 = NULL,i_79 = NULL,j_79 = NULL;
    i_79 = t;
    {
      ATerm q_33 = t;
      int r_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_10 (ATerm t);
          static ATerm i_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_79 != NULL) && (g_79 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_79 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_10, t);
          LocalPopChoice(r_33);
        }
      else
        {
          t = q_33;
          t = term_s_33;
          g_79 = t;
        }
    }
    t = not_null(g_79);
    t = ReadFromFile_0_0(t);
    j_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_79, j_79);
    t = apply_strategy_1_0(w_157, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(x_9, y_157, default_system_about_0_0, z_9, a_10, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,l_14 = NULL;
  o_79 = t;
  if(match_cons(t, sym__2))
    {
      l_79 = ATgetArgument(t, 0);
      m_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_79);
  k_79 = t;
  t = m_79;
  t = lift_definitions_0_0(t);
  n_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_79, n_79);
  l_14 = t;
  t = SSLsetAnnotations(l_14, k_79);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_10, _fail, default_system_usage_0_0, t);
  return(t);
}

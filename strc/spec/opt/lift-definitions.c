#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_DynamicRules_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
ATerm term_s_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_a_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_n_25;
ATerm term_f_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_t_22;
ATerm term_s_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_c_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_o_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
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
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
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
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_y_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_k_28, term_c_2);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
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
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_c_2);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_c_2);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_c_2);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_l_31);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_k_30);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_u_32, term_c_2);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm g_165 (ATerm), ATerm h_165 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm k_148 (ATerm), ATerm t);
static ATerm q_3 (ATerm b_3, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm o_6 (ATerm u_45, ATerm v_45, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_154 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm z_129 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm s_6 (ATerm t_26, ATerm s_26, ATerm t);
ATerm foldr_3_0 (ATerm s_153 (ATerm), ATerm t_153 (ATerm), ATerm u_153 (ATerm), ATerm t);
static ATerm w_6 (ATerm i_150 (ATerm), ATerm d_65, ATerm c_65, ATerm t);
static ATerm l_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_7 (ATerm j_842, ATerm o_842, ATerm t_82, ATerm t);
ATerm while_not_2_0 (ATerm s_137 (ATerm), ATerm t_137 (ATerm), ATerm t);
ATerm for_3_0 (ATerm v_137 (ATerm), ATerm w_137 (ATerm), ATerm x_137 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm s_29 (ATerm r_27, ATerm t_27, ATerm u_27, ATerm t);
static ATerm b_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm free_vars_3_0 (ATerm k_157 (ATerm), ATerm l_157 (ATerm), ATerm m_157 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm a_130 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
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
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm d_155 (ATerm), ATerm t);
static ATerm d_7 (ATerm p_25, ATerm o_25, ATerm t);
static ATerm e_7 (ATerm q_150 (ATerm), ATerm r_150 (ATerm), ATerm j_65, ATerm i_65, ATerm t);
static ATerm f_7 (ATerm n_150 (ATerm), ATerm f_65, ATerm e_65, ATerm t);
ATerm genzip_4_0 (ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm CollectSplit_2_0 (ATerm b_152 (ATerm), ATerm c_152 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm z_151 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm j_7 (ATerm i_25, ATerm j_25, ATerm k_25, ATerm l_25, ATerm t);
ATerm map_1_0 (ATerm t_147 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm k_7 (ATerm d_143 (ATerm), ATerm e_44, ATerm b_44, ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm m_7 (ATerm f_35, ATerm g_35, ATerm t);
static ATerm n_7 (ATerm l_33, ATerm m_33, ATerm t);
static ATerm p_7 (ATerm q_138 (ATerm), ATerm w_256, ATerm r_33, ATerm t);
static ATerm o_7 (ATerm h_33, ATerm i_33, ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm v_161 (ATerm), ATerm t);
static ATerm c_67 (ATerm w_66, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_7 (ATerm n_33, ATerm t);
static ATerm r_7 (ATerm m_74, ATerm n_74, ATerm t);
static ATerm s_7 (ATerm h_35, ATerm i_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_68 (ATerm m_67, ATerm t);
static ATerm p_68 (ATerm q_67, ATerm r_67, ATerm s_67, ATerm t);
static ATerm q_68 (ATerm b_68, ATerm c_68, ATerm d_68, ATerm t);
static ATerm t_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_148 (ATerm), ATerm t);
static ATerm y_7 (ATerm c_47, ATerm d_47, ATerm t);
ATerm if_verbose2_1_0 (ATerm i_140 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_8 (ATerm b_39, ATerm c_39, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_7 (ATerm j_45, ATerm k_45, ATerm i_45, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_7 (ATerm a_42, ATerm b_42, ATerm t);
ATerm foldr_2_0 (ATerm q_153 (ATerm), ATerm r_153 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_140 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_8 (ATerm x_49, ATerm y_49, ATerm z_49, ATerm t);
static ATerm d_8 (ATerm a_50, ATerm b_50, ATerm t);
ATerm lookup_table_0_1 (ATerm v_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm f_50, ATerm g_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_7 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm x_7 (ATerm h_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_165 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm parse_options_3_0 (ATerm y_164 (ATerm), ATerm z_164 (ATerm), ATerm a_165 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm b_163 (ATerm), ATerm c_163 (ATerm), ATerm d_163 (ATerm), ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm iowrap_3_0 (ATerm e_162 (ATerm), ATerm f_162 (ATerm), ATerm g_162 (ATerm), ATerm t);
static ATerm j_10 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,n_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_0 = ATgetFirst((ATermList) t);
      n_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_0 = NULL,u_0 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_0)), not_null(u_0));
          return(t);
        }
        t = n_0;
        t = o_0(t);
        if(((t_0 != NULL) && (t_0 != t)))
          _fail(t);
        else
          t_0 = t;
        t = e_0;
        t = m_0(t);
        if(((u_0 != NULL) && (u_0 != t)))
          _fail(t);
        else
          u_0 = t;
        t = n_0;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_2;
      t = o_0(t);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL,e_2 = NULL;
  e_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_1);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_1);
  e_2 = t;
  t = SSLsetAnnotations(e_2, c_1);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm i_1 = NULL;
  i_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_1), term_k_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm g_165 (ATerm), ATerm h_165 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 = NULL,b_1 = NULL;
      t = term_n_10;
      a_1 = t;
      t = term_o_10;
      b_1 = t;
      t = term_q_10;
      t = y_7(a_1, b_1, t);
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      t = fetch_1_0(p_0, t);
    }
  {
    ATerm r_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_165(t);
        t = echo_0_0(t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = r_10;
      }
  }
  t = term_v_10;
  t = echo_0_0(t);
  t = term_w_10;
  y_0 = t;
  t = term_x_10;
  z_0 = t;
  t = term_y_10;
  t = y_7(y_0, z_0, t);
  t = reverse_acc_2_0(_id, q_0, t);
  t = map_1_0(r_0, t);
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL;
        t = h_165(t);
        j_1 = t;
        t = (ATerm) ATinsert(CheckATermList(j_1), term_b_11);
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
static ATerm s_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,g_2 = NULL;
  r_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_1);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_1);
  g_2 = t;
  t = SSLsetAnnotations(g_2, p_1);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_1 = NULL;
  m_1 = t;
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_1 = NULL,o_1 = NULL;
        t = term_n_10;
        n_1 = t;
        t = term_o_10;
        o_1 = t;
        t = term_q_10;
        t = y_7(n_1, o_1, t);
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = fetch_1_0(s_0, t);
      }
  }
  t = m_1;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL,w_1 = NULL;
  t_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_1;
    }
  else
    {
      static ATerm v_0 (ATerm t);
      static ATerm v_0 (ATerm t)
      {
        t = not_null(w_1);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_1 = ATgetFirst((ATermList) t);
          if(((w_1 != NULL) && (w_1 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_1;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_148 (ATerm), ATerm t)
{
  static ATerm u_2 (ATerm t);
  static ATerm u_2 (ATerm t)
  {
    ATerm p_2 = NULL,s_2 = NULL,t_2 = NULL;
    t_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_2 = ATgetFirst((ATermList) t);
        s_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_0 = NULL,u_1 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(t_2);
          w_0 = t;
          t = s_2;
          t = u_2(t);
          u_1 = t;
          t = (ATerm) ATinsert(CheckATermList(u_1), p_2);
          i_2 = t;
          t = SSLsetAnnotations(i_2, w_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_2;
        t = k_148(t);
      }
    return(t);
  }
  t = u_2(t);
  return(t);
}
static ATerm q_3 (ATerm b_3, ATerm t)
{
  ATerm c_3 = NULL;
  t = SSL_explode_term(b_3);
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_3;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_3 = NULL,i_3 = NULL,k_3 = NULL;
  k_3 = t;
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
      {
        ATerm h_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t);
            static ATerm x_0 (ATerm t)
            {
              t = i_3;
              return(t);
            }
            t = e_3;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = h_11;
            t = q_3(k_3, t);
          }
      }
    }
  else
    {
      t = q_3(k_3, t);
    }
  return(t);
}
static ATerm o_6 (ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm z_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
  t = y_7(u_45, v_45, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_3 = ATgetFirst((ATermList) t);
      {
        ATerm l_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_3;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  {
    ATerm n_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_3 = NULL;
        t = term_s_11;
        p_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, x_4);
        t = o_6(p_3, x_4, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm t_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_11) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_c_2;
        LocalPopChoice(r_11);
      }
    else
      {
        t = n_11;
        {
          ATerm u_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_3 = NULL;
              t = term_s_11;
              w_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_11, x_4);
              t = o_6(w_3, x_4, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm y_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_11) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_c_2;
              LocalPopChoice(w_11);
            }
          else
            {
              t = u_11;
              {
                ATerm d_12 = t;
                int e_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_4 = NULL;
                    t = term_s_11;
                    f_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_s_11, x_4);
                    t = o_6(f_4, x_4, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm f_12 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("f_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_c_2;
                    LocalPopChoice(e_12);
                  }
                else
                  {
                    t = d_12;
                    {
                      ATerm l_4 = NULL;
                      t = term_s_11;
                      l_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_s_11, x_4);
                      t = o_6(l_4, x_4, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm h_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) h_12) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_c_2;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm u_154 (ATerm), ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL,d_6 = NULL;
  a_6 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_6;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_6 = ATgetFirst((ATermList) t);
          d_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 = NULL,h_5 = NULL,k_5 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(a_6);
            d_5 = t;
            t = c_6;
            t = u_154(t);
            h_5 = t;
            t = d_6;
            t = filter_1_0(u_154, t);
            k_5 = t;
            t = (ATerm) ATinsert(CheckATermList(k_5), h_5);
            k_2 = t;
            t = SSLsetAnnotations(k_2, d_5);
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            t = d_6;
            t = filter_1_0(u_154, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      {
        ATerm y_5 = NULL,e_6 = NULL,f_6 = NULL,m_2 = NULL;
        t = SSLgetAnnotations(g_18);
        y_5 = t;
        t = h_18;
        t = v_129(t);
        e_6 = t;
        t = i_18;
        t = v_129(t);
        f_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, e_6, f_6);
        m_2 = t;
        t = SSLsetAnnotations(m_2, y_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_18 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
          f_18 = ATgetArgument(t, 2);
          {
            ATerm r_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(g_18);
            r_6 = t;
            t = h_18;
            t = x_129(t);
            x_6 = t;
            t = i_18;
            t = x_129(t);
            y_6 = t;
            t = f_18;
            t = v_129(t);
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
              h_18 = ATgetArgument(t, 0);
              i_18 = ATgetArgument(t, 1);
              f_18 = ATgetArgument(t, 2);
              e_18 = ATgetArgument(t, 3);
              {
                ATerm g_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,p_8 = NULL,o_2 = NULL;
                t = SSLgetAnnotations(g_18);
                g_8 = t;
                t = h_18;
                t = x_129(t);
                l_8 = t;
                t = i_18;
                t = x_129(t);
                m_8 = t;
                t = f_18;
                t = x_129(t);
                n_8 = t;
                t = e_18;
                t = v_129(t);
                p_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_8, m_8, n_8, p_8);
                o_2 = t;
                t = SSLsetAnnotations(o_2, g_8);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  h_18 = ATgetArgument(t, 0);
                  i_18 = ATgetArgument(t, 1);
                  f_18 = ATgetArgument(t, 2);
                  e_18 = ATgetArgument(t, 3);
                  {
                    ATerm d_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,q_2 = NULL;
                    t = SSLgetAnnotations(g_18);
                    d_9 = t;
                    t = h_18;
                    t = x_129(t);
                    i_9 = t;
                    t = i_18;
                    t = x_129(t);
                    j_9 = t;
                    t = f_18;
                    t = x_129(t);
                    k_9 = t;
                    t = e_18;
                    t = v_129(t);
                    l_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, i_9, j_9, k_9, l_9);
                    q_2 = t;
                    t = SSLsetAnnotations(q_2, d_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      h_18 = ATgetArgument(t, 0);
                      i_18 = ATgetArgument(t, 1);
                      f_18 = ATgetArgument(t, 2);
                      {
                        ATerm x_9 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,r_2 = NULL;
                        t = SSLgetAnnotations(g_18);
                        x_9 = t;
                        t = h_18;
                        t = x_129(t);
                        c_10 = t;
                        t = i_18;
                        t = x_129(t);
                        d_10 = t;
                        t = f_18;
                        t = x_129(t);
                        e_10 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, c_10, d_10, e_10);
                        r_2 = t;
                        t = SSLsetAnnotations(r_2, x_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          h_18 = ATgetArgument(t, 0);
                          i_18 = ATgetArgument(t, 1);
                          {
                            ATerm p_10 = NULL,s_10 = NULL,t_10 = NULL,v_2 = NULL;
                            t = SSLgetAnnotations(g_18);
                            p_10 = t;
                            t = h_18;
                            t = x_129(t);
                            s_10 = t;
                            t = i_18;
                            t = v_129(t);
                            t_10 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, s_10, t_10);
                            v_2 = t;
                            t = SSLsetAnnotations(v_2, p_10);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              h_18 = ATgetArgument(t, 0);
                              i_18 = ATgetArgument(t, 1);
                              {
                                ATerm v_11 = NULL,z_11 = NULL,g_12 = NULL,w_2 = NULL;
                                t = SSLgetAnnotations(g_18);
                                v_11 = t;
                                t = h_18;
                                t = x_129(t);
                                z_11 = t;
                                t = i_18;
                                t = v_129(t);
                                g_12 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, z_11, g_12);
                                w_2 = t;
                                t = SSLsetAnnotations(w_2, v_11);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  h_18 = ATgetArgument(t, 0);
                                  i_18 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_12 = NULL,a_13 = NULL,b_13 = NULL,x_2 = NULL;
                                    t = SSLgetAnnotations(g_18);
                                    s_12 = t;
                                    t = h_18;
                                    t = x_129(t);
                                    a_13 = t;
                                    t = i_18;
                                    t = v_129(t);
                                    b_13 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, a_13, b_13);
                                    x_2 = t;
                                    t = SSLsetAnnotations(x_2, s_12);
                                  }
                                }
                              else
                                {
                                  ATerm k_13 = NULL,o_13 = NULL,p_13 = NULL,y_2 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      h_18 = ATgetArgument(t, 0);
                                      i_18 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(g_18);
                                  k_13 = t;
                                  t = h_18;
                                  t = x_129(t);
                                  o_13 = t;
                                  t = i_18;
                                  t = v_129(t);
                                  p_13 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, o_13, p_13);
                                  y_2 = t;
                                  t = SSLsetAnnotations(y_2, k_13);
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
ATerm dynrule_sargs_1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,g_20 = NULL,u_20 = NULL;
  ATerm l_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          z_19 = ATgetArgument(t, 0);
          {
            ATerm o_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_12);
      t = z_19;
      if(match_cons(t, sym_DynRuleId_1))
        {
          g_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_20;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_12 = ATgetArgument(t, 0);
          u_20 = ATgetArgument(t, 1);
          {
            ATerm q_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_20;
    }
  else
    {
      t = l_12;
      {
        ATerm r_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                z_19 = ATgetArgument(t, 0);
                {
                  ATerm w_12 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_12);
            t = z_19;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_20;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm x_12 = ATgetArgument(t, 0);
                u_20 = ATgetArgument(t, 1);
                {
                  ATerm y_12 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_20;
          }
        else
          {
            t = r_12;
            if(match_cons(t, sym_AddDynRule_2))
              {
                z_19 = ATgetArgument(t, 0);
                {
                  ATerm z_12 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = z_19;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_20;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm c_13 = ATgetArgument(t, 0);
                u_20 = ATgetArgument(t, 1);
                {
                  ATerm d_13 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_20;
          }
      }
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm j_22 = NULL;
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_22 = ATgetArgument(t, 0);
          {
            ATerm h_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_13);
      t = j_22;
    }
  else
    {
      t = f_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_22;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm v_22 = NULL;
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_22 = ATgetArgument(t, 0);
          {
            ATerm l_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_13);
      t = v_22;
    }
  else
    {
      t = i_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_22;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm r_13 = ATgetArgument(t, 0);
          v_21 = ATgetArgument(t, 1);
          {
            ATerm s_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_13);
      t = v_21;
      t = map_1_0(f_1, t);
    }
  else
    {
      t = m_13;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm t_13 = ATgetArgument(t, 0);
          v_21 = ATgetArgument(t, 1);
          {
            ATerm u_13 = ATgetArgument(t, 2);
          }
          {
            ATerm v_13 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_21;
      t = map_1_0(g_1, t);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm f_23 = NULL;
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_23 = ATgetArgument(t, 0);
          {
            ATerm y_13 = ATgetArgument(t, 1);
          }
          {
            ATerm a_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_13);
      t = f_23;
    }
  else
    {
      t = w_13;
      if(match_cons(t, sym_SDefT_4))
        {
          f_23 = ATgetArgument(t, 0);
          {
            ATerm b_14 = ATgetArgument(t, 1);
          }
          {
            ATerm d_14 = ATgetArgument(t, 2);
          }
          {
            ATerm e_14 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_23;
    }
  return(t);
}
static ATerm s_6 (ATerm t_26, ATerm s_26, ATerm t)
{
  t = t_26;
  t = map_1_0(h_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_153 (ATerm), ATerm t_153 (ATerm), ATerm u_153 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  w_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_23;
      t = s_153(t);
    }
  else
    {
      ATerm b_24 = NULL,c_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_23 = ATgetFirst((ATermList) t);
          y_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_23;
      t = u_153(t);
      b_24 = t;
      t = y_23;
      t = foldr_3_0(s_153, t_153, u_153, t);
      c_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_24, c_24);
      t = t_153(t);
    }
  return(t);
}
static ATerm w_6 (ATerm i_150 (ATerm), ATerm d_65, ATerm c_65, ATerm t)
{
  static ATerm v_25 (ATerm t);
  static ATerm v_25 (ATerm t)
  {
    ATerm b_25 = NULL,g_25 = NULL,s_25 = NULL;
    b_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_25 = ATgetFirst((ATermList) t);
            s_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_25;
              {
                static ATerm k_1 (ATerm t);
                static ATerm k_1 (ATerm t)
                {
                  t = c_65;
                  return(t);
                }
                t = e_7(i_150, k_1, g_25, s_25, t);
              }
              t = v_25(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              {
                ATerm z_13 = NULL,c_14 = NULL,m_4 = NULL;
                t = SSLgetAnnotations(b_25);
                z_13 = t;
                t = s_25;
                t = v_25(t);
                c_14 = t;
                t = (ATerm) ATinsert(CheckATermList(c_14), g_25);
                m_4 = t;
                t = SSLsetAnnotations(m_4, z_13);
              }
            }
        }
      }
    return(t);
  }
  t = d_65;
  t = v_25(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_14 = ATgetArgument(t, 0);
      if(((ATgetType(k_14) != AT_LIST) || !(ATisEmpty(k_14))))
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
static ATerm s_1 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
        {
          k_26 = ATgetFirst((ATermList) q_14);
          l_26 = (ATerm) ATgetNext((ATermList) q_14);
        }
      else
        _fail(t);
      {
        ATerm r_14 = ATgetArgument(t, 1);
        if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
          {
            m_26 = ATgetFirst((ATermList) r_14);
            n_26 = (ATerm) ATgetNext((ATermList) r_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_26, m_26), (ATerm) ATmakeAppl(sym__2, l_26, n_26));
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_26), p_26);
  return(t);
}
static ATerm b_7 (ATerm j_842, ATerm o_842, ATerm t_82, ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  t = SSL_explode_term(o_842);
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_842);
  if(match_cons(t, sym__2))
    {
      if((d_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_26, f_26);
  t = genzip_4_0(l_1, s_1, x_1, _id, t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_26, t_82);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_137 (ATerm), ATerm t_137 (ATerm), ATerm t)
{
  static ATerm v_26 (ATerm t);
  static ATerm v_26 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_137(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = t_137(t);
        t = v_26(t);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm for_3_0 (ATerm v_137 (ATerm), ATerm w_137 (ATerm), ATerm x_137 (ATerm), ATerm t)
{
  t = v_137(t);
  t = while_not_2_0(w_137, x_137, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_27);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL,o_4 = NULL;
  q_27 = t;
  if(match_cons(t, sym__2))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  m_27 = t;
  t = o_27;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
  o_4 = t;
  t = SSLsetAnnotations(o_4, m_27);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  w_28 = t;
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_29 = ATgetFirst((ATermList) t);
      c_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_29(x_28, a_29, w_28, t);
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_28), b_29), c_29);
          }
      }
    }
  else
    {
      t = s_29(x_28, a_29, w_28, t);
    }
  return(t);
}
static ATerm s_29 (ATerm r_27, ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm v_27 = NULL,a_28 = NULL,p_4 = NULL,g_28 = NULL,h_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = SSLgetAnnotations(u_27);
  v_27 = t;
  t = t_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_28;
  if(match_cons(t, sym__2))
    {
      h_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_28;
        if((h_28 != t))
          {
            _fail(t);
          }
        t = o_28;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = t_27;
        t = b_7(h_28, n_28, o_28, t);
      }
  }
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_27, a_28);
  p_4 = t;
  t = SSLsetAnnotations(p_4, v_27);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm r_29 = NULL;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      if((r_29 != ATgetArgument(t, 1)))
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
      t = for_3_0(y_1, z_1, a_2, t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm k_29 = NULL,m_29 = NULL,n_29 = NULL;
        k_29 = t;
        if(match_cons(t, sym__2))
          {
            m_29 = ATgetArgument(t, 0);
            n_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_29;
        t = w_6(b_2, m_29, n_29, t);
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
  ATerm n_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(l_2, n_14, o_14, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm p_14 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      if((p_14 != ATgetArgument(t, 1)))
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
static ATerm a_3 (ATerm t)
{
  ATerm f_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(d_3, f_15, k_15, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm l_15 = NULL;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      if((l_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_157 (ATerm), ATerm l_157 (ATerm), ATerm m_157 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm o_30 (ATerm t);
  static ATerm o_30 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_157(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        {
          ATerm e_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_29 = NULL,x_29 = NULL,i_14 = NULL,j_14 = NULL;
              w_29 = t;
              t = l_157(t);
              x_29 = t;
              t = w_29;
              {
                static ATerm d_2 (ATerm t);
                static ATerm d_2 (ATerm t)
                {
                  ATerm d_30 = NULL;
                  t = o_30(t);
                  d_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_30, x_29);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_157(d_2, o_30, f_2, t);
              }
              j_14 = t;
              t = SSL_explode_term(j_14);
              if(match_cons(t, sym__2))
                {
                  ATerm h_15 = ATgetArgument(t, 0);
                  i_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_14;
              t = foldr_3_0(h_2, j_2, _id, t);
              LocalPopChoice(g_15);
            }
          else
            {
              t = e_15;
              {
                ATerm u_14 = NULL,v_14 = NULL;
                v_14 = t;
                t = SSL_explode_term(v_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_15 = ATgetArgument(t, 0);
                    u_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_14;
                t = foldr_3_0(z_2, a_3, o_30, t);
              }
            }
        }
      }
    return(t);
  }
  t = o_30(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,v_42 = NULL;
  s_42 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_42 = ATgetArgument(t, 0);
      r_42 = ATgetArgument(t, 1);
      {
        ATerm r_15 = NULL,a_16 = NULL,f_16 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(s_42);
        r_15 = t;
        t = v_42;
        t = t_129(t);
        a_16 = t;
        t = r_42;
        t = r_129(t);
        f_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_16, f_16);
        t_4 = t;
        t = SSLsetAnnotations(t_4, r_15);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          v_42 = ATgetArgument(t, 0);
          {
            ATerm u_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,p_17 = NULL,w_4 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(s_42);
            u_16 = t;
            t = v_42;
            if(match_cons(t, sym_Rule_3))
              {
                b_17 = ATgetArgument(t, 0);
                c_17 = ATgetArgument(t, 1);
                f_17 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_42);
            a_17 = t;
            t = b_17;
            t = r_129(t);
            g_17 = t;
            t = c_17;
            t = r_129(t);
            h_17 = t;
            t = f_17;
            t = r_129(t);
            i_17 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, g_17, h_17, i_17);
            v_4 = t;
            t = SSLsetAnnotations(v_4, a_17);
            p_17 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, p_17);
            w_4 = t;
            t = SSLsetAnnotations(w_4, u_16);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              v_42 = ATgetArgument(t, 0);
              r_42 = ATgetArgument(t, 1);
              p_42 = ATgetArgument(t, 2);
              {
                ATerm d_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,z_4 = NULL;
                t = SSLgetAnnotations(s_42);
                d_18 = t;
                t = v_42;
                t = t_129(t);
                r_18 = t;
                t = r_42;
                t = t_129(t);
                s_18 = t;
                t = p_42;
                t = t_129(t);
                t_18 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, r_18, s_18, t_18);
                z_4 = t;
                t = SSLsetAnnotations(z_4, d_18);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  v_42 = ATgetArgument(t, 0);
                  r_42 = ATgetArgument(t, 1);
                  p_42 = ATgetArgument(t, 2);
                  q_42 = ATgetArgument(t, 3);
                  {
                    ATerm i_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,a_5 = NULL;
                    t = SSLgetAnnotations(s_42);
                    i_19 = t;
                    t = v_42;
                    t = t_129(t);
                    o_19 = t;
                    t = r_42;
                    t = t_129(t);
                    p_19 = t;
                    t = p_42;
                    t = t_129(t);
                    q_19 = t;
                    t = q_42;
                    t = r_129(t);
                    r_19 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, o_19, p_19, q_19, r_19);
                    a_5 = t;
                    t = SSLsetAnnotations(a_5, i_19);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_42 = ATgetArgument(t, 0);
                      r_42 = ATgetArgument(t, 1);
                      p_42 = ATgetArgument(t, 2);
                      q_42 = ATgetArgument(t, 3);
                      {
                        ATerm e_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,o_20 = NULL,b_5 = NULL;
                        t = SSLgetAnnotations(s_42);
                        e_20 = t;
                        t = v_42;
                        t = t_129(t);
                        k_20 = t;
                        t = r_42;
                        t = t_129(t);
                        l_20 = t;
                        t = p_42;
                        t = t_129(t);
                        m_20 = t;
                        t = q_42;
                        t = r_129(t);
                        o_20 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_20, l_20, m_20, o_20);
                        b_5 = t;
                        t = SSLsetAnnotations(b_5, e_20);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          v_42 = ATgetArgument(t, 0);
                          r_42 = ATgetArgument(t, 1);
                          {
                            ATerm a_21 = NULL,d_21 = NULL,f_21 = NULL,c_5 = NULL;
                            t = SSLgetAnnotations(s_42);
                            a_21 = t;
                            t = v_42;
                            t = t_129(t);
                            d_21 = t;
                            t = r_42;
                            t = r_129(t);
                            f_21 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, d_21, f_21);
                            c_5 = t;
                            t = SSLsetAnnotations(c_5, a_21);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              v_42 = ATgetArgument(t, 0);
                              r_42 = ATgetArgument(t, 1);
                              {
                                ATerm q_21 = NULL,z_21 = NULL,a_22 = NULL,g_5 = NULL;
                                t = SSLgetAnnotations(s_42);
                                q_21 = t;
                                t = v_42;
                                t = t_129(t);
                                z_21 = t;
                                t = r_42;
                                t = r_129(t);
                                a_22 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, z_21, a_22);
                                g_5 = t;
                                t = SSLsetAnnotations(g_5, q_21);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  v_42 = ATgetArgument(t, 0);
                                  r_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_22 = NULL,r_22 = NULL,s_22 = NULL,i_5 = NULL;
                                    t = SSLgetAnnotations(s_42);
                                    o_22 = t;
                                    t = v_42;
                                    t = t_129(t);
                                    r_22 = t;
                                    t = r_42;
                                    t = r_129(t);
                                    s_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, r_22, s_22);
                                    i_5 = t;
                                    t = SSLsetAnnotations(i_5, o_22);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      v_42 = ATgetArgument(t, 0);
                                      {
                                        ATerm g_23 = NULL,i_23 = NULL,j_5 = NULL;
                                        t = SSLgetAnnotations(s_42);
                                        g_23 = t;
                                        t = v_42;
                                        t = r_129(t);
                                        i_23 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, i_23);
                                        j_5 = t;
                                        t = SSLsetAnnotations(j_5, g_23);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          v_42 = ATgetArgument(t, 0);
                                          {
                                            ATerm o_23 = NULL,v_23 = NULL,n_5 = NULL;
                                            t = SSLgetAnnotations(s_42);
                                            o_23 = t;
                                            t = v_42;
                                            t = r_129(t);
                                            v_23 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, v_23);
                                            n_5 = t;
                                            t = SSLsetAnnotations(n_5, o_23);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              v_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm r_24 = NULL,t_24 = NULL,o_5 = NULL;
                                                t = SSLgetAnnotations(s_42);
                                                r_24 = t;
                                                t = v_42;
                                                t = r_129(t);
                                                t_24 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, t_24);
                                                o_5 = t;
                                                t = SSLsetAnnotations(o_5, r_24);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  v_42 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm a_25 = NULL,d_25 = NULL,p_5 = NULL;
                                                    t = SSLgetAnnotations(s_42);
                                                    a_25 = t;
                                                    t = v_42;
                                                    t = r_129(t);
                                                    d_25 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, d_25);
                                                    p_5 = t;
                                                    t = SSLsetAnnotations(p_5, a_25);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm q_25 = NULL,w_25 = NULL,r_5 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      v_42 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(s_42);
                                                  q_25 = t;
                                                  t = v_42;
                                                  t = r_129(t);
                                                  w_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, w_25);
                                                  r_5 = t;
                                                  t = SSLsetAnnotations(r_5, q_25);
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
ATerm dynrule_targs_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,w_44 = NULL,b_45 = NULL;
  ATerm j_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          p_44 = ATgetArgument(t, 0);
          {
            ATerm n_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_15);
      t = p_44;
      if(match_cons(t, sym_DynRuleId_1))
        {
          w_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_44;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm o_15 = ATgetArgument(t, 0);
          ATerm p_15 = ATgetArgument(t, 1);
          b_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_45;
    }
  else
    {
      t = j_15;
      {
        ATerm q_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                p_44 = ATgetArgument(t, 0);
                {
                  ATerm t_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_15);
            t = p_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                w_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm u_15 = ATgetArgument(t, 0);
                ATerm v_15 = ATgetArgument(t, 1);
                b_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_45;
          }
        else
          {
            t = q_15;
            if(match_cons(t, sym_AddDynRule_2))
              {
                p_44 = ATgetArgument(t, 0);
                {
                  ATerm w_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = p_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                w_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm x_15 = ATgetArgument(t, 0);
                ATerm y_15 = ATgetArgument(t, 1);
                b_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_45;
          }
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm c_46 = NULL;
  ATerm z_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_46 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_16);
      t = c_46;
    }
  else
    {
      t = z_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_46;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm j_46 = NULL;
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_46 = ATgetArgument(t, 0);
          {
            ATerm g_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_16);
      t = j_46;
    }
  else
    {
      t = d_16;
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
ATerm Bind8_0_0 (ATerm t)
{
  ATerm x_45 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_16 = ATgetArgument(t, 0);
          ATerm k_16 = ATgetArgument(t, 1);
          x_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = x_45;
      t = map_1_0(f_3, t);
    }
  else
    {
      t = h_16;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_16 = ATgetArgument(t, 0);
          ATerm m_16 = ATgetArgument(t, 1);
          x_45 = ATgetArgument(t, 2);
          {
            ATerm n_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_45;
      t = map_1_0(g_3, t);
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm v_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_47);
  return(t);
}
static ATerm j_3 (ATerm t)
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
                  ATerm z_47 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_47 = ATgetArgument(t, 0);
                      b_48 = ATgetArgument(t, 1);
                      c_48 = ATgetArgument(t, 2);
                      d_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_48;
                  t = map_1_0(l_3, t);
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = s_16;
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
  ATerm p_48 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_48 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = p_48;
    }
  else
    {
      t = x_16;
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
static ATerm m_3 (ATerm t)
{
  t = map_1_0(n_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm b_49 = NULL;
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_49 = ATgetArgument(t, 0);
          {
            ATerm j_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_17);
      t = b_49;
    }
  else
    {
      t = d_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_49;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm i_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_49);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            {
              ATerm o_17 = t;
              int q_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,r_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_49 = ATgetArgument(t, 0);
                      n_49 = ATgetArgument(t, 1);
                      o_49 = ATgetArgument(t, 2);
                      r_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_49;
                  t = map_1_0(s_3, t);
                  LocalPopChoice(q_17);
                }
              else
                {
                  t = o_17;
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
                        t = dynrule_targs_1_0(t_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm m_50 = NULL;
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_50 = ATgetArgument(t, 0);
          {
            ATerm v_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_17);
      t = m_50;
    }
  else
    {
      t = t_17;
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
static ATerm t_3 (ATerm t)
{
  t = map_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm r_50 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_50 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_17);
      t = r_50;
    }
  else
    {
      t = w_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_50;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm v_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_50);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm j_18 = t;
              int k_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_50 = ATgetArgument(t, 0);
                      y_50 = ATgetArgument(t, 1);
                      z_50 = ATgetArgument(t, 2);
                      a_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_50;
                  t = map_1_0(y_3, t);
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
static ATerm y_3 (ATerm t)
{
  ATerm h_51 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_51 = ATgetArgument(t, 0);
          {
            ATerm p_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = h_51;
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_51;
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
  ATerm o_51 = NULL;
  ATerm q_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_51 = ATgetArgument(t, 0);
          {
            ATerm v_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_18);
      t = o_51;
    }
  else
    {
      t = q_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_51;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm w_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_51);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
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
                  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,f_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_52 = ATgetArgument(t, 0);
                      b_52 = ATgetArgument(t, 1);
                      c_52 = ATgetArgument(t, 2);
                      f_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_52;
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
  ATerm n_52 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_52 = ATgetArgument(t, 0);
          {
            ATerm g_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_19);
      t = n_52;
    }
  else
    {
      t = e_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_52;
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
  ATerm s_52 = NULL;
  ATerm h_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_52 = ATgetArgument(t, 0);
          {
            ATerm k_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_19);
      t = s_52;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_52;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm w_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_52);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm n_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_19);
          }
        else
          {
            t = n_19;
            {
              ATerm t_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_52 = ATgetArgument(t, 0);
                      z_52 = ATgetArgument(t, 1);
                      a_53 = ATgetArgument(t, 2);
                      b_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_53;
                  t = map_1_0(k_4, t);
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = t_19;
                  {
                    ATerm v_19 = t;
                    int w_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_19);
                      }
                    else
                      {
                        t = v_19;
                        t = dynrule_targs_1_0(n_4, t);
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
  ATerm i_53 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_53 = ATgetArgument(t, 0);
          {
            ATerm a_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = i_53;
    }
  else
    {
      t = x_19;
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
static ATerm n_4 (ATerm t)
{
  t = map_1_0(q_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm n_53 = NULL;
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_53 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_20);
      t = n_53;
    }
  else
    {
      t = b_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_53;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm r_47 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      r_47 = ATgetArgument(t, 0);
      t = r_47;
      t = free_vars_3_0(h_3, j_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          r_47 = ATgetArgument(t, 0);
          t = r_47;
          t = free_vars_3_0(o_3, r_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              r_47 = ATgetArgument(t, 0);
              t = r_47;
              t = free_vars_3_0(v_3, x_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_47 = ATgetArgument(t, 0);
                  t = r_47;
                  t = free_vars_3_0(c_4, d_4, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      r_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_47;
                  t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm c_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_54);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm f_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = f_20;
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
              ATerm n_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_54 = ATgetArgument(t, 0);
                      f_54 = ATgetArgument(t, 1);
                      g_54 = ATgetArgument(t, 2);
                      h_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_54;
                  t = map_1_0(u_4, t);
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = n_20;
                  {
                    ATerm q_20 = t;
                    int r_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_20);
                      }
                    else
                      {
                        t = q_20;
                        t = dynrule_targs_1_0(y_4, t);
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
  ATerm o_54 = NULL;
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_54 = ATgetArgument(t, 0);
          {
            ATerm v_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_20);
      t = o_54;
    }
  else
    {
      t = s_20;
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
static ATerm y_4 (ATerm t)
{
  t = map_1_0(e_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm t_54 = NULL;
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_54 = ATgetArgument(t, 0);
          {
            ATerm y_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_20);
      t = t_54;
    }
  else
    {
      t = w_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_54;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_53 = NULL,z_53 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_53 = ATgetArgument(t, 0);
      t = z_53;
      if(match_cons(t, sym_Rule_3))
        {
          v_53 = ATgetArgument(t, 0);
          {
            ATerm z_20 = ATgetArgument(t, 1);
          }
          {
            ATerm b_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_53;
      t = free_vars_3_0(r_4, s_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_53 = ATgetArgument(t, 0);
          {
            ATerm c_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_53;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm g_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_55);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm e_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = e_21;
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
                  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_55 = ATgetArgument(t, 0);
                      j_55 = ATgetArgument(t, 1);
                      k_55 = ATgetArgument(t, 2);
                      l_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_55;
                  t = map_1_0(m_5, t);
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
                        t = dynrule_targs_1_0(q_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm s_55 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_55 = ATgetArgument(t, 0);
          {
            ATerm p_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_21);
      t = s_55;
    }
  else
    {
      t = n_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_55;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = map_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm x_55 = NULL;
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_55 = ATgetArgument(t, 0);
          {
            ATerm t_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_21);
      t = x_55;
    }
  else
    {
      t = r_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_55;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm a_56 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      a_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_56);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm u_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
      b_56 = t;
      if(match_cons(t, sym_Let_2))
        {
          c_56 = ATgetArgument(t, 0);
          d_56 = ATgetArgument(t, 1);
          t = b_56;
          t = s_6(c_56, d_56, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              c_56 = ATgetArgument(t, 0);
              d_56 = ATgetArgument(t, 1);
              e_56 = ATgetArgument(t, 2);
              t = d_56;
              t = map_1_0(v_5, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  c_56 = ATgetArgument(t, 0);
                  d_56 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, c_56);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_56 = ATgetArgument(t, 0);
                      d_56 = ATgetArgument(t, 1);
                      e_56 = ATgetArgument(t, 2);
                      f_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_56;
                  t = map_1_0(w_5, t);
                }
            }
        }
      LocalPopChoice(w_21);
    }
  else
    {
      t = u_21;
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
            t = dynrule_sargs_1_0(x_5, t);
          }
      }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm n_56 = NULL;
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_56 = ATgetArgument(t, 0);
          {
            ATerm d_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_22);
      t = n_56;
    }
  else
    {
      t = b_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_56;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm y_56 = NULL;
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_56 = ATgetArgument(t, 0);
          {
            ATerm g_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_22);
      t = y_56;
    }
  else
    {
      t = e_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_56;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = map_1_0(z_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm d_57 = NULL;
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_57 = ATgetArgument(t, 0);
          {
            ATerm k_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_22);
      t = d_57;
    }
  else
    {
      t = h_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_57;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
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
  ATerm e_55 = NULL,f_55 = NULL;
  e_55 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      ATerm n_22 = ATgetArgument(t, 1);
      ATerm p_22 = ATgetArgument(t, 2);
      ATerm q_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  f_55 = t;
  t = e_55;
  t = free_vars_3_0(f_5, l_5, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_55;
  t = free_vars_3_0(t_5, u_5, sboundin_3_0, t);
  t = filter_1_0(b_6, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_55;
  return(t);
}
ATerm partition_1_0 (ATerm d_155 (ATerm), ATerm t)
{
  static ATerm l_58 (ATerm t);
  static ATerm l_58 (ATerm t)
  {
    ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
    i_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_t_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_58 = ATgetFirst((ATermList) t);
            k_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,j_27 = NULL,e_11 = NULL;
              t = SSLgetAnnotations(i_58);
              c_27 = t;
              t = j_58;
              t = d_155(t);
              x_26 = t;
              t = (ATerm) ATinsert(CheckATermList(k_58), x_26);
              e_11 = t;
              t = SSLsetAnnotations(e_11, c_27);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_22 = ATgetFirst((ATermList) t);
                  a_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_27;
              t = l_58(t);
              z_26 = t;
              t = SSL_explode_term(z_26);
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
              t = SSL_explode_term(z_26);
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
                        ATerm e_23 = (ATerm) ATgetNext((ATermList) c_23);
                        if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                          {
                            j_27 = ATgetFirst((ATermList) e_23);
                            {
                              ATerm h_23 = (ATerm) ATgetNext((ATermList) e_23);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_27), x_26), j_27);
              LocalPopChoice(w_22);
            }
          else
            {
              t = u_22;
              {
                ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,i_28 = NULL,y_28 = NULL,f_11 = NULL;
                t = SSLgetAnnotations(i_58);
                i_28 = t;
                t = (ATerm) ATinsert(CheckATermList(k_58), j_58);
                f_11 = t;
                t = SSLsetAnnotations(f_11, i_28);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm j_23 = ATgetFirst((ATermList) t);
                    e_28 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_28;
                t = l_58(t);
                d_28 = t;
                t = SSL_explode_term(d_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm l_23 = ATgetArgument(t, 1);
                      if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
                        {
                          f_28 = ATgetFirst((ATermList) l_23);
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
                t = SSL_explode_term(d_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm p_23 = ATgetArgument(t, 1);
                      if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
                        {
                          ATerm q_23 = ATgetFirst((ATermList) p_23);
                          ATerm r_23 = (ATerm) ATgetNext((ATermList) p_23);
                          if(((ATgetType(r_23) == AT_LIST) && !(ATisEmpty(r_23))))
                            {
                              y_28 = ATgetFirst((ATermList) r_23);
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
                t = (ATerm) ATmakeAppl(sym__2, f_28, (ATerm) ATinsert(CheckATermList(y_28), j_58));
              }
            }
        }
      }
    return(t);
  }
  t = l_58(t);
  return(t);
}
static ATerm d_7 (ATerm p_25, ATerm o_25, ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL;
  t = p_25;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      p_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_58;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, o_58, o_25), p_58);
  return(t);
}
static ATerm e_7 (ATerm q_150 (ATerm), ATerm r_150 (ATerm), ATerm j_65, ATerm i_65, ATerm t)
{
  t = r_150(t);
  {
    static ATerm g_6 (ATerm t);
    static ATerm g_6 (ATerm t)
    {
      ATerm q_58 = NULL;
      q_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_65, q_58);
      t = q_150(t);
      return(t);
    }
    t = fetch_1_0(g_6, t);
  }
  t = i_65;
  return(t);
}
static ATerm f_7 (ATerm n_150 (ATerm), ATerm f_65, ATerm e_65, ATerm t)
{
  static ATerm g_59 (ATerm t);
  static ATerm g_59 (ATerm t)
  {
    ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
    b_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_65;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_59 = ATgetFirst((ATermList) t);
            d_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_59;
              {
                static ATerm h_6 (ATerm t);
                static ATerm h_6 (ATerm t)
                {
                  t = e_65;
                  return(t);
                }
                t = e_7(n_150, h_6, c_59, d_59, t);
              }
              t = g_59(t);
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              {
                ATerm h_29 = NULL,t_29 = NULL,i_11 = NULL;
                t = SSLgetAnnotations(b_59);
                h_29 = t;
                t = d_59;
                t = g_59(t);
                t_29 = t;
                t = (ATerm) ATinsert(CheckATermList(t_29), c_59);
                i_11 = t;
                t = SSLsetAnnotations(i_11, h_29);
              }
            }
        }
      }
    return(t);
  }
  t = f_65;
  t = g_59(t);
  return(t);
}
ATerm genzip_4_0 (ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t)
{
  static ATerm o_59 (ATerm t);
  static ATerm o_59 (ATerm t)
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_135(t);
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        {
          ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,k_11 = NULL;
          t = t_135(t);
          n_59 = t;
          if(match_cons(t, sym__2))
            {
              j_59 = ATgetArgument(t, 0);
              k_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_59);
          i_59 = t;
          t = j_59;
          t = v_135(t);
          l_59 = t;
          t = k_59;
          t = o_59(t);
          m_59 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_59, m_59);
          k_11 = t;
          t = SSLsetAnnotations(k_11, i_59);
          t = u_135(t);
        }
      }
    return(t);
  }
  t = o_59(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_22;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_60 = ATgetFirst((ATermList) t);
      d_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if(match_cons(d_24, sym__2))
        {
          e_60 = ATgetArgument(d_24, 0);
          f_60 = ATgetArgument(d_24, 1);
        }
      else
        _fail(t);
      {
        ATerm e_24 = ATgetArgument(t, 1);
        if(match_cons(e_24, sym__2))
          {
            g_60 = ATgetArgument(e_24, 0);
            h_60 = ATgetArgument(e_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_60), e_60), (ATerm) ATinsert(CheckATermList(h_60), f_60));
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  if(match_cons(t, sym__2))
    {
      i_60 = ATgetArgument(t, 0);
      j_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(n_6, i_60, j_60, t);
  return(t);
}
static ATerm n_6 (ATerm t)
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
static ATerm p_6 (ATerm t)
{
  ATerm l_60 = NULL;
  if(match_cons(t, sym__2))
    {
      l_60 = ATgetArgument(t, 0);
      if((l_60 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm b_152 (ATerm), ATerm c_152 (ATerm), ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
  z_59 = t;
  a_60 = t;
  t = SSL_explode_term(a_60);
  if(match_cons(t, sym__2))
    {
      r_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_59);
  t_59 = t;
  t = p_59;
  t = genzip_4_0(i_6, j_6, k_6, b_152, t);
  if(match_cons(t, sym__2))
    {
      s_59 = ATgetArgument(t, 0);
      q_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(r_59, s_59);
  y_59 = t;
  t = SSLsetAnnotations(y_59, t_59);
  t = c_152(t);
  if(match_cons(t, sym__2))
    {
      u_59 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_59;
  t = foldr_2_0(l_6, m_6, t);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_59, x_59);
  t = f_7(p_6, v_59, x_59, t);
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_59, w_59);
  return(t);
}
ATerm collect_split_1_0 (ATerm z_151 (ATerm), ATerm t)
{
  static ATerm o_60 (ATerm t);
  static ATerm o_60 (ATerm t)
  {
    static ATerm q_6 (ATerm t);
    static ATerm q_6 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_151(t);
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          {
            ATerm m_60 = NULL;
            m_60 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_60, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(o_60, q_6, t);
    return(t);
  }
  t = o_60(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      s_60 = ATgetArgument(t, 0);
      t_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(s_60, t_60, t);
  return(t);
}
static ATerm j_7 (ATerm i_25, ATerm j_25, ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL;
  t = l_25;
  t = collect_split_1_0(t_6, t);
  if(match_cons(t, sym__2))
    {
      p_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_60, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, i_25, j_25, k_25, p_60)));
  t = conc_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm t_147 (ATerm), ATerm t)
{
  static ATerm i_61 (ATerm t);
  static ATerm i_61 (ATerm t)
  {
    ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
    f_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_61;
      }
    else
      {
        ATerm l_30 = NULL,r_30 = NULL,s_30 = NULL,m_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_61 = ATgetFirst((ATermList) t);
            h_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_61);
        l_30 = t;
        t = g_61;
        t = t_147(t);
        r_30 = t;
        t = h_61;
        t = i_61(t);
        s_30 = t;
        t = (ATerm) ATinsert(CheckATermList(s_30), r_30);
        m_11 = t;
        t = SSLsetAnnotations(m_11, l_30);
      }
    return(t);
  }
  t = i_61(t);
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
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
      o_61 = ATgetArgument(t, 2);
      {
        ATerm t_61 = NULL;
        t = term_i_24;
        t_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_61, term_i_24);
        t = k_7(u_6, m_61, t_61, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, m_61, n_61, o_61);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          m_61 = ATgetArgument(t, 0);
          n_61 = ATgetArgument(t, 1);
          o_61 = ATgetArgument(t, 2);
          p_61 = ATgetArgument(t, 3);
          {
            ATerm y_61 = NULL;
            t = term_k_24;
            y_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_61, term_k_24);
            t = k_7(v_6, m_61, y_61, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, m_61, n_61, o_61, p_61);
          }
        }
      else
        {
          ATerm d_62 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              m_61 = ATgetArgument(t, 0);
              n_61 = ATgetArgument(t, 1);
              o_61 = ATgetArgument(t, 2);
              p_61 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_m_24;
          d_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_61, term_m_24);
          t = k_7(a_7, m_61, d_62, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, m_61, n_61, o_61, p_61);
        }
    }
  return(t);
}
static ATerm k_7 (ATerm d_143 (ATerm), ATerm e_44, ATerm b_44, ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL;
  h_62 = t;
  t = d_143(t);
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_62, e_44, b_44);
  t = z_7(e_62, e_44, b_44, t);
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_62 = NULL;
        t = term_p_24;
        m_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_62, term_p_24);
        t = y_7(e_62, m_62, t);
        {
          ATerm q_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_24;
            }
        }
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_62 = ATgetFirst((ATermList) t);
      g_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_62, term_p_24, (ATerm) ATinsert(CheckATermList(g_62), (ATerm) ATinsert(CheckATermList(f_62), e_44)));
  t = lookup_table_0_1(e_62, t);
  l_62 = t;
  t = term_p_24;
  i_62 = t;
  t = (ATerm) ATinsert(CheckATermList(g_62), (ATerm) ATinsert(CheckATermList(f_62), e_44));
  j_62 = t;
  t = l_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(i_62, j_62, k_62, t);
  t = h_62;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL;
  o_62 = t;
  t = term_u_24;
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_62, term_u_24);
  t = k_7(g_7, o_62, p_62, t);
  t = o_62;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm n_62 = NULL;
  n_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_24), term_v_24);
  t = map_1_0(c_7, t);
  t = n_62;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,o_11 = NULL;
  h_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_63);
  e_63 = t;
  t = f_63;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(l_7, t);
  t = concat_0_0(t);
  g_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_63);
  o_11 = t;
  t = SSLsetAnnotations(o_11, e_63);
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
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
  m_63 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_63 = ATgetArgument(t, 0);
      j_63 = ATgetArgument(t, 1);
      k_63 = ATgetArgument(t, 2);
      l_63 = ATgetArgument(t, 3);
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_63;
            t = j_7(i_63, j_63, k_63, l_63, t);
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            t = (ATerm) ATinsert(ATempty, m_63);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, m_63);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm r_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,q_11 = NULL,p_11 = NULL;
  t = declare_standard_strategies_0_0(t);
  d_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_63);
  r_62 = t;
  t = x_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_62 = ATgetFirst((ATermList) t);
      a_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_62);
  y_62 = t;
  t = a_63;
  t = Cons_2_0(h_7, i_7, t);
  b_63 = t;
  t = (ATerm) ATinsert(CheckATermList(b_63), z_62);
  p_11 = t;
  t = SSLsetAnnotations(p_11, y_62);
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_63);
  q_11 = t;
  t = SSLsetAnnotations(q_11, r_62);
  return(t);
}
static ATerm m_7 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm v_63 = NULL;
  t = SSL_fputc(f_35, g_35);
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_63);
  return(t);
}
static ATerm n_7 (ATerm l_33, ATerm m_33, ATerm t)
{
  ATerm w_63 = NULL;
  t = SSL_write_term_to_stream_text(l_33, m_33);
  w_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_63);
  return(t);
}
static ATerm p_7 (ATerm q_138 (ATerm), ATerm w_256, ATerm r_33, ATerm t)
{
  ATerm x_63 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_256, term_z_24);
  t = t_7(t);
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_63, r_33);
  t = q_138(t);
  t = fclose_0_0(t);
  t = r_33;
  return(t);
}
static ATerm o_7 (ATerm h_33, ATerm i_33, ATerm t)
{
  ATerm y_63 = NULL;
  t = SSL_write_term_to_stream_baf(h_33, i_33);
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_63);
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
      ATerm c_25 = ATgetArgument(t, 0);
      if(match_cons(c_25, sym_Stream_1))
        {
          g_31 = ATgetArgument(c_25, 0);
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if(match_cons(e_25, sym_Stream_1))
        {
          v_31 = ATgetArgument(e_25, 0);
        }
      else
        _fail(t);
      w_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(v_31, w_31, t);
  s_31 = t;
  t = term_f_25;
  t_31 = t;
  t = s_31;
  if(match_cons(t, sym_Stream_1))
    {
      u_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, s_31);
  t = m_7(t_31, u_31, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,v_65 = NULL,w_65 = NULL,a_12 = NULL,x_11 = NULL;
  d_64 = t;
  if(match_cons(t, sym__2))
    {
      k_64 = ATgetArgument(t, 0);
      l_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_64);
  j_64 = t;
  t = k_64;
  {
    ATerm h_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm v_7 (ATerm t);
        static ATerm v_7 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((c_64 != NULL) && (c_64 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_64 = ATgetArgument(t, 0);
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
        t = h_25;
        t = term_n_25;
        c_64 = t;
      }
  }
  m_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_64, l_64);
  x_11 = t;
  t = SSLsetAnnotations(x_11, j_64);
  t = d_64;
  if(match_cons(t, sym__2))
    {
      f_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_64);
  e_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_64, (ATerm) ATmakeAppl(sym__2, not_null(c_64), g_64));
  a_12 = t;
  t = SSLsetAnnotations(a_12, e_64);
  i_64 = t;
  if(match_cons(t, sym__2))
    {
      v_65 = ATgetArgument(t, 0);
      w_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_30 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,b_12 = NULL;
        t = SSLgetAnnotations(i_64);
        z_30 = t;
        t = v_65;
        t = fetch_1_0(a_8, t);
        c_31 = t;
        t = w_65;
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
        b_12 = t;
        t = SSLsetAnnotations(b_12, z_30);
        LocalPopChoice(t_25);
      }
    else
      {
        t = r_25;
        {
          ATerm m_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,c_12 = NULL;
          t = SSLgetAnnotations(i_64);
          m_31 = t;
          t = w_65;
          if(match_cons(t, sym__2))
            {
              q_31 = ATgetArgument(t, 0);
              r_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_7(f_8, q_31, r_31, t);
          p_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_65, p_31);
          c_12 = t;
          t = SSLsetAnnotations(c_12, m_31);
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
ATerm apply_strategy_1_0 (ATerm v_161 (ATerm), ATerm t)
{
  ATerm z_65 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
  k_66 = t;
  t = dtime_0_0(t);
  t = k_66;
  t = v_161(t);
  j_66 = t;
  t = dtime_0_0(t);
  z_65 = t;
  t = j_66;
  if(match_cons(t, sym__2))
    {
      h_66 = ATgetArgument(t, 0);
      i_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_66), (ATerm) ATmakeAppl(sym_Runtime_1, z_65)), i_66);
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
        ATerm u_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_66);
            LocalPopChoice(x_25);
          }
        else
          {
            t = u_25;
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
static ATerm q_7 (ATerm n_33, ATerm t)
{
  t = SSL_read_term_from_stream(n_33);
  return(t);
}
static ATerm r_7 (ATerm m_74, ATerm n_74, ATerm t)
{
  t = SSL_strcat(m_74, n_74);
  return(t);
}
static ATerm s_7 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm d_67 = NULL;
  t = SSL_fopen(h_35, i_35);
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
static ATerm p_68 (ATerm q_67, ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,y_67 = NULL,k_12 = NULL;
  t = SSLgetAnnotations(s_67);
  v_67 = t;
  t = q_67;
  if(match_cons(t, sym_Path_1))
    {
      y_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_67, r_67);
  k_12 = t;
  t = SSLsetAnnotations(k_12, v_67);
  if(match_cons(t, sym__2))
    {
      t_67 = ATgetArgument(t, 0);
      u_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(t_67, u_67, t);
  return(t);
}
static ATerm q_68 (ATerm b_68, ATerm c_68, ATerm d_68, ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,j_68 = NULL,m_12 = NULL;
  t = SSLgetAnnotations(d_68);
  g_68 = t;
  t = SSL_is_string(b_68);
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_68, c_68);
  m_12 = t;
  t = SSLsetAnnotations(m_12, g_68);
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
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_68(l_68, t);
            LocalPopChoice(c_26);
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
    ATerm j_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_68, term_r_26);
        t = t_7(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = j_26;
        {
          ATerm l_32 = NULL,n_32 = NULL;
          t = term_u_26;
          n_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_26, z_68);
          t = r_7(n_32, z_68, t);
          l_32 = t;
          t = SSL_perror(l_32);
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
ATerm fetch_1_0 (ATerm d_148 (ATerm), ATerm t)
{
  static ATerm z_69 (ATerm t);
  static ATerm z_69 (ATerm t)
  {
    ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
    w_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_69 = ATgetFirst((ATermList) t);
        y_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_32 = NULL,k_33 = NULL,u_12 = NULL;
          t = SSLgetAnnotations(w_69);
          z_32 = t;
          t = x_69;
          t = d_148(t);
          k_33 = t;
          t = (ATerm) ATinsert(CheckATermList(y_69), k_33);
          u_12 = t;
          t = SSLsetAnnotations(u_12, z_32);
          LocalPopChoice(y_26);
        }
      else
        {
          t = w_26;
          {
            ATerm g_34 = NULL,m_34 = NULL,v_12 = NULL;
            t = SSLgetAnnotations(w_69);
            g_34 = t;
            t = y_69;
            t = z_69(t);
            m_34 = t;
            t = (ATerm) ATinsert(CheckATermList(m_34), x_69);
            v_12 = t;
            t = SSLsetAnnotations(v_12, g_34);
          }
        }
    }
    return(t);
  }
  t = z_69(t);
  return(t);
}
static ATerm y_7 (ATerm c_47, ATerm d_47, ATerm t)
{
  ATerm c_70 = NULL;
  t = lookup_table_0_1(c_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(d_47, c_70, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_140 (ATerm), ATerm t)
{
  ATerm f_70 = NULL;
  f_70 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
        t = term_n_10;
        i_70 = t;
        t = term_f_27;
        j_70 = t;
        t = term_g_27;
        t = y_7(i_70, j_70, t);
        h_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_70, term_h_27);
        t = geq_0_0(t);
        t = f_70;
        t = i_140(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = f_70;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
  m_70 = t;
  {
    ATerm i_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_70;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_27 = ATgetFirst((ATermList) t);
                ATerm s_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_70;
          }
        LocalPopChoice(l_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATinsert(ATempty, m_70);
      }
  }
  n_70 = t;
  t = term_n_25;
  o_70 = t;
  t = SSL_printnl(o_70, n_70);
  t = m_70;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  t = term_n_10;
  s_70 = t;
  t = term_o_10;
  t_70 = t;
  t = term_q_10;
  t = y_7(s_70, t_70, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm v_70 = NULL;
  v_70 = t;
  if(match_string(t, "-k"))
    {
      t = v_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_70;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
  w_70 = t;
  t = SSL_string_to_int(w_70);
  x_70 = t;
  t = term_w_27;
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_27, x_70);
  t = b_8(y_70, x_70, t);
  t = w_70;
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
  ATerm a_71 = NULL;
  a_71 = t;
  if(match_string(t, "-S"))
    {
      t = a_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_71;
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL;
  t = term_f_27;
  b_71 = t;
  t = term_y_27;
  c_71 = t;
  t = term_z_27;
  t = b_8(b_71, c_71, t);
  t = term_b_28;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
  d_71 = t;
  t = SSL_string_to_int(d_71);
  e_71 = t;
  t = term_f_27;
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, e_71);
  t = b_8(f_71, e_71, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_71);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_j_28;
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
  ATerm g_71 = NULL,h_71 = NULL;
  t = term_k_28;
  g_71 = t;
  t = term_c_2;
  h_71 = t;
  t = term_l_28;
  t = b_8(g_71, h_71, t);
  t = term_m_28;
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
      t = Option_3_0(k_8, o_8, q_8, t);
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
            t = ArgOption_3_0(r_8, s_8, t_8, t);
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
static ATerm b_8 (ATerm b_39, ATerm c_39, ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL;
  t = term_n_10;
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, b_39, c_39);
  t = lookup_table_0_1(i_71, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(b_39, c_39, j_71, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, b_39, c_39);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
      t = term_c_2;
      t = g_0(t);
      p_71 = t;
      t = term_w_10;
      q_71 = t;
      t = term_x_10;
      r_71 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, p_71);
      t = z_7(q_71, r_71, p_71, t);
      _fail(t);
    }
  else
    {
      ATerm u_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_71 = ATgetFirst((ATermList) t);
          o_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_71;
      t = b_0(t);
      t = term_c_2;
      t = d_0(t);
      u_71 = t;
      t = (ATerm) ATinsert(CheckATermList(o_71), u_71);
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm w_71 = NULL;
  w_71 = t;
  if(match_string(t, "-o"))
    {
      t = w_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_71;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL;
  x_71 = t;
  t = term_u_28;
  y_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, x_71);
  t = b_8(y_71, x_71, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_71);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_8, y_8, z_8, t);
  return(t);
}
static ATerm z_7 (ATerm j_45, ATerm k_45, ATerm i_45, ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
  {
    ATerm z_28 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
        t = y_7(j_45, k_45, t);
        LocalPopChoice(d_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATempty;
      }
  }
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_45, k_45, (ATerm) ATinsert(CheckATermList(b_72), i_45));
  t = lookup_table_0_1(j_45, t);
  e_72 = t;
  t = (ATerm) ATinsert(CheckATermList(b_72), i_45);
  c_72 = t;
  t = e_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(k_45, c_72, d_72, t);
  t = a_72;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
      t = term_c_2;
      t = l_0(t);
      p_72 = t;
      t = term_w_10;
      q_72 = t;
      t = term_x_10;
      r_72 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, p_72);
      t = z_7(q_72, r_72, p_72, t);
      _fail(t);
    }
  else
    {
      ATerm v_72 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_72 = ATgetFirst((ATermList) t);
          m_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_72;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_72 = ATgetFirst((ATermList) t);
          o_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_72;
      t = h_0(t);
      t = n_72;
      t = j_0(t);
      v_72 = t;
      t = (ATerm) ATinsert(CheckATermList(o_72), v_72);
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  if(match_string(t, "-i"))
    {
      t = x_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_72;
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL;
  y_72 = t;
  t = term_g_29;
  z_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_29, y_72);
  t = b_8(z_72, y_72, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_72);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_9, b_9, c_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_2;
  t = whoami_0_0(t);
  a_73 = t;
  t = term_j_29;
  c_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_29), a_73);
  d_73 = t;
  t = SSL_printnl(c_73, d_73);
  t = term_o_29;
  b_73 = t;
  t = SSL_exit(b_73);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL;
  t = term_n_10;
  e_73 = t;
  t = term_o_10;
  f_73 = t;
  t = term_q_10;
  t = y_7(e_73, f_73, t);
  return(t);
}
static ATerm u_7 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_42, b_42);
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      t = SSL_addr(a_42, b_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_153 (ATerm), ATerm r_153 (ATerm), ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  h_73 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_73;
      t = q_153(t);
    }
  else
    {
      ATerm m_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_73 = ATgetFirst((ATermList) t);
          j_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_73;
      t = foldr_2_0(q_153, r_153, t);
      m_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_73, m_73);
      t = r_153(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_y_27;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(j_35, k_35, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_73 = NULL,a_35 = NULL,b_35 = NULL;
  t = times_0_0(t);
  b_35 = t;
  t = SSL_explode_term(b_35);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      a_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_35;
  t = foldr_2_0(e_9, f_9, t);
  p_73 = t;
  t = SSL_TicksToSeconds(p_73);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
  a_74 = t;
  if(match_cons(t, sym__2))
    {
      b_74 = ATgetArgument(t, 0);
      c_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_74;
        if((b_74 != t))
          {
            _fail(t);
          }
        t = a_74;
        LocalPopChoice(y_29);
      }
    else
      {
        t = v_29;
        t = (ATerm) ATmakeAppl(sym__2, b_74, c_74);
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_74, c_74);
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              t = SSL_gtr(b_74, c_74);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_74, c_74);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_140 (ATerm), ATerm t)
{
  ATerm g_74 = NULL;
  g_74 = t;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
        t = term_n_10;
        j_74 = t;
        t = term_f_27;
        k_74 = t;
        t = term_g_27;
        t = y_7(j_74, k_74, t);
        i_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_74, term_o_29);
        t = geq_0_0(t);
        t = g_74;
        t = h_140(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = g_74;
      }
  }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,r_74 = NULL,s_74 = NULL;
  t = run_time_0_0(t);
  o_74 = t;
  t = term_c_2;
  t = whoami_0_0(t);
  p_74 = t;
  t = term_j_29;
  r_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_30), o_74), term_e_30), p_74);
  s_74 = t;
  t = SSL_printnl(r_74, s_74);
  t = (ATerm) ATmakeAppl(sym__2, term_j_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_30), o_74), term_e_30), p_74));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_74 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_27;
  t_74 = t;
  t = SSL_exit(t_74);
  return(t);
}
static ATerm c_8 (ATerm x_49, ATerm y_49, ATerm z_49, ATerm t)
{
  ATerm u_74 = NULL;
  t = SSL_hashtable_put(z_49, x_49, y_49);
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_74);
  return(t);
}
static ATerm d_8 (ATerm a_50, ATerm b_50, ATerm t)
{
  t = SSL_hashtable_get(b_50, a_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_46, ATerm t)
{
  ATerm d_75 = NULL;
  t = table_hashtable_0_0(t);
  d_75 = t;
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_35 = NULL;
        t = d_75;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_8(v_46, z_35, t);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
          ATerm i_36 = NULL;
          t = v_46;
          t = table_create_0_0(t);
          t = d_75;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_8(v_46, i_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm g_75 = NULL;
  t = SSL_hashtable_create(f_50, g_50);
  g_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_75);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,l_75 = NULL,m_75 = NULL;
  h_75 = t;
  t = term_i_30;
  l_75 = t;
  t = term_j_30;
  m_75 = t;
  t = h_75;
  t = new_hashtable_0_2(l_75, m_75, t);
  i_75 = t;
  t = h_75;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(h_75, i_75, j_75, t);
  t = h_75;
  return(t);
}
static ATerm w_7 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm n_75 = NULL;
  t = SSL_hashtable_remove(d_50, c_50);
  n_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_75);
  return(t);
}
static ATerm x_7 (ATerm h_50, ATerm t)
{
  ATerm o_75 = NULL;
  t = SSL_hashtable_destroy(h_50);
  o_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_75);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm p_75 = NULL;
  t = SSL_table_hashtable();
  p_75 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_75);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  q_75 = t;
  t = table_hashtable_0_0(t);
  r_75 = t;
  t = lookup_table_0_1(q_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(t_75, t);
  t = r_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(q_75, s_75, t);
  t = q_75;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL;
  t = term_k_30;
  u_75 = t;
  t = term_c_2;
  v_75 = t;
  t = term_m_30;
  t = b_8(u_75, v_75, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_n_30;
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
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
  t = term_k_30;
  y_75 = t;
  t = term_c_2;
  z_75 = t;
  t = term_m_30;
  t = b_8(y_75, z_75, t);
  t = term_p_30;
  w_75 = t;
  t = term_c_2;
  x_75 = t;
  t = term_q_30;
  t = b_8(w_75, x_75, t);
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
      t = Option_3_0(h_9, m_9, n_9, t);
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      t = Option_3_0(o_9, p_9, q_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,e_13 = NULL;
  f_76 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_76 = ATgetFirst((ATermList) t);
      c_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_76);
  a_76 = t;
  t = b_76;
  t = r_114(t);
  d_76 = t;
  t = c_76;
  t = s_114(t);
  e_76 = t;
  t = (ATerm) ATinsert(CheckATermList(e_76), d_76);
  e_13 = t;
  t = SSLsetAnnotations(e_13, a_76);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_165 (ATerm), ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,p_76 = NULL,q_76 = NULL,q_13 = NULL;
  k_76 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_31;
        t = b_165(t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
      }
  }
  t = k_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_76 = ATgetFirst((ATermList) t);
      n_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_76);
  l_76 = t;
  t = term_o_10;
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, m_76);
  t = b_8(q_76, m_76, t);
  t = n_76;
  {
    static ATerm a_77 (ATerm t);
    static ATerm a_77 (ATerm t)
    {
      ATerm b_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_76 = NULL;
              t_76 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_76;
              LocalPopChoice(k_31);
            }
          else
            {
              t = j_31;
              t = b_165(t);
              t = Cons_2_0(_id, a_77, t);
            }
          LocalPopChoice(i_31);
        }
      else
        {
          t = b_31;
          {
            ATerm w_76 = NULL,x_76 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_76 = ATgetFirst((ATermList) t);
                x_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_76), (ATerm) ATmakeAppl(sym_Undefined_1, w_76));
          }
        }
      return(t);
    }
    t = a_77(t);
  }
  p_76 = t;
  t = (ATerm) ATinsert(CheckATermList(p_76), (ATerm) ATmakeAppl(sym_Program_1, m_76));
  q_13 = t;
  t = SSLsetAnnotations(q_13, l_76);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm n_77 = NULL;
  n_77 = t;
  if(match_string(t, "--help"))
    {
      t = n_77;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_77;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_77;
        }
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL;
  t = term_l_31;
  o_77 = t;
  t = term_c_2;
  p_77 = t;
  t = term_n_31;
  t = b_8(o_77, p_77, t);
  t = term_o_31;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_x_31;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm y_164 (ATerm), ATerm z_164 (ATerm), ATerm a_165 (ATerm), ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
  h_77 = t;
  t = term_w_10;
  i_77 = t;
  t = term_y_31;
  t = lookup_table_0_1(i_77, t);
  m_77 = t;
  t = term_x_10;
  j_77 = t;
  t = (ATerm) ATempty;
  k_77 = t;
  t = m_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(j_77, k_77, l_77, t);
  t = h_77;
  {
    static ATerm r_9 (ATerm t);
    static ATerm r_9 (ATerm t)
    {
      ATerm z_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_164(t);
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
        ATerm a_78 = NULL;
        a_78 = t;
        {
          ATerm f_32 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_36 = NULL;
              t = a_78;
              {
                ATerm h_32 = t;
                int i_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_36 = NULL,p_36 = NULL;
                    t = term_n_10;
                    n_36 = t;
                    t = term_l_31;
                    p_36 = t;
                    t = term_j_32;
                    t = y_7(n_36, p_36, t);
                    LocalPopChoice(i_32);
                  }
                else
                  {
                    t = h_32;
                    t = fetch_1_0(v_9, t);
                  }
              }
              t = a_78;
              t = z_164(t);
              t = term_y_27;
              m_36 = t;
              t = SSL_exit(m_36);
              LocalPopChoice(g_32);
            }
          else
            {
              t = f_32;
              {
                ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
                t = term_n_10;
                h_37 = t;
                t = term_k_30;
                i_37 = t;
                t = term_k_32;
                t = y_7(h_37, i_37, t);
                t = a_78;
                t = a_165(t);
                t = term_y_27;
                g_37 = t;
                t = SSL_exit(g_37);
              }
            }
        }
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        {
          ATerm m_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
              static ATerm w_9 (ATerm t);
              static ATerm w_9 (ATerm t)
              {
                ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,f_14 = NULL;
                g_78 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_78 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_78);
                e_78 = t;
                t = f_78;
                if(((f_77 != NULL) && (f_77 != t)))
                  _fail(t);
                else
                  f_77 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_78);
                f_14 = t;
                t = SSLsetAnnotations(f_14, e_78);
                return(t);
              }
              t = fetch_1_0(w_9, t);
              t = term_j_29;
              c_78 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_77)), term_p_32);
              d_78 = t;
              t = SSL_printnl(c_78, d_78);
              t = (ATerm) ATmakeAppl(sym__2, term_j_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_77)), term_p_32));
              t = z_164(t);
              t = term_o_29;
              b_78 = t;
              t = SSL_exit(b_78);
              LocalPopChoice(o_32);
            }
          else
            {
              t = m_32;
            }
        }
      }
  }
  g_77 = t;
  t = term_w_10;
  t = table_destroy_0_0(t);
  t = g_77;
  return(t);
}
ATerm option_wrap_5_0 (ATerm b_163 (ATerm), ATerm c_163 (ATerm), ATerm d_163 (ATerm), ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  t = parse_options_3_0(b_163, c_163, d_163, t);
  l_78 = t;
  t = term_q_32;
  t = table_create_0_0(t);
  t = term_q_32;
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_32, term_r_32, l_78);
  t = lookup_table_0_1(m_78, t);
  p_78 = t;
  t = term_r_32;
  n_78 = t;
  t = p_78;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(n_78, l_78, o_78, t);
  t = l_78;
  t = e_163(t);
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_163(t);
        t = report_success_0_0(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
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
static ATerm f_10 (ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL;
  t = term_u_32;
  q_78 = t;
  t = term_c_2;
  r_78 = t;
  t = term_v_32;
  t = b_8(q_78, r_78, t);
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
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
  s_78 = t;
  t = term_n_10;
  w_78 = t;
  t = term_o_10;
  x_78 = t;
  t = term_q_10;
  t = y_7(w_78, x_78, t);
  t_78 = t;
  t = term_j_29;
  u_78 = t;
  t = (ATerm) ATinsert(ATempty, t_78);
  v_78 = t;
  t = SSL_printnl(u_78, v_78);
  t = s_78;
  return(t);
}
ATerm iowrap_3_0 (ATerm e_162 (ATerm), ATerm f_162 (ATerm), ATerm g_162 (ATerm), ATerm t)
{
  static ATerm y_9 (ATerm t);
  static ATerm a_10 (ATerm t);
  static ATerm y_9 (ATerm t)
  {
    ATerm y_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_162(t);
        LocalPopChoice(a_33);
      }
    else
      {
        t = y_32;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(e_33);
                  }
                else
                  {
                    t = d_33;
                    {
                      ATerm f_33 = t;
                      int g_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_10, f_10, g_10, t);
                          LocalPopChoice(g_33);
                        }
                      else
                        {
                          t = f_33;
                          {
                            ATerm j_33 = t;
                            int o_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_33);
                              }
                            else
                              {
                                t = j_33;
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
    ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
    z_78 = t;
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_10 (ATerm t);
          static ATerm i_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_78 != NULL) && (y_78 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_78 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_10, t);
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          t = term_s_33;
          y_78 = t;
        }
    }
    t = not_null(y_78);
    t = ReadFromFile_0_0(t);
    a_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_78, a_79);
    t = apply_strategy_1_0(e_162, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(y_9, g_162, default_system_about_0_0, z_9, a_10, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,l_14 = NULL;
  f_79 = t;
  if(match_cons(t, sym__2))
    {
      c_79 = ATgetArgument(t, 0);
      d_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_79);
  b_79 = t;
  t = d_79;
  t = lift_definitions_0_0(t);
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_79, e_79);
  l_14 = t;
  t = SSLsetAnnotations(l_14, b_79);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_10, _fail, default_system_usage_0_0, t);
  return(t);
}

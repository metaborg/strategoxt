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
ATerm term_u_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_p_30;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_e_28;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_q_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_u_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_p_21;
ATerm term_r_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_h_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_q_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_x_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_n_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_f_29);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_s_27);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_x_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_x_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_x_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, (ATerm) ATempty);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_d_30);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_x_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm i_142 (ATerm), ATerm t);
static ATerm f_2 (ATerm s_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_6 (ATerm h_45, ATerm i_45, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm s_148 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm j_125 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm t_6 (ATerm j_26, ATerm i_26, ATerm t);
ATerm foldr_3_0 (ATerm q_147 (ATerm), ATerm r_147 (ATerm), ATerm s_147 (ATerm), ATerm t);
static ATerm x_6 (ATerm g_144 (ATerm), ATerm x_63, ATerm w_63, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm c_7 (ATerm p_819, ATerm u_819, ATerm k_81, ATerm t);
ATerm while_not_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t);
ATerm for_3_0 (ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm c_28 (ATerm x_25, ATerm y_25, ATerm d_26, ATerm t);
static ATerm y_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm free_vars_3_0 (ATerm i_151 (ATerm), ATerm j_151 (ATerm), ATerm k_151 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm k_125 (ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm b_149 (ATerm), ATerm t);
static ATerm e_7 (ATerm f_25, ATerm e_25, ATerm t);
static ATerm f_7 (ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm d_64, ATerm c_64, ATerm t);
static ATerm g_7 (ATerm l_144 (ATerm), ATerm z_63, ATerm y_63, ATerm t);
ATerm genzip_4_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm CollectSplit_2_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm x_145 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm k_7 (ATerm y_24, ATerm z_24, ATerm a_25, ATerm b_25, ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm l_7 (ATerm m_138 (ATerm), ATerm s_43, ATerm q_43, ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm n_7 (ATerm v_34, ATerm w_34, ATerm t);
static ATerm o_7 (ATerm b_33, ATerm c_33, ATerm t);
static ATerm q_7 (ATerm a_134 (ATerm), ATerm l_249, ATerm h_33, ATerm t);
static ATerm p_7 (ATerm x_32, ATerm y_32, ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm s_155 (ATerm), ATerm t);
static ATerm n_65 (ATerm d_65, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_7 (ATerm d_33, ATerm t);
static ATerm s_7 (ATerm c_73, ATerm d_73, ATerm t);
static ATerm t_7 (ATerm x_34, ATerm y_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_66 (ATerm x_65, ATerm t);
static ATerm a_67 (ATerm b_66, ATerm c_66, ATerm d_66, ATerm t);
static ATerm b_67 (ATerm l_66, ATerm m_66, ATerm n_66, ATerm t);
static ATerm u_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_142 (ATerm), ATerm t);
static ATerm z_7 (ATerm s_46, ATerm t_46, ATerm t);
ATerm if_verbose2_1_0 (ATerm s_135 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_8 (ATerm r_38, ATerm s_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_8 (ATerm w_44, ATerm x_44, ATerm v_44, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_7 (ATerm a_42, ATerm b_42, ATerm t);
ATerm foldr_2_0 (ATerm o_147 (ATerm), ATerm p_147 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_135 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm need_help_1_0 (ATerm q_156 (ATerm), ATerm t);
static ATerm d_8 (ATerm r_49, ATerm s_49, ATerm t_49, ATerm t);
static ATerm e_8 (ATerm u_49, ATerm v_49, ATerm t);
ATerm lookup_table_0_1 (ATerm l_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm z_49, ATerm a_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm x_7 (ATerm w_49, ATerm x_49, ATerm t);
static ATerm y_7 (ATerm b_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_141 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_158 (ATerm), ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm parse_options_1_0 (ATerm n_158 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_156 (ATerm), ATerm t_156 (ATerm), ATerm u_156 (ATerm), ATerm v_156 (ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm iowrap_3_0 (ATerm b_156 (ATerm), ATerm c_156 (ATerm), ATerm d_156 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
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
  t = term_x_0;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_c_10;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_10), c_0), term_d_10);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_f_10;
  i_0 = t;
  t = SSL_exit(i_0);
  t = a_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL;
  s_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_0;
    }
  else
    {
      static ATerm p_0 (ATerm t);
      static ATerm p_0 (ATerm t)
      {
        t = not_null(u_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_0 = ATgetFirst((ATermList) t);
          if(((u_0 != NULL) && (u_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_0;
      t = at_end_1_0(p_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm i_142 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t);
  static ATerm o_1 (ATerm t)
  {
    ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
    n_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_1 = ATgetFirst((ATermList) t);
        m_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_1 = NULL,q_1 = NULL,a_1 = NULL;
          t = SSLgetAnnotations(n_1);
          c_1 = t;
          t = m_1;
          t = o_1(t);
          q_1 = t;
          t = (ATerm) ATinsert(CheckATermList(q_1), l_1);
          a_1 = t;
          t = SSLsetAnnotations(a_1, c_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_1;
        t = i_142(t);
      }
    return(t);
  }
  t = o_1(t);
  return(t);
}
static ATerm f_2 (ATerm s_1, ATerm t)
{
  ATerm t_1 = NULL;
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm g_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,a_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
      {
        ATerm h_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_0 (ATerm t);
            static ATerm v_0 (ATerm t)
            {
              t = x_1;
              return(t);
            }
            t = w_1;
            t = at_end_1_0(v_0, t);
            LocalPopChoice(l_10);
          }
        else
          {
            t = h_10;
            t = f_2(a_2, t);
          }
      }
    }
  else
    {
      t = f_2(a_2, t);
    }
  return(t);
}
static ATerm p_6 (ATerm h_45, ATerm i_45, ATerm t)
{
  ATerm g_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  t = z_7(h_45, i_45, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_2 = ATgetFirst((ATermList) t);
      {
        ATerm m_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_2;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL;
        t = term_r_10;
        j_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_10, a_3);
        t = p_6(j_3, a_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm s_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_10) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_x_0;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        {
          ATerm v_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_3 = NULL;
              t = term_r_10;
              q_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_10, a_3);
              t = p_6(q_3, a_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm y_10 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_10) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_x_0;
              LocalPopChoice(w_10);
            }
          else
            {
              t = v_10;
              {
                ATerm a_11 = t;
                int c_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_3 = NULL;
                    t = term_r_10;
                    w_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_r_10, a_3);
                    t = p_6(w_3, a_3, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm d_11 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("e_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_x_0;
                    LocalPopChoice(c_11);
                  }
                else
                  {
                    t = a_11;
                    {
                      ATerm c_4 = NULL;
                      t = term_r_10;
                      c_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_r_10, a_3);
                      t = p_6(c_4, a_3, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm h_11 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) h_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_x_0;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm s_148 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_4 = ATgetFirst((ATermList) t);
          s_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL,y_4 = NULL,z_4 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(q_4);
            v_4 = t;
            t = r_4;
            t = s_148(t);
            y_4 = t;
            t = s_4;
            t = filter_1_0(s_148, t);
            z_4 = t;
            t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
            e_1 = t;
            t = SSLsetAnnotations(e_1, v_4);
            LocalPopChoice(l_11);
          }
        else
          {
            t = j_11;
            t = s_4;
            t = filter_1_0(s_148, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,e_17 = NULL,f_17 = NULL,k_17 = NULL;
  e_17 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
      {
        ATerm h_5 = NULL,k_5 = NULL,l_5 = NULL,g_1 = NULL;
        t = SSLgetAnnotations(e_17);
        h_5 = t;
        t = f_17;
        t = f_125(t);
        k_5 = t;
        t = k_17;
        t = f_125(t);
        l_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, k_5, l_5);
        g_1 = t;
        t = SSLsetAnnotations(g_1, h_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_17 = ATgetArgument(t, 0);
          k_17 = ATgetArgument(t, 1);
          a_17 = ATgetArgument(t, 2);
          {
            ATerm a_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(e_17);
            a_6 = t;
            t = f_17;
            t = h_125(t);
            h_6 = t;
            t = k_17;
            t = h_125(t);
            i_6 = t;
            t = a_17;
            t = f_125(t);
            j_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_6, i_6, j_6);
            i_1 = t;
            t = SSLsetAnnotations(i_1, a_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_17 = ATgetArgument(t, 0);
              k_17 = ATgetArgument(t, 1);
              a_17 = ATgetArgument(t, 2);
              z_16 = ATgetArgument(t, 3);
              {
                ATerm y_6 = NULL,h_7 = NULL,i_7 = NULL,m_7 = NULL,w_7 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(e_17);
                y_6 = t;
                t = f_17;
                t = h_125(t);
                h_7 = t;
                t = k_17;
                t = h_125(t);
                i_7 = t;
                t = a_17;
                t = h_125(t);
                m_7 = t;
                t = z_16;
                t = f_125(t);
                w_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, h_7, i_7, m_7, w_7);
                j_1 = t;
                t = SSLsetAnnotations(j_1, y_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_17 = ATgetArgument(t, 0);
                  k_17 = ATgetArgument(t, 1);
                  a_17 = ATgetArgument(t, 2);
                  z_16 = ATgetArgument(t, 3);
                  {
                    ATerm w_8 = NULL,b_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,k_1 = NULL;
                    t = SSLgetAnnotations(e_17);
                    w_8 = t;
                    t = f_17;
                    t = h_125(t);
                    b_9 = t;
                    t = k_17;
                    t = h_125(t);
                    d_9 = t;
                    t = a_17;
                    t = h_125(t);
                    e_9 = t;
                    t = z_16;
                    t = f_125(t);
                    f_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, b_9, d_9, e_9, f_9);
                    k_1 = t;
                    t = SSLsetAnnotations(k_1, w_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      f_17 = ATgetArgument(t, 0);
                      k_17 = ATgetArgument(t, 1);
                      a_17 = ATgetArgument(t, 2);
                      {
                        ATerm s_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,p_1 = NULL;
                        t = SSLgetAnnotations(e_17);
                        s_9 = t;
                        t = f_17;
                        t = h_125(t);
                        w_9 = t;
                        t = k_17;
                        t = h_125(t);
                        x_9 = t;
                        t = a_17;
                        t = h_125(t);
                        y_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, w_9, x_9, y_9);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, s_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          f_17 = ATgetArgument(t, 0);
                          k_17 = ATgetArgument(t, 1);
                          {
                            ATerm b_11 = NULL,f_11 = NULL,g_11 = NULL,b_2 = NULL;
                            t = SSLgetAnnotations(e_17);
                            b_11 = t;
                            t = f_17;
                            t = h_125(t);
                            f_11 = t;
                            t = k_17;
                            t = f_125(t);
                            g_11 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, f_11, g_11);
                            b_2 = t;
                            t = SSLsetAnnotations(b_2, b_11);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              f_17 = ATgetArgument(t, 0);
                              k_17 = ATgetArgument(t, 1);
                              {
                                ATerm y_11 = NULL,g_12 = NULL,h_12 = NULL,d_2 = NULL;
                                t = SSLgetAnnotations(e_17);
                                y_11 = t;
                                t = f_17;
                                t = h_125(t);
                                g_12 = t;
                                t = k_17;
                                t = f_125(t);
                                h_12 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, g_12, h_12);
                                d_2 = t;
                                t = SSLsetAnnotations(d_2, y_11);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  f_17 = ATgetArgument(t, 0);
                                  k_17 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_12 = NULL,u_12 = NULL,v_12 = NULL,h_2 = NULL;
                                    t = SSLgetAnnotations(e_17);
                                    q_12 = t;
                                    t = f_17;
                                    t = h_125(t);
                                    u_12 = t;
                                    t = k_17;
                                    t = f_125(t);
                                    v_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_12, v_12);
                                    h_2 = t;
                                    t = SSLsetAnnotations(h_2, q_12);
                                  }
                                }
                              else
                                {
                                  ATerm f_13 = NULL,j_13 = NULL,k_13 = NULL,i_2 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      f_17 = ATgetArgument(t, 0);
                                      k_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(e_17);
                                  f_13 = t;
                                  t = f_17;
                                  t = h_125(t);
                                  j_13 = t;
                                  t = k_17;
                                  t = f_125(t);
                                  k_13 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, j_13, k_13);
                                  i_2 = t;
                                  t = SSLsetAnnotations(i_2, f_13);
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
ATerm dynrule_sargs_1_0 (ATerm j_125 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,q_18 = NULL;
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          n_18 = ATgetArgument(t, 0);
          {
            ATerm p_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_11);
      t = n_18;
      if(match_cons(t, sym_DynRuleId_1))
        {
          o_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_18;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm q_11 = ATgetArgument(t, 0);
          q_18 = ATgetArgument(t, 1);
          {
            ATerm s_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_18;
    }
  else
    {
      t = n_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                n_18 = ATgetArgument(t, 0);
                {
                  ATerm v_11 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_11);
            t = n_18;
            if(match_cons(t, sym_DynRuleId_1))
              {
                o_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_18;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm w_11 = ATgetArgument(t, 0);
                q_18 = ATgetArgument(t, 1);
                {
                  ATerm x_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = q_18;
          }
        else
          {
            t = t_11;
            if(match_cons(t, sym_AddDynRule_2))
              {
                n_18 = ATgetArgument(t, 0);
                {
                  ATerm z_11 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = n_18;
            if(match_cons(t, sym_DynRuleId_1))
              {
                o_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_18;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_12 = ATgetArgument(t, 0);
                q_18 = ATgetArgument(t, 1);
                {
                  ATerm b_12 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = q_18;
          }
      }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm q_20 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_20 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_12);
      t = q_20;
    }
  else
    {
      t = c_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_20;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm e_21 = NULL;
  ATerm f_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_21 = ATgetArgument(t, 0);
          {
            ATerm j_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
      t = e_21;
    }
  else
    {
      t = f_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_21;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm l_19 = NULL;
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_12 = ATgetArgument(t, 0);
          l_19 = ATgetArgument(t, 1);
          {
            ATerm n_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_12);
      t = l_19;
      t = map_1_0(w_0, t);
    }
  else
    {
      t = k_12;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm o_12 = ATgetArgument(t, 0);
          l_19 = ATgetArgument(t, 1);
          {
            ATerm p_12 = ATgetArgument(t, 2);
          }
          {
            ATerm r_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_19;
      t = map_1_0(y_0, t);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm n_21 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm w_12 = ATgetArgument(t, 1);
          }
          {
            ATerm x_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_12);
      t = n_21;
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_SDefT_4))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm y_12 = ATgetArgument(t, 1);
          }
          {
            ATerm z_12 = ATgetArgument(t, 2);
          }
          {
            ATerm a_13 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = n_21;
    }
  return(t);
}
static ATerm t_6 (ATerm j_26, ATerm i_26, ATerm t)
{
  t = j_26;
  t = map_1_0(z_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_147 (ATerm), ATerm r_147 (ATerm), ATerm s_147 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_21;
      t = q_147(t);
    }
  else
    {
      ATerm b_22 = NULL,c_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_21;
      t = s_147(t);
      b_22 = t;
      t = y_21;
      t = foldr_3_0(q_147, r_147, s_147, t);
      c_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_22, c_22);
      t = r_147(t);
    }
  return(t);
}
static ATerm x_6 (ATerm g_144 (ATerm), ATerm x_63, ATerm w_63, ATerm t)
{
  static ATerm g_23 (ATerm t);
  static ATerm g_23 (ATerm t)
  {
    ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
    x_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_22 = ATgetFirst((ATermList) t);
            z_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_22;
              {
                static ATerm b_1 (ATerm t);
                static ATerm b_1 (ATerm t)
                {
                  t = w_63;
                  return(t);
                }
                t = f_7(g_144, b_1, y_22, z_22, t);
              }
              t = g_23(t);
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              {
                ATerm s_13 = NULL,w_13 = NULL,s_2 = NULL;
                t = SSLgetAnnotations(x_22);
                s_13 = t;
                t = z_22;
                t = g_23(t);
                w_13 = t;
                t = (ATerm) ATinsert(CheckATermList(w_13), y_22);
                s_2 = t;
                t = SSLsetAnnotations(s_2, s_13);
              }
            }
        }
      }
    return(t);
  }
  t = x_63;
  t = g_23(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
        _fail(t);
      {
        ATerm e_13 = ATgetArgument(t, 1);
        if(((ATgetType(e_13) != AT_LIST) || !(ATisEmpty(e_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
        {
          v_23 = ATgetFirst((ATermList) g_13);
          w_23 = (ATerm) ATgetNext((ATermList) g_13);
        }
      else
        _fail(t);
      {
        ATerm h_13 = ATgetArgument(t, 1);
        if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
          {
            x_23 = ATgetFirst((ATermList) h_13);
            y_23 = (ATerm) ATgetNext((ATermList) h_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_23, x_23), (ATerm) ATmakeAppl(sym__2, w_23, y_23));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm z_23 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_24), z_23);
  return(t);
}
static ATerm c_7 (ATerm p_819, ATerm u_819, ATerm k_81, ATerm t)
{
  ATerm m_23 = NULL,q_23 = NULL,s_23 = NULL,t_23 = NULL;
  t = SSL_explode_term(u_819);
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_819);
  if(match_cons(t, sym__2))
    {
      if((m_23 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_23, s_23);
  t = genzip_4_0(d_1, f_1, h_1, _id, t);
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_23, k_81);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t)
{
  static ATerm l_24 (ATerm t);
  static ATerm l_24 (ATerm t)
  {
    ATerm i_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_133(t);
        LocalPopChoice(l_13);
      }
    else
      {
        t = i_13;
        t = d_133(t);
        t = l_24(t);
      }
    return(t);
  }
  t = l_24(t);
  return(t);
}
ATerm for_3_0 (ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm t)
{
  t = f_133(t);
  t = while_not_2_0(g_133, h_133, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_25);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,u_2 = NULL;
  s_25 = t;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  p_25 = t;
  t = r_25;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
  u_2 = t;
  t = SSLsetAnnotations(u_2, p_25);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,n_27 = NULL,o_27 = NULL;
  j_27 = t;
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_27 = ATgetFirst((ATermList) t);
      o_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_28(k_27, l_27, j_27, t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_27), n_27), o_27);
          }
      }
    }
  else
    {
      t = c_28(k_27, l_27, j_27, t);
    }
  return(t);
}
static ATerm c_28 (ATerm x_25, ATerm y_25, ATerm d_26, ATerm t)
{
  ATerm f_26 = NULL,l_26 = NULL,v_2 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,a_27 = NULL;
  t = SSLgetAnnotations(d_26);
  f_26 = t;
  t = y_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_26 = ATgetFirst((ATermList) t);
      a_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_26;
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      w_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_26;
        if((v_26 != t))
          {
            _fail(t);
          }
        t = a_27;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = y_25;
        t = c_7(v_26, w_26, a_27, t);
      }
  }
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, l_26);
  v_2 = t;
  t = SSLsetAnnotations(v_2, f_26);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm b_28 = NULL;
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      if((b_28 != ATgetArgument(t, 1)))
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
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_1, u_1, v_1, t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
        u_27 = t;
        if(match_cons(t, sym__2))
          {
            v_27 = ATgetArgument(t, 0);
            w_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_27;
        t = x_6(y_1, v_27, w_27, t);
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(k_2, g_14, h_14, t);
  return(t);
}
static ATerm k_2 (ATerm t)
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
static ATerm l_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      r_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(n_2, r_14, s_14, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      if((v_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm i_151 (ATerm), ATerm j_151 (ATerm), ATerm k_151 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm c_29 (ATerm t);
  static ATerm c_29 (ATerm t)
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_151(t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          ATerm v_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_28 = NULL,i_28 = NULL,b_14 = NULL,c_14 = NULL;
              h_28 = t;
              t = j_151(t);
              i_28 = t;
              t = h_28;
              {
                static ATerm z_1 (ATerm t);
                static ATerm z_1 (ATerm t)
                {
                  ATerm p_28 = NULL;
                  t = c_29(t);
                  p_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_28, i_28);
                  t = diff_0_0(t);
                  return(t);
                }
                t = k_151(z_1, c_29, c_2, t);
              }
              c_14 = t;
              t = SSL_explode_term(c_14);
              if(match_cons(t, sym__2))
                {
                  ATerm y_13 = ATgetArgument(t, 0);
                  b_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_14;
              t = foldr_3_0(e_2, j_2, _id, t);
              LocalPopChoice(x_13);
            }
          else
            {
              t = v_13;
              {
                ATerm l_14 = NULL,m_14 = NULL;
                m_14 = t;
                t = SSL_explode_term(m_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_13 = ATgetArgument(t, 0);
                    l_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_14;
                t = foldr_3_0(l_2, m_2, c_29, t);
              }
            }
        }
      }
    return(t);
  }
  t = c_29(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm t)
{
  ATerm e_40 = NULL,g_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  l_40 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_40 = ATgetArgument(t, 0);
      k_40 = ATgetArgument(t, 1);
      {
        ATerm f_15 = NULL,m_15 = NULL,n_15 = NULL,y_2 = NULL;
        t = SSLgetAnnotations(l_40);
        f_15 = t;
        t = m_40;
        t = d_125(t);
        m_15 = t;
        t = k_40;
        t = b_125(t);
        n_15 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_15, n_15);
        y_2 = t;
        t = SSLsetAnnotations(y_2, f_15);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          m_40 = ATgetArgument(t, 0);
          {
            ATerm g_16 = NULL,i_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,v_16 = NULL,w_16 = NULL,b_17 = NULL,b_3 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(l_40);
            g_16 = t;
            t = m_40;
            if(match_cons(t, sym_Rule_3))
              {
                l_16 = ATgetArgument(t, 0);
                m_16 = ATgetArgument(t, 1);
                n_16 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_40);
            i_16 = t;
            t = l_16;
            t = b_125(t);
            o_16 = t;
            t = m_16;
            t = b_125(t);
            v_16 = t;
            t = n_16;
            t = b_125(t);
            w_16 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, o_16, v_16, w_16);
            z_2 = t;
            t = SSLsetAnnotations(z_2, i_16);
            b_17 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, b_17);
            b_3 = t;
            t = SSLsetAnnotations(b_3, g_16);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              m_40 = ATgetArgument(t, 0);
              k_40 = ATgetArgument(t, 1);
              e_40 = ATgetArgument(t, 2);
              {
                ATerm r_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,e_3 = NULL;
                t = SSLgetAnnotations(l_40);
                r_17 = t;
                t = m_40;
                t = d_125(t);
                z_17 = t;
                t = k_40;
                t = d_125(t);
                a_18 = t;
                t = e_40;
                t = d_125(t);
                b_18 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, z_17, a_18, b_18);
                e_3 = t;
                t = SSLsetAnnotations(e_3, r_17);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  m_40 = ATgetArgument(t, 0);
                  k_40 = ATgetArgument(t, 1);
                  e_40 = ATgetArgument(t, 2);
                  g_40 = ATgetArgument(t, 3);
                  {
                    ATerm r_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,e_19 = NULL,f_3 = NULL;
                    t = SSLgetAnnotations(l_40);
                    r_18 = t;
                    t = m_40;
                    t = d_125(t);
                    y_18 = t;
                    t = k_40;
                    t = d_125(t);
                    z_18 = t;
                    t = e_40;
                    t = d_125(t);
                    a_19 = t;
                    t = g_40;
                    t = b_125(t);
                    e_19 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, y_18, z_18, a_19, e_19);
                    f_3 = t;
                    t = SSLsetAnnotations(f_3, r_18);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_40 = ATgetArgument(t, 0);
                      k_40 = ATgetArgument(t, 1);
                      e_40 = ATgetArgument(t, 2);
                      g_40 = ATgetArgument(t, 3);
                      {
                        ATerm v_19 = NULL,a_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,i_3 = NULL;
                        t = SSLgetAnnotations(l_40);
                        v_19 = t;
                        t = m_40;
                        t = d_125(t);
                        a_20 = t;
                        t = k_40;
                        t = d_125(t);
                        c_20 = t;
                        t = e_40;
                        t = d_125(t);
                        d_20 = t;
                        t = g_40;
                        t = b_125(t);
                        e_20 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_20, c_20, d_20, e_20);
                        i_3 = t;
                        t = SSLsetAnnotations(i_3, v_19);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          m_40 = ATgetArgument(t, 0);
                          k_40 = ATgetArgument(t, 1);
                          {
                            ATerm r_20 = NULL,u_20 = NULL,w_20 = NULL,k_3 = NULL;
                            t = SSLgetAnnotations(l_40);
                            r_20 = t;
                            t = m_40;
                            t = d_125(t);
                            u_20 = t;
                            t = k_40;
                            t = b_125(t);
                            w_20 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, u_20, w_20);
                            k_3 = t;
                            t = SSLsetAnnotations(k_3, r_20);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              m_40 = ATgetArgument(t, 0);
                              k_40 = ATgetArgument(t, 1);
                              {
                                ATerm l_21 = NULL,v_21 = NULL,f_22 = NULL,l_3 = NULL;
                                t = SSLgetAnnotations(l_40);
                                l_21 = t;
                                t = m_40;
                                t = d_125(t);
                                v_21 = t;
                                t = k_40;
                                t = b_125(t);
                                f_22 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, v_21, f_22);
                                l_3 = t;
                                t = SSLsetAnnotations(l_3, l_21);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  m_40 = ATgetArgument(t, 0);
                                  k_40 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_22 = NULL,b_23 = NULL,d_23 = NULL,r_3 = NULL;
                                    t = SSLgetAnnotations(l_40);
                                    s_22 = t;
                                    t = m_40;
                                    t = d_125(t);
                                    b_23 = t;
                                    t = k_40;
                                    t = b_125(t);
                                    d_23 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_23, d_23);
                                    r_3 = t;
                                    t = SSLsetAnnotations(r_3, s_22);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      m_40 = ATgetArgument(t, 0);
                                      {
                                        ATerm o_23 = NULL,r_23 = NULL,x_3 = NULL;
                                        t = SSLgetAnnotations(l_40);
                                        o_23 = t;
                                        t = m_40;
                                        t = b_125(t);
                                        r_23 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, r_23);
                                        x_3 = t;
                                        t = SSLsetAnnotations(x_3, o_23);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          m_40 = ATgetArgument(t, 0);
                                          {
                                            ATerm h_24 = NULL,j_24 = NULL,d_4 = NULL;
                                            t = SSLgetAnnotations(l_40);
                                            h_24 = t;
                                            t = m_40;
                                            t = b_125(t);
                                            j_24 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, j_24);
                                            d_4 = t;
                                            t = SSLsetAnnotations(d_4, h_24);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              m_40 = ATgetArgument(t, 0);
                                              {
                                                ATerm q_24 = NULL,s_24 = NULL,e_4 = NULL;
                                                t = SSLgetAnnotations(l_40);
                                                q_24 = t;
                                                t = m_40;
                                                t = b_125(t);
                                                s_24 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, s_24);
                                                e_4 = t;
                                                t = SSLsetAnnotations(e_4, q_24);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  m_40 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm c_25 = NULL,g_25 = NULL,f_4 = NULL;
                                                    t = SSLgetAnnotations(l_40);
                                                    c_25 = t;
                                                    t = m_40;
                                                    t = b_125(t);
                                                    g_25 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, g_25);
                                                    f_4 = t;
                                                    t = SSLsetAnnotations(f_4, c_25);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm m_25 = NULL,t_25 = NULL,g_4 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      m_40 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(l_40);
                                                  m_25 = t;
                                                  t = m_40;
                                                  t = b_125(t);
                                                  t_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, t_25);
                                                  g_4 = t;
                                                  t = SSLsetAnnotations(g_4, m_25);
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
ATerm dynrule_targs_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,q_42 = NULL;
  ATerm a_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          k_42 = ATgetArgument(t, 0);
          {
            ATerm e_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_14);
      t = k_42;
      if(match_cons(t, sym_DynRuleId_1))
        {
          l_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_42;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm f_14 = ATgetArgument(t, 0);
          ATerm i_14 = ATgetArgument(t, 1);
          q_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_42;
    }
  else
    {
      t = a_14;
      {
        ATerm k_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                k_42 = ATgetArgument(t, 0);
                {
                  ATerm o_14 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_14);
            t = k_42;
            if(match_cons(t, sym_DynRuleId_1))
              {
                l_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_42;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm p_14 = ATgetArgument(t, 0);
                ATerm q_14 = ATgetArgument(t, 1);
                q_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = q_42;
          }
        else
          {
            t = k_14;
            if(match_cons(t, sym_AddDynRule_2))
              {
                k_42 = ATgetArgument(t, 0);
                {
                  ATerm t_14 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = k_42;
            if(match_cons(t, sym_DynRuleId_1))
              {
                l_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_42;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm u_14 = ATgetArgument(t, 0);
                ATerm w_14 = ATgetArgument(t, 1);
                q_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = q_42;
          }
      }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm a_44 = NULL;
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_44 = ATgetArgument(t, 0);
          {
            ATerm z_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_14);
      t = a_44;
    }
  else
    {
      t = x_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_44;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm n_44 = NULL;
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_44 = ATgetArgument(t, 0);
          {
            ATerm c_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_15);
      t = n_44;
    }
  else
    {
      t = a_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_44;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm l_43 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm g_15 = ATgetArgument(t, 0);
          ATerm h_15 = ATgetArgument(t, 1);
          l_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(e_15);
      t = l_43;
      t = map_1_0(o_2, t);
    }
  else
    {
      t = d_15;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm i_15 = ATgetArgument(t, 0);
          ATerm j_15 = ATgetArgument(t, 1);
          l_43 = ATgetArgument(t, 2);
          {
            ATerm k_15 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_43;
      t = map_1_0(p_2, t);
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm d_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_46);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm l_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = l_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm r_15 = t;
              int s_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_46 = ATgetArgument(t, 0);
                      i_46 = ATgetArgument(t, 1);
                      j_46 = ATgetArgument(t, 2);
                      k_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_46;
                  t = map_1_0(t_2, t);
                  LocalPopChoice(s_15);
                }
              else
                {
                  t = r_15;
                  {
                    ATerm t_15 = t;
                    int u_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_15);
                      }
                    else
                      {
                        t = t_15;
                        t = dynrule_targs_1_0(w_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_46 = NULL;
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_46 = ATgetArgument(t, 0);
          {
            ATerm x_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_15);
      t = y_46;
    }
  else
    {
      t = v_15;
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
static ATerm w_2 (ATerm t)
{
  t = map_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_47 = NULL;
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_47 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_15);
      t = f_47;
    }
  else
    {
      t = y_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_47;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm j_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_47);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm f_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_47 = NULL,m_47 = NULL,p_47 = NULL,s_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_47 = ATgetArgument(t, 0);
                      m_47 = ATgetArgument(t, 1);
                      p_47 = ATgetArgument(t, 2);
                      s_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_47;
                  t = map_1_0(g_3, t);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = f_16;
                  {
                    ATerm j_16 = t;
                    int k_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_16);
                      }
                    else
                      {
                        t = j_16;
                        t = dynrule_targs_1_0(h_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm b_48 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_48 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = b_48;
    }
  else
    {
      t = p_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_48;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = map_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm l_48 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_48 = ATgetArgument(t, 0);
          {
            ATerm u_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_16);
      t = l_48;
    }
  else
    {
      t = s_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_48;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
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
static ATerm o_3 (ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            {
              ATerm g_17 = t;
              int h_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_48 = NULL,t_48 = NULL,y_48 = NULL,b_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_48 = ATgetArgument(t, 0);
                      t_48 = ATgetArgument(t, 1);
                      y_48 = ATgetArgument(t, 2);
                      b_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_48;
                  t = map_1_0(p_3, t);
                  LocalPopChoice(h_17);
                }
              else
                {
                  t = g_17;
                  {
                    ATerm i_17 = t;
                    int j_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_17);
                      }
                    else
                      {
                        t = i_17;
                        t = dynrule_targs_1_0(s_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm q_49 = NULL;
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_49 = ATgetArgument(t, 0);
          {
            ATerm n_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_17);
      t = q_49;
    }
  else
    {
      t = l_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_49;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = map_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm h_50 = NULL;
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_50 = ATgetArgument(t, 0);
          {
            ATerm q_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_17);
      t = h_50;
    }
  else
    {
      t = o_17;
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
static ATerm u_3 (ATerm t)
{
  ATerm o_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_50);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            {
              ATerm w_17 = t;
              int x_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_50 = ATgetArgument(t, 0);
                      u_50 = ATgetArgument(t, 1);
                      v_50 = ATgetArgument(t, 2);
                      w_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_50;
                  t = map_1_0(y_3, t);
                  LocalPopChoice(x_17);
                }
              else
                {
                  t = w_17;
                  {
                    ATerm y_17 = t;
                    int c_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_18);
                      }
                    else
                      {
                        t = y_17;
                        t = dynrule_targs_1_0(z_3, t);
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
  ATerm d_51 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_51 = ATgetArgument(t, 0);
          {
            ATerm f_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = d_51;
    }
  else
    {
      t = d_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_51;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = map_1_0(a_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm i_51 = NULL;
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_51 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_18);
      t = i_51;
    }
  else
    {
      t = g_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_51;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm q_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_51);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm p_18 = t;
              int s_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_51 = NULL,v_51 = NULL,y_51 = NULL,z_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_51 = ATgetArgument(t, 0);
                      v_51 = ATgetArgument(t, 1);
                      y_51 = ATgetArgument(t, 2);
                      z_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_51;
                  t = map_1_0(i_4, t);
                  LocalPopChoice(s_18);
                }
              else
                {
                  t = p_18;
                  {
                    ATerm t_18 = t;
                    int u_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_18);
                      }
                    else
                      {
                        t = t_18;
                        t = dynrule_targs_1_0(j_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm j_52 = NULL;
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_52 = ATgetArgument(t, 0);
          {
            ATerm x_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_18);
      t = j_52;
    }
  else
    {
      t = v_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_52;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = map_1_0(k_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm o_52 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_52 = ATgetArgument(t, 0);
          {
            ATerm d_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_19);
      t = o_52;
    }
  else
    {
      t = b_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_52;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm a_46 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      a_46 = ATgetArgument(t, 0);
      t = a_46;
      t = free_vars_3_0(q_2, r_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          a_46 = ATgetArgument(t, 0);
          t = a_46;
          t = free_vars_3_0(c_3, d_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              a_46 = ATgetArgument(t, 0);
              t = a_46;
              t = free_vars_3_0(n_3, o_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_46 = ATgetArgument(t, 0);
                  t = a_46;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      a_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_46;
                  t = free_vars_3_0(b_4, h_4, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm d_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_53);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm j_19 = t;
              int k_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_53 = ATgetArgument(t, 0);
                      g_53 = ATgetArgument(t, 1);
                      h_53 = ATgetArgument(t, 2);
                      i_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_53;
                  t = map_1_0(n_4, t);
                  LocalPopChoice(k_19);
                }
              else
                {
                  t = j_19;
                  {
                    ATerm m_19 = t;
                    int n_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_19);
                      }
                    else
                      {
                        t = m_19;
                        t = dynrule_targs_1_0(o_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm p_53 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_53 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = p_53;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_53;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = map_1_0(p_4, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_53 = NULL;
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_53 = ATgetArgument(t, 0);
          {
            ATerm t_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_19);
      t = u_53;
    }
  else
    {
      t = r_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_53;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_52 = NULL,a_53 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_53 = ATgetArgument(t, 0);
      t = a_53;
      if(match_cons(t, sym_Rule_3))
        {
          w_52 = ATgetArgument(t, 0);
          {
            ATerm u_19 = ATgetArgument(t, 1);
          }
          {
            ATerm w_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_52;
      t = free_vars_3_0(l_4, m_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_53 = ATgetArgument(t, 0);
          {
            ATerm x_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_53;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm h_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_54);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm b_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_20);
          }
        else
          {
            t = b_20;
            {
              ATerm g_20 = t;
              int h_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_54 = ATgetArgument(t, 0);
                      k_54 = ATgetArgument(t, 1);
                      l_54 = ATgetArgument(t, 2);
                      m_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_54;
                  t = map_1_0(w_4, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_20);
                      }
                    else
                      {
                        t = i_20;
                        t = dynrule_targs_1_0(x_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm t_54 = NULL;
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_54 = ATgetArgument(t, 0);
          {
            ATerm m_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_20);
      t = t_54;
    }
  else
    {
      t = k_20;
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
static ATerm x_4 (ATerm t)
{
  t = map_1_0(a_5, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm y_54 = NULL;
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_54 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_20);
      t = y_54;
    }
  else
    {
      t = n_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_54;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm b_55 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      b_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_55);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
      c_55 = t;
      if(match_cons(t, sym_Let_2))
        {
          d_55 = ATgetArgument(t, 0);
          e_55 = ATgetArgument(t, 1);
          t = c_55;
          t = t_6(d_55, e_55, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              d_55 = ATgetArgument(t, 0);
              e_55 = ATgetArgument(t, 1);
              f_55 = ATgetArgument(t, 2);
              t = e_55;
              t = map_1_0(d_5, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  d_55 = ATgetArgument(t, 0);
                  e_55 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, d_55);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_55 = ATgetArgument(t, 0);
                      e_55 = ATgetArgument(t, 1);
                      f_55 = ATgetArgument(t, 2);
                      g_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_55;
                  t = map_1_0(e_5, t);
                }
            }
        }
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm v_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = v_20;
            t = dynrule_sargs_1_0(f_5, t);
          }
      }
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm o_55 = NULL;
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_55 = ATgetArgument(t, 0);
          {
            ATerm a_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_20);
      t = o_55;
    }
  else
    {
      t = y_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_55;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm z_55 = NULL;
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_55 = ATgetArgument(t, 0);
          {
            ATerm d_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_21);
      t = z_55;
    }
  else
    {
      t = b_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_55;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = map_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm e_56 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_56 = ATgetArgument(t, 0);
          {
            ATerm h_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_21);
      t = e_56;
    }
  else
    {
      t = f_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_56;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm i_21 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_21;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  f_54 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      ATerm k_21 = ATgetArgument(t, 1);
      ATerm m_21 = ATgetArgument(t, 2);
      ATerm o_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  g_54 = t;
  t = f_54;
  t = free_vars_3_0(t_4, u_4, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_54;
  t = free_vars_3_0(b_5, c_5, sboundin_3_0, t);
  t = filter_1_0(i_5, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = g_54;
  return(t);
}
ATerm partition_1_0 (ATerm b_149 (ATerm), ATerm t)
{
  static ATerm m_57 (ATerm t);
  static ATerm m_57 (ATerm t)
  {
    ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
    j_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_p_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_57 = ATgetFirst((ATermList) t);
            l_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,x_26 = NULL,p_27 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(j_57);
              x_26 = t;
              t = k_57;
              t = b_149(t);
              p_26 = t;
              t = (ATerm) ATinsert(CheckATermList(l_57), p_26);
              d_6 = t;
              t = SSLsetAnnotations(d_6, x_26);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_21 = ATgetFirst((ATermList) t);
                  s_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_26;
              t = m_57(t);
              r_26 = t;
              t = SSL_explode_term(r_26);
              if(match_cons(t, sym__2))
                {
                  ATerm t_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_21 = ATgetArgument(t, 1);
                    if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
                      {
                        t_26 = ATgetFirst((ATermList) u_21);
                        {
                          ATerm z_21 = (ATerm) ATgetNext((ATermList) u_21);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(r_26);
              if(match_cons(t, sym__2))
                {
                  ATerm a_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm d_22 = ATgetArgument(t, 1);
                    if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
                      {
                        ATerm e_22 = ATgetFirst((ATermList) d_22);
                        ATerm g_22 = (ATerm) ATgetNext((ATermList) d_22);
                        if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
                          {
                            p_27 = ATgetFirst((ATermList) g_22);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_26), p_26), p_27);
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                ATerm f_28 = NULL,g_28 = NULL,j_28 = NULL,k_28 = NULL,b_29 = NULL,e_6 = NULL;
                t = SSLgetAnnotations(j_57);
                k_28 = t;
                t = (ATerm) ATinsert(CheckATermList(l_57), k_57);
                e_6 = t;
                t = SSLsetAnnotations(e_6, k_28);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm i_22 = ATgetFirst((ATermList) t);
                    g_28 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_28;
                t = m_57(t);
                f_28 = t;
                t = SSL_explode_term(f_28);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm k_22 = ATgetArgument(t, 1);
                      if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
                        {
                          j_28 = ATgetFirst((ATermList) k_22);
                          {
                            ATerm l_22 = (ATerm) ATgetNext((ATermList) k_22);
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
                    ATerm m_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm n_22 = ATgetArgument(t, 1);
                      if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
                        {
                          ATerm o_22 = ATgetFirst((ATermList) n_22);
                          ATerm p_22 = (ATerm) ATgetNext((ATermList) n_22);
                          if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
                            {
                              b_29 = ATgetFirst((ATermList) p_22);
                              {
                                ATerm q_22 = (ATerm) ATgetNext((ATermList) p_22);
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
                t = (ATerm) ATmakeAppl(sym__2, j_28, (ATerm) ATinsert(CheckATermList(b_29), k_57));
              }
            }
        }
      }
    return(t);
  }
  t = m_57(t);
  return(t);
}
static ATerm e_7 (ATerm f_25, ATerm e_25, ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  t = f_25;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      q_57 = ATgetArgument(t, 0);
      p_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_57;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, p_57, e_25), q_57);
  return(t);
}
static ATerm f_7 (ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm d_64, ATerm c_64, ATerm t)
{
  t = p_144(t);
  {
    static ATerm j_5 (ATerm t);
    static ATerm j_5 (ATerm t)
    {
      ATerm r_57 = NULL;
      r_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_64, r_57);
      t = o_144(t);
      return(t);
    }
    t = fetch_1_0(j_5, t);
  }
  t = c_64;
  return(t);
}
static ATerm g_7 (ATerm l_144 (ATerm), ATerm z_63, ATerm y_63, ATerm t)
{
  static ATerm h_58 (ATerm t);
  static ATerm h_58 (ATerm t)
  {
    ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
    c_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_63;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_58 = ATgetFirst((ATermList) t);
            e_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_58;
              {
                static ATerm m_5 (ATerm t);
                static ATerm m_5 (ATerm t)
                {
                  t = y_63;
                  return(t);
                }
                t = f_7(l_144, m_5, d_58, e_58, t);
              }
              t = h_58(t);
              LocalPopChoice(t_22);
            }
          else
            {
              t = r_22;
              {
                ATerm h_29 = NULL,k_29 = NULL,j_8 = NULL;
                t = SSLgetAnnotations(c_58);
                h_29 = t;
                t = e_58;
                t = h_58(t);
                k_29 = t;
                t = (ATerm) ATinsert(CheckATermList(k_29), d_58);
                j_8 = t;
                t = SSLsetAnnotations(j_8, h_29);
              }
            }
        }
      }
    return(t);
  }
  t = z_63;
  t = h_58(t);
  return(t);
}
ATerm genzip_4_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t)
{
  static ATerm p_58 (ATerm t);
  static ATerm p_58 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_131(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,m_8 = NULL;
          t = d_131(t);
          o_58 = t;
          if(match_cons(t, sym__2))
            {
              k_58 = ATgetArgument(t, 0);
              l_58 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_58);
          j_58 = t;
          t = k_58;
          t = f_131(t);
          m_58 = t;
          t = l_58;
          t = p_58(t);
          n_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
          m_8 = t;
          t = SSLsetAnnotations(m_8, j_58);
          t = e_131(t);
        }
      }
    return(t);
  }
  t = p_58(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_p_21;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_59 = ATgetFirst((ATermList) t);
      e_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_59, e_59);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      if(match_cons(w_22, sym__2))
        {
          f_59 = ATgetArgument(w_22, 0);
          g_59 = ATgetArgument(w_22, 1);
        }
      else
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(match_cons(a_23, sym__2))
          {
            h_59 = ATgetArgument(a_23, 0);
            i_59 = ATgetArgument(a_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_59), f_59), (ATerm) ATinsert(CheckATermList(i_59), g_59));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  if(match_cons(t, sym__2))
    {
      j_59 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(s_5, j_59, k_59, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_59 = NULL;
  if(match_cons(t, sym__2))
    {
      l_59 = ATgetArgument(t, 0);
      if((l_59 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm m_59 = NULL;
  if(match_cons(t, sym__2))
    {
      m_59 = ATgetArgument(t, 0);
      if((m_59 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  a_59 = t;
  b_59 = t;
  t = SSL_explode_term(b_59);
  if(match_cons(t, sym__2))
    {
      s_58 = ATgetArgument(t, 0);
      q_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_59);
  u_58 = t;
  t = q_58;
  t = genzip_4_0(n_5, o_5, p_5, z_145, t);
  if(match_cons(t, sym__2))
    {
      t_58 = ATgetArgument(t, 0);
      r_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(s_58, t_58);
  z_58 = t;
  t = SSLsetAnnotations(z_58, u_58);
  t = a_146(t);
  if(match_cons(t, sym__2))
    {
      v_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_58;
  t = foldr_2_0(q_5, r_5, t);
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_58, y_58);
  t = g_7(t_5, w_58, y_58, t);
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_58, x_58);
  return(t);
}
ATerm collect_split_1_0 (ATerm x_145 (ATerm), ATerm t)
{
  static ATerm p_59 (ATerm t);
  static ATerm p_59 (ATerm t)
  {
    static ATerm u_5 (ATerm t);
    static ATerm u_5 (ATerm t)
    {
      ATerm c_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_145(t);
          LocalPopChoice(e_23);
        }
      else
        {
          t = c_23;
          {
            ATerm n_59 = NULL;
            n_59 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_59, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(p_59, u_5, t);
    return(t);
  }
  t = p_59(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      t_59 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(t_59, u_59, t);
  return(t);
}
static ATerm k_7 (ATerm y_24, ATerm z_24, ATerm a_25, ATerm b_25, ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL;
  t = b_25;
  t = collect_split_1_0(v_5, t);
  if(match_cons(t, sym__2))
    {
      q_59 = ATgetArgument(t, 0);
      r_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_59, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, y_24, z_24, a_25, q_59)));
  t = conc_0_0(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_r_10;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_r_10;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      x_59 = ATgetArgument(t, 0);
      y_59 = ATgetArgument(t, 1);
      z_59 = ATgetArgument(t, 2);
      {
        ATerm e_60 = NULL;
        t = term_h_23;
        e_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_59, term_h_23);
        t = l_7(w_5, x_59, e_60, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, x_59, y_59, z_59);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          x_59 = ATgetArgument(t, 0);
          y_59 = ATgetArgument(t, 1);
          z_59 = ATgetArgument(t, 2);
          a_60 = ATgetArgument(t, 3);
          {
            ATerm j_60 = NULL;
            t = term_j_23;
            j_60 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_59, term_j_23);
            t = l_7(x_5, x_59, j_60, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, x_59, y_59, z_59, a_60);
          }
        }
      else
        {
          ATerm o_60 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              x_59 = ATgetArgument(t, 0);
              y_59 = ATgetArgument(t, 1);
              z_59 = ATgetArgument(t, 2);
              a_60 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_l_23;
          o_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_59, term_l_23);
          t = l_7(y_5, x_59, o_60, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, x_59, y_59, z_59, a_60);
        }
    }
  return(t);
}
static ATerm l_7 (ATerm m_138 (ATerm), ATerm s_43, ATerm q_43, ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
  s_60 = t;
  t = m_138(t);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_60, s_43, q_43);
  t = a_8(p_60, s_43, q_43, t);
  {
    ATerm n_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_60 = NULL;
        t = term_u_23;
        x_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_60, term_u_23);
        t = z_7(p_60, x_60, t);
        {
          ATerm a_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_24;
            }
        }
        LocalPopChoice(p_23);
      }
    else
      {
        t = n_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_60 = ATgetFirst((ATermList) t);
      r_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_60, term_u_23, (ATerm) ATinsert(CheckATermList(r_60), (ATerm) ATinsert(CheckATermList(q_60), s_43)));
  t = lookup_table_0_1(p_60, t);
  w_60 = t;
  t = term_u_23;
  t_60 = t;
  t = (ATerm) ATinsert(CheckATermList(r_60), (ATerm) ATinsert(CheckATermList(q_60), s_43));
  u_60 = t;
  t = w_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(t_60, u_60, v_60, t);
  t = s_60;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL;
  z_60 = t;
  t = term_c_24;
  a_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_60, term_c_24);
  t = l_7(b_6, z_60, a_61, t);
  t = z_60;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm y_60 = NULL;
  y_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_24), term_e_24);
  t = map_1_0(z_5, t);
  t = y_60;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,r_61 = NULL,s_61 = NULL,o_8 = NULL;
  s_61 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_61);
  k_61 = t;
  t = l_61;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(g_6, t);
  t = concat_0_0(t);
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_61);
  o_8 = t;
  t = SSLsetAnnotations(o_8, k_61);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL;
  x_61 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_61 = ATgetArgument(t, 0);
      u_61 = ATgetArgument(t, 1);
      v_61 = ATgetArgument(t, 2);
      w_61 = ATgetArgument(t, 3);
      {
        ATerm g_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_61;
            t = k_7(t_61, u_61, v_61, w_61, t);
            LocalPopChoice(i_24);
          }
        else
          {
            t = g_24;
            t = (ATerm) ATinsert(ATempty, x_61);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, x_61);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,t_8 = NULL,p_8 = NULL;
  t = declare_standard_strategies_0_0(t);
  j_61 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_61);
  c_61 = t;
  t = d_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_61 = ATgetFirst((ATermList) t);
      g_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_61);
  e_61 = t;
  t = g_61;
  t = Cons_2_0(c_6, f_6, t);
  h_61 = t;
  t = (ATerm) ATinsert(CheckATermList(h_61), f_61);
  p_8 = t;
  t = SSLsetAnnotations(p_8, e_61);
  i_61 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_61);
  t_8 = t;
  t = SSLsetAnnotations(t_8, c_61);
  return(t);
}
static ATerm n_7 (ATerm v_34, ATerm w_34, ATerm t)
{
  ATerm e_62 = NULL;
  t = SSL_fputc(v_34, w_34);
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_62);
  return(t);
}
static ATerm o_7 (ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm f_62 = NULL;
  t = SSL_write_term_to_stream_text(b_33, c_33);
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_62);
  return(t);
}
static ATerm q_7 (ATerm a_134 (ATerm), ATerm l_249, ATerm h_33, ATerm t)
{
  ATerm g_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_249, term_k_24);
  t = u_7(t);
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_62, h_33);
  t = a_134(t);
  t = fclose_0_0(t);
  t = h_33;
  return(t);
}
static ATerm p_7 (ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm h_62 = NULL;
  t = SSL_write_term_to_stream_baf(x_32, y_32);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_62);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm y_29 = NULL,a_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      if(match_cons(m_24, sym_Stream_1))
        {
          y_29 = ATgetArgument(m_24, 0);
        }
      else
        _fail(t);
      a_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(y_29, a_30, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,b_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if(match_cons(n_24, sym_Stream_1))
        {
          z_30 = ATgetArgument(n_24, 0);
        }
      else
        _fail(t);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(z_30, b_31, t);
  w_30 = t;
  t = term_o_24;
  x_30 = t;
  t = w_30;
  if(match_cons(t, sym_Stream_1))
    {
      y_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, w_30);
  t = n_7(x_30, y_30, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,b_64 = NULL,f_64 = NULL,i_10 = NULL,b_10 = NULL;
  o_62 = t;
  if(match_cons(t, sym__2))
    {
      v_62 = ATgetArgument(t, 0);
      w_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_62);
  u_62 = t;
  t = v_62;
  {
    ATerm p_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_6 (ATerm t);
        static ATerm k_6 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((n_62 != NULL) && (n_62 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_6, t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = p_24;
        t = term_t_24;
        n_62 = t;
      }
  }
  x_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_62, w_62);
  b_10 = t;
  t = SSLsetAnnotations(b_10, u_62);
  t = o_62;
  if(match_cons(t, sym__2))
    {
      q_62 = ATgetArgument(t, 0);
      r_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_62);
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_62, (ATerm) ATmakeAppl(sym__2, not_null(n_62), r_62));
  i_10 = t;
  t = SSLsetAnnotations(i_10, p_62);
  t_62 = t;
  if(match_cons(t, sym__2))
    {
      b_64 = ATgetArgument(t, 0);
      f_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,j_10 = NULL;
        t = SSLgetAnnotations(t_62);
        r_29 = t;
        t = b_64;
        t = fetch_1_0(l_6, t);
        u_29 = t;
        t = f_64;
        if(match_cons(t, sym__2))
          {
            w_29 = ATgetArgument(t, 0);
            x_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_7(m_6, w_29, x_29, t);
        v_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_29, v_29);
        j_10 = t;
        t = SSLsetAnnotations(j_10, r_29);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm j_30 = NULL,q_30 = NULL,u_30 = NULL,v_30 = NULL,k_10 = NULL;
          t = SSLgetAnnotations(t_62);
          j_30 = t;
          t = f_64;
          if(match_cons(t, sym__2))
            {
              u_30 = ATgetArgument(t, 0);
              v_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_7(n_6, u_30, v_30, t);
          q_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_64, q_30);
          k_10 = t;
          t = SSLsetAnnotations(k_10, j_30);
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
ATerm apply_strategy_1_0 (ATerm s_155 (ATerm), ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  o_64 = t;
  t = dtime_0_0(t);
  t = o_64;
  t = s_155(t);
  n_64 = t;
  t = dtime_0_0(t);
  k_64 = t;
  t = n_64;
  if(match_cons(t, sym__2))
    {
      l_64 = ATgetArgument(t, 0);
      m_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_64), (ATerm) ATmakeAppl(sym_Runtime_1, k_64)), m_64);
  return(t);
}
static ATerm n_65 (ATerm d_65, ATerm t)
{
  t = SSL_fclose(d_65);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL;
  h_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_65 = ATgetArgument(t, 0);
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_65);
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = n_65(h_65, t);
          }
      }
    }
  else
    {
      t = n_65(h_65, t);
    }
  return(t);
}
static ATerm r_7 (ATerm d_33, ATerm t)
{
  t = SSL_read_term_from_stream(d_33);
  return(t);
}
static ATerm s_7 (ATerm c_73, ATerm d_73, ATerm t)
{
  t = SSL_strcat(c_73, d_73);
  return(t);
}
static ATerm t_7 (ATerm x_34, ATerm y_34, ATerm t)
{
  ATerm o_65 = NULL;
  t = SSL_fopen(x_34, y_34);
  o_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_65);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_65 = NULL;
  t = SSL_stdin_stream();
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_65);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_65 = NULL;
  t = SSL_stdout_stream();
  q_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_65);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_65 = NULL;
  t = SSL_stderr_stream();
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_65);
  return(t);
}
static ATerm z_66 (ATerm x_65, ATerm t)
{
  ATerm y_65 = NULL;
  t = SSL_explode_term(x_65);
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_25 = ATgetArgument(t, 1);
        if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
          {
            y_65 = ATgetFirst((ATermList) h_25);
            {
              ATerm i_25 = (ATerm) ATgetNext((ATermList) h_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_65;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_65;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_65;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_65;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_67 (ATerm b_66, ATerm c_66, ATerm d_66, ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,j_66 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(d_66);
  g_66 = t;
  t = b_66;
  if(match_cons(t, sym_Path_1))
    {
      j_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_66, c_66);
  p_10 = t;
  t = SSLsetAnnotations(p_10, g_66);
  if(match_cons(t, sym__2))
    {
      e_66 = ATgetArgument(t, 0);
      f_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(e_66, f_66, t);
  return(t);
}
static ATerm b_67 (ATerm l_66, ATerm m_66, ATerm n_66, ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL,u_66 = NULL,q_10 = NULL;
  t = SSLgetAnnotations(n_66);
  q_66 = t;
  t = SSL_is_string(l_66);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_66, m_66);
  q_10 = t;
  t = SSLsetAnnotations(q_10, q_66);
  if(match_cons(t, sym__2))
    {
      o_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(o_66, p_66, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
  w_66 = t;
  if(match_cons(t, sym__2))
    {
      x_66 = ATgetArgument(t, 0);
      y_66 = ATgetArgument(t, 1);
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_66(w_66, t);
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            {
              ATerm l_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_67(x_66, y_66, w_66, t);
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = l_25;
                  t = b_67(x_66, y_66, w_66, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_66(w_66, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,k_67 = NULL;
  k_67 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_67, term_w_25);
        t = u_7(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        {
          ATerm w_31 = NULL,a_32 = NULL;
          t = term_z_25;
          a_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_25, k_67);
          t = s_7(a_32, k_67, t);
          w_31 = t;
          t = SSL_perror(w_31);
          _fail(t);
        }
      }
  }
  e_67 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(f_67, t);
  d_67 = t;
  t = e_67;
  t = fclose_0_0(t);
  t = d_67;
  return(t);
}
ATerm fetch_1_0 (ATerm b_142 (ATerm), ATerm t)
{
  static ATerm j_68 (ATerm t);
  static ATerm j_68 (ATerm t)
  {
    ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
    g_68 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_68 = ATgetFirst((ATermList) t);
        i_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_26 = t;
      int b_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_32 = NULL,k_32 = NULL,t_10 = NULL;
          t = SSLgetAnnotations(g_68);
          h_32 = t;
          t = h_68;
          t = b_142(t);
          k_32 = t;
          t = (ATerm) ATinsert(CheckATermList(i_68), k_32);
          t_10 = t;
          t = SSLsetAnnotations(t_10, h_32);
          LocalPopChoice(b_26);
        }
      else
        {
          t = a_26;
          {
            ATerm k_33 = NULL,r_33 = NULL,u_10 = NULL;
            t = SSLgetAnnotations(g_68);
            k_33 = t;
            t = i_68;
            t = j_68(t);
            r_33 = t;
            t = (ATerm) ATinsert(CheckATermList(r_33), h_68);
            u_10 = t;
            t = SSLsetAnnotations(u_10, k_33);
          }
        }
    }
    return(t);
  }
  t = j_68(t);
  return(t);
}
static ATerm z_7 (ATerm s_46, ATerm t_46, ATerm t)
{
  ATerm n_68 = NULL;
  t = lookup_table_0_1(s_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(t_46, n_68, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_135 (ATerm), ATerm t)
{
  ATerm q_68 = NULL;
  q_68 = t;
  {
    ATerm c_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
        t = term_g_26;
        t_68 = t;
        t = term_h_26;
        u_68 = t;
        t = term_k_26;
        t = z_7(t_68, u_68, t);
        s_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_68, term_m_26);
        t = geq_0_0(t);
        t = q_68;
        t = s_135(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = c_26;
        t = q_68;
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm x_68 = NULL;
  x_68 = t;
  if(match_string(t, "-k"))
    {
      t = x_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_68;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL;
  y_68 = t;
  t = SSL_string_to_int(y_68);
  z_68 = t;
  t = term_n_26;
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, z_68);
  t = c_8(a_69, z_68, t);
  t = y_68;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_6, q_6, r_6, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm c_69 = NULL;
  c_69 = t;
  if(match_string(t, "-S"))
    {
      t = c_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_69;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL;
  t = term_h_26;
  d_69 = t;
  t = term_q_26;
  e_69 = t;
  t = term_y_26;
  t = c_8(d_69, e_69, t);
  t = term_z_26;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_b_27;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  t = SSL_string_to_int(f_69);
  g_69 = t;
  t = term_h_26;
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_26, g_69);
  t = c_8(h_69, g_69, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_69);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL;
  t = term_d_27;
  i_69 = t;
  t = term_x_0;
  j_69 = t;
  t = term_e_27;
  t = c_8(i_69, j_69, t);
  t = term_f_27;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, u_6, v_6, t);
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm m_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_6, z_6, a_7, t);
            LocalPopChoice(q_27);
          }
        else
          {
            t = m_27;
            t = Option_3_0(b_7, d_7, j_7, t);
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL;
  t = term_g_26;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_26, r_38, s_38);
  t = lookup_table_0_1(k_69, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(r_38, s_38, l_69, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_26, r_38, s_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
      t = term_x_0;
      t = g_0(t);
      r_69 = t;
      t = term_r_27;
      s_69 = t;
      t = term_s_27;
      t_69 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, r_69);
      t = a_8(s_69, t_69, r_69, t);
      _fail(t);
    }
  else
    {
      ATerm w_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_69 = ATgetFirst((ATermList) t);
          q_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_69;
      t = d_0(t);
      t = term_x_0;
      t = f_0(t);
      w_69 = t;
      t = (ATerm) ATinsert(CheckATermList(q_69), w_69);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm y_69 = NULL;
  y_69 = t;
  if(match_string(t, "-o"))
    {
      t = y_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_69;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  z_69 = t;
  t = term_t_27;
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, z_69);
  t = c_8(a_70, z_69, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_69);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_8, f_8, g_8, t);
  return(t);
}
static ATerm a_8 (ATerm w_44, ATerm x_44, ATerm v_44, ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL;
  c_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_44, x_44);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_28 = ATgetArgument(t, 0);
            ATerm d_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_44, x_44);
        t = z_7(w_44, x_44, t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATempty;
      }
  }
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_44, x_44, (ATerm) ATinsert(CheckATermList(d_70), v_44));
  t = lookup_table_0_1(w_44, t);
  g_70 = t;
  t = (ATerm) ATinsert(CheckATermList(d_70), v_44);
  e_70 = t;
  t = g_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(x_44, e_70, f_70, t);
  t = c_70;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
      t = term_x_0;
      t = r_0(t);
      r_70 = t;
      t = term_r_27;
      s_70 = t;
      t = term_s_27;
      t_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, r_70);
      t = a_8(s_70, t_70, r_70, t);
      _fail(t);
    }
  else
    {
      ATerm x_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_70 = ATgetFirst((ATermList) t);
          o_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_70 = ATgetFirst((ATermList) t);
          q_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_70;
      t = o_0(t);
      t = p_70;
      t = q_0(t);
      x_70 = t;
      t = (ATerm) ATinsert(CheckATermList(q_70), x_70);
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm z_70 = NULL;
  z_70 = t;
  if(match_string(t, "-i"))
    {
      t = z_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_70;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  a_71 = t;
  t = term_e_28;
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_28, a_71);
  t = c_8(b_71, a_71, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_71);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_8, i_8, k_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  c_71 = t;
  t = term_c_10;
  e_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_28), c_71);
  f_71 = t;
  t = SSL_printnl(e_71, f_71);
  t = term_f_10;
  d_71 = t;
  t = SSL_exit(d_71);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL;
  t = term_g_26;
  g_71 = t;
  t = term_n_28;
  h_71 = t;
  t = term_o_28;
  t = z_7(g_71, h_71, t);
  return(t);
}
static ATerm v_7 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_42, b_42);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = SSL_addr(a_42, b_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_147 (ATerm), ATerm p_147 (ATerm), ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_71;
      t = o_147(t);
    }
  else
    {
      ATerm o_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_71 = ATgetFirst((ATermList) t);
          l_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_71;
      t = foldr_2_0(o_147, p_147, t);
      o_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_71, o_71);
      t = p_147(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_q_26;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(n_34, o_34, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_71 = NULL,g_34 = NULL,h_34 = NULL;
  t = times_0_0(t);
  h_34 = t;
  t = SSL_explode_term(h_34);
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      g_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_34;
  t = foldr_2_0(l_8, n_8, t);
  r_71 = t;
  t = SSL_TicksToSeconds(r_71);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
  c_72 = t;
  if(match_cons(t, sym__2))
    {
      d_72 = ATgetArgument(t, 0);
      e_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_72;
        if((d_72 != t))
          {
            _fail(t);
          }
        t = c_72;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        t = (ATerm) ATmakeAppl(sym__2, d_72, e_72);
        {
          ATerm v_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_72, e_72);
              LocalPopChoice(w_28);
            }
          else
            {
              t = v_28;
              t = SSL_gtr(d_72, e_72);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_72, e_72);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_135 (ATerm), ATerm t)
{
  ATerm i_72 = NULL;
  i_72 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
        t = term_g_26;
        l_72 = t;
        t = term_h_26;
        m_72 = t;
        t = term_k_26;
        t = z_7(l_72, m_72, t);
        k_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_72, term_f_10);
        t = geq_0_0(t);
        t = i_72;
        t = r_135(t);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = i_72;
      }
  }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,r_72 = NULL,s_72 = NULL;
  t = run_time_0_0(t);
  o_72 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  p_72 = t;
  t = term_c_10;
  r_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_29), o_72), term_z_28), p_72);
  s_72 = t;
  t = SSL_printnl(r_72, s_72);
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_29), o_72), term_z_28), p_72));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_72 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_26;
  t_72 = t;
  t = SSL_exit(t_72);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  g_73 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_73;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_73 = ATgetArgument(t, 0);
          {
            ATerm r_35 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(g_73);
            r_35 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_73);
            x_10 = t;
            t = SSLsetAnnotations(x_10, r_35);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_73;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_156 (ATerm), ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_72 = NULL,x_72 = NULL;
      t = term_g_26;
      w_72 = t;
      t = term_f_29;
      x_72 = t;
      t = term_g_29;
      t = z_7(w_72, x_72, t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = fetch_1_0(r_8, t);
    }
  t = q_156(t);
  return(t);
}
static ATerm d_8 (ATerm r_49, ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm i_73 = NULL;
  t = SSL_hashtable_put(t_49, r_49, s_49);
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_73);
  return(t);
}
static ATerm e_8 (ATerm u_49, ATerm v_49, ATerm t)
{
  t = SSL_hashtable_get(v_49, u_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_46, ATerm t)
{
  ATerm r_73 = NULL;
  t = table_hashtable_0_0(t);
  r_73 = t;
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_36 = NULL;
        t = r_73;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_8(l_46, a_36, t);
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        {
          ATerm h_36 = NULL;
          t = l_46;
          t = table_create_0_0(t);
          t = r_73;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_8(l_46, h_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm u_73 = NULL;
  t = SSL_hashtable_create(z_49, a_50);
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_73);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,z_73 = NULL,a_74 = NULL;
  v_73 = t;
  t = term_l_29;
  z_73 = t;
  t = term_m_29;
  a_74 = t;
  t = v_73;
  t = new_hashtable_0_2(z_73, a_74, t);
  w_73 = t;
  t = v_73;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(v_73, w_73, x_73, t);
  t = v_73;
  return(t);
}
static ATerm x_7 (ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm b_74 = NULL;
  t = SSL_hashtable_remove(x_49, w_49);
  b_74 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_74);
  return(t);
}
static ATerm y_7 (ATerm b_50, ATerm t)
{
  ATerm c_74 = NULL;
  t = SSL_hashtable_destroy(b_50);
  c_74 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_74);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_74 = NULL;
  t = SSL_table_hashtable();
  d_74 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_74);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL;
  e_74 = t;
  t = table_hashtable_0_0(t);
  f_74 = t;
  t = lookup_table_0_1(e_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(h_74, t);
  t = f_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(e_74, g_74, t);
  t = e_74;
  return(t);
}
ATerm map_1_0 (ATerm r_141 (ATerm), ATerm t)
{
  static ATerm w_74 (ATerm t);
  static ATerm w_74 (ATerm t)
  {
    ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL;
    t_74 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_74;
      }
    else
      {
        ATerm u_36 = NULL,a_37 = NULL,b_37 = NULL,z_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_74 = ATgetFirst((ATermList) t);
            v_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_74);
        u_36 = t;
        t = u_74;
        t = r_141(t);
        a_37 = t;
        t = v_74;
        t = w_74(t);
        b_37 = t;
        t = (ATerm) ATinsert(CheckATermList(b_37), a_37);
        z_10 = t;
        t = SSLsetAnnotations(z_10, u_36);
      }
    return(t);
  }
  t = w_74(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_74 = ATgetFirst((ATermList) t);
      a_75 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_75 = NULL,f_75 = NULL;
        static ATerm s_8 (ATerm t);
        static ATerm s_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_75)), not_null(f_75));
          return(t);
        }
        t = a_75;
        t = l_0(t);
        if(((e_75 != NULL) && (e_75 != t)))
          _fail(t);
        else
          e_75 = t;
        t = z_74;
        t = j_0(t);
        if(((f_75 != NULL) && (f_75 != t)))
          _fail(t);
        else
          f_75 = t;
        t = a_75;
        t = reverse_acc_2_0(j_0, s_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_0;
      t = l_0(t);
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,e_11 = NULL;
  n_75 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_75);
  l_75 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_75);
  e_11 = t;
  t = SSLsetAnnotations(e_11, l_75);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm p_75 = NULL;
  p_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_75), term_n_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL;
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_75 = NULL,k_75 = NULL;
      t = term_g_26;
      j_75 = t;
      t = term_n_28;
      k_75 = t;
      t = term_o_28;
      t = z_7(j_75, k_75, t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      t = fetch_1_0(u_8, t);
    }
  t = term_q_29;
  t = echo_0_0(t);
  t = term_r_27;
  h_75 = t;
  t = term_s_27;
  i_75 = t;
  t = term_s_29;
  t = z_7(h_75, i_75, t);
  t = reverse_acc_2_0(_id, v_8, t);
  t = map_1_0(x_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
  r_75 = t;
  {
    ATerm t_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_75;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_30 = ATgetFirst((ATermList) t);
                ATerm c_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_75;
          }
        LocalPopChoice(z_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATinsert(ATempty, r_75);
      }
  }
  s_75 = t;
  t = term_t_24;
  t_75 = t;
  t = SSL_printnl(t_75, s_75);
  t = r_75;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL;
  t = term_g_26;
  x_75 = t;
  t = term_n_28;
  y_75 = t;
  t = term_o_28;
  t = z_7(x_75, y_75, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL;
  t = term_d_30;
  z_75 = t;
  t = term_x_0;
  a_76 = t;
  t = term_e_30;
  t = c_8(z_75, a_76, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
  t = term_d_30;
  d_76 = t;
  t = term_x_0;
  e_76 = t;
  t = term_e_30;
  t = c_8(d_76, e_76, t);
  t = term_g_30;
  b_76 = t;
  t = term_x_0;
  c_76 = t;
  t = term_h_30;
  t = c_8(b_76, c_76, t);
  t = term_i_30;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_8, z_8, a_9, t);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      t = Option_3_0(c_9, g_9, h_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,i_11 = NULL;
  k_76 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_76 = ATgetFirst((ATermList) t);
      h_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_76);
  f_76 = t;
  t = g_76;
  t = z_109(t);
  i_76 = t;
  t = h_76;
  t = a_110(t);
  j_76 = t;
  t = (ATerm) ATinsert(CheckATermList(j_76), i_76);
  i_11 = t;
  t = SSLsetAnnotations(i_11, f_76);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_158 (ATerm), ATerm t)
{
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,u_76 = NULL,v_76 = NULL,k_11 = NULL;
  p_76 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_30;
        t = o_158(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
      }
  }
  t = p_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_76 = ATgetFirst((ATermList) t);
      s_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_76);
  q_76 = t;
  t = term_n_28;
  v_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_28, r_76);
  t = c_8(v_76, r_76, t);
  t = s_76;
  {
    static ATerm f_77 (ATerm t);
    static ATerm f_77 (ATerm t)
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_76 = NULL;
              y_76 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_76;
              LocalPopChoice(a_31);
            }
          else
            {
              t = t_30;
              t = o_158(t);
              t = Cons_2_0(_id, f_77, t);
            }
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm b_77 = NULL,c_77 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_77 = ATgetFirst((ATermList) t);
                c_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_77), (ATerm) ATmakeAppl(sym_Undefined_1, b_77));
          }
        }
      return(t);
    }
    t = f_77(t);
  }
  u_76 = t;
  t = (ATerm) ATinsert(CheckATermList(u_76), (ATerm) ATmakeAppl(sym_Program_1, r_76));
  k_11 = t;
  t = SSLsetAnnotations(k_11, q_76);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm s_77 = NULL;
  s_77 = t;
  if(match_string(t, "--help"))
    {
      t = s_77;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_77;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_77;
        }
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  t = term_f_29;
  t_77 = t;
  t = term_x_0;
  u_77 = t;
  t = term_c_31;
  t = c_8(t_77, u_77, t);
  t = term_d_31;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_e_31;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_158 (ATerm), ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
  m_77 = t;
  t = term_r_27;
  n_77 = t;
  t = term_f_31;
  t = lookup_table_0_1(n_77, t);
  r_77 = t;
  t = term_s_27;
  o_77 = t;
  t = (ATerm) ATempty;
  p_77 = t;
  t = r_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(o_77, p_77, q_77, t);
  t = m_77;
  {
    static ATerm i_9 (ATerm t);
    static ATerm i_9 (ATerm t)
    {
      ATerm g_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_158(t);
          LocalPopChoice(h_31);
        }
      else
        {
          t = g_31;
          {
            ATerm i_31 = t;
            int j_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_9, k_9, l_9, t);
                LocalPopChoice(j_31);
              }
            else
              {
                t = i_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_9, t);
  }
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_78 = NULL;
        f_78 = t;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_37 = NULL;
              t = f_78;
              {
                ATerm o_31 = t;
                int p_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_37 = NULL,z_37 = NULL;
                    t = term_g_26;
                    y_37 = t;
                    t = term_f_29;
                    z_37 = t;
                    t = term_g_29;
                    t = z_7(y_37, z_37, t);
                    LocalPopChoice(p_31);
                  }
                else
                  {
                    t = o_31;
                    t = fetch_1_0(m_9, t);
                  }
              }
              t = f_78;
              t = default_system_usage_0_0(t);
              t = term_q_26;
              l_37 = t;
              t = SSL_exit(l_37);
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              {
                ATerm f_38 = NULL,g_38 = NULL,j_38 = NULL;
                t = term_g_26;
                g_38 = t;
                t = term_d_30;
                j_38 = t;
                t = term_q_31;
                t = z_7(g_38, j_38, t);
                t = f_78;
                t = default_system_about_0_0(t);
                t = term_q_26;
                f_38 = t;
                t = SSL_exit(f_38);
              }
            }
        }
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
              static ATerm n_9 (ATerm t);
              static ATerm n_9 (ATerm t)
              {
                ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_11 = NULL;
                l_78 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_78 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_78);
                j_78 = t;
                t = k_78;
                if(((k_77 != NULL) && (k_77 != t)))
                  _fail(t);
                else
                  k_77 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_78);
                m_11 = t;
                t = SSLsetAnnotations(m_11, j_78);
                return(t);
              }
              t = fetch_1_0(n_9, t);
              t = term_c_10;
              h_78 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_77)), term_t_31);
              i_78 = t;
              t = SSL_printnl(h_78, i_78);
              t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_77)), term_t_31));
              t = default_system_usage_0_0(t);
              t = term_f_10;
              g_78 = t;
              t = SSL_exit(g_78);
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
            }
        }
      }
  }
  l_77 = t;
  t = term_r_27;
  t = table_destroy_0_0(t);
  t = l_77;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_156 (ATerm), ATerm t_156 (ATerm), ATerm u_156 (ATerm), ATerm v_156 (ATerm), ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL;
  t = parse_options_1_0(s_156, t);
  q_78 = t;
  t = term_u_31;
  t = table_create_0_0(t);
  t = term_u_31;
  r_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_31, term_v_31, q_78);
  t = lookup_table_0_1(r_78, t);
  u_78 = t;
  t = term_v_31;
  s_78 = t;
  t = u_78;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(s_78, q_78, t_78, t);
  t = q_78;
  t = u_156(t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_156, t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        {
          ATerm z_31 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_156(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_32);
            }
          else
            {
              t = z_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = if_verbose2_1_0(v_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL;
  t = term_c_32;
  v_78 = t;
  t = term_x_0;
  w_78 = t;
  t = term_d_32;
  t = c_8(v_78, w_78, t);
  t = term_e_32;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL;
  x_78 = t;
  t = term_g_26;
  b_79 = t;
  t = term_n_28;
  c_79 = t;
  t = term_o_28;
  t = z_7(b_79, c_79, t);
  y_78 = t;
  t = term_c_10;
  z_78 = t;
  t = (ATerm) ATinsert(ATempty, y_78);
  a_79 = t;
  t = SSL_printnl(z_78, a_79);
  t = x_78;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_156 (ATerm), ATerm c_156 (ATerm), ATerm d_156 (ATerm), ATerm t)
{
  static ATerm o_9 (ATerm t);
  static ATerm q_9 (ATerm t);
  static ATerm o_9 (ATerm t)
  {
    ATerm g_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_156(t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = g_32;
        {
          ATerm j_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(l_32);
            }
          else
            {
              t = j_32;
              {
                ATerm m_32 = t;
                int n_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(n_32);
                  }
                else
                  {
                    t = m_32;
                    {
                      ATerm o_32 = t;
                      int p_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_9, t_9, u_9, t);
                          LocalPopChoice(p_32);
                        }
                      else
                        {
                          t = o_32;
                          {
                            ATerm q_32 = t;
                            int r_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(r_32);
                              }
                            else
                              {
                                t = q_32;
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
  static ATerm q_9 (ATerm t)
  {
    ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
    e_79 = t;
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_9 (ATerm t);
          static ATerm z_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_79 != NULL) && (d_79 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_79 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_9, t);
          LocalPopChoice(t_32);
        }
      else
        {
          t = s_32;
          t = term_u_32;
          d_79 = t;
        }
    }
    t = not_null(d_79);
    t = ReadFromFile_0_0(t);
    f_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_79, f_79);
    t = apply_strategy_1_0(b_156, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_9, d_156, p_9, q_9, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,r_11 = NULL;
  o_79 = t;
  if(match_cons(t, sym__2))
    {
      h_79 = ATgetArgument(t, 0);
      m_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_79);
  g_79 = t;
  t = m_79;
  t = lift_definitions_0_0(t);
  n_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, n_79);
  r_11 = t;
  t = SSLsetAnnotations(r_11, g_79);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_10, _fail, default_usage_0_0, t);
  return(t);
}

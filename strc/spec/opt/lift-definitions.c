#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_DynamicRules_1;
Symbol sym_SVar_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_LRule_1;
Symbol sym_Path_2;
Symbol sym_Rec_2;
Symbol sym_Scope_2;
Symbol sym_Let_2;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
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
Symbol sym_SVar_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_LRule_1;
Symbol sym_Path_2;
Symbol sym_Rec_2;
Symbol sym_Scope_2;
Symbol sym_Let_2;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
static void init_module_constructors (void)
{
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
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
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
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
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
}
ATerm term_w_32;
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
ATerm term_j_28;
ATerm term_e_28;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_q_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_t_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
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
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_q_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_26);
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
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_n_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_f_29);
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
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_d_30);
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
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm w_136 (ATerm), ATerm t);
static ATerm f_2 (ATerm s_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_6 (ATerm q_44, ATerm r_44, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_143 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm b_120 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm t_6 (ATerm g_26, ATerm f_26, ATerm t);
ATerm foldr_3_0 (ATerm e_142 (ATerm), ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm t);
static ATerm x_6 (ATerm u_138 (ATerm), ATerm o_60, ATerm n_60, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm c_7 (ATerm i_749, ATerm n_749, ATerm f_76, ATerm t);
ATerm while_not_2_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm c_28 (ATerm x_25, ATerm y_25, ATerm a_26, ATerm t);
static ATerm y_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm free_vars_3_0 (ATerm w_145 (ATerm), ATerm x_145 (ATerm), ATerm y_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm c_120 (ATerm), ATerm t);
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
ATerm partition_1_0 (ATerm p_143 (ATerm), ATerm t);
static ATerm e_7 (ATerm c_25, ATerm b_25, ATerm t);
static ATerm f_7 (ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm u_60, ATerm t_60, ATerm t);
static ATerm g_7 (ATerm z_138 (ATerm), ATerm q_60, ATerm p_60, ATerm t);
ATerm genzip_4_0 (ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm CollectSplit_2_0 (ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm l_140 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm k_7 (ATerm v_24, ATerm w_24, ATerm x_24, ATerm y_24, ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm l_7 (ATerm b_133 (ATerm), ATerm y_42, ATerm w_42, ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm n_7 (ATerm g_34, ATerm h_34, ATerm t);
static ATerm o_7 (ATerm y_32, ATerm z_32, ATerm t);
static ATerm q_7 (ATerm s_128 (ATerm), ATerm v_243, ATerm e_33, ATerm t);
static ATerm p_7 (ATerm u_32, ATerm v_32, ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm u_149 (ATerm), ATerm t);
static ATerm p_65 (ATerm j_65, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_7 (ATerm a_33, ATerm t);
static ATerm s_7 (ATerm t_69, ATerm u_69, ATerm t);
static ATerm t_7 (ATerm i_34, ATerm j_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_67 (ATerm z_65, ATerm t);
static ATerm b_67 (ATerm d_66, ATerm e_66, ATerm f_66, ATerm t);
static ATerm c_67 (ATerm n_66, ATerm o_66, ATerm p_66, ATerm t);
static ATerm u_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_136 (ATerm), ATerm t);
static ATerm z_7 (ATerm y_45, ATerm z_45, ATerm t);
ATerm if_verbose2_1_0 (ATerm j_130 (ATerm), ATerm t);
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
static ATerm c_8 (ATerm h_38, ATerm j_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_8 (ATerm f_44, ATerm g_44, ATerm e_44, ATerm t);
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_7 (ATerm k_41, ATerm l_41, ATerm t);
ATerm foldr_2_0 (ATerm c_142 (ATerm), ATerm d_142 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_130 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm need_help_1_0 (ATerm s_150 (ATerm), ATerm t);
static ATerm d_8 (ATerm x_48, ATerm y_48, ATerm z_48, ATerm t);
static ATerm e_8 (ATerm a_49, ATerm b_49, ATerm t);
ATerm lookup_table_0_1 (ATerm r_45, ATerm t);
ATerm new_hashtable_0_2 (ATerm f_49, ATerm g_49, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm x_7 (ATerm c_49, ATerm d_49, ATerm t);
static ATerm y_7 (ATerm h_49, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_136 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_152 (ATerm), ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm parse_options_1_0 (ATerm u_152 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_150 (ATerm), ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm iowrap_3_0 (ATerm d_150 (ATerm), ATerm e_150 (ATerm), ATerm f_150 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,i_0 = NULL,m_0 = NULL;
  a_0 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_c_10;
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_10), c_0), term_d_10);
  m_0 = t;
  t = SSL_printnl(i_0, m_0);
  t = term_f_10;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_0 = NULL,s_0 = NULL,u_0 = NULL;
  p_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_0;
    }
  else
    {
      static ATerm n_0 (ATerm t)
      {
        t = not_null(u_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_0 = ATgetFirst((ATermList) t);
          if(((u_0 != NULL) && (u_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_0;
      t = at_end_1_0(n_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm w_136 (ATerm), ATerm t)
{
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
        t = w_136(t);
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
static ATerm p_6 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm g_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_44, r_44);
  t = z_7(q_44, r_44, t);
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
                        if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("f_0", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm g_143 (ATerm), ATerm t)
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
            t = g_143(t);
            y_4 = t;
            t = s_4;
            t = filter_1_0(g_143, t);
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
            t = filter_1_0(g_143, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
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
        t = x_119(t);
        k_5 = t;
        t = k_17;
        t = x_119(t);
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
            t = z_119(t);
            h_6 = t;
            t = k_17;
            t = z_119(t);
            i_6 = t;
            t = a_17;
            t = x_119(t);
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
                t = z_119(t);
                h_7 = t;
                t = k_17;
                t = z_119(t);
                i_7 = t;
                t = a_17;
                t = z_119(t);
                m_7 = t;
                t = z_16;
                t = x_119(t);
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
                    t = z_119(t);
                    b_9 = t;
                    t = k_17;
                    t = z_119(t);
                    d_9 = t;
                    t = a_17;
                    t = z_119(t);
                    e_9 = t;
                    t = z_16;
                    t = x_119(t);
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
                        t = z_119(t);
                        w_9 = t;
                        t = k_17;
                        t = z_119(t);
                        x_9 = t;
                        t = a_17;
                        t = z_119(t);
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
                            t = z_119(t);
                            f_11 = t;
                            t = k_17;
                            t = x_119(t);
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
                                t = z_119(t);
                                g_12 = t;
                                t = k_17;
                                t = x_119(t);
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
                                    t = z_119(t);
                                    u_12 = t;
                                    t = k_17;
                                    t = x_119(t);
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
                                  t = z_119(t);
                                  j_13 = t;
                                  t = k_17;
                                  t = x_119(t);
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
ATerm dynrule_sargs_1_0 (ATerm b_120 (ATerm), ATerm t)
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
static ATerm t_6 (ATerm g_26, ATerm f_26, ATerm t)
{
  t = g_26;
  t = map_1_0(z_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_142 (ATerm), ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_21;
      t = e_142(t);
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
      t = g_142(t);
      b_22 = t;
      t = y_21;
      t = foldr_3_0(e_142, f_142, g_142, t);
      c_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_22, c_22);
      t = f_142(t);
    }
  return(t);
}
static ATerm x_6 (ATerm u_138 (ATerm), ATerm o_60, ATerm n_60, ATerm t)
{
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
                static ATerm b_1 (ATerm t)
                {
                  t = n_60;
                  return(t);
                }
                t = f_7(u_138, b_1, y_22, z_22, t);
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
  t = o_60;
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
  ATerm z_23 = NULL,c_24 = NULL;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_24), z_23);
  return(t);
}
static ATerm c_7 (ATerm i_749, ATerm n_749, ATerm f_76, ATerm t)
{
  ATerm m_23 = NULL,q_23 = NULL,s_23 = NULL,t_23 = NULL;
  t = SSL_explode_term(n_749);
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_749);
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
  t = (ATerm) ATmakeAppl(sym__2, t_23, f_76);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm t)
{
  static ATerm o_24 (ATerm t)
  {
    ATerm i_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_127(t);
        LocalPopChoice(l_13);
      }
    else
      {
        t = i_13;
        t = v_127(t);
        t = o_24(t);
      }
    return(t);
  }
  t = o_24(t);
  return(t);
}
ATerm for_3_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t)
{
  t = x_127(t);
  t = while_not_2_0(y_127, z_127, t);
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
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,k_27 = NULL,l_27 = NULL;
  g_27 = t;
  if(match_cons(t, sym__2))
    {
      h_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_27 = ATgetFirst((ATermList) t);
      l_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_28(h_27, i_27, g_27, t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_27), k_27), l_27);
          }
      }
    }
  else
    {
      t = c_28(h_27, i_27, g_27, t);
    }
  return(t);
}
static ATerm c_28 (ATerm x_25, ATerm y_25, ATerm a_26, ATerm t)
{
  ATerm c_26 = NULL,i_26 = NULL,v_2 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,x_26 = NULL;
  t = SSLgetAnnotations(a_26);
  c_26 = t;
  t = y_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_26 = ATgetFirst((ATermList) t);
      x_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_26;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_26;
        if((s_26 != t))
          {
            _fail(t);
          }
        t = x_26;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = y_25;
        t = c_7(s_26, t_26, x_26, t);
      }
  }
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, i_26);
  v_2 = t;
  t = SSLsetAnnotations(v_2, c_26);
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
ATerm free_vars_3_0 (ATerm w_145 (ATerm), ATerm x_145 (ATerm), ATerm y_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm c_29 (ATerm t)
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_145(t);
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
              t = x_145(t);
              i_28 = t;
              t = h_28;
              {
                static ATerm z_1 (ATerm t)
                {
                  ATerm p_28 = NULL;
                  t = c_29(t);
                  p_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_28, i_28);
                  t = diff_0_0(t);
                  return(t);
                }
                t = y_145(z_1, c_29, c_2, t);
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
ATerm tboundin_3_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t)
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
        t = v_119(t);
        m_15 = t;
        t = k_40;
        t = t_119(t);
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
            t = t_119(t);
            o_16 = t;
            t = m_16;
            t = t_119(t);
            v_16 = t;
            t = n_16;
            t = t_119(t);
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
                t = v_119(t);
                z_17 = t;
                t = k_40;
                t = v_119(t);
                a_18 = t;
                t = e_40;
                t = v_119(t);
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
                    t = v_119(t);
                    y_18 = t;
                    t = k_40;
                    t = v_119(t);
                    z_18 = t;
                    t = e_40;
                    t = v_119(t);
                    a_19 = t;
                    t = g_40;
                    t = t_119(t);
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
                        t = v_119(t);
                        a_20 = t;
                        t = k_40;
                        t = v_119(t);
                        c_20 = t;
                        t = e_40;
                        t = v_119(t);
                        d_20 = t;
                        t = g_40;
                        t = t_119(t);
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
                            t = v_119(t);
                            u_20 = t;
                            t = k_40;
                            t = t_119(t);
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
                                t = v_119(t);
                                v_21 = t;
                                t = k_40;
                                t = t_119(t);
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
                                    t = v_119(t);
                                    b_23 = t;
                                    t = k_40;
                                    t = t_119(t);
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
                                        t = t_119(t);
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
                                            ATerm g_24 = NULL,j_24 = NULL,d_4 = NULL;
                                            t = SSLgetAnnotations(l_40);
                                            g_24 = t;
                                            t = m_40;
                                            t = t_119(t);
                                            j_24 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, j_24);
                                            d_4 = t;
                                            t = SSLsetAnnotations(d_4, g_24);
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
                                                t = t_119(t);
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
                                                    ATerm e_25 = NULL,g_25 = NULL,f_4 = NULL;
                                                    t = SSLgetAnnotations(l_40);
                                                    e_25 = t;
                                                    t = m_40;
                                                    t = t_119(t);
                                                    g_25 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, g_25);
                                                    f_4 = t;
                                                    t = SSLsetAnnotations(f_4, e_25);
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
                                                  t = t_119(t);
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
ATerm dynrule_targs_1_0 (ATerm c_120 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,t_42 = NULL;
  ATerm a_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          m_42 = ATgetArgument(t, 0);
          {
            ATerm e_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_14);
      t = m_42;
      if(match_cons(t, sym_DynRuleId_1))
        {
          n_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_42;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm f_14 = ATgetArgument(t, 0);
          ATerm i_14 = ATgetArgument(t, 1);
          t_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_42;
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
                m_42 = ATgetArgument(t, 0);
                {
                  ATerm o_14 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_14);
            t = m_42;
            if(match_cons(t, sym_DynRuleId_1))
              {
                n_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_42;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm p_14 = ATgetArgument(t, 0);
                ATerm q_14 = ATgetArgument(t, 1);
                t_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_42;
          }
        else
          {
            t = k_14;
            if(match_cons(t, sym_AddDynRule_2))
              {
                m_42 = ATgetArgument(t, 0);
                {
                  ATerm t_14 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = m_42;
            if(match_cons(t, sym_DynRuleId_1))
              {
                n_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_42;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm u_14 = ATgetArgument(t, 0);
                ATerm w_14 = ATgetArgument(t, 1);
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
  ATerm s_44 = NULL;
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_44 = ATgetArgument(t, 0);
          {
            ATerm c_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_15);
      t = s_44;
    }
  else
    {
      t = a_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_44;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm r_43 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm g_15 = ATgetArgument(t, 0);
          ATerm h_15 = ATgetArgument(t, 1);
          r_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(e_15);
      t = r_43;
      t = map_1_0(o_2, t);
    }
  else
    {
      t = d_15;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm i_15 = ATgetArgument(t, 0);
          ATerm j_15 = ATgetArgument(t, 1);
          r_43 = ATgetArgument(t, 2);
          {
            ATerm k_15 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_43;
      t = map_1_0(p_2, t);
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm i_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_46);
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
                  ATerm l_46 = NULL,m_46 = NULL,p_46 = NULL,q_46 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_46 = ATgetArgument(t, 0);
                      m_46 = ATgetArgument(t, 1);
                      p_46 = ATgetArgument(t, 2);
                      q_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_46;
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
                  ATerm s_48 = NULL,t_48 = NULL,i_49 = NULL,l_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_48 = ATgetArgument(t, 0);
                      t_48 = ATgetArgument(t, 1);
                      i_49 = ATgetArgument(t, 2);
                      l_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_49;
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
  ATerm a_50 = NULL;
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_50 = ATgetArgument(t, 0);
          {
            ATerm n_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_17);
      t = a_50;
    }
  else
    {
      t = l_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_50;
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
  ATerm g_46 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      g_46 = ATgetArgument(t, 0);
      t = g_46;
      t = free_vars_3_0(q_2, r_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          g_46 = ATgetArgument(t, 0);
          t = g_46;
          t = free_vars_3_0(c_3, d_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              g_46 = ATgetArgument(t, 0);
              t = g_46;
              t = free_vars_3_0(n_3, o_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_46 = ATgetArgument(t, 0);
                  t = g_46;
                  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      g_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_46;
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
ATerm partition_1_0 (ATerm p_143 (ATerm), ATerm t)
{
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
              ATerm p_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL,q_27 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(j_57);
              y_26 = t;
              t = k_57;
              t = p_143(t);
              p_26 = t;
              t = (ATerm) ATinsert(CheckATermList(l_57), p_26);
              d_6 = t;
              t = SSLsetAnnotations(d_6, y_26);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_21 = ATgetFirst((ATermList) t);
                  v_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_26;
              t = m_57(t);
              u_26 = t;
              t = SSL_explode_term(u_26);
              if(match_cons(t, sym__2))
                {
                  ATerm t_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_21 = ATgetArgument(t, 1);
                    if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
                      {
                        w_26 = ATgetFirst((ATermList) u_21);
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
              t = SSL_explode_term(u_26);
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
                            q_27 = ATgetFirst((ATermList) g_22);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_26), p_26), q_27);
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                ATerm f_28 = NULL,g_28 = NULL,k_28 = NULL,l_28 = NULL,b_29 = NULL,e_6 = NULL;
                t = SSLgetAnnotations(j_57);
                l_28 = t;
                t = (ATerm) ATinsert(CheckATermList(l_57), k_57);
                e_6 = t;
                t = SSLsetAnnotations(e_6, l_28);
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
                          k_28 = ATgetFirst((ATermList) k_22);
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
                t = (ATerm) ATmakeAppl(sym__2, k_28, (ATerm) ATinsert(CheckATermList(b_29), k_57));
              }
            }
        }
      }
    return(t);
  }
  t = m_57(t);
  return(t);
}
static ATerm e_7 (ATerm c_25, ATerm b_25, ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  t = c_25;
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, p_57, b_25), q_57);
  return(t);
}
static ATerm f_7 (ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm u_60, ATerm t_60, ATerm t)
{
  t = d_139(t);
  {
    static ATerm j_5 (ATerm t)
    {
      ATerm r_57 = NULL;
      r_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_60, r_57);
      t = c_139(t);
      return(t);
    }
    t = fetch_1_0(j_5, t);
  }
  t = t_60;
  return(t);
}
static ATerm g_7 (ATerm z_138 (ATerm), ATerm q_60, ATerm p_60, ATerm t)
{
  static ATerm m_58 (ATerm t)
  {
    ATerm c_58 = NULL,d_58 = NULL,j_58 = NULL;
    c_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_60;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_58 = ATgetFirst((ATermList) t);
            j_58 = (ATerm) ATgetNext((ATermList) t);
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
                static ATerm m_5 (ATerm t)
                {
                  t = p_60;
                  return(t);
                }
                t = f_7(z_138, m_5, d_58, j_58, t);
              }
              t = m_58(t);
              LocalPopChoice(t_22);
            }
          else
            {
              t = r_22;
              {
                ATerm h_29 = NULL,k_29 = NULL,j_8 = NULL;
                t = SSLgetAnnotations(c_58);
                h_29 = t;
                t = j_58;
                t = m_58(t);
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
  t = q_60;
  t = m_58(t);
  return(t);
}
ATerm genzip_4_0 (ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t)
{
  static ATerm u_58 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_125(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,m_8 = NULL;
          t = v_125(t);
          t_58 = t;
          if(match_cons(t, sym__2))
            {
              p_58 = ATgetArgument(t, 0);
              q_58 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_58);
          o_58 = t;
          t = p_58;
          t = x_125(t);
          r_58 = t;
          t = q_58;
          t = u_58(t);
          s_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_58, s_58);
          m_8 = t;
          t = SSLsetAnnotations(m_8, o_58);
          t = w_125(t);
        }
      }
    return(t);
  }
  t = u_58(t);
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
  ATerm k_59 = NULL,l_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_59 = ATgetFirst((ATermList) t);
      l_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      if(match_cons(w_22, sym__2))
        {
          m_59 = ATgetArgument(w_22, 0);
          n_59 = ATgetArgument(w_22, 1);
        }
      else
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(match_cons(a_23, sym__2))
          {
            o_59 = ATgetArgument(a_23, 0);
            p_59 = ATgetArgument(a_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_59), m_59), (ATerm) ATinsert(CheckATermList(p_59), n_59));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL;
  if(match_cons(t, sym__2))
    {
      q_59 = ATgetArgument(t, 0);
      r_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(s_5, q_59, r_59, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm s_59 = NULL;
  if(match_cons(t, sym__2))
    {
      s_59 = ATgetArgument(t, 0);
      if((s_59 != ATgetArgument(t, 1)))
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
  ATerm t_59 = NULL;
  if(match_cons(t, sym__2))
    {
      t_59 = ATgetArgument(t, 0);
      if((t_59 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
  h_59 = t;
  i_59 = t;
  t = SSL_explode_term(i_59);
  if(match_cons(t, sym__2))
    {
      x_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_59);
  b_59 = t;
  t = v_58;
  t = genzip_4_0(n_5, o_5, p_5, n_140, t);
  if(match_cons(t, sym__2))
    {
      y_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(x_58, y_58);
  g_59 = t;
  t = SSLsetAnnotations(g_59, b_59);
  t = o_140(t);
  if(match_cons(t, sym__2))
    {
      c_59 = ATgetArgument(t, 0);
      d_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_58;
  t = foldr_2_0(q_5, r_5, t);
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_59, f_59);
  t = g_7(t_5, d_59, f_59, t);
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_59, e_59);
  return(t);
}
ATerm collect_split_1_0 (ATerm l_140 (ATerm), ATerm t)
{
  static ATerm w_59 (ATerm t)
  {
    static ATerm u_5 (ATerm t)
    {
      ATerm c_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_140(t);
          LocalPopChoice(e_23);
        }
      else
        {
          t = c_23;
          {
            ATerm u_59 = NULL;
            u_59 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_59, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(w_59, u_5, t);
    return(t);
  }
  t = w_59(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      a_60 = ATgetArgument(t, 0);
      b_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(a_60, b_60, t);
  return(t);
}
static ATerm k_7 (ATerm v_24, ATerm w_24, ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  t = y_24;
  t = collect_split_1_0(v_5, t);
  if(match_cons(t, sym__2))
    {
      x_59 = ATgetArgument(t, 0);
      y_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_59, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, v_24, w_24, x_24, x_59)));
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
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      e_60 = ATgetArgument(t, 0);
      f_60 = ATgetArgument(t, 1);
      g_60 = ATgetArgument(t, 2);
      {
        ATerm l_60 = NULL;
        t = term_h_23;
        l_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_60, term_h_23);
        t = l_7(w_5, e_60, l_60, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, e_60, f_60, g_60);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          e_60 = ATgetArgument(t, 0);
          f_60 = ATgetArgument(t, 1);
          g_60 = ATgetArgument(t, 2);
          h_60 = ATgetArgument(t, 3);
          {
            ATerm z_60 = NULL;
            t = term_j_23;
            z_60 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_60, term_j_23);
            t = l_7(x_5, e_60, z_60, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, e_60, f_60, g_60, h_60);
          }
        }
      else
        {
          ATerm e_61 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              e_60 = ATgetArgument(t, 0);
              f_60 = ATgetArgument(t, 1);
              g_60 = ATgetArgument(t, 2);
              h_60 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_l_23;
          e_61 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_60, term_l_23);
          t = l_7(y_5, e_60, e_61, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, e_60, f_60, g_60, h_60);
        }
    }
  return(t);
}
static ATerm l_7 (ATerm b_133 (ATerm), ATerm y_42, ATerm w_42, ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  i_61 = t;
  t = b_133(t);
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_61, y_42, w_42);
  t = a_8(f_61, y_42, w_42, t);
  {
    ATerm n_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_61 = NULL;
        t = term_u_23;
        u_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_61, term_u_23);
        t = z_7(f_61, u_61, t);
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
      g_61 = ATgetFirst((ATermList) t);
      h_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_61, term_u_23, (ATerm) ATinsert(CheckATermList(h_61), (ATerm) ATinsert(CheckATermList(g_61), y_42)));
  t = lookup_table_0_1(f_61, t);
  t_61 = t;
  t = term_u_23;
  q_61 = t;
  t = (ATerm) ATinsert(CheckATermList(h_61), (ATerm) ATinsert(CheckATermList(g_61), y_42));
  r_61 = t;
  t = t_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(q_61, r_61, s_61, t);
  t = i_61;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL;
  w_61 = t;
  t = term_d_24;
  x_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_61, term_d_24);
  t = l_7(b_6, w_61, x_61, t);
  t = w_61;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm v_61 = NULL;
  v_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_24), term_e_24);
  t = map_1_0(z_5, t);
  t = v_61;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,o_8 = NULL;
  o_62 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_62);
  l_62 = t;
  t = m_62;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(g_6, t);
  t = concat_0_0(t);
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, n_62);
  o_8 = t;
  t = SSLsetAnnotations(o_8, l_62);
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
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  t_62 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      p_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
      r_62 = ATgetArgument(t, 2);
      s_62 = ATgetArgument(t, 3);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_62;
            t = k_7(p_62, q_62, r_62, s_62, t);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            t = (ATerm) ATinsert(ATempty, t_62);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, t_62);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,t_8 = NULL,p_8 = NULL;
  t = declare_standard_strategies_0_0(t);
  k_62 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_62);
  d_62 = t;
  t = e_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_62 = ATgetFirst((ATermList) t);
      h_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_62);
  f_62 = t;
  t = h_62;
  t = Cons_2_0(c_6, f_6, t);
  i_62 = t;
  t = (ATerm) ATinsert(CheckATermList(i_62), g_62);
  p_8 = t;
  t = SSLsetAnnotations(p_8, f_62);
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_62);
  t_8 = t;
  t = SSLsetAnnotations(t_8, d_62);
  return(t);
}
static ATerm n_7 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm a_63 = NULL;
  t = SSL_fputc(g_34, h_34);
  a_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_63);
  return(t);
}
static ATerm o_7 (ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm b_63 = NULL;
  t = SSL_write_term_to_stream_text(y_32, z_32);
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_63);
  return(t);
}
static ATerm q_7 (ATerm s_128 (ATerm), ATerm v_243, ATerm e_33, ATerm t)
{
  ATerm c_63 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_243, term_k_24);
  t = u_7(t);
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_63, e_33);
  t = s_128(t);
  t = fclose_0_0(t);
  t = e_33;
  return(t);
}
static ATerm p_7 (ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm d_63 = NULL;
  t = SSL_write_term_to_stream_baf(u_32, v_32);
  d_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_63);
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
      ATerm l_24 = ATgetArgument(t, 0);
      if(match_cons(l_24, sym_Stream_1))
        {
          y_29 = ATgetArgument(l_24, 0);
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
      ATerm m_24 = ATgetArgument(t, 0);
      if(match_cons(m_24, sym_Stream_1))
        {
          z_30 = ATgetArgument(m_24, 0);
        }
      else
        _fail(t);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(z_30, b_31, t);
  w_30 = t;
  t = term_n_24;
  x_30 = t;
  t = w_30;
  if(match_cons(t, sym_Stream_1))
    {
      y_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_24, w_30);
  t = n_7(x_30, y_30, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,s_64 = NULL,t_64 = NULL,i_10 = NULL,b_10 = NULL;
  j_63 = t;
  if(match_cons(t, sym__2))
    {
      q_63 = ATgetArgument(t, 0);
      r_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_63);
  p_63 = t;
  t = q_63;
  {
    ATerm p_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_6 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_63 != NULL) && (h_63 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_63 = ATgetArgument(t, 0);
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
        h_63 = t;
      }
  }
  s_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_63, r_63);
  b_10 = t;
  t = SSLsetAnnotations(b_10, p_63);
  t = j_63;
  if(match_cons(t, sym__2))
    {
      l_63 = ATgetArgument(t, 0);
      m_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_63);
  k_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_63, (ATerm) ATmakeAppl(sym__2, not_null(h_63), m_63));
  i_10 = t;
  t = SSLsetAnnotations(i_10, k_63);
  o_63 = t;
  if(match_cons(t, sym__2))
    {
      s_64 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,j_10 = NULL;
        t = SSLgetAnnotations(o_63);
        r_29 = t;
        t = s_64;
        t = fetch_1_0(l_6, t);
        u_29 = t;
        t = t_64;
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
        LocalPopChoice(z_24);
      }
    else
      {
        t = u_24;
        {
          ATerm j_30 = NULL,q_30 = NULL,u_30 = NULL,v_30 = NULL,k_10 = NULL;
          t = SSLgetAnnotations(o_63);
          j_30 = t;
          t = t_64;
          if(match_cons(t, sym__2))
            {
              u_30 = ATgetArgument(t, 0);
              v_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_7(n_6, u_30, v_30, t);
          q_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_64, q_30);
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
ATerm apply_strategy_1_0 (ATerm u_149 (ATerm), ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  a_65 = t;
  t = dtime_0_0(t);
  t = a_65;
  t = u_149(t);
  z_64 = t;
  t = dtime_0_0(t);
  w_64 = t;
  t = z_64;
  if(match_cons(t, sym__2))
    {
      x_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_64), (ATerm) ATmakeAppl(sym_Runtime_1, w_64)), y_64);
  return(t);
}
static ATerm p_65 (ATerm j_65, ATerm t)
{
  t = SSL_fclose(j_65);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL;
  n_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_65 = ATgetArgument(t, 0);
      {
        ATerm a_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_65);
            LocalPopChoice(d_25);
          }
        else
          {
            t = a_25;
            t = p_65(n_65, t);
          }
      }
    }
  else
    {
      t = p_65(n_65, t);
    }
  return(t);
}
static ATerm r_7 (ATerm a_33, ATerm t)
{
  t = SSL_read_term_from_stream(a_33);
  return(t);
}
static ATerm s_7 (ATerm t_69, ATerm u_69, ATerm t)
{
  t = SSL_strcat(t_69, u_69);
  return(t);
}
static ATerm t_7 (ATerm i_34, ATerm j_34, ATerm t)
{
  ATerm q_65 = NULL;
  t = SSL_fopen(i_34, j_34);
  q_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_65);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_65 = NULL;
  t = SSL_stdin_stream();
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_65);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_65 = NULL;
  t = SSL_stdout_stream();
  s_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_65);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_65 = NULL;
  t = SSL_stderr_stream();
  t_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_65);
  return(t);
}
static ATerm a_67 (ATerm z_65, ATerm t)
{
  ATerm a_66 = NULL;
  t = SSL_explode_term(z_65);
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_25 = ATgetArgument(t, 1);
        if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
          {
            a_66 = ATgetFirst((ATermList) h_25);
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
  t = a_66;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_66;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_66;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_66;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_67 (ATerm d_66, ATerm e_66, ATerm f_66, ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,l_66 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(f_66);
  i_66 = t;
  t = d_66;
  if(match_cons(t, sym_Path_1))
    {
      l_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_66, e_66);
  p_10 = t;
  t = SSLsetAnnotations(p_10, i_66);
  if(match_cons(t, sym__2))
    {
      g_66 = ATgetArgument(t, 0);
      h_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(g_66, h_66, t);
  return(t);
}
static ATerm c_67 (ATerm n_66, ATerm o_66, ATerm p_66, ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL,v_66 = NULL,q_10 = NULL;
  t = SSLgetAnnotations(p_66);
  s_66 = t;
  t = SSL_is_string(n_66);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_66, o_66);
  q_10 = t;
  t = SSLsetAnnotations(q_10, s_66);
  if(match_cons(t, sym__2))
    {
      q_66 = ATgetArgument(t, 0);
      r_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(q_66, r_66, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  x_66 = t;
  if(match_cons(t, sym__2))
    {
      y_66 = ATgetArgument(t, 0);
      z_66 = ATgetArgument(t, 1);
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_67(x_66, t);
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
                  t = b_67(y_66, z_66, x_66, t);
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = l_25;
                  t = c_67(y_66, z_66, x_66, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_67(x_66, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL,l_67 = NULL;
  l_67 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_67, term_w_25);
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
          t = (ATerm) ATmakeAppl(sym__2, term_z_25, l_67);
          t = s_7(a_32, l_67, t);
          w_31 = t;
          t = SSL_perror(w_31);
          _fail(t);
        }
      }
  }
  f_67 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(g_67, t);
  e_67 = t;
  t = f_67;
  t = fclose_0_0(t);
  t = e_67;
  return(t);
}
ATerm fetch_1_0 (ATerm p_136 (ATerm), ATerm t)
{
  static ATerm k_68 (ATerm t)
  {
    ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
    h_68 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_68 = ATgetFirst((ATermList) t);
        j_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_26 = t;
      int d_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_32 = NULL,k_32 = NULL,t_10 = NULL;
          t = SSLgetAnnotations(h_68);
          h_32 = t;
          t = i_68;
          t = p_136(t);
          k_32 = t;
          t = (ATerm) ATinsert(CheckATermList(j_68), k_32);
          t_10 = t;
          t = SSLsetAnnotations(t_10, h_32);
          LocalPopChoice(d_26);
        }
      else
        {
          t = b_26;
          {
            ATerm k_33 = NULL,r_33 = NULL,u_10 = NULL;
            t = SSLgetAnnotations(h_68);
            k_33 = t;
            t = j_68;
            t = k_68(t);
            r_33 = t;
            t = (ATerm) ATinsert(CheckATermList(r_33), i_68);
            u_10 = t;
            t = SSLsetAnnotations(u_10, k_33);
          }
        }
    }
    return(t);
  }
  t = k_68(t);
  return(t);
}
static ATerm z_7 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm n_68 = NULL;
  t = lookup_table_0_1(y_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(z_45, n_68, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  ATerm q_68 = NULL;
  q_68 = t;
  {
    ATerm e_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
        t = term_j_26;
        t_68 = t;
        t = term_k_26;
        u_68 = t;
        t = term_l_26;
        t = z_7(t_68, u_68, t);
        s_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_68, term_m_26);
        t = geq_0_0(t);
        t = q_68;
        t = j_130(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = e_26;
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
  t = term_k_26;
  d_69 = t;
  t = term_q_26;
  e_69 = t;
  t = term_z_26;
  t = c_8(d_69, e_69, t);
  t = term_a_27;
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
  t = term_k_26;
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, g_69);
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
  t = term_j_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, u_6, v_6, t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_6, z_6, a_7, t);
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = Option_3_0(b_7, d_7, j_7, t);
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm h_38, ATerm j_38, ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL;
  t = term_j_26;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_26, h_38, j_38);
  t = lookup_table_0_1(k_69, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(h_38, j_38, l_69, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_26, h_38, j_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_69 = NULL,s_69 = NULL,v_69 = NULL;
      t = term_x_0;
      t = j_0(t);
      r_69 = t;
      t = term_r_27;
      s_69 = t;
      t = term_s_27;
      v_69 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, r_69);
      t = a_8(s_69, v_69, r_69, t);
      _fail(t);
    }
  else
    {
      ATerm y_69 = NULL;
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
      t = g_0(t);
      y_69 = t;
      t = (ATerm) ATinsert(CheckATermList(q_69), y_69);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm a_70 = NULL;
  a_70 = t;
  if(match_string(t, "-o"))
    {
      t = a_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_70;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL;
  b_70 = t;
  t = term_t_27;
  c_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, b_70);
  t = c_8(c_70, b_70, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_70);
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
static ATerm a_8 (ATerm f_44, ATerm g_44, ATerm e_44, ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_44, g_44);
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
        t = (ATerm) ATmakeAppl(sym__2, f_44, g_44);
        t = z_7(f_44, g_44, t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATempty;
      }
  }
  f_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_44, g_44, (ATerm) ATinsert(CheckATermList(f_70), e_44));
  t = lookup_table_0_1(f_44, t);
  i_70 = t;
  t = (ATerm) ATinsert(CheckATermList(f_70), e_44);
  g_70 = t;
  t = i_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(g_44, g_70, h_70, t);
  t = e_70;
  return(t);
}
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL;
      t = term_x_0;
      t = t_0(t);
      t_70 = t;
      t = term_r_27;
      u_70 = t;
      t = term_s_27;
      v_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, t_70);
      t = a_8(u_70, v_70, t_70, t);
      _fail(t);
    }
  else
    {
      ATerm z_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_70 = ATgetFirst((ATermList) t);
          q_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_70 = ATgetFirst((ATermList) t);
          s_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_70;
      t = q_0(t);
      t = r_70;
      t = r_0(t);
      z_70 = t;
      t = (ATerm) ATinsert(CheckATermList(s_70), z_70);
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm b_71 = NULL;
  b_71 = t;
  if(match_string(t, "-i"))
    {
      t = b_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_71;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL;
  c_71 = t;
  t = term_e_28;
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_28, c_71);
  t = c_8(d_71, c_71, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_71);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_8, i_8, k_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  e_71 = t;
  t = term_c_10;
  g_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_28), e_71);
  h_71 = t;
  t = SSL_printnl(g_71, h_71);
  t = term_f_10;
  f_71 = t;
  t = SSL_exit(f_71);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL;
  t = term_j_26;
  i_71 = t;
  t = term_n_28;
  j_71 = t;
  t = term_o_28;
  t = z_7(i_71, j_71, t);
  return(t);
}
static ATerm v_7 (ATerm k_41, ATerm l_41, ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_41, l_41);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = SSL_addr(k_41, l_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_142 (ATerm), ATerm d_142 (ATerm), ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  l_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_71;
      t = c_142(t);
    }
  else
    {
      ATerm q_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_71 = ATgetFirst((ATermList) t);
          n_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_71;
      t = foldr_2_0(c_142, d_142, t);
      q_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_71, q_71);
      t = d_142(t);
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
  ATerm o_34 = NULL,q_34 = NULL;
  if(match_cons(t, sym__2))
    {
      o_34 = ATgetArgument(t, 0);
      q_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(o_34, q_34, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_71 = NULL,k_34 = NULL,l_34 = NULL;
  t = times_0_0(t);
  l_34 = t;
  t = SSL_explode_term(l_34);
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_34;
  t = foldr_2_0(l_8, n_8, t);
  t_71 = t;
  t = SSL_TicksToSeconds(t_71);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  i_72 = t;
  if(match_cons(t, sym__2))
    {
      j_72 = ATgetArgument(t, 0);
      k_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_72;
        if((j_72 != t))
          {
            _fail(t);
          }
        t = i_72;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        t = (ATerm) ATmakeAppl(sym__2, j_72, k_72);
        {
          ATerm v_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_72, k_72);
              LocalPopChoice(w_28);
            }
          else
            {
              t = v_28;
              t = SSL_gtr(j_72, k_72);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_72, k_72);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  ATerm o_72 = NULL;
  o_72 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
        t = term_j_26;
        r_72 = t;
        t = term_k_26;
        s_72 = t;
        t = term_l_26;
        t = z_7(r_72, s_72, t);
        q_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_72, term_f_10);
        t = geq_0_0(t);
        t = o_72;
        t = i_130(t);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = o_72;
      }
  }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,x_72 = NULL,y_72 = NULL;
  t = run_time_0_0(t);
  u_72 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  v_72 = t;
  t = term_c_10;
  x_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_29), u_72), term_z_28), v_72);
  y_72 = t;
  t = SSL_printnl(x_72, y_72);
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_29), u_72), term_z_28), v_72));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_72 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_26;
  z_72 = t;
  t = SSL_exit(z_72);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL;
  k_73 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_73;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_73 = ATgetArgument(t, 0);
          {
            ATerm r_35 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(k_73);
            r_35 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_73);
            x_10 = t;
            t = SSLsetAnnotations(x_10, r_35);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_73;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_150 (ATerm), ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_73 = NULL,d_73 = NULL;
      t = term_j_26;
      c_73 = t;
      t = term_f_29;
      d_73 = t;
      t = term_g_29;
      t = z_7(c_73, d_73, t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = fetch_1_0(r_8, t);
    }
  t = s_150(t);
  return(t);
}
static ATerm d_8 (ATerm x_48, ATerm y_48, ATerm z_48, ATerm t)
{
  ATerm m_73 = NULL;
  t = SSL_hashtable_put(z_48, x_48, y_48);
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_73);
  return(t);
}
static ATerm e_8 (ATerm a_49, ATerm b_49, ATerm t)
{
  t = SSL_hashtable_get(b_49, a_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_45, ATerm t)
{
  ATerm v_73 = NULL;
  t = table_hashtable_0_0(t);
  v_73 = t;
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_36 = NULL;
        t = v_73;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_8(r_45, a_36, t);
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        {
          ATerm h_36 = NULL;
          t = r_45;
          t = table_create_0_0(t);
          t = v_73;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_8(r_45, h_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm f_49, ATerm g_49, ATerm t)
{
  ATerm y_73 = NULL;
  t = SSL_hashtable_create(f_49, g_49);
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_73);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,d_74 = NULL,e_74 = NULL;
  z_73 = t;
  t = term_l_29;
  d_74 = t;
  t = term_m_29;
  e_74 = t;
  t = z_73;
  t = new_hashtable_0_2(d_74, e_74, t);
  a_74 = t;
  t = z_73;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(z_73, a_74, b_74, t);
  t = z_73;
  return(t);
}
static ATerm x_7 (ATerm c_49, ATerm d_49, ATerm t)
{
  ATerm f_74 = NULL;
  t = SSL_hashtable_remove(d_49, c_49);
  f_74 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_74);
  return(t);
}
static ATerm y_7 (ATerm h_49, ATerm t)
{
  ATerm g_74 = NULL;
  t = SSL_hashtable_destroy(h_49);
  g_74 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_74);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_74 = NULL;
  t = SSL_table_hashtable();
  h_74 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_74);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,p_74 = NULL,q_74 = NULL;
  i_74 = t;
  t = table_hashtable_0_0(t);
  j_74 = t;
  t = lookup_table_0_1(i_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(q_74, t);
  t = j_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(i_74, p_74, t);
  t = i_74;
  return(t);
}
ATerm map_1_0 (ATerm f_136 (ATerm), ATerm t)
{
  static ATerm g_75 (ATerm t)
  {
    ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
    d_75 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_75;
      }
    else
      {
        ATerm u_36 = NULL,a_37 = NULL,b_37 = NULL,z_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_75 = ATgetFirst((ATermList) t);
            f_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_75);
        u_36 = t;
        t = e_75;
        t = f_136(t);
        a_37 = t;
        t = f_75;
        t = g_75(t);
        b_37 = t;
        t = (ATerm) ATinsert(CheckATermList(b_37), a_37);
        z_10 = t;
        t = SSLsetAnnotations(z_10, u_36);
      }
    return(t);
  }
  t = g_75(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_75 = ATgetFirst((ATermList) t);
      k_75 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_75 = NULL,p_75 = NULL;
        static ATerm s_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_75)), not_null(p_75));
          return(t);
        }
        t = k_75;
        t = o_0(t);
        if(((o_75 != NULL) && (o_75 != t)))
          _fail(t);
        else
          o_75 = t;
        t = j_75;
        t = l_0(t);
        if(((p_75 != NULL) && (p_75 != t)))
          _fail(t);
        else
          p_75 = t;
        t = k_75;
        t = reverse_acc_2_0(l_0, s_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_0;
      t = o_0(t);
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,e_11 = NULL;
  x_75 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_75);
  v_75 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_75);
  e_11 = t;
  t = SSLsetAnnotations(e_11, v_75);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm a_76 = NULL;
  a_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_76), term_n_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL;
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_75 = NULL,u_75 = NULL;
      t = term_j_26;
      t_75 = t;
      t = term_n_28;
      u_75 = t;
      t = term_o_28;
      t = z_7(t_75, u_75, t);
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
  r_75 = t;
  t = term_s_27;
  s_75 = t;
  t = term_s_29;
  t = z_7(r_75, s_75, t);
  t = reverse_acc_2_0(_id, v_8, t);
  t = map_1_0(x_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  {
    ATerm t_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_76;
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
            t = g_76;
          }
        LocalPopChoice(z_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATinsert(ATempty, g_76);
      }
  }
  h_76 = t;
  t = term_t_24;
  i_76 = t;
  t = SSL_printnl(i_76, h_76);
  t = g_76;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL;
  t = term_j_26;
  m_76 = t;
  t = term_n_28;
  n_76 = t;
  t = term_o_28;
  t = z_7(m_76, n_76, t);
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
  ATerm o_76 = NULL,p_76 = NULL;
  t = term_d_30;
  o_76 = t;
  t = term_x_0;
  p_76 = t;
  t = term_e_30;
  t = c_8(o_76, p_76, t);
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
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
  t = term_d_30;
  s_76 = t;
  t = term_x_0;
  t_76 = t;
  t = term_e_30;
  t = c_8(s_76, t_76, t);
  t = term_g_30;
  q_76 = t;
  t = term_x_0;
  r_76 = t;
  t = term_h_30;
  t = c_8(q_76, r_76, t);
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
ATerm Cons_2_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,i_11 = NULL;
  z_76 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_76 = ATgetFirst((ATermList) t);
      w_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_76);
  u_76 = t;
  t = v_76;
  t = t_104(t);
  x_76 = t;
  t = w_76;
  t = u_104(t);
  y_76 = t;
  t = (ATerm) ATinsert(CheckATermList(y_76), x_76);
  i_11 = t;
  t = SSLsetAnnotations(i_11, u_76);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_152 (ATerm), ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,j_77 = NULL,k_77 = NULL,k_11 = NULL;
  e_77 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_30;
        t = v_152(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
      }
  }
  t = e_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_77 = ATgetFirst((ATermList) t);
      h_77 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_77);
  f_77 = t;
  t = term_n_28;
  k_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_28, g_77);
  t = c_8(k_77, g_77, t);
  t = h_77;
  {
    static ATerm u_77 (ATerm t)
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_77 = NULL;
              n_77 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_77;
              LocalPopChoice(a_31);
            }
          else
            {
              t = t_30;
              t = v_152(t);
              t = Cons_2_0(_id, u_77, t);
            }
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm q_77 = NULL,r_77 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_77 = ATgetFirst((ATermList) t);
                r_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_77), (ATerm) ATmakeAppl(sym_Undefined_1, q_77));
          }
        }
      return(t);
    }
    t = u_77(t);
  }
  j_77 = t;
  t = (ATerm) ATinsert(CheckATermList(j_77), (ATerm) ATmakeAppl(sym_Program_1, g_77));
  k_11 = t;
  t = SSLsetAnnotations(k_11, f_77);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm h_78 = NULL;
  h_78 = t;
  if(match_string(t, "--help"))
    {
      t = h_78;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_78;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_78;
        }
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL;
  t = term_f_29;
  i_78 = t;
  t = term_x_0;
  j_78 = t;
  t = term_c_31;
  t = c_8(i_78, j_78, t);
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
ATerm parse_options_1_0 (ATerm u_152 (ATerm), ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
  b_78 = t;
  t = term_r_27;
  c_78 = t;
  t = term_f_31;
  t = lookup_table_0_1(c_78, t);
  g_78 = t;
  t = term_s_27;
  d_78 = t;
  t = (ATerm) ATempty;
  e_78 = t;
  t = g_78;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(d_78, e_78, f_78, t);
  t = b_78;
  {
    static ATerm i_9 (ATerm t)
    {
      ATerm g_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_152(t);
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
        ATerm u_78 = NULL;
        u_78 = t;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_37 = NULL;
              t = u_78;
              {
                ATerm o_31 = t;
                int p_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_37 = NULL,z_37 = NULL;
                    t = term_j_26;
                    x_37 = t;
                    t = term_f_29;
                    z_37 = t;
                    t = term_g_29;
                    t = z_7(x_37, z_37, t);
                    LocalPopChoice(p_31);
                  }
                else
                  {
                    t = o_31;
                    t = fetch_1_0(m_9, t);
                  }
              }
              t = u_78;
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
                ATerm g_38 = NULL,i_38 = NULL,l_38 = NULL;
                t = term_j_26;
                i_38 = t;
                t = term_d_30;
                l_38 = t;
                t = term_q_31;
                t = z_7(i_38, l_38, t);
                t = u_78;
                t = default_system_about_0_0(t);
                t = term_q_26;
                g_38 = t;
                t = SSL_exit(g_38);
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
              ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL;
              static ATerm n_9 (ATerm t)
              {
                ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL,m_11 = NULL;
                a_79 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_78 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_79);
                y_78 = t;
                t = z_78;
                if(((z_77 != NULL) && (z_77 != t)))
                  _fail(t);
                else
                  z_77 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_78);
                m_11 = t;
                t = SSLsetAnnotations(m_11, y_78);
                return(t);
              }
              t = fetch_1_0(n_9, t);
              t = term_c_10;
              w_78 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_77)), term_t_31);
              x_78 = t;
              t = SSL_printnl(w_78, x_78);
              t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_77)), term_t_31));
              t = default_system_usage_0_0(t);
              t = term_f_10;
              v_78 = t;
              t = SSL_exit(v_78);
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
            }
        }
      }
  }
  a_78 = t;
  t = term_r_27;
  t = table_destroy_0_0(t);
  t = a_78;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_150 (ATerm), ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
  t = parse_options_1_0(u_150, t);
  f_79 = t;
  t = term_u_31;
  t = table_create_0_0(t);
  t = term_u_31;
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_31, term_v_31, f_79);
  t = lookup_table_0_1(g_79, t);
  j_79 = t;
  t = term_v_31;
  h_79 = t;
  t = j_79;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(h_79, f_79, i_79, t);
  t = f_79;
  t = w_150(t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_150, t);
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
              t = x_150(t);
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
  ATerm k_79 = NULL,l_79 = NULL;
  t = term_c_32;
  k_79 = t;
  t = term_x_0;
  l_79 = t;
  t = term_d_32;
  t = c_8(k_79, l_79, t);
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
  ATerm m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL;
  m_79 = t;
  t = term_j_26;
  q_79 = t;
  t = term_n_28;
  r_79 = t;
  t = term_o_28;
  t = z_7(q_79, r_79, t);
  n_79 = t;
  t = term_c_10;
  o_79 = t;
  t = (ATerm) ATinsert(ATempty, n_79);
  p_79 = t;
  t = SSL_printnl(o_79, p_79);
  t = m_79;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_150 (ATerm), ATerm e_150 (ATerm), ATerm f_150 (ATerm), ATerm t)
{
  static ATerm o_9 (ATerm t)
  {
    ATerm g_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_150(t);
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
    ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
    t_79 = t;
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_79 != NULL) && (s_79 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_79 = ATgetArgument(t, 0);
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
          t = term_w_32;
          s_79 = t;
        }
    }
    t = not_null(s_79);
    t = ReadFromFile_0_0(t);
    u_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_79, u_79);
    t = apply_strategy_1_0(d_150, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_9, f_150, p_9, q_9, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,r_11 = NULL;
  z_79 = t;
  if(match_cons(t, sym__2))
    {
      w_79 = ATgetArgument(t, 0);
      x_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_79);
  v_79 = t;
  t = x_79;
  t = lift_definitions_0_0(t);
  y_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_79, y_79);
  r_11 = t;
  t = SSLsetAnnotations(r_11, v_79);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_10, _fail, default_usage_0_0, t);
  return(t);
}

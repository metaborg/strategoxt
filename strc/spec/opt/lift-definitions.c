#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_DynamicRules_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Scope_2;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
static void init_module_constructors (void)
{
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
}
ATerm term_c_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_g_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_g_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_q_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_m_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_16;
ATerm term_x_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_e_9;
ATerm term_x_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_x_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_w_23);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_o_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_z_22);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_x_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_x_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_o_24, term_x_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__3, term_y_22, term_z_22, (ATerm) ATempty);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_q_25);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_x_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_121 (ATerm), ATerm t);
static ATerm f_2 (ATerm s_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_6 (ATerm f_43, ATerm g_43, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_127 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm t_6 (ATerm v_24, ATerm u_24, ATerm t);
ATerm foldr_3_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm t);
static ATerm x_6 (ATerm h_123 (ATerm), ATerm o_49, ATerm n_49, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm c_7 (ATerm n_669, ATerm s_669, ATerm f_65, ATerm t);
ATerm while_not_2_0 (ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm p_22 (ATerm v_19, ATerm a_20, ATerm b_20, ATerm t);
static ATerm y_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm free_vars_3_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm k_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm b_128 (ATerm), ATerm t);
static ATerm e_7 (ATerm r_23, ATerm q_23, ATerm t);
static ATerm f_7 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm u_49, ATerm t_49, ATerm t);
static ATerm g_7 (ATerm m_123 (ATerm), ATerm q_49, ATerm p_49, ATerm t);
ATerm genzip_4_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm CollectSplit_2_0 (ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm y_124 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm k_7 (ATerm k_23, ATerm l_23, ATerm m_23, ATerm n_23, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm l_7 (ATerm c_120 (ATerm), ATerm q_41, ATerm o_41, ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm n_7 (ATerm v_32, ATerm w_32, ATerm t);
static ATerm o_7 (ATerm n_31, ATerm o_31, ATerm t);
static ATerm q_7 (ATerm t_115 (ATerm), ATerm e_227, ATerm t_31, ATerm t);
static ATerm p_7 (ATerm j_31, ATerm k_31, ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm p_135 (ATerm), ATerm t);
static ATerm x_56 (ATerm r_56, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_7 (ATerm p_31, ATerm t);
static ATerm s_7 (ATerm t_58, ATerm u_58, ATerm t);
static ATerm t_7 (ATerm x_32, ATerm y_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_58 (ATerm h_57, ATerm t);
static ATerm j_58 (ATerm l_57, ATerm m_57, ATerm n_57, ATerm t);
static ATerm k_58 (ATerm v_57, ATerm w_57, ATerm x_57, ATerm t);
static ATerm u_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_121 (ATerm), ATerm t);
static ATerm z_7 (ATerm n_44, ATerm o_44, ATerm t);
ATerm if_verbose2_1_0 (ATerm k_117 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_8 (ATerm d_37, ATerm e_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_8 (ATerm u_42, ATerm v_42, ATerm t_42, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_7 (ATerm z_39, ATerm a_40, ATerm t);
ATerm foldr_2_0 (ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_117 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm need_help_1_0 (ATerm n_136 (ATerm), ATerm t);
static ATerm d_8 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm t);
static ATerm e_8 (ATerm p_46, ATerm q_46, ATerm t);
ATerm lookup_table_0_1 (ATerm g_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_46, ATerm v_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm x_7 (ATerm r_46, ATerm s_46, ATerm t);
static ATerm y_7 (ATerm w_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_120 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_138 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm parse_options_1_0 (ATerm p_138 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm iowrap_3_0 (ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm t);
static ATerm d_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  a_0 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_e_9;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), m_0), term_j_9);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_l_9;
  o_0 = t;
  t = SSL_exit(o_0);
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
      static ATerm r_0 (ATerm t)
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
      t = at_end_1_0(r_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_121 (ATerm), ATerm t)
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
        t = j_121(t);
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
      ATerm m_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_9) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm n_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_0 (ATerm t)
            {
              t = x_1;
              return(t);
            }
            t = w_1;
            t = at_end_1_0(v_0, t);
            LocalPopChoice(p_9);
          }
        else
          {
            t = n_9;
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
static ATerm p_6 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm g_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_43, g_43);
  t = z_7(f_43, g_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_2 = ATgetFirst((ATermList) t);
      {
        ATerm r_9 = (ATerm) ATgetNext((ATermList) t);
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
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL;
        t = term_x_9;
        j_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_9, a_3);
        t = p_6(j_3, a_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_x_0;
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
        {
          ATerm a_10 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_3 = NULL;
              t = term_x_9;
              q_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_9, a_3);
              t = p_6(q_3, a_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm c_10 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_x_0;
              LocalPopChoice(b_10);
            }
          else
            {
              t = a_10;
              {
                ATerm d_10 = t;
                int e_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_3 = NULL;
                    t = term_x_9;
                    w_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_9, a_3);
                    t = p_6(w_3, a_3, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm f_10 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) f_10) != ATmakeSymbol("f_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_x_0;
                    LocalPopChoice(e_10);
                  }
                else
                  {
                    t = d_10;
                    {
                      ATerm c_4 = NULL;
                      t = term_x_9;
                      c_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_x_9, a_3);
                      t = p_6(c_4, a_3, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm g_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) g_10) != ATmakeSymbol("b_0", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm t_127 (ATerm), ATerm t)
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
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL,y_4 = NULL,z_4 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(q_4);
            v_4 = t;
            t = r_4;
            t = t_127(t);
            y_4 = t;
            t = s_4;
            t = filter_1_0(t_127, t);
            z_4 = t;
            t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
            e_1 = t;
            t = SSLsetAnnotations(e_1, v_4);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = s_4;
            t = filter_1_0(t_127, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
      {
        ATerm k_5 = NULL,r_5 = NULL,s_5 = NULL,g_1 = NULL;
        t = SSLgetAnnotations(t_14);
        k_5 = t;
        t = u_14;
        t = o_107(t);
        r_5 = t;
        t = v_14;
        t = o_107(t);
        s_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_5, s_5);
        g_1 = t;
        t = SSLsetAnnotations(g_1, k_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_14 = ATgetArgument(t, 0);
          v_14 = ATgetArgument(t, 1);
          s_14 = ATgetArgument(t, 2);
          {
            ATerm g_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(t_14);
            g_6 = t;
            t = u_14;
            t = q_107(t);
            k_6 = t;
            t = v_14;
            t = q_107(t);
            l_6 = t;
            t = s_14;
            t = o_107(t);
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, k_6, l_6, m_6);
            i_1 = t;
            t = SSLsetAnnotations(i_1, g_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_14 = ATgetArgument(t, 0);
              v_14 = ATgetArgument(t, 1);
              s_14 = ATgetArgument(t, 2);
              n_14 = ATgetArgument(t, 3);
              {
                ATerm b_7 = NULL,w_7 = NULL,b_8 = NULL,f_8 = NULL,g_8 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(t_14);
                b_7 = t;
                t = u_14;
                t = q_107(t);
                w_7 = t;
                t = v_14;
                t = q_107(t);
                b_8 = t;
                t = s_14;
                t = q_107(t);
                f_8 = t;
                t = n_14;
                t = o_107(t);
                g_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_7, b_8, f_8, g_8);
                j_1 = t;
                t = SSLsetAnnotations(j_1, b_7);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  u_14 = ATgetArgument(t, 0);
                  v_14 = ATgetArgument(t, 1);
                  s_14 = ATgetArgument(t, 2);
                  n_14 = ATgetArgument(t, 3);
                  {
                    ATerm z_8 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,k_1 = NULL;
                    t = SSLgetAnnotations(t_14);
                    z_8 = t;
                    t = u_14;
                    t = q_107(t);
                    f_9 = t;
                    t = v_14;
                    t = q_107(t);
                    g_9 = t;
                    t = s_14;
                    t = q_107(t);
                    h_9 = t;
                    t = n_14;
                    t = o_107(t);
                    i_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, f_9, g_9, h_9, i_9);
                    k_1 = t;
                    t = SSLsetAnnotations(k_1, z_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      u_14 = ATgetArgument(t, 0);
                      v_14 = ATgetArgument(t, 1);
                      s_14 = ATgetArgument(t, 2);
                      {
                        ATerm n_10 = NULL,u_10 = NULL,v_10 = NULL,x_10 = NULL,p_1 = NULL;
                        t = SSLgetAnnotations(t_14);
                        n_10 = t;
                        t = u_14;
                        t = q_107(t);
                        u_10 = t;
                        t = v_14;
                        t = q_107(t);
                        v_10 = t;
                        t = s_14;
                        t = q_107(t);
                        x_10 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, u_10, v_10, x_10);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, n_10);
                      }
                    }
                  else
                    {
                      ATerm m_11 = NULL,p_11 = NULL,q_11 = NULL,b_2 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          u_14 = ATgetArgument(t, 0);
                          v_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(t_14);
                      m_11 = t;
                      t = u_14;
                      t = q_107(t);
                      p_11 = t;
                      t = v_14;
                      t = o_107(t);
                      q_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Rec_2, p_11, q_11);
                      b_2 = t;
                      t = SSLsetAnnotations(b_2, m_11);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_15 = ATgetArgument(t, 0);
          {
            ATerm l_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_10);
      t = w_15;
    }
  else
    {
      t = j_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_15;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm h_16 = NULL;
  ATerm m_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_16 = ATgetArgument(t, 0);
          {
            ATerm p_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_10);
      t = h_16;
    }
  else
    {
      t = m_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_16;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm o_15 = NULL;
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm s_10 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          {
            ATerm t_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_10);
      t = o_15;
      t = map_1_0(w_0, t);
    }
  else
    {
      t = q_10;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm w_10 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          {
            ATerm y_10 = ATgetArgument(t, 2);
          }
          {
            ATerm z_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = o_15;
      t = map_1_0(y_0, t);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm o_16 = NULL;
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_16 = ATgetArgument(t, 0);
          {
            ATerm c_11 = ATgetArgument(t, 1);
          }
          {
            ATerm d_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_11);
      t = o_16;
    }
  else
    {
      t = a_11;
      if(match_cons(t, sym_SDefT_4))
        {
          o_16 = ATgetArgument(t, 0);
          {
            ATerm e_11 = ATgetArgument(t, 1);
          }
          {
            ATerm f_11 = ATgetArgument(t, 2);
          }
          {
            ATerm g_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = o_16;
    }
  return(t);
}
static ATerm t_6 (ATerm v_24, ATerm u_24, ATerm t)
{
  t = v_24;
  t = map_1_0(z_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_17;
      t = r_126(t);
    }
  else
    {
      ATerm h_17 = NULL,i_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_17 = ATgetFirst((ATermList) t);
          c_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_17;
      t = t_126(t);
      h_17 = t;
      t = c_17;
      t = foldr_3_0(r_126, s_126, t_126, t);
      i_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_17, i_17);
      t = s_126(t);
    }
  return(t);
}
static ATerm x_6 (ATerm h_123 (ATerm), ATerm o_49, ATerm n_49, ATerm t)
{
  static ATerm j_18 (ATerm t)
  {
    ATerm c_18 = NULL,d_18 = NULL,g_18 = NULL;
    c_18 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_18;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_18 = ATgetFirst((ATermList) t);
            g_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_18;
              {
                static ATerm b_1 (ATerm t)
                {
                  t = n_49;
                  return(t);
                }
                t = f_7(h_123, b_1, d_18, g_18, t);
              }
              t = j_18(t);
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              {
                ATerm z_11 = NULL,c_12 = NULL,m_2 = NULL;
                t = SSLgetAnnotations(c_18);
                z_11 = t;
                t = g_18;
                t = j_18(t);
                c_12 = t;
                t = (ATerm) ATinsert(CheckATermList(c_12), d_18);
                m_2 = t;
                t = SSLsetAnnotations(m_2, z_11);
              }
            }
        }
      }
    return(t);
  }
  t = o_49;
  t = j_18(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(((ATgetType(j_11) != AT_LIST) || !(ATisEmpty(j_11))))
        _fail(t);
      {
        ATerm k_11 = ATgetArgument(t, 1);
        if(((ATgetType(k_11) != AT_LIST) || !(ATisEmpty(k_11))))
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
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
        {
          r_18 = ATgetFirst((ATermList) l_11);
          s_18 = (ATerm) ATgetNext((ATermList) l_11);
        }
      else
        _fail(t);
      {
        ATerm n_11 = ATgetArgument(t, 1);
        if(((ATgetType(n_11) == AT_LIST) && !(ATisEmpty(n_11))))
          {
            t_18 = ATgetFirst((ATermList) n_11);
            u_18 = (ATerm) ATgetNext((ATermList) n_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_18, t_18), (ATerm) ATmakeAppl(sym__2, s_18, u_18));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      v_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_18), v_18);
  return(t);
}
static ATerm c_7 (ATerm n_669, ATerm s_669, ATerm f_65, ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  t = SSL_explode_term(s_669);
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_669);
  if(match_cons(t, sym__2))
    {
      if((m_18 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_18, o_18);
  t = genzip_4_0(d_1, f_1, h_1, _id, t);
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_18, f_65);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t)
{
  static ATerm b_19 (ATerm t)
  {
    ATerm o_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_114(t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = o_11;
        t = w_114(t);
        t = b_19(t);
      }
    return(t);
  }
  t = b_19(t);
  return(t);
}
ATerm for_3_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  t = y_114(t);
  t = while_not_2_0(z_114, a_115, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_19);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,o_2 = NULL;
  r_19 = t;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  o_19 = t;
  t = q_19;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_19, q_19);
  o_2 = t;
  t = SSLsetAnnotations(o_2, o_19);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  a_21 = t;
  if(match_cons(t, sym__2))
    {
      b_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_21 = ATgetFirst((ATermList) t);
      k_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_22(b_21, i_21, a_21, t);
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_21), j_21), k_21);
          }
      }
    }
  else
    {
      t = p_22(b_21, i_21, a_21, t);
    }
  return(t);
}
static ATerm p_22 (ATerm v_19, ATerm a_20, ATerm b_20, ATerm t)
{
  ATerm c_20 = NULL,f_20 = NULL,p_2 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  t = SSLgetAnnotations(b_20);
  c_20 = t;
  t = a_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_20;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_20;
        if((l_20 != t))
          {
            _fail(t);
          }
        t = n_20;
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = a_20;
        t = c_7(l_20, m_20, n_20, t);
      }
  }
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_19, f_20);
  p_2 = t;
  t = SSLsetAnnotations(p_2, c_20);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm l_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      if((l_22 != ATgetArgument(t, 1)))
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
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_1, u_1, v_1, t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm t_21 = NULL,u_21 = NULL,a_22 = NULL;
        t_21 = t;
        if(match_cons(t, sym__2))
          {
            u_21 = ATgetArgument(t, 0);
            a_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_21;
        t = x_6(y_1, u_21, a_22, t);
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(h_2, n_12, o_12, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      if((q_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm y_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(k_2, y_12, a_13, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      if((b_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm k_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm k_24 (ATerm t)
  {
    ATerm y_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_130(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = y_11;
        {
          ATerm b_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_22 = NULL,d_23 = NULL,i_12 = NULL,j_12 = NULL;
              x_22 = t;
              t = j_130(t);
              d_23 = t;
              t = x_22;
              {
                static ATerm z_1 (ATerm t)
                {
                  ATerm u_23 = NULL;
                  t = k_24(t);
                  u_23 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_23, d_23);
                  t = diff_0_0(t);
                  return(t);
                }
                t = k_130(z_1, k_24, c_2, t);
              }
              j_12 = t;
              t = SSL_explode_term(j_12);
              if(match_cons(t, sym__2))
                {
                  ATerm e_12 = ATgetArgument(t, 0);
                  i_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_12;
              t = foldr_3_0(d_2, e_2, _id, t);
              LocalPopChoice(d_12);
            }
          else
            {
              t = b_12;
              {
                ATerm s_12 = NULL,t_12 = NULL;
                t_12 = t;
                t = SSL_explode_term(t_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_12 = ATgetArgument(t, 0);
                    s_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_12;
                t = foldr_3_0(i_2, j_2, k_24, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_24(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_31 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
      {
        ATerm f_13 = NULL,j_13 = NULL,k_13 = NULL,s_2 = NULL;
        t = SSLgetAnnotations(a_31);
        f_13 = t;
        t = b_31;
        t = m_107(t);
        j_13 = t;
        t = v_30;
        t = k_107(t);
        k_13 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_13, k_13);
        s_2 = t;
        t = SSLsetAnnotations(s_2, f_13);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          b_31 = ATgetArgument(t, 0);
          v_30 = ATgetArgument(t, 1);
          y_30 = ATgetArgument(t, 2);
          {
            ATerm w_13 = NULL,g_14 = NULL,l_14 = NULL,o_14 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(a_31);
            w_13 = t;
            t = b_31;
            t = m_107(t);
            g_14 = t;
            t = v_30;
            t = m_107(t);
            l_14 = t;
            t = y_30;
            t = m_107(t);
            o_14 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, g_14, l_14, o_14);
            t_2 = t;
            t = SSLsetAnnotations(t_2, w_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              b_31 = ATgetArgument(t, 0);
              v_30 = ATgetArgument(t, 1);
              y_30 = ATgetArgument(t, 2);
              z_30 = ATgetArgument(t, 3);
              {
                ATerm j_15 = NULL,x_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,u_2 = NULL;
                t = SSLgetAnnotations(a_31);
                j_15 = t;
                t = b_31;
                t = m_107(t);
                x_15 = t;
                t = v_30;
                t = m_107(t);
                a_16 = t;
                t = y_30;
                t = m_107(t);
                b_16 = t;
                t = z_30;
                t = k_107(t);
                c_16 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, x_15, a_16, b_16, c_16);
                u_2 = t;
                t = SSLsetAnnotations(u_2, j_15);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  b_31 = ATgetArgument(t, 0);
                  v_30 = ATgetArgument(t, 1);
                  y_30 = ATgetArgument(t, 2);
                  z_30 = ATgetArgument(t, 3);
                  {
                    ATerm e_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,w_17 = NULL,v_2 = NULL;
                    t = SSLgetAnnotations(a_31);
                    e_17 = t;
                    t = b_31;
                    t = m_107(t);
                    p_17 = t;
                    t = v_30;
                    t = m_107(t);
                    q_17 = t;
                    t = y_30;
                    t = m_107(t);
                    r_17 = t;
                    t = z_30;
                    t = k_107(t);
                    w_17 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, p_17, q_17, r_17, w_17);
                    v_2 = t;
                    t = SSLsetAnnotations(v_2, e_17);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      b_31 = ATgetArgument(t, 0);
                      {
                        ATerm d_19 = NULL,f_19 = NULL,w_2 = NULL;
                        t = SSLgetAnnotations(a_31);
                        d_19 = t;
                        t = b_31;
                        t = k_107(t);
                        f_19 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, f_19);
                        w_2 = t;
                        t = SSLsetAnnotations(w_2, d_19);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          b_31 = ATgetArgument(t, 0);
                          {
                            ATerm l_19 = NULL,s_19 = NULL,x_2 = NULL;
                            t = SSLgetAnnotations(a_31);
                            l_19 = t;
                            t = b_31;
                            t = k_107(t);
                            s_19 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_19);
                            x_2 = t;
                            t = SSLsetAnnotations(x_2, l_19);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              b_31 = ATgetArgument(t, 0);
                              {
                                ATerm z_19 = NULL,j_20 = NULL,y_2 = NULL;
                                t = SSLgetAnnotations(a_31);
                                z_19 = t;
                                t = b_31;
                                t = k_107(t);
                                j_20 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, j_20);
                                y_2 = t;
                                t = SSLsetAnnotations(y_2, z_19);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  b_31 = ATgetArgument(t, 0);
                                  {
                                    ATerm w_20 = NULL,c_21 = NULL,z_2 = NULL;
                                    t = SSLgetAnnotations(a_31);
                                    w_20 = t;
                                    t = b_31;
                                    t = k_107(t);
                                    c_21 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, c_21);
                                    z_2 = t;
                                    t = SSLsetAnnotations(z_2, w_20);
                                  }
                                }
                              else
                                {
                                  ATerm o_21 = NULL,q_21 = NULL,b_3 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      b_31 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(a_31);
                                  o_21 = t;
                                  t = b_31;
                                  t = k_107(t);
                                  q_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, q_21);
                                  b_3 = t;
                                  t = SSLsetAnnotations(b_3, o_21);
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
static ATerm l_2 (ATerm t)
{
  ATerm t_32 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm k_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_12);
      t = t_32;
    }
  else
    {
      t = g_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_32;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm h_33 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_33 = ATgetArgument(t, 0);
          {
            ATerm p_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_12);
      t = h_33;
    }
  else
    {
      t = l_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_33;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm h_32 = NULL;
  ATerm r_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm v_12 = ATgetArgument(t, 0);
          ATerm w_12 = ATgetArgument(t, 1);
          h_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(u_12);
      t = h_32;
      t = map_1_0(l_2, t);
    }
  else
    {
      t = r_12;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm x_12 = ATgetArgument(t, 0);
          ATerm z_12 = ATgetArgument(t, 1);
          h_32 = ATgetArgument(t, 2);
          {
            ATerm c_13 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_32;
      t = map_1_0(n_2, t);
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm r_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_34);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm i_13 = t;
              int l_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_34 = NULL,v_34 = NULL,y_34 = NULL,a_35 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_34 = ATgetArgument(t, 0);
                      v_34 = ATgetArgument(t, 1);
                      y_34 = ATgetArgument(t, 2);
                      a_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_34;
                  t = map_1_0(c_3, t);
                  LocalPopChoice(l_13);
                }
              else
                {
                  t = i_13;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm r_35 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_35 = ATgetArgument(t, 0);
          {
            ATerm o_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_13);
      t = r_35;
    }
  else
    {
      t = m_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_35;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm a_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_36);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            {
              ATerm t_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_36 = ATgetArgument(t, 0);
                      d_36 = ATgetArgument(t, 1);
                      e_36 = ATgetArgument(t, 2);
                      f_36 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_36;
                  t = map_1_0(f_3, t);
                  LocalPopChoice(u_13);
                }
              else
                {
                  t = t_13;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm t_36 = NULL;
  ATerm v_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_36 = ATgetArgument(t, 0);
          {
            ATerm y_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_13);
      t = t_36;
    }
  else
    {
      t = v_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_36;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm l_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_37);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            {
              ATerm d_14 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_37 = NULL,t_37 = NULL,x_37 = NULL,a_38 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_37 = ATgetArgument(t, 0);
                      t_37 = ATgetArgument(t, 1);
                      x_37 = ATgetArgument(t, 2);
                      a_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_37;
                  t = map_1_0(i_3, t);
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = d_14;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm h_38 = NULL;
  ATerm f_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_38 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_14);
      t = h_38;
    }
  else
    {
      t = f_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_38;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm s_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_38);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm m_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_14);
          }
        else
          {
            t = m_14;
            {
              ATerm q_14 = t;
              int r_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_38 = NULL,w_38 = NULL,x_38 = NULL,a_39 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_38 = ATgetArgument(t, 0);
                      w_38 = ATgetArgument(t, 1);
                      x_38 = ATgetArgument(t, 2);
                      a_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_38;
                  t = map_1_0(m_3, t);
                  LocalPopChoice(r_14);
                }
              else
                {
                  t = q_14;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm k_39 = NULL;
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_39 = ATgetArgument(t, 0);
          {
            ATerm y_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_14);
      t = k_39;
    }
  else
    {
      t = w_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_39;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm p_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_39);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm d_15 = t;
              int e_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,b_40 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_39 = ATgetArgument(t, 0);
                      x_39 = ATgetArgument(t, 1);
                      y_39 = ATgetArgument(t, 2);
                      b_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_39;
                  t = map_1_0(p_3, t);
                  LocalPopChoice(e_15);
                }
              else
                {
                  t = d_15;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm k_40 = NULL;
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_40 = ATgetArgument(t, 0);
          {
            ATerm h_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_15);
      t = k_40;
    }
  else
    {
      t = f_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_40;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm n_34 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      n_34 = ATgetArgument(t, 0);
      t = n_34;
      t = free_vars_3_0(q_2, r_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          n_34 = ATgetArgument(t, 0);
          t = n_34;
          t = free_vars_3_0(d_3, e_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              n_34 = ATgetArgument(t, 0);
              t = n_34;
              t = free_vars_3_0(g_3, h_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  n_34 = ATgetArgument(t, 0);
                  t = n_34;
                  t = free_vars_3_0(k_3, l_3, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      n_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_34;
                  t = free_vars_3_0(n_3, o_3, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm i_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_41);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = i_15;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm n_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_41 = ATgetArgument(t, 0);
                      l_41 = ATgetArgument(t, 1);
                      m_41 = ATgetArgument(t, 2);
                      n_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_41;
                  t = map_1_0(t_3, t);
                  LocalPopChoice(p_15);
                }
              else
                {
                  t = n_15;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm c_42 = NULL;
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_42 = ATgetArgument(t, 0);
          {
            ATerm s_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_15);
      t = c_42;
    }
  else
    {
      t = q_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_42;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm x_40 = NULL,c_41 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      c_41 = ATgetArgument(t, 0);
      t = c_41;
      if(match_cons(t, sym_Rule_3))
        {
          x_40 = ATgetArgument(t, 0);
          {
            ATerm t_15 = ATgetArgument(t, 1);
          }
          {
            ATerm u_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = x_40;
      t = free_vars_3_0(r_3, s_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          c_41 = ATgetArgument(t, 0);
          {
            ATerm v_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_41;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm r_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_42);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
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
              int g_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_42 = ATgetArgument(t, 0);
                      x_42 = ATgetArgument(t, 1);
                      y_42 = ATgetArgument(t, 2);
                      z_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_42;
                  t = map_1_0(x_3, t);
                  LocalPopChoice(g_16);
                }
              else
                {
                  t = f_16;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm j_43 = NULL;
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_43 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_16);
      t = j_43;
    }
  else
    {
      t = i_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_43;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm w_43 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      w_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_43);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
      x_43 = t;
      if(match_cons(t, sym_Let_2))
        {
          y_43 = ATgetArgument(t, 0);
          z_43 = ATgetArgument(t, 1);
          t = x_43;
          t = t_6(y_43, z_43, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              y_43 = ATgetArgument(t, 0);
              z_43 = ATgetArgument(t, 1);
              a_44 = ATgetArgument(t, 2);
              t = z_43;
              t = map_1_0(a_4, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  y_43 = ATgetArgument(t, 0);
                  z_43 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, y_43);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_43 = ATgetArgument(t, 0);
                      z_43 = ATgetArgument(t, 1);
                      a_44 = ATgetArgument(t, 2);
                      b_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_43;
                  t = map_1_0(b_4, t);
                }
            }
        }
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = Bind7_0_0(t);
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm t_44 = NULL;
  ATerm n_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_44 = ATgetArgument(t, 0);
          {
            ATerm q_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_16);
      t = t_44;
    }
  else
    {
      t = n_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_44;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm h_45 = NULL;
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_45 = ATgetArgument(t, 0);
          {
            ATerm t_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_16);
      t = h_45;
    }
  else
    {
      t = r_16;
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
static ATerm d_4 (ATerm t)
{
  ATerm u_16 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_16;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  p_42 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm v_16 = ATgetArgument(t, 0);
      ATerm w_16 = ATgetArgument(t, 1);
      ATerm x_16 = ATgetArgument(t, 2);
      ATerm y_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  q_42 = t;
  t = p_42;
  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_42;
  t = free_vars_3_0(y_3, z_3, sboundin_3_0, t);
  t = filter_1_0(d_4, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_42;
  return(t);
}
ATerm partition_1_0 (ATerm b_128 (ATerm), ATerm t)
{
  static ATerm y_47 (ATerm t)
  {
    ATerm p_47 = NULL,q_47 = NULL,v_47 = NULL;
    p_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_z_16;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_47 = ATgetFirst((ATermList) t);
            v_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,m_22 = NULL,u_22 = NULL,f_4 = NULL;
              t = SSLgetAnnotations(p_47);
              m_22 = t;
              t = q_47;
              t = b_128(t);
              f_22 = t;
              t = (ATerm) ATinsert(CheckATermList(v_47), f_22);
              f_4 = t;
              t = SSLsetAnnotations(f_4, m_22);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_17 = ATgetFirst((ATermList) t);
                  j_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_22;
              t = y_47(t);
              i_22 = t;
              t = SSL_explode_term(i_22);
              if(match_cons(t, sym__2))
                {
                  ATerm j_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) j_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm k_17 = ATgetArgument(t, 1);
                    if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
                      {
                        k_22 = ATgetFirst((ATermList) k_17);
                        {
                          ATerm l_17 = (ATerm) ATgetNext((ATermList) k_17);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(i_22);
              if(match_cons(t, sym__2))
                {
                  ATerm m_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm n_17 = ATgetArgument(t, 1);
                    if(((ATgetType(n_17) == AT_LIST) && !(ATisEmpty(n_17))))
                      {
                        ATerm o_17 = ATgetFirst((ATermList) n_17);
                        ATerm s_17 = (ATerm) ATgetNext((ATermList) n_17);
                        if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
                          {
                            u_22 = ATgetFirst((ATermList) s_17);
                            {
                              ATerm t_17 = (ATerm) ATgetNext((ATermList) s_17);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_22), f_22), u_22);
              LocalPopChoice(f_17);
            }
          else
            {
              t = d_17;
              {
                ATerm b_23 = NULL,c_23 = NULL,e_23 = NULL,f_23 = NULL,t_23 = NULL,g_4 = NULL;
                t = SSLgetAnnotations(p_47);
                f_23 = t;
                t = (ATerm) ATinsert(CheckATermList(v_47), q_47);
                g_4 = t;
                t = SSLsetAnnotations(g_4, f_23);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm u_17 = ATgetFirst((ATermList) t);
                    c_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_23;
                t = y_47(t);
                b_23 = t;
                t = SSL_explode_term(b_23);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_17 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_17) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm x_17 = ATgetArgument(t, 1);
                      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
                        {
                          e_23 = ATgetFirst((ATermList) x_17);
                          {
                            ATerm y_17 = (ATerm) ATgetNext((ATermList) x_17);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(b_23);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_17 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_17) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm a_18 = ATgetArgument(t, 1);
                      if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
                        {
                          ATerm b_18 = ATgetFirst((ATermList) a_18);
                          ATerm e_18 = (ATerm) ATgetNext((ATermList) a_18);
                          if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
                            {
                              t_23 = ATgetFirst((ATermList) e_18);
                              {
                                ATerm f_18 = (ATerm) ATgetNext((ATermList) e_18);
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
                t = (ATerm) ATmakeAppl(sym__2, e_23, (ATerm) ATinsert(CheckATermList(t_23), q_47));
              }
            }
        }
      }
    return(t);
  }
  t = y_47(t);
  return(t);
}
static ATerm e_7 (ATerm r_23, ATerm q_23, ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  t = r_23;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_48;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, f_48, q_23), g_48);
  return(t);
}
static ATerm f_7 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm u_49, ATerm t_49, ATerm t)
{
  t = q_123(t);
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm j_48 = NULL;
      j_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_49, j_48);
      t = p_123(t);
      return(t);
    }
    t = fetch_1_0(e_4, t);
  }
  t = t_49;
  return(t);
}
static ATerm g_7 (ATerm m_123 (ATerm), ATerm q_49, ATerm p_49, ATerm t)
{
  static ATerm l_49 (ATerm t)
  {
    ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
    d_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_49;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_49 = ATgetFirst((ATermList) t);
            f_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_49;
              {
                static ATerm h_4 (ATerm t)
                {
                  t = p_49;
                  return(t);
                }
                t = f_7(m_123, h_4, e_49, f_49, t);
              }
              t = l_49(t);
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              {
                ATerm d_24 = NULL,l_24 = NULL,l_4 = NULL;
                t = SSLgetAnnotations(d_49);
                d_24 = t;
                t = f_49;
                t = l_49(t);
                l_24 = t;
                t = (ATerm) ATinsert(CheckATermList(l_24), e_49);
                l_4 = t;
                t = SSLsetAnnotations(l_4, d_24);
              }
            }
        }
      }
    return(t);
  }
  t = q_49;
  t = l_49(t);
  return(t);
}
ATerm genzip_4_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t)
{
  static ATerm c_50 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_112(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm r_49 = NULL,s_49 = NULL,w_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,n_4 = NULL;
          t = w_112(t);
          b_50 = t;
          if(match_cons(t, sym__2))
            {
              s_49 = ATgetArgument(t, 0);
              w_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_50);
          r_49 = t;
          t = s_49;
          t = y_112(t);
          z_49 = t;
          t = w_49;
          t = c_50(t);
          a_50 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_49, a_50);
          n_4 = t;
          t = SSLsetAnnotations(n_4, r_49);
          t = x_112(t);
        }
      }
    return(t);
  }
  t = c_50(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_51 = ATgetFirst((ATermList) t);
      k_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm l_51 = NULL,o_51 = NULL,p_51 = NULL,r_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(match_cons(q_18, sym__2))
        {
          l_51 = ATgetArgument(q_18, 0);
          o_51 = ATgetArgument(q_18, 1);
        }
      else
        _fail(t);
      {
        ATerm x_18 = ATgetArgument(t, 1);
        if(match_cons(x_18, sym__2))
          {
            p_51 = ATgetArgument(x_18, 0);
            r_51 = ATgetArgument(x_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_51), l_51), (ATerm) ATinsert(CheckATermList(r_51), o_51));
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  if(match_cons(t, sym__2))
    {
      s_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(p_4, s_51, t_51, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_51 = NULL;
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      if((u_51 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm v_51 = NULL;
  if(match_cons(t, sym__2))
    {
      v_51 = ATgetArgument(t, 0);
      if((v_51 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,q_50 = NULL,t_50 = NULL,u_50 = NULL,x_50 = NULL,y_50 = NULL,f_51 = NULL;
  y_50 = t;
  f_51 = t;
  t = SSL_explode_term(f_51);
  if(match_cons(t, sym__2))
    {
      f_50 = ATgetArgument(t, 0);
      d_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_50);
  h_50 = t;
  t = d_50;
  t = genzip_4_0(i_4, j_4, k_4, a_125, t);
  if(match_cons(t, sym__2))
    {
      g_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(f_50, g_50);
  x_50 = t;
  t = SSLsetAnnotations(x_50, h_50);
  t = b_125(t);
  if(match_cons(t, sym__2))
    {
      i_50 = ATgetArgument(t, 0);
      q_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_50;
  t = foldr_2_0(m_4, o_4, t);
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_50, u_50);
  t = g_7(t_4, q_50, u_50, t);
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_50, t_50);
  return(t);
}
ATerm collect_split_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  static ATerm y_51 (ATerm t)
  {
    static ATerm w_4 (ATerm t)
    {
      ATerm y_18 = t;
      int z_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_124(t);
          LocalPopChoice(z_18);
        }
      else
        {
          t = y_18;
          {
            ATerm w_51 = NULL;
            w_51 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_51, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(y_51, w_4, t);
    return(t);
  }
  t = y_51(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      c_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(c_52, d_52, t);
  return(t);
}
static ATerm k_7 (ATerm k_23, ATerm l_23, ATerm m_23, ATerm n_23, ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  t = n_23;
  t = collect_split_1_0(x_4, t);
  if(match_cons(t, sym__2))
    {
      z_51 = ATgetArgument(t, 0);
      a_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, k_23, l_23, m_23, z_51)));
  t = conc_0_0(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_x_9;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_x_9;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,j_52 = NULL,k_52 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      g_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
      j_52 = ATgetArgument(t, 2);
      {
        ATerm o_52 = NULL;
        t = term_c_19;
        o_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_52, term_c_19);
        t = l_7(a_5, g_52, o_52, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, g_52, h_52, j_52);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          g_52 = ATgetArgument(t, 0);
          h_52 = ATgetArgument(t, 1);
          j_52 = ATgetArgument(t, 2);
          k_52 = ATgetArgument(t, 3);
          {
            ATerm t_52 = NULL;
            t = term_g_19;
            t_52 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_52, term_g_19);
            t = l_7(b_5, g_52, t_52, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, g_52, h_52, j_52, k_52);
          }
        }
      else
        {
          ATerm y_52 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              g_52 = ATgetArgument(t, 0);
              h_52 = ATgetArgument(t, 1);
              j_52 = ATgetArgument(t, 2);
              k_52 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_i_19;
          y_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_52, term_i_19);
          t = l_7(c_5, g_52, y_52, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, g_52, h_52, j_52, k_52);
        }
    }
  return(t);
}
static ATerm l_7 (ATerm c_120 (ATerm), ATerm q_41, ATerm o_41, ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
  c_53 = t;
  t = c_120(t);
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_52, q_41, o_41);
  t = a_8(z_52, q_41, o_41, t);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_53 = NULL;
        t = term_m_19;
        h_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_52, term_m_19);
        t = z_7(z_52, h_53, t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_53 = ATgetFirst((ATermList) t);
      b_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_52, term_m_19, (ATerm) ATinsert(CheckATermList(b_53), (ATerm) ATinsert(CheckATermList(a_53), q_41)));
  t = lookup_table_0_1(z_52, t);
  g_53 = t;
  t = term_m_19;
  d_53 = t;
  t = (ATerm) ATinsert(CheckATermList(b_53), (ATerm) ATinsert(CheckATermList(a_53), q_41));
  e_53 = t;
  t = g_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(d_53, e_53, f_53, t);
  t = c_53;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  j_53 = t;
  t = term_u_19;
  k_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_53, term_u_19);
  t = l_7(e_5, j_53, k_53, t);
  t = j_53;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm i_53 = NULL;
  i_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_19), term_w_19);
  t = map_1_0(d_5, t);
  t = i_53;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,u_4 = NULL;
  x_53 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_53);
  u_53 = t;
  t = v_53;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(j_5, t);
  t = concat_0_0(t);
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_53);
  u_4 = t;
  t = SSLsetAnnotations(u_4, u_53);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,d_54 = NULL;
  d_54 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_53 = ATgetArgument(t, 0);
      z_53 = ATgetArgument(t, 1);
      a_54 = ATgetArgument(t, 2);
      b_54 = ATgetArgument(t, 3);
      {
        ATerm y_19 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_54;
            t = k_7(y_53, z_53, a_54, b_54, t);
            LocalPopChoice(d_20);
          }
        else
          {
            t = y_19;
            t = (ATerm) ATinsert(ATempty, d_54);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, d_54);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,i_5 = NULL,h_5 = NULL;
  t = declare_standard_strategies_0_0(t);
  t_53 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_53);
  m_53 = t;
  t = n_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_53 = ATgetFirst((ATermList) t);
      q_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_53);
  o_53 = t;
  t = q_53;
  t = Cons_2_0(f_5, g_5, t);
  r_53 = t;
  t = (ATerm) ATinsert(CheckATermList(r_53), p_53);
  h_5 = t;
  t = SSLsetAnnotations(h_5, o_53);
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_53);
  i_5 = t;
  t = SSLsetAnnotations(i_5, m_53);
  return(t);
}
static ATerm n_7 (ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm k_54 = NULL;
  t = SSL_fputc(v_32, w_32);
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_54);
  return(t);
}
static ATerm o_7 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm l_54 = NULL;
  t = SSL_write_term_to_stream_text(n_31, o_31);
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_54);
  return(t);
}
static ATerm q_7 (ATerm t_115 (ATerm), ATerm e_227, ATerm t_31, ATerm t)
{
  ATerm m_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_227, term_e_20);
  t = u_7(t);
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_54, t_31);
  t = t_115(t);
  t = fclose_0_0(t);
  t = t_31;
  return(t);
}
static ATerm p_7 (ATerm j_31, ATerm k_31, ATerm t)
{
  ATerm n_54 = NULL;
  t = SSL_write_term_to_stream_baf(j_31, k_31);
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_54);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if(match_cons(g_20, sym_Stream_1))
        {
          b_25 = ATgetArgument(g_20, 0);
        }
      else
        _fail(t);
      c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(b_25, c_25, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm r_25 = NULL,u_25 = NULL,y_25 = NULL,b_26 = NULL,c_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_20 = ATgetArgument(t, 0);
      if(match_cons(h_20, sym_Stream_1))
        {
          b_26 = ATgetArgument(h_20, 0);
        }
      else
        _fail(t);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(b_26, c_26, t);
  r_25 = t;
  t = term_i_20;
  u_25 = t;
  t = r_25;
  if(match_cons(t, sym_Stream_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, r_25);
  t = n_7(u_25, y_25, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,b_56 = NULL,c_56 = NULL,q_5 = NULL,p_5 = NULL;
  s_54 = t;
  if(match_cons(t, sym__2))
    {
      z_54 = ATgetArgument(t, 0);
      a_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_54);
  y_54 = t;
  t = z_54;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_54 != NULL) && (r_54 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(l_5, t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = term_q_20;
        r_54 = t;
      }
  }
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_55, a_55);
  p_5 = t;
  t = SSLsetAnnotations(p_5, y_54);
  t = s_54;
  if(match_cons(t, sym__2))
    {
      u_54 = ATgetArgument(t, 0);
      v_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_54);
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_54, (ATerm) ATmakeAppl(sym__2, not_null(r_54), v_54));
  q_5 = t;
  t = SSLsetAnnotations(q_5, t_54);
  x_54 = t;
  if(match_cons(t, sym__2))
    {
      b_56 = ATgetArgument(t, 0);
      c_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,t_5 = NULL;
        t = SSLgetAnnotations(x_54);
        s_24 = t;
        t = b_56;
        t = fetch_1_0(m_5, t);
        x_24 = t;
        t = c_56;
        if(match_cons(t, sym__2))
          {
            z_24 = ATgetArgument(t, 0);
            a_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_7(n_5, z_24, a_25, t);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_24, y_24);
        t_5 = t;
        t = SSLsetAnnotations(t_5, s_24);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          ATerm h_25 = NULL,k_25 = NULL,l_25 = NULL,n_25 = NULL,u_5 = NULL;
          t = SSLgetAnnotations(x_54);
          h_25 = t;
          t = c_56;
          if(match_cons(t, sym__2))
            {
              l_25 = ATgetArgument(t, 0);
              n_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_7(o_5, l_25, n_25, t);
          k_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_56, k_25);
          u_5 = t;
          t = SSLsetAnnotations(u_5, h_25);
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
ATerm apply_strategy_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  j_56 = t;
  t = dtime_0_0(t);
  t = j_56;
  t = p_135(t);
  i_56 = t;
  t = dtime_0_0(t);
  f_56 = t;
  t = i_56;
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_56), (ATerm) ATmakeAppl(sym_Runtime_1, f_56)), h_56);
  return(t);
}
static ATerm x_56 (ATerm r_56, ATerm t)
{
  t = SSL_fclose(r_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL;
  v_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_56 = ATgetArgument(t, 0);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_56);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = x_56(v_56, t);
          }
      }
    }
  else
    {
      t = x_56(v_56, t);
    }
  return(t);
}
static ATerm r_7 (ATerm p_31, ATerm t)
{
  t = SSL_read_term_from_stream(p_31);
  return(t);
}
static ATerm s_7 (ATerm t_58, ATerm u_58, ATerm t)
{
  t = SSL_strcat(t_58, u_58);
  return(t);
}
static ATerm t_7 (ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm y_56 = NULL;
  t = SSL_fopen(x_32, y_32);
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_56);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_56 = NULL;
  t = SSL_stdin_stream();
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_56);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_57 = NULL;
  t = SSL_stdout_stream();
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_57 = NULL;
  t = SSL_stderr_stream();
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_57);
  return(t);
}
static ATerm i_58 (ATerm h_57, ATerm t)
{
  ATerm i_57 = NULL;
  t = SSL_explode_term(h_57);
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
          {
            i_57 = ATgetFirst((ATermList) x_20);
            {
              ATerm y_20 = (ATerm) ATgetNext((ATermList) x_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_57;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_57;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_57;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_57;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_58 (ATerm l_57, ATerm m_57, ATerm n_57, ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,t_57 = NULL,j_7 = NULL;
  t = SSLgetAnnotations(n_57);
  q_57 = t;
  t = l_57;
  if(match_cons(t, sym_Path_1))
    {
      t_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_57, m_57);
  j_7 = t;
  t = SSLsetAnnotations(j_7, q_57);
  if(match_cons(t, sym__2))
    {
      o_57 = ATgetArgument(t, 0);
      p_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(o_57, p_57, t);
  return(t);
}
static ATerm k_58 (ATerm v_57, ATerm w_57, ATerm x_57, ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,d_58 = NULL,j_8 = NULL;
  t = SSLgetAnnotations(x_57);
  a_58 = t;
  t = SSL_is_string(v_57);
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_58, w_57);
  j_8 = t;
  t = SSLsetAnnotations(j_8, a_58);
  if(match_cons(t, sym__2))
    {
      y_57 = ATgetArgument(t, 0);
      z_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(y_57, z_57, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
  f_58 = t;
  if(match_cons(t, sym__2))
    {
      g_58 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
      {
        ATerm z_20 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_58(f_58, t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = z_20;
            {
              ATerm e_21 = t;
              int f_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_58(g_58, h_58, f_58, t);
                  LocalPopChoice(f_21);
                }
              else
                {
                  t = e_21;
                  t = k_58(g_58, h_58, f_58, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_58(f_58, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,v_58 = NULL;
  v_58 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_58, term_l_21);
        t = u_7(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm f_27 = NULL,j_27 = NULL;
          t = term_m_21;
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_21, v_58);
          t = s_7(j_27, v_58, t);
          f_27 = t;
          t = SSL_perror(f_27);
          _fail(t);
        }
      }
  }
  n_58 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(o_58, t);
  m_58 = t;
  t = n_58;
  t = fclose_0_0(t);
  t = m_58;
  return(t);
}
ATerm fetch_1_0 (ATerm c_121 (ATerm), ATerm t)
{
  static ATerm u_59 (ATerm t)
  {
    ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
    r_59 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_59 = ATgetFirst((ATermList) t);
        t_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_21 = t;
      int p_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_27 = NULL,e_28 = NULL,n_8 = NULL;
          t = SSLgetAnnotations(r_59);
          v_27 = t;
          t = s_59;
          t = c_121(t);
          e_28 = t;
          t = (ATerm) ATinsert(CheckATermList(t_59), e_28);
          n_8 = t;
          t = SSLsetAnnotations(n_8, v_27);
          LocalPopChoice(p_21);
        }
      else
        {
          t = n_21;
          {
            ATerm y_28 = NULL,d_29 = NULL,o_8 = NULL;
            t = SSLgetAnnotations(r_59);
            y_28 = t;
            t = t_59;
            t = u_59(t);
            d_29 = t;
            t = (ATerm) ATinsert(CheckATermList(d_29), s_59);
            o_8 = t;
            t = SSLsetAnnotations(o_8, y_28);
          }
        }
    }
    return(t);
  }
  t = u_59(t);
  return(t);
}
static ATerm z_7 (ATerm n_44, ATerm o_44, ATerm t)
{
  ATerm x_59 = NULL;
  t = lookup_table_0_1(n_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(o_44, x_59, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  ATerm a_60 = NULL;
  a_60 = t;
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
        t = term_v_21;
        d_60 = t;
        t = term_w_21;
        e_60 = t;
        t = term_x_21;
        t = z_7(d_60, e_60, t);
        c_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_60, term_y_21);
        t = geq_0_0(t);
        t = a_60;
        t = k_117(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = a_60;
      }
  }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm h_60 = NULL;
  h_60 = t;
  if(match_string(t, "-k"))
    {
      t = h_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_60;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
  i_60 = t;
  t = SSL_string_to_int(i_60);
  j_60 = t;
  t = term_z_21;
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, j_60);
  t = c_8(k_60, j_60, t);
  t = i_60;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, w_5, x_5, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  if(match_string(t, "-S"))
    {
      t = m_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_60;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  t = term_w_21;
  n_60 = t;
  t = term_c_22;
  o_60 = t;
  t = term_d_22;
  t = c_8(n_60, o_60, t);
  t = term_e_22;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  p_60 = t;
  t = SSL_string_to_int(p_60);
  q_60 = t;
  t = term_w_21;
  r_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, q_60);
  t = c_8(r_60, q_60, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_60);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL;
  t = term_n_22;
  s_60 = t;
  t = term_x_0;
  t_60 = t;
  t = term_o_22;
  t = c_8(s_60, t_60, t);
  t = term_q_22;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_5, z_5, a_6, t);
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_6, c_6, d_6, t);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = Option_3_0(e_6, f_6, h_6, t);
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm u_60 = NULL,z_60 = NULL;
  t = term_v_21;
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_21, d_37, e_37);
  t = lookup_table_0_1(u_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(d_37, e_37, z_60, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_21, d_37, e_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
      t = term_x_0;
      t = e_0(t);
      f_61 = t;
      t = term_y_22;
      g_61 = t;
      t = term_z_22;
      h_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_z_22, f_61);
      t = a_8(g_61, h_61, f_61, t);
      _fail(t);
    }
  else
    {
      ATerm k_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_61 = ATgetFirst((ATermList) t);
          e_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_61;
      t = c_0(t);
      t = term_x_0;
      t = d_0(t);
      k_61 = t;
      t = (ATerm) ATinsert(CheckATermList(e_61), k_61);
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm m_61 = NULL;
  m_61 = t;
  if(match_string(t, "-o"))
    {
      t = m_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_61;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL;
  n_61 = t;
  t = term_a_23;
  o_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, n_61);
  t = c_8(o_61, n_61, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_61);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_6, j_6, n_6, t);
  return(t);
}
static ATerm a_8 (ATerm u_42, ATerm v_42, ATerm t_42, ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_42, v_42);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            ATerm o_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_42, v_42);
        t = z_7(u_42, v_42, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATempty;
      }
  }
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_42, v_42, (ATerm) ATinsert(CheckATermList(r_61), t_42));
  t = lookup_table_0_1(u_42, t);
  u_61 = t;
  t = (ATerm) ATinsert(CheckATermList(r_61), t_42);
  s_61 = t;
  t = u_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(v_42, s_61, t_61, t);
  t = q_61;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
      t = term_x_0;
      t = n_0(t);
      f_62 = t;
      t = term_y_22;
      g_62 = t;
      t = term_z_22;
      h_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_z_22, f_62);
      t = a_8(g_62, h_62, f_62, t);
      _fail(t);
    }
  else
    {
      ATerm l_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_62 = ATgetFirst((ATermList) t);
          c_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_62;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_62 = ATgetFirst((ATermList) t);
          e_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_62;
      t = k_0(t);
      t = d_62;
      t = l_0(t);
      l_62 = t;
      t = (ATerm) ATinsert(CheckATermList(e_62), l_62);
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm n_62 = NULL;
  n_62 = t;
  if(match_string(t, "-i"))
    {
      t = n_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_62;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL;
  o_62 = t;
  t = term_p_23;
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, o_62);
  t = c_8(p_62, o_62, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_62);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_6, q_6, r_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  q_62 = t;
  t = term_e_9;
  s_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_23), q_62);
  t_62 = t;
  t = SSL_printnl(s_62, t_62);
  t = term_l_9;
  r_62 = t;
  t = SSL_exit(r_62);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL;
  t = term_v_21;
  u_62 = t;
  t = term_w_23;
  v_62 = t;
  t = term_x_23;
  t = z_7(u_62, v_62, t);
  return(t);
}
static ATerm v_7 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_39, a_40);
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = SSL_addr(z_39, a_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  x_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_62;
      t = p_126(t);
    }
  else
    {
      ATerm c_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_62 = ATgetFirst((ATermList) t);
          z_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_62;
      t = foldr_2_0(p_126, q_126, t);
      c_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_62, c_63);
      t = q_126(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(a_30, b_30, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_63 = NULL,t_29 = NULL,u_29 = NULL;
  t = times_0_0(t);
  u_29 = t;
  t = SSL_explode_term(u_29);
  if(match_cons(t, sym__2))
    {
      ATerm a_24 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_29;
  t = foldr_2_0(s_6, u_6, t);
  f_63 = t;
  t = SSL_TicksToSeconds(f_63);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
  v_63 = t;
  if(match_cons(t, sym__2))
    {
      w_63 = ATgetArgument(t, 0);
      x_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_63;
        if((w_63 != t))
          {
            _fail(t);
          }
        t = v_63;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
        {
          ATerm e_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_63, x_63);
              LocalPopChoice(f_24);
            }
          else
            {
              t = e_24;
              t = SSL_gtr(w_63, x_63);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm c_64 = NULL;
  c_64 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
        t = term_v_21;
        f_64 = t;
        t = term_w_21;
        g_64 = t;
        t = term_x_21;
        t = z_7(f_64, g_64, t);
        e_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_64, term_l_9);
        t = geq_0_0(t);
        t = c_64;
        t = j_117(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = c_64;
      }
  }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,l_64 = NULL,m_64 = NULL;
  t = run_time_0_0(t);
  i_64 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  j_64 = t;
  t = term_e_9;
  l_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_24), i_64), term_i_24), j_64);
  m_64 = t;
  t = SSL_printnl(l_64, m_64);
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_24), i_64), term_i_24), j_64));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_22;
  n_64 = t;
  t = SSL_exit(n_64);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL;
  y_64 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_64;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_64 = ATgetArgument(t, 0);
          {
            ATerm w_30 = NULL,c_9 = NULL;
            t = SSLgetAnnotations(y_64);
            w_30 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_64);
            c_9 = t;
            t = SSLsetAnnotations(c_9, w_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_64;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_64 = NULL,r_64 = NULL;
      t = term_v_21;
      q_64 = t;
      t = term_o_24;
      r_64 = t;
      t = term_p_24;
      t = z_7(q_64, r_64, t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      t = fetch_1_0(w_6, t);
    }
  t = n_136(t);
  return(t);
}
static ATerm d_8 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm b_65 = NULL;
  t = SSL_hashtable_put(o_46, m_46, n_46);
  b_65 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_65);
  return(t);
}
static ATerm e_8 (ATerm p_46, ATerm q_46, ATerm t)
{
  t = SSL_hashtable_get(q_46, p_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_44, ATerm t)
{
  ATerm o_65 = NULL;
  t = table_hashtable_0_0(t);
  o_65 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_31 = NULL;
        t = o_65;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_8(g_44, q_31, t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        {
          ATerm a_32 = NULL;
          t = g_44;
          t = table_create_0_0(t);
          t = o_65;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_8(g_44, a_32, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm r_65 = NULL;
  t = SSL_hashtable_create(u_46, v_46);
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_65);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,w_65 = NULL,x_65 = NULL;
  s_65 = t;
  t = term_t_24;
  w_65 = t;
  t = term_w_24;
  x_65 = t;
  t = s_65;
  t = new_hashtable_0_2(w_65, x_65, t);
  t_65 = t;
  t = s_65;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(s_65, t_65, u_65, t);
  t = s_65;
  return(t);
}
static ATerm x_7 (ATerm r_46, ATerm s_46, ATerm t)
{
  ATerm y_65 = NULL;
  t = SSL_hashtable_remove(s_46, r_46);
  y_65 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_65);
  return(t);
}
static ATerm y_7 (ATerm w_46, ATerm t)
{
  ATerm z_65 = NULL;
  t = SSL_hashtable_destroy(w_46);
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_65);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_66 = NULL;
  t = SSL_table_hashtable();
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_66);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
  b_66 = t;
  t = table_hashtable_0_0(t);
  c_66 = t;
  t = lookup_table_0_1(b_66, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(e_66, t);
  t = c_66;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(b_66, d_66, t);
  t = b_66;
  return(t);
}
ATerm map_1_0 (ATerm s_120 (ATerm), ATerm t)
{
  static ATerm t_66 (ATerm t)
  {
    ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
    q_66 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_66;
      }
    else
      {
        ATerm k_32 = NULL,p_32 = NULL,q_32 = NULL,o_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_66 = ATgetFirst((ATermList) t);
            s_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_66);
        k_32 = t;
        t = r_66;
        t = s_120(t);
        p_32 = t;
        t = s_66;
        t = t_66(t);
        q_32 = t;
        t = (ATerm) ATinsert(CheckATermList(q_32), p_32);
        o_9 = t;
        t = SSLsetAnnotations(o_9, k_32);
      }
    return(t);
  }
  t = t_66(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_66 = ATgetFirst((ATermList) t);
      x_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_67 = NULL,c_67 = NULL;
        static ATerm y_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_67)), not_null(c_67));
          return(t);
        }
        t = x_66;
        t = i_0(t);
        if(((b_67 != NULL) && (b_67 != t)))
          _fail(t);
        else
          b_67 = t;
        t = w_66;
        t = g_0(t);
        if(((c_67 != NULL) && (c_67 != t)))
          _fail(t);
        else
          c_67 = t;
        t = x_66;
        t = reverse_acc_2_0(g_0, y_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_0;
      t = i_0(t);
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,q_9 = NULL;
  k_67 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_67);
  i_67 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_67);
  q_9 = t;
  t = SSLsetAnnotations(q_9, i_67);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm m_67 = NULL;
  m_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_67), term_d_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_67 = NULL,h_67 = NULL;
      t = term_v_21;
      g_67 = t;
      t = term_w_23;
      h_67 = t;
      t = term_x_23;
      t = z_7(g_67, h_67, t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      t = fetch_1_0(z_6, t);
    }
  t = term_g_25;
  t = echo_0_0(t);
  t = term_y_22;
  e_67 = t;
  t = term_z_22;
  f_67 = t;
  t = term_i_25;
  t = z_7(e_67, f_67, t);
  t = reverse_acc_2_0(_id, a_7, t);
  t = map_1_0(d_7, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  {
    ATerm j_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_67;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_25 = ATgetFirst((ATermList) t);
                ATerm p_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_67;
          }
        LocalPopChoice(m_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATinsert(ATempty, o_67);
      }
  }
  p_67 = t;
  t = term_q_20;
  q_67 = t;
  t = SSL_printnl(q_67, p_67);
  t = o_67;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  t = term_v_21;
  u_67 = t;
  t = term_w_23;
  v_67 = t;
  t = term_x_23;
  t = z_7(u_67, v_67, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL;
  t = term_q_25;
  w_67 = t;
  t = term_x_0;
  x_67 = t;
  t = term_s_25;
  t = c_8(w_67, x_67, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
  t = term_q_25;
  a_68 = t;
  t = term_x_0;
  b_68 = t;
  t = term_s_25;
  t = c_8(a_68, b_68, t);
  t = term_v_25;
  y_67 = t;
  t = term_x_0;
  z_67 = t;
  t = term_w_25;
  t = c_8(y_67, z_67, t);
  t = term_x_25;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_7, i_7, m_7, t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = a_26;
      t = Option_3_0(h_8, i_8, k_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,s_9 = NULL;
  h_68 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_68 = ATgetFirst((ATermList) t);
      e_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_68);
  c_68 = t;
  t = d_68;
  t = a_93(t);
  f_68 = t;
  t = e_68;
  t = b_93(t);
  g_68 = t;
  t = (ATerm) ATinsert(CheckATermList(g_68), f_68);
  s_9 = t;
  t = SSLsetAnnotations(s_9, c_68);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_138 (ATerm), ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,r_68 = NULL,s_68 = NULL,u_9 = NULL;
  m_68 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_26;
        t = q_138(t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
      }
  }
  t = m_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_68 = ATgetFirst((ATermList) t);
      p_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_68);
  n_68 = t;
  t = term_w_23;
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, o_68);
  t = c_8(s_68, o_68, t);
  t = p_68;
  {
    static ATerm c_69 (ATerm t)
    {
      ATerm h_26 = t;
      int i_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_68 = NULL;
              v_68 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_68;
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
              t = q_138(t);
              t = Cons_2_0(_id, c_69, t);
            }
          LocalPopChoice(i_26);
        }
      else
        {
          t = h_26;
          {
            ATerm y_68 = NULL,z_68 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_68 = ATgetFirst((ATermList) t);
                z_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_68), (ATerm) ATmakeAppl(sym_Undefined_1, y_68));
          }
        }
      return(t);
    }
    t = c_69(t);
  }
  r_68 = t;
  t = (ATerm) ATinsert(CheckATermList(r_68), (ATerm) ATmakeAppl(sym_Program_1, o_68));
  u_9 = t;
  t = SSLsetAnnotations(u_9, n_68);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm p_69 = NULL;
  p_69 = t;
  if(match_string(t, "--help"))
    {
      t = p_69;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_69;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_69;
        }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  t = term_o_24;
  q_69 = t;
  t = term_x_0;
  r_69 = t;
  t = term_l_26;
  t = c_8(q_69, r_69, t);
  t = term_m_26;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_138 (ATerm), ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  j_69 = t;
  t = term_y_22;
  k_69 = t;
  t = term_o_26;
  t = lookup_table_0_1(k_69, t);
  o_69 = t;
  t = term_z_22;
  l_69 = t;
  t = (ATerm) ATempty;
  m_69 = t;
  t = o_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(l_69, m_69, n_69, t);
  t = j_69;
  {
    static ATerm l_8 (ATerm t)
    {
      ATerm p_26 = t;
      int q_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_138(t);
          LocalPopChoice(q_26);
        }
      else
        {
          t = p_26;
          {
            ATerm r_26 = t;
            int s_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_8, p_8, q_8, t);
                LocalPopChoice(s_26);
              }
            else
              {
                t = r_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_8, t);
  }
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_70 = NULL;
        c_70 = t;
        {
          ATerm v_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_33 = NULL;
              t = c_70;
              {
                ATerm x_26 = t;
                int y_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_33 = NULL,n_33 = NULL;
                    t = term_v_21;
                    m_33 = t;
                    t = term_o_24;
                    n_33 = t;
                    t = term_p_24;
                    t = z_7(m_33, n_33, t);
                    LocalPopChoice(y_26);
                  }
                else
                  {
                    t = x_26;
                    t = fetch_1_0(r_8, t);
                  }
              }
              t = c_70;
              t = default_system_usage_0_0(t);
              t = term_c_22;
              l_33 = t;
              t = SSL_exit(l_33);
              LocalPopChoice(w_26);
            }
          else
            {
              t = v_26;
              {
                ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
                t = term_v_21;
                s_33 = t;
                t = term_q_25;
                t_33 = t;
                t = term_z_26;
                t = z_7(s_33, t_33, t);
                t = c_70;
                t = default_system_about_0_0(t);
                t = term_c_22;
                r_33 = t;
                t = SSL_exit(r_33);
              }
            }
        }
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        {
          ATerm a_27 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
              static ATerm s_8 (ATerm t)
              {
                ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,w_9 = NULL;
                i_70 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_70 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_70);
                g_70 = t;
                t = h_70;
                if(((h_69 != NULL) && (h_69 != t)))
                  _fail(t);
                else
                  h_69 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_70);
                w_9 = t;
                t = SSLsetAnnotations(w_9, g_70);
                return(t);
              }
              t = fetch_1_0(s_8, t);
              t = term_e_9;
              e_70 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_69)), term_c_27);
              f_70 = t;
              t = SSL_printnl(e_70, f_70);
              t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_69)), term_c_27));
              t = default_system_usage_0_0(t);
              t = term_l_9;
              d_70 = t;
              t = SSL_exit(d_70);
              LocalPopChoice(b_27);
            }
          else
            {
              t = a_27;
            }
        }
      }
  }
  i_69 = t;
  t = term_y_22;
  t = table_destroy_0_0(t);
  t = i_69;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  t = parse_options_1_0(p_136, t);
  n_70 = t;
  t = term_d_27;
  t = table_create_0_0(t);
  t = term_d_27;
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, n_70);
  t = lookup_table_0_1(o_70, t);
  r_70 = t;
  t = term_e_27;
  p_70 = t;
  t = r_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(p_70, n_70, q_70, t);
  t = n_70;
  t = r_136(t);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_136, t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        {
          ATerm i_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_136(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_27);
            }
          else
            {
              t = i_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = if_verbose2_1_0(a_9, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  t = term_l_27;
  s_70 = t;
  t = term_x_0;
  t_70 = t;
  t = term_m_27;
  t = c_8(s_70, t_70, t);
  t = term_n_27;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  u_70 = t;
  t = term_v_21;
  y_70 = t;
  t = term_w_23;
  z_70 = t;
  t = term_x_23;
  t = z_7(y_70, z_70, t);
  v_70 = t;
  t = term_e_9;
  w_70 = t;
  t = (ATerm) ATinsert(ATempty, v_70);
  x_70 = t;
  t = SSL_printnl(w_70, x_70);
  t = u_70;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm t)
{
  static ATerm t_8 (ATerm t)
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_135(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        {
          ATerm r_27 = t;
          int s_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(s_27);
            }
          else
            {
              t = r_27;
              {
                ATerm t_27 = t;
                int u_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(u_27);
                  }
                else
                  {
                    t = t_27;
                    {
                      ATerm w_27 = t;
                      int x_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(w_8, x_8, y_8, t);
                          LocalPopChoice(x_27);
                        }
                      else
                        {
                          t = w_27;
                          {
                            ATerm y_27 = t;
                            int z_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_27);
                              }
                            else
                              {
                                t = y_27;
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
  static ATerm v_8 (ATerm t)
  {
    ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
    b_71 = t;
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm b_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_71 != NULL) && (a_71 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_71 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_9, t);
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          t = term_c_28;
          a_71 = t;
        }
    }
    t = not_null(a_71);
    t = ReadFromFile_0_0(t);
    c_71 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_71, c_71);
    t = apply_strategy_1_0(y_135, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(t_8, a_136, u_8, v_8, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,y_9 = NULL;
  h_71 = t;
  if(match_cons(t, sym__2))
    {
      e_71 = ATgetArgument(t, 0);
      f_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_71);
  d_71 = t;
  t = f_71;
  t = lift_definitions_0_0(t);
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_71, g_71);
  y_9 = t;
  t = SSLsetAnnotations(y_9, d_71);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_9, _fail, default_usage_0_0, t);
  return(t);
}

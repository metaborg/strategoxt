#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
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
ATerm term_j_26;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_r_16;
ATerm term_m_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_x_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_x_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_s_21);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_c_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_g_21);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_x_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_x_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_c_23, term_x_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_n_23);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_x_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm v_117 (ATerm), ATerm t);
static ATerm h_2 (ATerm u_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_6 (ATerm f_42, ATerm g_42, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm x_123 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm f_6 (ATerm c_24, ATerm b_24, ATerm t);
ATerm foldr_3_0 (ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t);
static ATerm k_6 (ATerm t_119 (ATerm), ATerm u_46, ATerm t_46, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm p_6 (ATerm l_643, ATerm q_643, ATerm l_62, ATerm t);
ATerm while_not_2_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_17 (ATerm t_15, ATerm u_15, ATerm v_15, ATerm t);
static ATerm r_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm free_vars_3_0 (ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm o_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm f_124 (ATerm), ATerm t);
static ATerm r_6 (ATerm y_22, ATerm x_22, ATerm t);
static ATerm s_6 (ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm a_47, ATerm z_46, ATerm t);
static ATerm t_6 (ATerm y_119 (ATerm), ATerm w_46, ATerm v_46, ATerm t);
ATerm genzip_4_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm CollectSplit_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm i_121 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm x_6 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm u_22, ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm y_6 (ATerm p_116 (ATerm), ATerm q_40, ATerm o_40, ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm a_7 (ATerm v_31, ATerm w_31, ATerm t);
static ATerm b_7 (ATerm n_30, ATerm o_30, ATerm t);
static ATerm d_7 (ATerm g_112 (ATerm), ATerm q_221, ATerm t_30, ATerm t);
static ATerm c_7 (ATerm j_30, ATerm k_30, ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm t_131 (ATerm), ATerm t);
static ATerm b_53 (ATerm p_52, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_7 (ATerm p_30, ATerm t);
static ATerm f_7 (ATerm z_55, ATerm a_56, ATerm t);
static ATerm g_7 (ATerm x_31, ATerm y_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_54 (ATerm q_53, ATerm t);
static ATerm s_54 (ATerm u_53, ATerm v_53, ATerm w_53, ATerm t);
static ATerm t_54 (ATerm e_54, ATerm f_54, ATerm g_54, ATerm t);
static ATerm h_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_117 (ATerm), ATerm t);
static ATerm k_7 (ATerm l_43, ATerm m_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm x_113 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_7 (ATerm d_36, ATerm e_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_7 (ATerm u_41, ATerm v_41, ATerm t_41, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_7 (ATerm z_38, ATerm a_39, ATerm t);
ATerm foldr_2_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_113 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_134 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm parse_options_1_0 (ATerm t_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm iowrap_3_0 (ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
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
  t = term_b_9;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_9), m_0), term_c_9);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_e_9;
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
ATerm at_end_1_0 (ATerm v_117 (ATerm), ATerm t)
{
  static ATerm p_1 (ATerm t)
  {
    ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
    o_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_1 = ATgetFirst((ATermList) t);
        n_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_1 = NULL,f_1 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(o_1);
          a_1 = t;
          t = n_1;
          t = p_1(t);
          f_1 = t;
          t = (ATerm) ATinsert(CheckATermList(f_1), m_1);
          d_1 = t;
          t = SSLsetAnnotations(d_1, a_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_1;
        t = v_117(t);
      }
    return(t);
  }
  t = p_1(t);
  return(t);
}
static ATerm h_2 (ATerm u_1, ATerm t)
{
  ATerm x_1 = NULL;
  t = SSL_explode_term(u_1);
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym__2))
    {
      b_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_0 (ATerm t)
            {
              t = c_2;
              return(t);
            }
            t = b_2;
            t = at_end_1_0(v_0, t);
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            t = h_2(d_2, t);
          }
      }
    }
  else
    {
      t = h_2(d_2, t);
    }
  return(t);
}
static ATerm a_6 (ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm i_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_42, g_42);
  t = k_7(f_42, g_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_2 = ATgetFirst((ATermList) t);
      {
        ATerm i_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_2;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm x_3 = NULL;
  x_3 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL;
        t = term_m_9;
        e_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_9, x_3);
        t = a_6(e_3, x_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm n_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_9) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_x_0;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm p_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_3 = NULL;
              t = term_m_9;
              l_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_9, x_3);
              t = a_6(l_3, x_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm s_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_x_0;
              LocalPopChoice(r_9);
            }
          else
            {
              t = p_9;
              {
                ATerm t_9 = t;
                int u_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 = NULL;
                    t = term_m_9;
                    r_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_m_9, x_3);
                    t = a_6(r_3, x_3, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm v_9 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) v_9) != ATmakeSymbol("f_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_x_0;
                    LocalPopChoice(u_9);
                  }
                else
                  {
                    t = t_9;
                    {
                      ATerm y_3 = NULL;
                      t = term_m_9;
                      y_3 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_m_9, x_3);
                      t = a_6(y_3, x_3, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm w_9 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("b_0", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm x_123 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_4 = ATgetFirst((ATermList) t);
          t_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 = NULL,x_4 = NULL,z_4 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(r_4);
            l_4 = t;
            t = s_4;
            t = x_123(t);
            x_4 = t;
            t = t_4;
            t = filter_1_0(x_123, t);
            z_4 = t;
            t = (ATerm) ATinsert(CheckATermList(z_4), x_4);
            g_1 = t;
            t = SSLsetAnnotations(g_1, l_4);
            LocalPopChoice(z_9);
          }
        else
          {
            t = x_9;
            t = t_4;
            t = filter_1_0(x_123, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
      {
        ATerm k_5 = NULL,p_5 = NULL,q_5 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(h_11);
        k_5 = t;
        t = i_11;
        t = b_104(t);
        p_5 = t;
        t = j_11;
        t = b_104(t);
        q_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_5, q_5);
        i_1 = t;
        t = SSLsetAnnotations(i_1, k_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_11 = ATgetArgument(t, 0);
          j_11 = ATgetArgument(t, 1);
          f_11 = ATgetArgument(t, 2);
          {
            ATerm b_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(h_11);
            b_6 = t;
            t = i_11;
            t = d_104(t);
            h_6 = t;
            t = j_11;
            t = d_104(t);
            i_6 = t;
            t = f_11;
            t = b_104(t);
            j_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_6, i_6, j_6);
            j_1 = t;
            t = SSLsetAnnotations(j_1, b_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_11 = ATgetArgument(t, 0);
              j_11 = ATgetArgument(t, 1);
              f_11 = ATgetArgument(t, 2);
              g_11 = ATgetArgument(t, 3);
              {
                ATerm o_7 = NULL,j_8 = NULL,k_8 = NULL,r_8 = NULL,s_8 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(h_11);
                o_7 = t;
                t = i_11;
                t = d_104(t);
                j_8 = t;
                t = j_11;
                t = d_104(t);
                k_8 = t;
                t = f_11;
                t = d_104(t);
                r_8 = t;
                t = g_11;
                t = b_104(t);
                s_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, j_8, k_8, r_8, s_8);
                k_1 = t;
                t = SSLsetAnnotations(k_1, o_7);
              }
            }
          else
            {
              ATerm l_9 = NULL,o_9 = NULL,q_9 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  i_11 = ATgetArgument(t, 0);
                  j_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_11);
              l_9 = t;
              t = i_11;
              t = d_104(t);
              o_9 = t;
              t = j_11;
              t = b_104(t);
              q_9 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, o_9, q_9);
              l_1 = t;
              t = SSLsetAnnotations(l_1, l_9);
            }
        }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm q_11 = NULL;
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_11 = ATgetArgument(t, 0);
          {
            ATerm d_10 = ATgetArgument(t, 1);
          }
          {
            ATerm e_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_10);
      t = q_11;
    }
  else
    {
      t = a_10;
      if(match_cons(t, sym_SDefT_4))
        {
          q_11 = ATgetArgument(t, 0);
          {
            ATerm f_10 = ATgetArgument(t, 1);
          }
          {
            ATerm g_10 = ATgetArgument(t, 2);
          }
          {
            ATerm j_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_11;
    }
  return(t);
}
static ATerm f_6 (ATerm c_24, ATerm b_24, ATerm t)
{
  t = c_24;
  t = map_1_0(w_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_12;
      t = v_122(t);
    }
  else
    {
      ATerm k_12 = NULL,l_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_12 = ATgetFirst((ATermList) t);
          d_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_12;
      t = x_122(t);
      k_12 = t;
      t = d_12;
      t = foldr_3_0(v_122, w_122, x_122, t);
      l_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_12, l_12);
      t = w_122(t);
    }
  return(t);
}
static ATerm k_6 (ATerm t_119 (ATerm), ATerm u_46, ATerm t_46, ATerm t)
{
  static ATerm b_14 (ATerm t)
  {
    ATerm r_13 = NULL,v_13 = NULL,x_13 = NULL;
    r_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_13 = ATgetFirst((ATermList) t);
            x_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_13;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = t_46;
                  return(t);
                }
                t = s_6(t_119, y_0, v_13, x_13, t);
              }
              t = b_14(t);
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              {
                ATerm y_9 = NULL,c_10 = NULL,g_2 = NULL;
                t = SSLgetAnnotations(r_13);
                y_9 = t;
                t = x_13;
                t = b_14(t);
                c_10 = t;
                t = (ATerm) ATinsert(CheckATermList(c_10), v_13);
                g_2 = t;
                t = SSLsetAnnotations(g_2, y_9);
              }
            }
        }
      }
    return(t);
  }
  t = u_46;
  t = b_14(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(((ATgetType(m_10) != AT_LIST) || !(ATisEmpty(m_10))))
        _fail(t);
      {
        ATerm q_10 = ATgetArgument(t, 1);
        if(((ATgetType(q_10) != AT_LIST) || !(ATisEmpty(q_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_10 = ATgetArgument(t, 0);
      if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
        {
          p_14 = ATgetFirst((ATermList) r_10);
          q_14 = (ATerm) ATgetNext((ATermList) r_10);
        }
      else
        _fail(t);
      {
        ATerm u_10 = ATgetArgument(t, 1);
        if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
          {
            r_14 = ATgetFirst((ATermList) u_10);
            s_14 = (ATerm) ATgetNext((ATermList) u_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_14, r_14), (ATerm) ATmakeAppl(sym__2, q_14, s_14));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_14), x_14);
  return(t);
}
static ATerm p_6 (ATerm l_643, ATerm q_643, ATerm l_62, ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  t = SSL_explode_term(q_643);
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_643);
  if(match_cons(t, sym__2))
    {
      if((i_14 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_14, k_14);
  t = genzip_4_0(z_0, b_1, c_1, _id, t);
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_14, l_62);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm t)
{
  static ATerm a_15 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = j_111(t);
        t = a_15(t);
      }
    return(t);
  }
  t = a_15(t);
  return(t);
}
ATerm for_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t)
{
  t = l_111(t);
  t = while_not_2_0(m_111, n_111, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_15);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm l_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,k_2 = NULL;
  s_15 = t;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_15);
  l_15 = t;
  t = r_15;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_15, r_15);
  k_2 = t;
  t = SSLsetAnnotations(k_2, l_15);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  u_16 = t;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_17(z_16, a_17, u_16, t);
            LocalPopChoice(a_11);
          }
        else
          {
            t = x_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_16), b_17), c_17);
          }
      }
    }
  else
    {
      t = s_17(z_16, a_17, u_16, t);
    }
  return(t);
}
static ATerm s_17 (ATerm t_15, ATerm u_15, ATerm v_15, ATerm t)
{
  ATerm y_15 = NULL,b_16 = NULL,l_2 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  t = SSLgetAnnotations(v_15);
  y_15 = t;
  t = u_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_16 = ATgetFirst((ATermList) t);
      l_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_16;
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_16;
        if((j_16 != t))
          {
            _fail(t);
          }
        t = l_16;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = u_15;
        t = p_6(j_16, k_16, l_16, t);
      }
  }
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_15, b_16);
  l_2 = t;
  t = SSLsetAnnotations(l_2, y_15);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      if((r_17 != ATgetArgument(t, 1)))
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
  ATerm e_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_1, h_1, q_1, t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = e_11;
      {
        ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
        i_17 = t;
        if(match_cons(t, sym__2))
          {
            j_17 = ATgetArgument(t, 0);
            k_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_17;
        t = k_6(r_1, j_17, k_17, t);
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(y_1, n_10, o_10, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      if((p_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(e_2, y_10, z_10, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      b_11 = ATgetArgument(t, 0);
      if((b_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm o_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_18 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_126(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          ATerm n_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_17 = NULL,x_17 = NULL,h_10 = NULL,i_10 = NULL;
              u_17 = t;
              t = n_126(t);
              x_17 = t;
              t = u_17;
              {
                static ATerm s_1 (ATerm t)
                {
                  ATerm z_17 = NULL;
                  t = n_18(t);
                  z_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_17, x_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = o_126(s_1, n_18, t_1, t);
              }
              i_10 = t;
              t = SSL_explode_term(i_10);
              if(match_cons(t, sym__2))
                {
                  ATerm r_11 = ATgetArgument(t, 0);
                  h_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_10;
              t = foldr_3_0(v_1, w_1, _id, t);
              LocalPopChoice(p_11);
            }
          else
            {
              t = n_11;
              {
                ATerm s_10 = NULL,t_10 = NULL;
                t_10 = t;
                t = SSL_explode_term(t_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_11 = ATgetArgument(t, 0);
                    s_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_10;
                t = foldr_3_0(z_1, a_2, n_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  ATerm f_24 = NULL,o_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
      {
        ATerm o_11 = NULL,w_11 = NULL,z_11 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(r_24);
        o_11 = t;
        t = s_24;
        t = z_103(t);
        w_11 = t;
        t = f_24;
        t = x_103(t);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_11, z_11);
        o_2 = t;
        t = SSLsetAnnotations(o_2, o_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          s_24 = ATgetArgument(t, 0);
          f_24 = ATgetArgument(t, 1);
          o_24 = ATgetArgument(t, 2);
          q_24 = ATgetArgument(t, 3);
          {
            ATerm s_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(r_24);
            s_12 = t;
            t = s_24;
            t = z_103(t);
            a_13 = t;
            t = f_24;
            t = z_103(t);
            b_13 = t;
            t = o_24;
            t = z_103(t);
            c_13 = t;
            t = q_24;
            t = x_103(t);
            d_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_13, b_13, c_13, d_13);
            p_2 = t;
            t = SSLsetAnnotations(p_2, s_12);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              s_24 = ATgetArgument(t, 0);
              f_24 = ATgetArgument(t, 1);
              o_24 = ATgetArgument(t, 2);
              q_24 = ATgetArgument(t, 3);
              {
                ATerm w_13 = NULL,g_14 = NULL,h_14 = NULL,n_14 = NULL,o_14 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(r_24);
                w_13 = t;
                t = s_24;
                t = z_103(t);
                g_14 = t;
                t = f_24;
                t = z_103(t);
                h_14 = t;
                t = o_24;
                t = z_103(t);
                n_14 = t;
                t = q_24;
                t = x_103(t);
                o_14 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, g_14, h_14, n_14, o_14);
                q_2 = t;
                t = SSLsetAnnotations(q_2, w_13);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  s_24 = ATgetArgument(t, 0);
                  {
                    ATerm f_15 = NULL,h_15 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(r_24);
                    f_15 = t;
                    t = s_24;
                    t = x_103(t);
                    h_15 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_15);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, f_15);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      s_24 = ATgetArgument(t, 0);
                      {
                        ATerm p_15 = NULL,x_15 = NULL,s_2 = NULL;
                        t = SSLgetAnnotations(r_24);
                        p_15 = t;
                        t = s_24;
                        t = x_103(t);
                        x_15 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_15);
                        s_2 = t;
                        t = SSLsetAnnotations(s_2, p_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          s_24 = ATgetArgument(t, 0);
                          {
                            ATerm n_16 = NULL,v_16 = NULL,t_2 = NULL;
                            t = SSLgetAnnotations(r_24);
                            n_16 = t;
                            t = s_24;
                            t = x_103(t);
                            v_16 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, v_16);
                            t_2 = t;
                            t = SSLsetAnnotations(t_2, n_16);
                          }
                        }
                      else
                        {
                          ATerm l_17 = NULL,n_17 = NULL,u_2 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              s_24 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(r_24);
                          l_17 = t;
                          t = s_24;
                          t = x_103(t);
                          n_17 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, n_17);
                          u_2 = t;
                          t = SSLsetAnnotations(u_2, l_17);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm i_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_26);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm v_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_11);
          }
        else
          {
            t = v_11;
            {
              ATerm k_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_26 = ATgetArgument(t, 0);
                  m_26 = ATgetArgument(t, 1);
                  n_26 = ATgetArgument(t, 2);
                  o_26 = ATgetArgument(t, 3);
                  t = n_26;
                  t = map_1_0(m_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_26 = ATgetArgument(t, 0);
                      m_26 = ATgetArgument(t, 1);
                      n_26 = ATgetArgument(t, 2);
                      o_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_26;
                  t = map_1_0(n_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm b_27 = NULL;
  ATerm y_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_27 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_12);
      t = b_27;
    }
  else
    {
      t = y_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_27;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm e_28 = NULL;
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_28 = ATgetArgument(t, 0);
          {
            ATerm h_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_12);
      t = e_28;
    }
  else
    {
      t = f_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_28;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm i_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_28);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            {
              ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,w_28 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_28 = ATgetArgument(t, 0);
                  o_28 = ATgetArgument(t, 1);
                  p_28 = ATgetArgument(t, 2);
                  w_28 = ATgetArgument(t, 3);
                  t = p_28;
                  t = map_1_0(x_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_28 = ATgetArgument(t, 0);
                      o_28 = ATgetArgument(t, 1);
                      p_28 = ATgetArgument(t, 2);
                      w_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_28;
                  t = map_1_0(y_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm i_29 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_29 = ATgetArgument(t, 0);
          {
            ATerm q_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_12);
      t = i_29;
    }
  else
    {
      t = o_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_29;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm r_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_29 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_12);
      t = z_29;
    }
  else
    {
      t = r_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_29;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm f_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_30);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
              ATerm h_30 = NULL,i_30 = NULL,l_30 = NULL,v_30 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_30 = ATgetArgument(t, 0);
                  i_30 = ATgetArgument(t, 1);
                  l_30 = ATgetArgument(t, 2);
                  v_30 = ATgetArgument(t, 3);
                  t = l_30;
                  t = map_1_0(b_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_30 = ATgetArgument(t, 0);
                      i_30 = ATgetArgument(t, 1);
                      l_30 = ATgetArgument(t, 2);
                      v_30 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_30;
                  t = map_1_0(c_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm e_31 = NULL;
  ATerm z_12 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_31 = ATgetArgument(t, 0);
          {
            ATerm f_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_13);
      t = e_31;
    }
  else
    {
      t = z_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_31;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm t_31 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_31 = ATgetArgument(t, 0);
          {
            ATerm i_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_13);
      t = t_31;
    }
  else
    {
      t = g_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_31;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm h_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_32);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            {
              ATerm j_32 = NULL,k_32 = NULL,p_32 = NULL,q_32 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_32 = ATgetArgument(t, 0);
                  k_32 = ATgetArgument(t, 1);
                  p_32 = ATgetArgument(t, 2);
                  q_32 = ATgetArgument(t, 3);
                  t = p_32;
                  t = map_1_0(g_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_32 = ATgetArgument(t, 0);
                      k_32 = ATgetArgument(t, 1);
                      p_32 = ATgetArgument(t, 2);
                      q_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_32;
                  t = map_1_0(h_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm z_32 = NULL;
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_32 = ATgetArgument(t, 0);
          {
            ATerm p_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_13);
      t = z_32;
    }
  else
    {
      t = n_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_32;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm o_33 = NULL;
  ATerm q_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_33 = ATgetArgument(t, 0);
          {
            ATerm t_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_13);
      t = o_33;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_33;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm e_26 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      e_26 = ATgetArgument(t, 0);
      t = e_26;
      t = free_vars_3_0(f_2, j_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          e_26 = ATgetArgument(t, 0);
          t = e_26;
          t = free_vars_3_0(v_2, w_2, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              e_26 = ATgetArgument(t, 0);
              t = e_26;
              t = free_vars_3_0(z_2, a_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  e_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_26;
              t = free_vars_3_0(d_3, f_3, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm m_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_34);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = u_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            {
              ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_34 = ATgetArgument(t, 0);
                  p_34 = ATgetArgument(t, 1);
                  q_34 = ATgetArgument(t, 2);
                  r_34 = ATgetArgument(t, 3);
                  t = q_34;
                  t = map_1_0(k_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_34 = ATgetArgument(t, 0);
                      p_34 = ATgetArgument(t, 1);
                      q_34 = ATgetArgument(t, 2);
                      r_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_34;
                  t = map_1_0(n_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm y_34 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_34 = ATgetArgument(t, 0);
          {
            ATerm e_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_14);
      t = y_34;
    }
  else
    {
      t = c_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_34;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm h_35 = NULL;
  ATerm f_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_35 = ATgetArgument(t, 0);
          {
            ATerm t_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_14);
      t = h_35;
    }
  else
    {
      t = f_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_35;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_34 = NULL,f_34 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_34 = ATgetArgument(t, 0);
      t = f_34;
      if(match_cons(t, sym_Rule_3))
        {
          a_34 = ATgetArgument(t, 0);
          {
            ATerm u_14 = ATgetArgument(t, 1);
          }
          {
            ATerm v_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_34;
      t = free_vars_3_0(i_3, j_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_34 = ATgetArgument(t, 0);
          {
            ATerm w_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_34;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm u_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_35);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm z_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = z_14;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            {
              ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_35 = ATgetArgument(t, 0);
                  x_35 = ATgetArgument(t, 1);
                  y_35 = ATgetArgument(t, 2);
                  z_35 = ATgetArgument(t, 3);
                  t = y_35;
                  t = map_1_0(q_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_35 = ATgetArgument(t, 0);
                      x_35 = ATgetArgument(t, 1);
                      y_35 = ATgetArgument(t, 2);
                      z_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_35;
                  t = map_1_0(t_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_36 = NULL;
  ATerm e_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_36 = ATgetArgument(t, 0);
          {
            ATerm i_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_15);
      t = k_36;
    }
  else
    {
      t = e_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_36;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm x_36 = NULL;
  ATerm j_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_36 = ATgetArgument(t, 0);
          {
            ATerm n_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_15);
      t = x_36;
    }
  else
    {
      t = j_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_36;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm d_37 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      d_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_37);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm h_37 = NULL,j_37 = NULL,k_37 = NULL,m_37 = NULL,n_37 = NULL;
  h_37 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
      t = h_37;
      t = f_6(j_37, k_37, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_37 = ATgetArgument(t, 0);
          k_37 = ATgetArgument(t, 1);
          m_37 = ATgetArgument(t, 2);
          t = k_37;
          t = map_1_0(w_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              j_37 = ATgetArgument(t, 0);
              k_37 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, j_37);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  j_37 = ATgetArgument(t, 0);
                  k_37 = ATgetArgument(t, 1);
                  m_37 = ATgetArgument(t, 2);
                  n_37 = ATgetArgument(t, 3);
                  t = k_37;
                  t = map_1_0(z_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_37 = ATgetArgument(t, 0);
                      k_37 = ATgetArgument(t, 1);
                      m_37 = ATgetArgument(t, 2);
                      n_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_37;
                  t = map_1_0(a_4, t);
                }
            }
        }
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm z_37 = NULL;
  ATerm o_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_37 = ATgetArgument(t, 0);
          {
            ATerm z_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_15);
      t = z_37;
    }
  else
    {
      t = o_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_37;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm q_38 = NULL;
  ATerm a_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_38 = ATgetArgument(t, 0);
          {
            ATerm d_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_16);
      t = q_38;
    }
  else
    {
      t = a_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_38;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm e_39 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_39 = ATgetArgument(t, 0);
          {
            ATerm g_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_16);
      t = e_39;
    }
  else
    {
      t = e_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_39;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_16 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_16;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  s_35 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm m_16 = ATgetArgument(t, 0);
      ATerm o_16 = ATgetArgument(t, 1);
      ATerm p_16 = ATgetArgument(t, 2);
      ATerm q_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t_35 = t;
  t = s_35;
  t = free_vars_3_0(o_3, p_3, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = s_35;
  t = free_vars_3_0(u_3, v_3, sboundin_3_0, t);
  t = filter_1_0(c_4, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = t_35;
  return(t);
}
ATerm partition_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  static ATerm x_40 (ATerm t)
  {
    ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
    t_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_r_16;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_40 = ATgetFirst((ATermList) t);
            v_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,b_19 = NULL,m_3 = NULL;
              t = SSLgetAnnotations(t_40);
              u_18 = t;
              t = u_40;
              t = f_124(t);
              p_18 = t;
              t = (ATerm) ATinsert(CheckATermList(v_40), p_18);
              m_3 = t;
              t = SSLsetAnnotations(m_3, u_18);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_16 = ATgetFirst((ATermList) t);
                  s_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_18;
              t = x_40(t);
              r_18 = t;
              t = SSL_explode_term(r_18);
              if(match_cons(t, sym__2))
                {
                  ATerm x_16 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_16) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm y_16 = ATgetArgument(t, 1);
                    if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
                      {
                        t_18 = ATgetFirst((ATermList) y_16);
                        {
                          ATerm d_17 = (ATerm) ATgetNext((ATermList) y_16);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(r_18);
              if(match_cons(t, sym__2))
                {
                  ATerm e_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm f_17 = ATgetArgument(t, 1);
                    if(((ATgetType(f_17) == AT_LIST) && !(ATisEmpty(f_17))))
                      {
                        ATerm g_17 = ATgetFirst((ATermList) f_17);
                        ATerm h_17 = (ATerm) ATgetNext((ATermList) f_17);
                        if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
                          {
                            b_19 = ATgetFirst((ATermList) h_17);
                            {
                              ATerm m_17 = (ATerm) ATgetNext((ATermList) h_17);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_18), p_18), b_19);
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              {
                ATerm q_19 = NULL,r_19 = NULL,y_19 = NULL,z_19 = NULL,w_20 = NULL,s_3 = NULL;
                t = SSLgetAnnotations(t_40);
                z_19 = t;
                t = (ATerm) ATinsert(CheckATermList(v_40), u_40);
                s_3 = t;
                t = SSLsetAnnotations(s_3, z_19);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm o_17 = ATgetFirst((ATermList) t);
                    r_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = r_19;
                t = x_40(t);
                q_19 = t;
                t = SSL_explode_term(q_19);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_17 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) p_17) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm q_17 = ATgetArgument(t, 1);
                      if(((ATgetType(q_17) == AT_LIST) && !(ATisEmpty(q_17))))
                        {
                          y_19 = ATgetFirst((ATermList) q_17);
                          {
                            ATerm t_17 = (ATerm) ATgetNext((ATermList) q_17);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(q_19);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_17 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_17) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm w_17 = ATgetArgument(t, 1);
                      if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
                        {
                          ATerm y_17 = ATgetFirst((ATermList) w_17);
                          ATerm a_18 = (ATerm) ATgetNext((ATermList) w_17);
                          if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
                            {
                              w_20 = ATgetFirst((ATermList) a_18);
                              {
                                ATerm b_18 = (ATerm) ATgetNext((ATermList) a_18);
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
                t = (ATerm) ATmakeAppl(sym__2, y_19, (ATerm) ATinsert(CheckATermList(w_20), u_40));
              }
            }
        }
      }
    return(t);
  }
  t = x_40(t);
  return(t);
}
static ATerm r_6 (ATerm y_22, ATerm x_22, ATerm t)
{
  ATerm a_41 = NULL,f_41 = NULL;
  t = y_22;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_41;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, a_41, x_22), f_41);
  return(t);
}
static ATerm s_6 (ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm a_47, ATerm z_46, ATerm t)
{
  t = c_120(t);
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm g_41 = NULL;
      g_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_47, g_41);
      t = b_120(t);
      return(t);
    }
    t = fetch_1_0(e_4, t);
  }
  t = z_46;
  return(t);
}
static ATerm t_6 (ATerm y_119 (ATerm), ATerm w_46, ATerm v_46, ATerm t)
{
  static ATerm s_42 (ATerm t)
  {
    ATerm d_42 = NULL,j_42 = NULL,k_42 = NULL;
    d_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_46;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_42 = ATgetFirst((ATermList) t);
            k_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_42;
              {
                static ATerm f_4 (ATerm t)
                {
                  t = v_46;
                  return(t);
                }
                t = s_6(y_119, f_4, j_42, k_42, t);
              }
              t = s_42(t);
              LocalPopChoice(d_18);
            }
          else
            {
              t = c_18;
              {
                ATerm c_21 = NULL,i_21 = NULL,b_4 = NULL;
                t = SSLgetAnnotations(d_42);
                c_21 = t;
                t = k_42;
                t = s_42(t);
                i_21 = t;
                t = (ATerm) ATinsert(CheckATermList(i_21), j_42);
                b_4 = t;
                t = SSLsetAnnotations(b_4, c_21);
              }
            }
        }
      }
    return(t);
  }
  t = w_46;
  t = s_42(t);
  return(t);
}
ATerm genzip_4_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t)
{
  static ATerm b_43 (ATerm t)
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_109(t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        {
          ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,d_4 = NULL;
          t = j_109(t);
          z_42 = t;
          if(match_cons(t, sym__2))
            {
              v_42 = ATgetArgument(t, 0);
              w_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_42);
          u_42 = t;
          t = v_42;
          t = l_109(t);
          x_42 = t;
          t = w_42;
          t = b_43(t);
          y_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_42, y_42);
          d_4 = t;
          t = SSLsetAnnotations(d_4, u_42);
          t = k_109(t);
        }
      }
    return(t);
  }
  t = b_43(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_16;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_44 = ATgetFirst((ATermList) t);
      c_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_44, c_44);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      if(match_cons(g_18, sym__2))
        {
          d_44 = ATgetArgument(g_18, 0);
          e_44 = ATgetArgument(g_18, 1);
        }
      else
        _fail(t);
      {
        ATerm h_18 = ATgetArgument(t, 1);
        if(match_cons(h_18, sym__2))
          {
            f_44 = ATgetArgument(h_18, 0);
            g_44 = ATgetArgument(h_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_44), d_44), (ATerm) ATinsert(CheckATermList(g_44), e_44));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm j_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      j_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(u_4, j_44, p_44, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm q_44 = NULL;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      if((q_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm s_44 = NULL;
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      if((s_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,n_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,v_43 = NULL,w_43 = NULL;
  v_43 = t;
  w_43 = t;
  t = SSL_explode_term(w_43);
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_43);
  j_43 = t;
  t = e_43;
  t = genzip_4_0(g_4, h_4, m_4, v_120, t);
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      g_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(h_43, i_43);
  t_43 = t;
  t = SSLsetAnnotations(t_43, j_43);
  t = w_120(t);
  if(match_cons(t, sym__2))
    {
      k_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_43;
  t = foldr_2_0(n_4, o_4, t);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_43, s_43);
  t = t_6(v_4, n_43, s_43, t);
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_43, r_43);
  return(t);
}
ATerm collect_split_1_0 (ATerm i_121 (ATerm), ATerm t)
{
  static ATerm a_45 (ATerm t)
  {
    static ATerm w_4 (ATerm t)
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_121(t);
          LocalPopChoice(j_18);
        }
      else
        {
          t = i_18;
          {
            ATerm t_44 = NULL;
            t_44 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_44, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(a_45, w_4, t);
    return(t);
  }
  t = a_45(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      h_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(h_45, i_45, t);
  return(t);
}
static ATerm x_6 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm u_22, ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL;
  t = u_22;
  t = collect_split_1_0(a_5, t);
  if(match_cons(t, sym__2))
    {
      b_45 = ATgetArgument(t, 0);
      c_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, r_22, s_22, t_22, b_45)));
  t = conc_0_0(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_m_9;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_m_9;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      m_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
      o_45 = ATgetArgument(t, 2);
      {
        ATerm x_45 = NULL;
        t = term_l_18;
        x_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_45, term_l_18);
        t = y_6(b_5, m_45, x_45, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, m_45, n_45, o_45);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          m_45 = ATgetArgument(t, 0);
          n_45 = ATgetArgument(t, 1);
          o_45 = ATgetArgument(t, 2);
          p_45 = ATgetArgument(t, 3);
          {
            ATerm f_46 = NULL;
            t = term_o_18;
            f_46 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_45, term_o_18);
            t = y_6(c_5, m_45, f_46, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, m_45, n_45, o_45, p_45);
          }
        }
      else
        {
          ATerm m_46 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              m_45 = ATgetArgument(t, 0);
              n_45 = ATgetArgument(t, 1);
              o_45 = ATgetArgument(t, 2);
              p_45 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_v_18;
          m_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_45, term_v_18);
          t = y_6(d_5, m_45, m_46, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, m_45, n_45, o_45, p_45);
        }
    }
  return(t);
}
static ATerm y_6 (ATerm p_116 (ATerm), ATerm q_40, ATerm o_40, ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  t = p_116(t);
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_46, q_40, o_40);
  t = l_7(n_46, q_40, o_40, t);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_46 = NULL;
        t = term_y_18;
        x_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_46, term_y_18);
        t = k_7(n_46, x_46, t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_46 = ATgetFirst((ATermList) t);
      p_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_y_18;
  r_46 = t;
  t = (ATerm) ATinsert(CheckATermList(p_46), (ATerm) ATinsert(CheckATermList(o_46), q_40));
  s_46 = t;
  t = SSL_table_put(n_46, r_46, s_46);
  t = q_46;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  g_47 = t;
  t = term_a_19;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_47, term_a_19);
  t = y_6(f_5, g_47, h_47, t);
  t = g_47;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_19), term_c_19);
  t = map_1_0(e_5, t);
  t = f_47;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,d_48 = NULL,e_48 = NULL,i_4 = NULL;
  e_48 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_48);
  a_48 = t;
  t = b_48;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(j_5, t);
  t = concat_0_0(t);
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_48);
  i_4 = t;
  t = SSLsetAnnotations(i_4, a_48);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,v_48 = NULL;
  v_48 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_48 = ATgetArgument(t, 0);
      k_48 = ATgetArgument(t, 1);
      l_48 = ATgetArgument(t, 2);
      m_48 = ATgetArgument(t, 3);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_48;
            t = x_6(j_48, k_48, l_48, m_48, t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = (ATerm) ATinsert(ATempty, v_48);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, v_48);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm l_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,k_4 = NULL,j_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  z_47 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_47);
  l_47 = t;
  t = t_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_47 = ATgetFirst((ATermList) t);
      w_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_47);
  u_47 = t;
  t = w_47;
  t = Cons_2_0(h_5, i_5, t);
  x_47 = t;
  t = (ATerm) ATinsert(CheckATermList(x_47), v_47);
  j_4 = t;
  t = SSLsetAnnotations(j_4, u_47);
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_47);
  k_4 = t;
  t = SSLsetAnnotations(k_4, l_47);
  return(t);
}
static ATerm a_7 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm d_49 = NULL;
  t = SSL_fputc(v_31, w_31);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_49);
  return(t);
}
static ATerm b_7 (ATerm n_30, ATerm o_30, ATerm t)
{
  ATerm f_49 = NULL;
  t = SSL_write_term_to_stream_text(n_30, o_30);
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_49);
  return(t);
}
static ATerm d_7 (ATerm g_112 (ATerm), ATerm q_221, ATerm t_30, ATerm t)
{
  ATerm g_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_221, term_g_19);
  t = h_7(t);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, t_30);
  t = g_112(t);
  t = fclose_0_0(t);
  t = t_30;
  return(t);
}
static ATerm c_7 (ATerm j_30, ATerm k_30, ATerm t)
{
  ATerm j_49 = NULL;
  t = SSL_write_term_to_stream_baf(j_30, k_30);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_49);
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
  ATerm b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if(match_cons(h_19, sym_Stream_1))
        {
          b_22 = ATgetArgument(h_19, 0);
        }
      else
        _fail(t);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(b_22, c_22, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm q_22 = NULL,v_22 = NULL,w_22 = NULL,z_22 = NULL,a_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(match_cons(i_19, sym_Stream_1))
        {
          z_22 = ATgetArgument(i_19, 0);
        }
      else
        _fail(t);
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(z_22, a_23, t);
  q_22 = t;
  t = term_j_19;
  v_22 = t;
  t = q_22;
  if(match_cons(t, sym_Stream_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_19, q_22);
  t = a_7(v_22, w_22, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,t_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,z_51 = NULL,a_52 = NULL,q_4 = NULL,p_4 = NULL;
  p_49 = t;
  if(match_cons(t, sym__2))
    {
      x_49 = ATgetArgument(t, 0);
      y_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_49);
  w_49 = t;
  t = x_49;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(l_5, t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = term_m_19;
        n_49 = t;
      }
  }
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_49, y_49);
  p_4 = t;
  t = SSLsetAnnotations(p_4, w_49);
  t = p_49;
  if(match_cons(t, sym__2))
    {
      r_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_49);
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_49, (ATerm) ATmakeAppl(sym__2, not_null(n_49), t_49));
  q_4 = t;
  t = SSLsetAnnotations(q_4, q_49);
  v_49 = t;
  if(match_cons(t, sym__2))
    {
      z_51 = ATgetArgument(t, 0);
      a_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_21 = NULL,w_21 = NULL,x_21 = NULL,z_21 = NULL,a_22 = NULL,y_4 = NULL;
        t = SSLgetAnnotations(v_49);
        r_21 = t;
        t = z_51;
        t = fetch_1_0(m_5, t);
        w_21 = t;
        t = a_52;
        if(match_cons(t, sym__2))
          {
            z_21 = ATgetArgument(t, 0);
            a_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_7(n_5, z_21, a_22, t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
        y_4 = t;
        t = SSLsetAnnotations(y_4, r_21);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        {
          ATerm i_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(v_49);
          i_22 = t;
          t = a_52;
          if(match_cons(t, sym__2))
            {
              n_22 = ATgetArgument(t, 0);
              o_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_7(o_5, n_22, o_22, t);
          m_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_51, m_22);
          g_5 = t;
          t = SSLsetAnnotations(g_5, i_22);
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
ATerm apply_strategy_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  h_52 = t;
  t = dtime_0_0(t);
  t = h_52;
  t = t_131(t);
  g_52 = t;
  t = dtime_0_0(t);
  d_52 = t;
  t = g_52;
  if(match_cons(t, sym__2))
    {
      e_52 = ATgetArgument(t, 0);
      f_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_52), (ATerm) ATmakeAppl(sym_Runtime_1, d_52)), f_52);
  return(t);
}
static ATerm b_53 (ATerm p_52, ATerm t)
{
  t = SSL_fclose(p_52);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  x_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_52 = ATgetArgument(t, 0);
      {
        ATerm p_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_52);
            LocalPopChoice(s_19);
          }
        else
          {
            t = p_19;
            t = b_53(x_52, t);
          }
      }
    }
  else
    {
      t = b_53(x_52, t);
    }
  return(t);
}
static ATerm e_7 (ATerm p_30, ATerm t)
{
  t = SSL_read_term_from_stream(p_30);
  return(t);
}
static ATerm f_7 (ATerm z_55, ATerm a_56, ATerm t)
{
  t = SSL_strcat(z_55, a_56);
  return(t);
}
static ATerm g_7 (ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm e_53 = NULL;
  t = SSL_fopen(x_31, y_31);
  e_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_53);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_53 = NULL;
  t = SSL_stdin_stream();
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_53);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_53 = NULL;
  t = SSL_stdout_stream();
  g_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_53);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_53 = NULL;
  t = SSL_stderr_stream();
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_53);
  return(t);
}
static ATerm r_54 (ATerm q_53, ATerm t)
{
  ATerm r_53 = NULL;
  t = SSL_explode_term(q_53);
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_19 = ATgetArgument(t, 1);
        if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
          {
            r_53 = ATgetFirst((ATermList) u_19);
            {
              ATerm v_19 = (ATerm) ATgetNext((ATermList) u_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_53;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_53;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_53;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_53;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_54 (ATerm u_53, ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,c_54 = NULL,r_5 = NULL;
  t = SSLgetAnnotations(w_53);
  z_53 = t;
  t = u_53;
  if(match_cons(t, sym_Path_1))
    {
      c_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_54, v_53);
  r_5 = t;
  t = SSLsetAnnotations(r_5, z_53);
  if(match_cons(t, sym__2))
    {
      x_53 = ATgetArgument(t, 0);
      y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(x_53, y_53, t);
  return(t);
}
static ATerm t_54 (ATerm e_54, ATerm f_54, ATerm g_54, ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,m_54 = NULL,d_6 = NULL;
  t = SSLgetAnnotations(g_54);
  j_54 = t;
  t = SSL_is_string(e_54);
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_54, f_54);
  d_6 = t;
  t = SSLsetAnnotations(d_6, j_54);
  if(match_cons(t, sym__2))
    {
      h_54 = ATgetArgument(t, 0);
      i_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(h_54, i_54, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  if(match_cons(t, sym__2))
    {
      p_54 = ATgetArgument(t, 0);
      q_54 = ATgetArgument(t, 1);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_54(o_54, t);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm a_20 = t;
              int b_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_54(p_54, q_54, o_54, t);
                  LocalPopChoice(b_20);
                }
              else
                {
                  t = a_20;
                  t = t_54(p_54, q_54, o_54, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_54(o_54, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,c_55 = NULL;
  c_55 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_55, term_e_20);
        t = h_7(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm i_24 = NULL,j_24 = NULL;
          t = term_f_20;
          j_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_20, c_55);
          t = f_7(j_24, c_55, t);
          i_24 = t;
          t = SSL_perror(i_24);
          _fail(t);
        }
      }
  }
  w_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(x_54, t);
  v_54 = t;
  t = w_54;
  t = fclose_0_0(t);
  t = v_54;
  return(t);
}
ATerm fetch_1_0 (ATerm o_117 (ATerm), ATerm t)
{
  static ATerm d_56 (ATerm t)
  {
    ATerm y_55 = NULL,b_56 = NULL,c_56 = NULL;
    y_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_56 = ATgetFirst((ATermList) t);
        c_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_24 = NULL,x_24 = NULL,q_7 = NULL;
          t = SSLgetAnnotations(y_55);
          p_24 = t;
          t = b_56;
          t = o_117(t);
          x_24 = t;
          t = (ATerm) ATinsert(CheckATermList(c_56), x_24);
          q_7 = t;
          t = SSLsetAnnotations(q_7, p_24);
          LocalPopChoice(h_20);
        }
      else
        {
          t = g_20;
          {
            ATerm h_25 = NULL,n_25 = NULL,r_7 = NULL;
            t = SSLgetAnnotations(y_55);
            h_25 = t;
            t = c_56;
            t = d_56(t);
            n_25 = t;
            t = (ATerm) ATinsert(CheckATermList(n_25), b_56);
            r_7 = t;
            t = SSLsetAnnotations(r_7, h_25);
          }
        }
    }
    return(t);
  }
  t = d_56(t);
  return(t);
}
static ATerm k_7 (ATerm l_43, ATerm m_43, ATerm t)
{
  t = SSL_table_get(l_43, m_43);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_113 (ATerm), ATerm t)
{
  ATerm h_56 = NULL;
  h_56 = t;
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
        t = term_k_20;
        k_56 = t;
        t = term_l_20;
        l_56 = t;
        t = term_m_20;
        t = k_7(k_56, l_56, t);
        j_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_56, term_n_20);
        t = geq_0_0(t);
        t = h_56;
        t = x_113(t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = h_56;
      }
  }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm o_56 = NULL;
  o_56 = t;
  if(match_string(t, "-k"))
    {
      t = o_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_56;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  t = SSL_string_to_int(p_56);
  q_56 = t;
  t = term_o_20;
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_20, q_56);
  t = n_7(r_56, q_56, t);
  t = p_56;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm t_56 = NULL;
  t_56 = t;
  if(match_string(t, "-S"))
    {
      t = t_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_56;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL;
  t = term_l_20;
  u_56 = t;
  t = term_q_20;
  v_56 = t;
  t = term_r_20;
  t = n_7(u_56, v_56, t);
  t = term_s_20;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  t = SSL_string_to_int(w_56);
  x_56 = t;
  t = term_l_20;
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, x_56);
  t = n_7(y_56, x_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_56);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL;
  t = term_v_20;
  z_56 = t;
  t = term_x_0;
  a_57 = t;
  t = term_x_20;
  t = n_7(z_56, a_57, t);
  t = term_y_20;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, w_5, x_5, t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_5, z_5, c_6, t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = Option_3_0(e_6, g_6, l_6, t);
          }
      }
    }
  return(t);
}
static ATerm n_7 (ATerm d_36, ATerm e_36, ATerm t)
{
  ATerm b_57 = NULL;
  t = term_k_20;
  b_57 = t;
  t = SSL_table_put(b_57, d_36, e_36);
  t = (ATerm) ATmakeAppl(sym__3, term_k_20, d_36, e_36);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
      t = term_x_0;
      t = e_0(t);
      g_57 = t;
      t = term_f_21;
      h_57 = t;
      t = term_g_21;
      i_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_21, term_g_21, g_57);
      t = l_7(h_57, i_57, g_57, t);
      _fail(t);
    }
  else
    {
      ATerm l_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_57 = ATgetFirst((ATermList) t);
          f_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_57;
      t = c_0(t);
      t = term_x_0;
      t = d_0(t);
      l_57 = t;
      t = (ATerm) ATinsert(CheckATermList(f_57), l_57);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm n_57 = NULL;
  n_57 = t;
  if(match_string(t, "-o"))
    {
      t = n_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_57;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL;
  o_57 = t;
  t = term_h_21;
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, o_57);
  t = n_7(p_57, o_57, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_57);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_6, n_6, o_6, t);
  return(t);
}
static ATerm l_7 (ATerm u_41, ATerm v_41, ATerm t_41, ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_41, v_41);
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_21 = ATgetArgument(t, 0);
            ATerm n_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_41, v_41);
        t = k_7(u_41, v_41, t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATempty;
      }
  }
  s_57 = t;
  t = (ATerm) ATinsert(CheckATermList(s_57), t_41);
  t_57 = t;
  t = SSL_table_put(u_41, v_41, t_57);
  t = r_57;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
      t = term_x_0;
      t = n_0(t);
      i_58 = t;
      t = term_f_21;
      j_58 = t;
      t = term_g_21;
      k_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_21, term_g_21, i_58);
      t = l_7(j_58, k_58, i_58, t);
      _fail(t);
    }
  else
    {
      ATerm o_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_58 = ATgetFirst((ATermList) t);
          f_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_58;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_58 = ATgetFirst((ATermList) t);
          h_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_58;
      t = k_0(t);
      t = g_58;
      t = l_0(t);
      o_58 = t;
      t = (ATerm) ATinsert(CheckATermList(h_58), o_58);
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm q_58 = NULL;
  q_58 = t;
  if(match_string(t, "-i"))
    {
      t = q_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_58;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL;
  r_58 = t;
  t = term_o_21;
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, r_58);
  t = n_7(s_58, r_58, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_58);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, u_6, v_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  t_58 = t;
  t = term_b_9;
  v_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_21), t_58);
  w_58 = t;
  t = SSL_printnl(v_58, w_58);
  t = term_e_9;
  u_58 = t;
  t = SSL_exit(u_58);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL;
  t = term_k_20;
  x_58 = t;
  t = term_s_21;
  y_58 = t;
  t = term_t_21;
  t = k_7(x_58, y_58, t);
  return(t);
}
static ATerm i_7 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_38, a_39);
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      t = SSL_addr(z_38, a_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
  a_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_59;
      t = t_122(t);
    }
  else
    {
      ATerm f_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_59 = ATgetFirst((ATermList) t);
          c_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_59;
      t = foldr_2_0(t_122, u_122, t);
      f_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_59, f_59);
      t = u_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_q_20;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(w_25, x_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_59 = NULL,s_25 = NULL,t_25 = NULL;
  t = times_0_0(t);
  t_25 = t;
  t = SSL_explode_term(t_25);
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_25;
  t = foldr_2_0(w_6, z_6, t);
  i_59 = t;
  t = SSL_TicksToSeconds(i_59);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
  t_59 = t;
  if(match_cons(t, sym__2))
    {
      u_59 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_59;
        if((u_59 != t))
          {
            _fail(t);
          }
        t = t_59;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATmakeAppl(sym__2, u_59, v_59);
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_59, v_59);
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              t = SSL_gtr(u_59, v_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_59, v_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_113 (ATerm), ATerm t)
{
  ATerm z_59 = NULL;
  z_59 = t;
  {
    ATerm h_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
        t = term_k_20;
        c_60 = t;
        t = term_l_20;
        d_60 = t;
        t = term_m_20;
        t = k_7(c_60, d_60, t);
        b_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_60, term_e_9);
        t = geq_0_0(t);
        t = z_59;
        t = w_113(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = h_22;
        t = z_59;
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,i_60 = NULL,j_60 = NULL;
  t = run_time_0_0(t);
  f_60 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  g_60 = t;
  t = term_b_9;
  i_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_22), f_60), term_k_22), g_60);
  j_60 = t;
  t = SSL_printnl(i_60, j_60);
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_22), f_60), term_k_22), g_60));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_20;
  k_60 = t;
  t = SSL_exit(k_60);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL;
  a_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_60 = ATgetArgument(t, 0);
          {
            ATerm t_26 = NULL,v_7 = NULL;
            t = SSLgetAnnotations(a_61);
            t_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_60);
            v_7 = t;
            t = SSLsetAnnotations(v_7, t_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm p_22 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_60 = NULL,o_60 = NULL;
      t = term_k_20;
      n_60 = t;
      t = term_c_23;
      o_60 = t;
      t = term_d_23;
      t = k_7(n_60, o_60, t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = p_22;
      t = fetch_1_0(m_7, t);
    }
  t = r_132(t);
  return(t);
}
ATerm map_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  static ATerm r_61 (ATerm t)
  {
    ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
    o_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_61;
      }
    else
      {
        ATerm k_27 = NULL,n_27 = NULL,p_27 = NULL,x_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_61 = ATgetFirst((ATermList) t);
            q_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_61);
        k_27 = t;
        t = p_61;
        t = e_117(t);
        n_27 = t;
        t = q_61;
        t = r_61(t);
        p_27 = t;
        t = (ATerm) ATinsert(CheckATermList(p_27), n_27);
        x_7 = t;
        t = SSLsetAnnotations(x_7, k_27);
      }
    return(t);
  }
  t = r_61(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_61 = ATgetFirst((ATermList) t);
      v_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_61 = NULL,a_62 = NULL;
        static ATerm p_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_61)), not_null(a_62));
          return(t);
        }
        t = v_61;
        t = i_0(t);
        if(((z_61 != NULL) && (z_61 != t)))
          _fail(t);
        else
          z_61 = t;
        t = u_61;
        t = g_0(t);
        if(((a_62 != NULL) && (a_62 != t)))
          _fail(t);
        else
          a_62 = t;
        t = v_61;
        t = reverse_acc_2_0(g_0, p_7, t);
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
static ATerm s_7 (ATerm t)
{
  ATerm h_62 = NULL,m_62 = NULL,n_62 = NULL,z_7 = NULL;
  n_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_62);
  z_7 = t;
  t = SSLsetAnnotations(z_7, h_62);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm p_62 = NULL;
  p_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_62), term_e_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_62 = NULL,g_62 = NULL;
      t = term_k_20;
      e_62 = t;
      t = term_s_21;
      g_62 = t;
      t = term_t_21;
      t = k_7(e_62, g_62, t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      t = fetch_1_0(s_7, t);
    }
  t = term_h_23;
  t = echo_0_0(t);
  t = term_f_21;
  c_62 = t;
  t = term_g_21;
  d_62 = t;
  t = term_i_23;
  t = k_7(c_62, d_62, t);
  t = reverse_acc_2_0(_id, t_7, t);
  t = map_1_0(u_7, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
  r_62 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_23 = ATgetFirst((ATermList) t);
                ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_62;
          }
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATinsert(ATempty, r_62);
      }
  }
  s_62 = t;
  t = term_m_19;
  t_62 = t;
  t = SSL_printnl(t_62, s_62);
  t = r_62;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL;
  t = term_k_20;
  x_62 = t;
  t = term_s_21;
  y_62 = t;
  t = term_t_21;
  t = k_7(x_62, y_62, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  t = term_n_23;
  z_62 = t;
  t = term_x_0;
  a_63 = t;
  t = term_o_23;
  t = n_7(z_62, a_63, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL;
  t = term_n_23;
  d_63 = t;
  t = term_x_0;
  e_63 = t;
  t = term_o_23;
  t = n_7(d_63, e_63, t);
  t = term_q_23;
  b_63 = t;
  t = term_x_0;
  c_63 = t;
  t = term_r_23;
  t = n_7(b_63, c_63, t);
  t = term_s_23;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_7, y_7, a_8, t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      t = Option_3_0(c_8, e_8, f_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,b_8 = NULL;
  k_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_63 = ATgetFirst((ATermList) t);
      h_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_63);
  f_63 = t;
  t = g_63;
  t = n_89(t);
  i_63 = t;
  t = h_63;
  t = o_89(t);
  j_63 = t;
  t = (ATerm) ATinsert(CheckATermList(j_63), i_63);
  b_8 = t;
  t = SSLsetAnnotations(b_8, f_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_134 (ATerm), ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,u_63 = NULL,v_63 = NULL,d_8 = NULL;
  p_63 = t;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_23;
        t = u_134(t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
      }
  }
  t = p_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_63 = ATgetFirst((ATermList) t);
      s_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_63);
  q_63 = t;
  t = term_s_21;
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, r_63);
  t = n_7(v_63, r_63, t);
  t = s_63;
  {
    static ATerm f_64 (ATerm t)
    {
      ATerm z_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_63 = NULL;
              y_63 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_63;
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              t = u_134(t);
              t = Cons_2_0(_id, f_64, t);
            }
          LocalPopChoice(a_24);
        }
      else
        {
          t = z_23;
          {
            ATerm b_64 = NULL,c_64 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_64 = ATgetFirst((ATermList) t);
                c_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_64), (ATerm) ATmakeAppl(sym_Undefined_1, b_64));
          }
        }
      return(t);
    }
    t = f_64(t);
  }
  u_63 = t;
  t = (ATerm) ATinsert(CheckATermList(u_63), (ATerm) ATmakeAppl(sym_Program_1, r_63));
  d_8 = t;
  t = SSLsetAnnotations(d_8, q_63);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm r_64 = NULL;
  r_64 = t;
  if(match_string(t, "--help"))
    {
      t = r_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_64;
        }
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL;
  t = term_c_23;
  s_64 = t;
  t = term_x_0;
  t_64 = t;
  t = term_g_24;
  t = n_7(s_64, t_64, t);
  t = term_h_24;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_134 (ATerm), ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  m_64 = t;
  t = term_f_21;
  o_64 = t;
  t = term_g_21;
  p_64 = t;
  t = (ATerm) ATempty;
  q_64 = t;
  t = SSL_table_put(o_64, p_64, q_64);
  t = m_64;
  {
    static ATerm g_8 (ATerm t)
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_134(t);
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          {
            ATerm n_24 = t;
            int t_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_8, l_8, n_8, t);
                LocalPopChoice(t_24);
              }
            else
              {
                t = n_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_8, t);
  }
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_65 = NULL;
        e_65 = t;
        {
          ATerm w_24 = t;
          int y_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_27 = NULL;
              t = e_65;
              {
                ATerm z_24 = t;
                int a_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_28 = NULL,b_28 = NULL;
                    t = term_k_20;
                    a_28 = t;
                    t = term_c_23;
                    b_28 = t;
                    t = term_d_23;
                    t = k_7(a_28, b_28, t);
                    LocalPopChoice(a_25);
                  }
                else
                  {
                    t = z_24;
                    t = fetch_1_0(o_8, t);
                  }
              }
              t = e_65;
              t = default_system_usage_0_0(t);
              t = term_q_20;
              z_27 = t;
              t = SSL_exit(z_27);
              LocalPopChoice(y_24);
            }
          else
            {
              t = w_24;
              {
                ATerm m_28 = NULL,q_28 = NULL,r_28 = NULL;
                t = term_k_20;
                q_28 = t;
                t = term_n_23;
                r_28 = t;
                t = term_b_25;
                t = k_7(q_28, r_28, t);
                t = e_65;
                t = default_system_about_0_0(t);
                t = term_q_20;
                m_28 = t;
                t = SSL_exit(m_28);
              }
            }
        }
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
              static ATerm p_8 (ATerm t)
              {
                ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,i_8 = NULL;
                k_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_65);
                i_65 = t;
                t = j_65;
                if(((k_64 != NULL) && (k_64 != t)))
                  _fail(t);
                else
                  k_64 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_65);
                i_8 = t;
                t = SSLsetAnnotations(i_8, i_65);
                return(t);
              }
              t = fetch_1_0(p_8, t);
              t = term_b_9;
              g_65 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_64)), term_e_25);
              h_65 = t;
              t = SSL_printnl(g_65, h_65);
              t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_64)), term_e_25));
              t = default_system_usage_0_0(t);
              t = term_e_9;
              f_65 = t;
              t = SSL_exit(f_65);
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
            }
        }
      }
  }
  l_64 = t;
  t = term_f_21;
  n_64 = t;
  t = SSL_table_destroy(n_64);
  t = l_64;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  t = parse_options_1_0(t_132, t);
  p_65 = t;
  t = term_f_25;
  s_65 = t;
  t = SSL_table_create(s_65);
  t = term_f_25;
  q_65 = t;
  t = term_g_25;
  r_65 = t;
  t = SSL_table_put(q_65, r_65, p_65);
  t = p_65;
  t = v_132(t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_132, t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = if_verbose2_1_0(y_8, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL;
  t = term_m_25;
  t_65 = t;
  t = term_x_0;
  u_65 = t;
  t = term_o_25;
  t = n_7(t_65, u_65, t);
  t = term_p_25;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
  v_65 = t;
  t = term_k_20;
  z_65 = t;
  t = term_s_21;
  a_66 = t;
  t = term_t_21;
  t = k_7(z_65, a_66, t);
  w_65 = t;
  t = term_b_9;
  x_65 = t;
  t = (ATerm) ATinsert(ATempty, w_65);
  y_65 = t;
  t = SSL_printnl(x_65, y_65);
  t = v_65;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm t)
{
  static ATerm q_8 (ATerm t)
  {
    ATerm r_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_132(t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = r_25;
        {
          ATerm v_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(y_25);
            }
          else
            {
              t = v_25;
              {
                ATerm z_25 = t;
                int a_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(a_26);
                  }
                else
                  {
                    t = z_25;
                    {
                      ATerm b_26 = t;
                      int c_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_8, w_8, x_8, t);
                          LocalPopChoice(c_26);
                        }
                      else
                        {
                          t = b_26;
                          {
                            ATerm d_26 = t;
                            int f_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(f_26);
                              }
                            else
                              {
                                t = d_26;
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
  static ATerm u_8 (ATerm t)
  {
    ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
    c_66 = t;
    {
      ATerm g_26 = t;
      int h_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_66 != NULL) && (b_66 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_8, t);
          LocalPopChoice(h_26);
        }
      else
        {
          t = g_26;
          t = term_j_26;
          b_66 = t;
        }
    }
    t = not_null(b_66);
    t = ReadFromFile_0_0(t);
    d_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_66, d_66);
    t = apply_strategy_1_0(c_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_8, e_132, t_8, u_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,m_8 = NULL;
  i_66 = t;
  if(match_cons(t, sym__2))
    {
      f_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_66);
  e_66 = t;
  t = g_66;
  t = lift_definitions_0_0(t);
  h_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_66, h_66);
  m_8 = t;
  t = SSLsetAnnotations(m_8, e_66);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_9, _fail, default_usage_0_0, t);
  return(t);
}

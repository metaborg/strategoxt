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
ATerm term_t_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_v_16;
ATerm term_s_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_x_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_x_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_v_21);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_d_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_k_21);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_x_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_x_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_d_23, term_x_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__3, term_j_21, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_v_23);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_y_25, term_x_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm e_119 (ATerm), ATerm t);
static ATerm h_2 (ATerm u_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_6 (ATerm f_42, ATerm g_42, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_125 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm r_6 (ATerm c_24, ATerm b_24, ATerm t);
ATerm foldr_3_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t);
static ATerm w_6 (ATerm c_121 (ATerm), ATerm d_48, ATerm c_48, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm b_7 (ATerm a_660, ATerm f_660, ATerm u_63, ATerm t);
ATerm while_not_2_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t);
ATerm for_3_0 (ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm z_17 (ATerm a_16, ATerm b_16, ATerm g_16, ATerm t);
static ATerm r_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm free_vars_3_0 (ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm x_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t);
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
ATerm partition_1_0 (ATerm o_125 (ATerm), ATerm t);
static ATerm d_7 (ATerm y_22, ATerm x_22, ATerm t);
static ATerm e_7 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm j_48, ATerm i_48, ATerm t);
static ATerm f_7 (ATerm h_121 (ATerm), ATerm f_48, ATerm e_48, ATerm t);
ATerm genzip_4_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm CollectSplit_2_0 (ATerm e_122 (ATerm), ATerm f_122 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm r_122 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm j_7 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm u_22, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm k_7 (ATerm y_117 (ATerm), ATerm q_40, ATerm n_40, ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm m_7 (ATerm v_31, ATerm w_31, ATerm t);
static ATerm n_7 (ATerm n_30, ATerm o_30, ATerm t);
static ATerm p_7 (ATerm p_113 (ATerm), ATerm z_222, ATerm t_30, ATerm t);
static ATerm o_7 (ATerm j_30, ATerm k_30, ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm c_133 (ATerm), ATerm t);
static ATerm e_54 (ATerm n_53, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_7 (ATerm p_30, ATerm t);
static ATerm r_7 (ATerm i_57, ATerm j_57, ATerm t);
static ATerm s_7 (ATerm x_31, ATerm y_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_56 (ATerm w_54, ATerm t);
static ATerm j_56 (ATerm d_55, ATerm e_55, ATerm f_55, ATerm t);
static ATerm k_56 (ATerm n_55, ATerm o_55, ATerm p_55, ATerm t);
static ATerm t_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_118 (ATerm), ATerm t);
static ATerm y_7 (ATerm n_43, ATerm o_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm g_115 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_8 (ATerm c_36, ATerm d_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_7 (ATerm u_41, ATerm v_41, ATerm t_41, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_7 (ATerm z_38, ATerm a_39, ATerm t);
ATerm foldr_2_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_115 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm need_help_1_0 (ATerm a_134 (ATerm), ATerm t);
static ATerm c_8 (ATerm b_45, ATerm c_45, ATerm d_45, ATerm t);
static ATerm d_8 (ATerm e_45, ATerm f_45, ATerm t);
ATerm lookup_table_0_1 (ATerm g_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_45, ATerm k_45, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_7 (ATerm g_45, ATerm h_45, ATerm t);
static ATerm x_7 (ATerm l_45, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_136 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm parse_options_1_0 (ATerm c_136 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm iowrap_3_0 (ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
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
  t = term_f_9;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_9), m_0), term_g_9);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_i_9;
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
ATerm at_end_1_0 (ATerm e_119 (ATerm), ATerm t)
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
        t = e_119(t);
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
      ATerm j_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_9) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_0 (ATerm t)
            {
              t = c_2;
              return(t);
            }
            t = b_2;
            t = at_end_1_0(v_0, t);
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
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
static ATerm m_6 (ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm i_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_42, g_42);
  t = y_7(f_42, g_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_2 = ATgetFirst((ATermList) t);
      {
        ATerm n_9 = (ATerm) ATgetNext((ATermList) t);
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
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL;
        t = term_s_9;
        e_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, x_3);
        t = m_6(e_3, x_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm t_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_9) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_x_0;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm u_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_3 = NULL;
              t = term_s_9;
              l_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_9, x_3);
              t = m_6(l_3, x_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm w_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_x_0;
              LocalPopChoice(v_9);
            }
          else
            {
              t = u_9;
              {
                ATerm x_9 = t;
                int y_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 = NULL;
                    t = term_s_9;
                    r_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_s_9, x_3);
                    t = m_6(r_3, x_3, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm z_9 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("f_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_x_0;
                    LocalPopChoice(y_9);
                  }
                else
                  {
                    t = x_9;
                    {
                      ATerm y_3 = NULL;
                      t = term_s_9;
                      y_3 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_s_9, x_3);
                      t = m_6(y_3, x_3, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm a_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) a_10) != ATmakeSymbol("b_0", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm g_125 (ATerm), ATerm t)
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
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 = NULL,x_4 = NULL,y_4 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(r_4);
            l_4 = t;
            t = s_4;
            t = g_125(t);
            x_4 = t;
            t = t_4;
            t = filter_1_0(g_125, t);
            y_4 = t;
            t = (ATerm) ATinsert(CheckATermList(y_4), x_4);
            g_1 = t;
            t = SSLsetAnnotations(g_1, l_4);
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            t = t_4;
            t = filter_1_0(g_125, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,j_11 = NULL,o_11 = NULL,t_11 = NULL,u_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
      {
        ATerm h_5 = NULL,o_5 = NULL,p_5 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(o_11);
        h_5 = t;
        t = t_11;
        t = k_105(t);
        o_5 = t;
        t = u_11;
        t = k_105(t);
        p_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_5, p_5);
        i_1 = t;
        t = SSLsetAnnotations(i_1, h_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_11 = ATgetArgument(t, 0);
          u_11 = ATgetArgument(t, 1);
          e_11 = ATgetArgument(t, 2);
          {
            ATerm d_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(o_11);
            d_6 = t;
            t = t_11;
            t = m_105(t);
            h_6 = t;
            t = u_11;
            t = m_105(t);
            i_6 = t;
            t = e_11;
            t = k_105(t);
            j_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, h_6, i_6, j_6);
            j_1 = t;
            t = SSLsetAnnotations(j_1, d_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_11 = ATgetArgument(t, 0);
              u_11 = ATgetArgument(t, 1);
              e_11 = ATgetArgument(t, 2);
              j_11 = ATgetArgument(t, 3);
              {
                ATerm y_6 = NULL,i_7 = NULL,l_7 = NULL,v_7 = NULL,k_8 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(o_11);
                y_6 = t;
                t = t_11;
                t = m_105(t);
                i_7 = t;
                t = u_11;
                t = m_105(t);
                l_7 = t;
                t = e_11;
                t = m_105(t);
                v_7 = t;
                t = j_11;
                t = k_105(t);
                k_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_7, l_7, v_7, k_8);
                k_1 = t;
                t = SSLsetAnnotations(k_1, y_6);
              }
            }
          else
            {
              ATerm m_9 = NULL,q_9 = NULL,r_9 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  t_11 = ATgetArgument(t, 0);
                  u_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_11);
              m_9 = t;
              t = t_11;
              t = m_105(t);
              q_9 = t;
              t = u_11;
              t = k_105(t);
              r_9 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, q_9, r_9);
              l_1 = t;
              t = SSLsetAnnotations(l_1, m_9);
            }
        }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm b_12 = NULL;
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_12 = ATgetArgument(t, 0);
          {
            ATerm g_10 = ATgetArgument(t, 1);
          }
          {
            ATerm h_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_10);
      t = b_12;
    }
  else
    {
      t = d_10;
      if(match_cons(t, sym_SDefT_4))
        {
          b_12 = ATgetArgument(t, 0);
          {
            ATerm j_10 = ATgetArgument(t, 1);
          }
          {
            ATerm k_10 = ATgetArgument(t, 2);
          }
          {
            ATerm l_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = b_12;
    }
  return(t);
}
static ATerm r_6 (ATerm c_24, ATerm b_24, ATerm t)
{
  t = c_24;
  t = map_1_0(w_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,o_12 = NULL;
  l_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_12;
      t = e_124(t);
    }
  else
    {
      ATerm r_12 = NULL,v_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_12 = ATgetFirst((ATermList) t);
          o_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_12;
      t = g_124(t);
      r_12 = t;
      t = o_12;
      t = foldr_3_0(e_124, f_124, g_124, t);
      v_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_12, v_12);
      t = f_124(t);
    }
  return(t);
}
static ATerm w_6 (ATerm c_121 (ATerm), ATerm d_48, ATerm c_48, ATerm t)
{
  static ATerm l_14 (ATerm t)
  {
    ATerm u_13 = NULL,z_13 = NULL,d_14 = NULL;
    u_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_13 = ATgetFirst((ATermList) t);
            d_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_13;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = c_48;
                  return(t);
                }
                t = e_7(c_121, y_0, z_13, d_14, t);
              }
              t = l_14(t);
              LocalPopChoice(o_10);
            }
          else
            {
              t = m_10;
              {
                ATerm f_10 = NULL,i_10 = NULL,g_2 = NULL;
                t = SSLgetAnnotations(u_13);
                f_10 = t;
                t = d_14;
                t = l_14(t);
                i_10 = t;
                t = (ATerm) ATinsert(CheckATermList(i_10), z_13);
                g_2 = t;
                t = SSLsetAnnotations(g_2, f_10);
              }
            }
        }
      }
    return(t);
  }
  t = d_48;
  t = l_14(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(((ATgetType(q_10) != AT_LIST) || !(ATisEmpty(q_10))))
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(((ATgetType(r_10) != AT_LIST) || !(ATisEmpty(r_10))))
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
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
        {
          y_14 = ATgetFirst((ATermList) s_10);
          z_14 = (ATerm) ATgetNext((ATermList) s_10);
        }
      else
        _fail(t);
      {
        ATerm w_10 = ATgetArgument(t, 1);
        if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
          {
            a_15 = ATgetFirst((ATermList) w_10);
            b_15 = (ATerm) ATgetNext((ATermList) w_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_14, a_15), (ATerm) ATmakeAppl(sym__2, z_14, b_15));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm c_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_15), c_15);
  return(t);
}
static ATerm b_7 (ATerm a_660, ATerm f_660, ATerm u_63, ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,r_14 = NULL,s_14 = NULL;
  t = SSL_explode_term(f_660);
  if(match_cons(t, sym__2))
    {
      o_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_660);
  if(match_cons(t, sym__2))
    {
      if((o_14 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_14, r_14);
  t = genzip_4_0(z_0, b_1, c_1, _id, t);
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_14, u_63);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t)
{
  static ATerm h_15 (ATerm t)
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_112(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = s_112(t);
        t = h_15(t);
      }
    return(t);
  }
  t = h_15(t);
  return(t);
}
ATerm for_3_0 (ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t)
{
  t = u_112(t);
  t = while_not_2_0(v_112, w_112, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm s_15 = NULL;
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_15);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,k_2 = NULL;
  y_15 = t;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_15);
  v_15 = t;
  t = x_15;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_15, x_15);
  k_2 = t;
  t = SSLsetAnnotations(k_2, v_15);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,j_17 = NULL;
  e_17 = t;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_17 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_17(f_17, g_17, e_17, t);
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_17), h_17), j_17);
          }
      }
    }
  else
    {
      t = z_17(f_17, g_17, e_17, t);
    }
  return(t);
}
static ATerm z_17 (ATerm a_16, ATerm b_16, ATerm g_16, ATerm t)
{
  ATerm h_16 = NULL,k_16 = NULL,l_2 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,w_16 = NULL;
  t = SSLgetAnnotations(g_16);
  h_16 = t;
  t = b_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_16 = ATgetFirst((ATermList) t);
      w_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_16;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_16;
        if((q_16 != t))
          {
            _fail(t);
          }
        t = w_16;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = b_16;
        t = b_7(q_16, r_16, w_16, t);
      }
  }
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_16, k_16);
  l_2 = t;
  t = SSLsetAnnotations(l_2, h_16);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm y_17 = NULL;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      if((y_17 != ATgetArgument(t, 1)))
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
  ATerm k_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_1, h_1, q_1, t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = k_11;
      {
        ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
        r_17 = t;
        if(match_cons(t, sym__2))
          {
            s_17 = ATgetArgument(t, 0);
            t_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_17;
        t = w_6(r_1, s_17, t_17, t);
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
  ATerm t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(y_1, t_10, u_10, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      v_10 = ATgetArgument(t, 0);
      if((v_10 != ATgetArgument(t, 1)))
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
  ATerm d_11 = NULL,f_11 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(e_2, d_11, f_11, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm g_11 = NULL;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      if((g_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm x_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_18 (ATerm t)
  {
    ATerm n_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_127(t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = n_11;
        {
          ATerm s_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_18 = NULL,g_18 = NULL,n_10 = NULL,p_10 = NULL;
              f_18 = t;
              t = w_127(t);
              g_18 = t;
              t = f_18;
              {
                static ATerm s_1 (ATerm t)
                {
                  ATerm i_18 = NULL;
                  t = u_18(t);
                  i_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_18, g_18);
                  t = diff_0_0(t);
                  return(t);
                }
                t = x_127(s_1, u_18, t_1, t);
              }
              p_10 = t;
              t = SSL_explode_term(p_10);
              if(match_cons(t, sym__2))
                {
                  ATerm w_11 = ATgetArgument(t, 0);
                  n_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_10;
              t = foldr_3_0(v_1, w_1, _id, t);
              LocalPopChoice(v_11);
            }
          else
            {
              t = s_11;
              {
                ATerm x_10 = NULL,y_10 = NULL;
                y_10 = t;
                t = SSL_explode_term(y_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_11 = ATgetArgument(t, 0);
                    x_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_10;
                t = foldr_3_0(z_1, a_2, u_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,u_24 = NULL,v_24 = NULL,x_24 = NULL,c_25 = NULL;
  x_24 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_25 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
      {
        ATerm l_11 = NULL,p_11 = NULL,q_11 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(x_24);
        l_11 = t;
        t = c_25;
        t = i_105(t);
        p_11 = t;
        t = q_24;
        t = g_105(t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_11, q_11);
        o_2 = t;
        t = SSLsetAnnotations(o_2, l_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          c_25 = ATgetArgument(t, 0);
          q_24 = ATgetArgument(t, 1);
          u_24 = ATgetArgument(t, 2);
          v_24 = ATgetArgument(t, 3);
          {
            ATerm t_12 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(x_24);
            t_12 = t;
            t = c_25;
            t = i_105(t);
            d_13 = t;
            t = q_24;
            t = i_105(t);
            e_13 = t;
            t = u_24;
            t = i_105(t);
            f_13 = t;
            t = v_24;
            t = g_105(t);
            h_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_13, e_13, f_13, h_13);
            p_2 = t;
            t = SSLsetAnnotations(p_2, t_12);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              c_25 = ATgetArgument(t, 0);
              q_24 = ATgetArgument(t, 1);
              u_24 = ATgetArgument(t, 2);
              v_24 = ATgetArgument(t, 3);
              {
                ATerm a_14 = NULL,h_14 = NULL,i_14 = NULL,k_14 = NULL,n_14 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(x_24);
                a_14 = t;
                t = c_25;
                t = i_105(t);
                h_14 = t;
                t = q_24;
                t = i_105(t);
                i_14 = t;
                t = u_24;
                t = i_105(t);
                k_14 = t;
                t = v_24;
                t = g_105(t);
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, h_14, i_14, k_14, n_14);
                q_2 = t;
                t = SSLsetAnnotations(q_2, a_14);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  c_25 = ATgetArgument(t, 0);
                  {
                    ATerm j_15 = NULL,l_15 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(x_24);
                    j_15 = t;
                    t = c_25;
                    t = g_105(t);
                    l_15 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, l_15);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, j_15);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      c_25 = ATgetArgument(t, 0);
                      {
                        ATerm r_15 = NULL,u_15 = NULL,s_2 = NULL;
                        t = SSLgetAnnotations(x_24);
                        r_15 = t;
                        t = c_25;
                        t = g_105(t);
                        u_15 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, u_15);
                        s_2 = t;
                        t = SSLsetAnnotations(s_2, r_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          c_25 = ATgetArgument(t, 0);
                          {
                            ATerm m_16 = NULL,s_16 = NULL,t_2 = NULL;
                            t = SSLgetAnnotations(x_24);
                            m_16 = t;
                            t = c_25;
                            t = g_105(t);
                            s_16 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, s_16);
                            t_2 = t;
                            t = SSLsetAnnotations(t_2, m_16);
                          }
                        }
                      else
                        {
                          ATerm i_17 = NULL,m_17 = NULL,u_2 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              c_25 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(x_24);
                          i_17 = t;
                          t = c_25;
                          t = g_105(t);
                          m_17 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, m_17);
                          u_2 = t;
                          t = SSLsetAnnotations(u_2, i_17);
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
  ATerm s_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_26);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm a_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_12);
          }
        else
          {
            t = a_12;
            {
              ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_26 = ATgetArgument(t, 0);
                  v_26 = ATgetArgument(t, 1);
                  w_26 = ATgetArgument(t, 2);
                  x_26 = ATgetArgument(t, 3);
                  t = w_26;
                  t = map_1_0(m_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_26 = ATgetArgument(t, 0);
                      v_26 = ATgetArgument(t, 1);
                      w_26 = ATgetArgument(t, 2);
                      x_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_26;
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
  ATerm n_27 = NULL;
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_27 = ATgetArgument(t, 0);
          {
            ATerm f_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_12);
      t = n_27;
    }
  else
    {
      t = d_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_27;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm i_28 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_28 = ATgetArgument(t, 0);
          {
            ATerm i_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_12);
      t = i_28;
    }
  else
    {
      t = g_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_28;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_28);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm n_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_12);
          }
        else
          {
            t = n_12;
            {
              ATerm v_28 = NULL,w_28 = NULL,z_28 = NULL,b_29 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_28 = ATgetArgument(t, 0);
                  w_28 = ATgetArgument(t, 1);
                  z_28 = ATgetArgument(t, 2);
                  b_29 = ATgetArgument(t, 3);
                  t = z_28;
                  t = map_1_0(x_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_28 = ATgetArgument(t, 0);
                      w_28 = ATgetArgument(t, 1);
                      z_28 = ATgetArgument(t, 2);
                      b_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_28;
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
  ATerm t_29 = NULL;
  ATerm q_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_29 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_12);
      t = t_29;
    }
  else
    {
      t = q_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_29;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm g_30 = NULL;
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_30 = ATgetArgument(t, 0);
          {
            ATerm y_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_12);
      t = g_30;
    }
  else
    {
      t = w_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_30;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm w_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_30);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,d_31 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_30 = ATgetArgument(t, 0);
                  z_30 = ATgetArgument(t, 1);
                  a_31 = ATgetArgument(t, 2);
                  d_31 = ATgetArgument(t, 3);
                  t = a_31;
                  t = map_1_0(b_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_30 = ATgetArgument(t, 0);
                      z_30 = ATgetArgument(t, 1);
                      a_31 = ATgetArgument(t, 2);
                      d_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_31;
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
  ATerm o_31 = NULL;
  ATerm g_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_31 = ATgetArgument(t, 0);
          {
            ATerm j_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_13);
      t = o_31;
    }
  else
    {
      t = g_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_31;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm l_32 = NULL;
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_32 = ATgetArgument(t, 0);
          {
            ATerm m_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_13);
      t = l_32;
    }
  else
    {
      t = k_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_32;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm p_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_32);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm u_32 = NULL,v_32 = NULL,y_32 = NULL,z_32 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_32 = ATgetArgument(t, 0);
                  v_32 = ATgetArgument(t, 1);
                  y_32 = ATgetArgument(t, 2);
                  z_32 = ATgetArgument(t, 3);
                  t = y_32;
                  t = map_1_0(g_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_32 = ATgetArgument(t, 0);
                      v_32 = ATgetArgument(t, 1);
                      y_32 = ATgetArgument(t, 2);
                      z_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_32;
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
  ATerm k_33 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_33 = ATgetArgument(t, 0);
          {
            ATerm t_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_13);
      t = k_33;
    }
  else
    {
      t = r_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_33;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm z_33 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_33 = ATgetArgument(t, 0);
          {
            ATerm x_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_13);
      t = z_33;
    }
  else
    {
      t = v_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_33;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm p_26 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      p_26 = ATgetArgument(t, 0);
      t = p_26;
      t = free_vars_3_0(f_2, j_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          p_26 = ATgetArgument(t, 0);
          t = p_26;
          t = free_vars_3_0(v_2, w_2, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              p_26 = ATgetArgument(t, 0);
              t = p_26;
              t = free_vars_3_0(z_2, a_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_26;
              t = free_vars_3_0(d_3, f_3, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm v_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_34);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm y_13 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_14);
    }
  else
    {
      t = y_13;
      {
        ATerm c_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_14);
          }
        else
          {
            t = c_14;
            {
              ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,c_35 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_34 = ATgetArgument(t, 0);
                  y_34 = ATgetArgument(t, 1);
                  z_34 = ATgetArgument(t, 2);
                  c_35 = ATgetArgument(t, 3);
                  t = z_34;
                  t = map_1_0(k_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_34 = ATgetArgument(t, 0);
                      y_34 = ATgetArgument(t, 1);
                      z_34 = ATgetArgument(t, 2);
                      c_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_34;
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
  ATerm j_35 = NULL;
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_35 = ATgetArgument(t, 0);
          {
            ATerm j_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_14);
      t = j_35;
    }
  else
    {
      t = f_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_35;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm s_35 = NULL;
  ATerm m_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_35 = ATgetArgument(t, 0);
          {
            ATerm t_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_14);
      t = s_35;
    }
  else
    {
      t = m_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_35;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm k_34 = NULL,r_34 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      r_34 = ATgetArgument(t, 0);
      t = r_34;
      if(match_cons(t, sym_Rule_3))
        {
          k_34 = ATgetArgument(t, 0);
          {
            ATerm u_14 = ATgetArgument(t, 1);
          }
          {
            ATerm v_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_34;
      t = free_vars_3_0(i_3, j_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          r_34 = ATgetArgument(t, 0);
          {
            ATerm w_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_34;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm h_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_36);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm x_14 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = x_14;
      {
        ATerm e_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_15);
          }
        else
          {
            t = e_15;
            {
              ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_36 = ATgetArgument(t, 0);
                  k_36 = ATgetArgument(t, 1);
                  l_36 = ATgetArgument(t, 2);
                  m_36 = ATgetArgument(t, 3);
                  t = l_36;
                  t = map_1_0(q_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_36 = ATgetArgument(t, 0);
                      k_36 = ATgetArgument(t, 1);
                      l_36 = ATgetArgument(t, 2);
                      m_36 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_36;
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
  ATerm t_36 = NULL;
  ATerm i_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_36 = ATgetArgument(t, 0);
          {
            ATerm m_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_15);
      t = t_36;
    }
  else
    {
      t = i_15;
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
static ATerm t_3 (ATerm t)
{
  ATerm i_37 = NULL;
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_37 = ATgetArgument(t, 0);
          {
            ATerm p_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_15);
      t = i_37;
    }
  else
    {
      t = n_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_37;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm l_37 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      l_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_37);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,s_37 = NULL,t_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
      t = m_37;
      t = r_6(n_37, o_37, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_37 = ATgetArgument(t, 0);
          o_37 = ATgetArgument(t, 1);
          s_37 = ATgetArgument(t, 2);
          t = o_37;
          t = map_1_0(w_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              n_37 = ATgetArgument(t, 0);
              o_37 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, n_37);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  n_37 = ATgetArgument(t, 0);
                  o_37 = ATgetArgument(t, 1);
                  s_37 = ATgetArgument(t, 2);
                  t_37 = ATgetArgument(t, 3);
                  t = o_37;
                  t = map_1_0(z_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_37 = ATgetArgument(t, 0);
                      o_37 = ATgetArgument(t, 1);
                      s_37 = ATgetArgument(t, 2);
                      t_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_37;
                  t = map_1_0(a_4, t);
                }
            }
        }
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm h_38 = NULL;
  ATerm q_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_38 = ATgetArgument(t, 0);
          {
            ATerm z_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_15);
      t = h_38;
    }
  else
    {
      t = q_15;
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
static ATerm z_3 (ATerm t)
{
  ATerm y_38 = NULL;
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_38 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_16);
      t = y_38;
    }
  else
    {
      t = c_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_38;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm o_39 = NULL;
  ATerm f_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_39 = ATgetArgument(t, 0);
          {
            ATerm j_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = o_39;
    }
  else
    {
      t = f_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_39;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm l_16 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_16;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  f_36 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      ATerm o_16 = ATgetArgument(t, 1);
      ATerm t_16 = ATgetArgument(t, 2);
      ATerm u_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  g_36 = t;
  t = f_36;
  t = free_vars_3_0(o_3, p_3, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_36;
  t = free_vars_3_0(u_3, v_3, sboundin_3_0, t);
  t = filter_1_0(c_4, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = g_36;
  return(t);
}
ATerm partition_1_0 (ATerm o_125 (ATerm), ATerm t)
{
  static ATerm k_41 (ATerm t)
  {
    ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
    h_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_v_16;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_41 = ATgetFirst((ATermList) t);
            j_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,f_19 = NULL,m_3 = NULL;
              t = SSLgetAnnotations(h_41);
              y_18 = t;
              t = i_41;
              t = o_125(t);
              m_18 = t;
              t = (ATerm) ATinsert(CheckATermList(j_41), m_18);
              m_3 = t;
              t = SSLsetAnnotations(m_3, y_18);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_16 = ATgetFirst((ATermList) t);
                  w_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_18;
              t = k_41(t);
              v_18 = t;
              t = SSL_explode_term(v_18);
              if(match_cons(t, sym__2))
                {
                  ATerm a_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_17 = ATgetArgument(t, 1);
                    if(((ATgetType(b_17) == AT_LIST) && !(ATisEmpty(b_17))))
                      {
                        x_18 = ATgetFirst((ATermList) b_17);
                        {
                          ATerm c_17 = (ATerm) ATgetNext((ATermList) b_17);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(v_18);
              if(match_cons(t, sym__2))
                {
                  ATerm d_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm k_17 = ATgetArgument(t, 1);
                    if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
                      {
                        ATerm l_17 = ATgetFirst((ATermList) k_17);
                        ATerm n_17 = (ATerm) ATgetNext((ATermList) k_17);
                        if(((ATgetType(n_17) == AT_LIST) && !(ATisEmpty(n_17))))
                          {
                            f_19 = ATgetFirst((ATermList) n_17);
                            {
                              ATerm o_17 = (ATerm) ATgetNext((ATermList) n_17);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_18), m_18), f_19);
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
              {
                ATerm n_19 = NULL,o_19 = NULL,v_19 = NULL,w_19 = NULL,p_20 = NULL,s_3 = NULL;
                t = SSLgetAnnotations(h_41);
                w_19 = t;
                t = (ATerm) ATinsert(CheckATermList(j_41), i_41);
                s_3 = t;
                t = SSLsetAnnotations(s_3, w_19);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm p_17 = ATgetFirst((ATermList) t);
                    o_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_19;
                t = k_41(t);
                n_19 = t;
                t = SSL_explode_term(n_19);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_17 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm u_17 = ATgetArgument(t, 1);
                      if(((ATgetType(u_17) == AT_LIST) && !(ATisEmpty(u_17))))
                        {
                          v_19 = ATgetFirst((ATermList) u_17);
                          {
                            ATerm v_17 = (ATerm) ATgetNext((ATermList) u_17);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(n_19);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_17 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm x_17 = ATgetArgument(t, 1);
                      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
                        {
                          ATerm a_18 = ATgetFirst((ATermList) x_17);
                          ATerm b_18 = (ATerm) ATgetNext((ATermList) x_17);
                          if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
                            {
                              p_20 = ATgetFirst((ATermList) b_18);
                              {
                                ATerm c_18 = (ATerm) ATgetNext((ATermList) b_18);
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
                t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATinsert(CheckATermList(p_20), i_41));
              }
            }
        }
      }
    return(t);
  }
  t = k_41(t);
  return(t);
}
static ATerm d_7 (ATerm y_22, ATerm x_22, ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  t = y_22;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_41;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, n_41, x_22), o_41);
  return(t);
}
static ATerm e_7 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm j_48, ATerm i_48, ATerm t)
{
  t = l_121(t);
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm p_41 = NULL;
      p_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_48, p_41);
      t = k_121(t);
      return(t);
    }
    t = fetch_1_0(e_4, t);
  }
  t = i_48;
  return(t);
}
static ATerm f_7 (ATerm h_121 (ATerm), ATerm f_48, ATerm e_48, ATerm t)
{
  static ATerm x_42 (ATerm t)
  {
    ATerm l_42 = NULL,m_42 = NULL,s_42 = NULL;
    l_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_48;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_42 = ATgetFirst((ATermList) t);
            s_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_42;
              {
                static ATerm f_4 (ATerm t)
                {
                  t = e_48;
                  return(t);
                }
                t = e_7(h_121, f_4, m_42, s_42, t);
              }
              t = x_42(t);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              {
                ATerm e_21 = NULL,m_21 = NULL,b_4 = NULL;
                t = SSLgetAnnotations(l_42);
                e_21 = t;
                t = s_42;
                t = x_42(t);
                m_21 = t;
                t = (ATerm) ATinsert(CheckATermList(m_21), m_42);
                b_4 = t;
                t = SSLsetAnnotations(b_4, e_21);
              }
            }
        }
      }
    return(t);
  }
  t = f_48;
  t = x_42(t);
  return(t);
}
ATerm genzip_4_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t)
{
  static ATerm m_43 (ATerm t)
  {
    ATerm h_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_110(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = h_18;
        {
          ATerm z_42 = NULL,a_43 = NULL,e_43 = NULL,f_43 = NULL,k_43 = NULL,l_43 = NULL,d_4 = NULL;
          t = s_110(t);
          l_43 = t;
          if(match_cons(t, sym__2))
            {
              a_43 = ATgetArgument(t, 0);
              e_43 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_43);
          z_42 = t;
          t = a_43;
          t = u_110(t);
          f_43 = t;
          t = e_43;
          t = m_43(t);
          k_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_43, k_43);
          d_4 = t;
          t = SSLsetAnnotations(d_4, z_42);
          t = t_110(t);
        }
      }
    return(t);
  }
  t = m_43(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_44 = ATgetFirst((ATermList) t);
      p_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_44, p_44);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm q_44 = NULL,s_44 = NULL,t_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(match_cons(k_18, sym__2))
        {
          q_44 = ATgetArgument(k_18, 0);
          s_44 = ATgetArgument(k_18, 1);
        }
      else
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(match_cons(l_18, sym__2))
          {
            t_44 = ATgetArgument(l_18, 0);
            w_44 = ATgetArgument(l_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_44), q_44), (ATerm) ATinsert(CheckATermList(w_44), s_44));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  if(match_cons(t, sym__2))
    {
      y_44 = ATgetArgument(t, 0);
      z_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(u_4, y_44, z_44, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm a_45 = NULL;
  if(match_cons(t, sym__2))
    {
      a_45 = ATgetArgument(t, 0);
      if((a_45 != ATgetArgument(t, 1)))
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
  ATerm i_45 = NULL;
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      if((i_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm e_122 (ATerm), ATerm f_122 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,t_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,f_44 = NULL,i_44 = NULL;
  f_44 = t;
  i_44 = t;
  t = SSL_explode_term(i_44);
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_44);
  y_43 = t;
  t = p_43;
  t = genzip_4_0(g_4, h_4, m_4, e_122, t);
  if(match_cons(t, sym__2))
    {
      x_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(w_43, x_43);
  d_44 = t;
  t = SSLsetAnnotations(d_44, y_43);
  t = f_122(t);
  if(match_cons(t, sym__2))
    {
      z_43 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_43;
  t = foldr_2_0(n_4, o_4, t);
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_44, c_44);
  t = f_7(v_4, a_44, c_44, t);
  b_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_43, b_44);
  return(t);
}
ATerm collect_split_1_0 (ATerm r_122 (ATerm), ATerm t)
{
  static ATerm q_45 (ATerm t)
  {
    static ATerm w_4 (ATerm t)
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_122(t);
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          {
            ATerm m_45 = NULL;
            m_45 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_45, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(q_45, w_4, t);
    return(t);
  }
  t = q_45(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm a_46 = NULL,g_46 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      a_46 = ATgetArgument(t, 0);
      g_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(a_46, g_46, t);
  return(t);
}
static ATerm j_7 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm u_22, ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  t = u_22;
  t = collect_split_1_0(z_4, t);
  if(match_cons(t, sym__2))
    {
      r_45 = ATgetArgument(t, 0);
      s_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, r_22, s_22, t_22, r_45)));
  t = conc_0_0(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_s_9;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_s_9;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,n_46 = NULL,q_46 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      j_46 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
      n_46 = ATgetArgument(t, 2);
      {
        ATerm u_46 = NULL;
        t = term_q_18;
        u_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_46, term_q_18);
        t = k_7(a_5, j_46, u_46, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, j_46, k_46, n_46);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          j_46 = ATgetArgument(t, 0);
          k_46 = ATgetArgument(t, 1);
          n_46 = ATgetArgument(t, 2);
          q_46 = ATgetArgument(t, 3);
          {
            ATerm b_47 = NULL;
            t = term_s_18;
            b_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_46, term_s_18);
            t = k_7(c_5, j_46, b_47, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, j_46, k_46, n_46, q_46);
          }
        }
      else
        {
          ATerm k_47 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              j_46 = ATgetArgument(t, 0);
              k_46 = ATgetArgument(t, 1);
              n_46 = ATgetArgument(t, 2);
              q_46 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_z_18;
          k_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_46, term_z_18);
          t = k_7(d_5, j_46, k_47, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, j_46, k_46, n_46, q_46);
        }
    }
  return(t);
}
static ATerm k_7 (ATerm y_117 (ATerm), ATerm q_40, ATerm n_40, ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  r_47 = t;
  t = y_117(t);
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_47, q_40, n_40);
  t = z_7(m_47, q_40, n_40, t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_47 = NULL;
        t = term_c_19;
        w_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_47, term_c_19);
        t = y_7(m_47, w_47, t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_47 = ATgetFirst((ATermList) t);
      q_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_47, term_c_19, (ATerm) ATinsert(CheckATermList(q_47), (ATerm) ATinsert(CheckATermList(n_47), q_40)));
  t = lookup_table_0_1(m_47, t);
  v_47 = t;
  t = term_c_19;
  s_47 = t;
  t = (ATerm) ATinsert(CheckATermList(q_47), (ATerm) ATinsert(CheckATermList(n_47), q_40));
  t_47 = t;
  t = v_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(s_47, t_47, u_47, t);
  t = r_47;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  y_47 = t;
  t = term_e_19;
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_47, term_e_19);
  t = k_7(f_5, y_47, z_47, t);
  t = y_47;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_19), term_g_19);
  t = map_1_0(e_5, t);
  t = x_47;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,h_49 = NULL,i_49 = NULL,i_4 = NULL;
  i_49 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_49);
  d_49 = t;
  t = e_49;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(k_5, t);
  t = concat_0_0(t);
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_49);
  i_4 = t;
  t = SSLsetAnnotations(i_4, d_49);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  n_49 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
      l_49 = ATgetArgument(t, 2);
      m_49 = ATgetArgument(t, 3);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_49;
            t = j_7(j_49, k_49, l_49, m_49, t);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = (ATerm) ATinsert(ATempty, n_49);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, n_49);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm g_48 = NULL,l_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,u_48 = NULL,c_49 = NULL,k_4 = NULL,j_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  c_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_49);
  g_48 = t;
  t = l_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_48 = ATgetFirst((ATermList) t);
      q_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_48);
  o_48 = t;
  t = q_48;
  t = Cons_2_0(g_5, i_5, t);
  r_48 = t;
  t = (ATerm) ATinsert(CheckATermList(r_48), p_48);
  j_4 = t;
  t = SSLsetAnnotations(j_4, o_48);
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_48);
  k_4 = t;
  t = SSLsetAnnotations(k_4, g_48);
  return(t);
}
static ATerm m_7 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm z_49 = NULL;
  t = SSL_fputc(v_31, w_31);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_49);
  return(t);
}
static ATerm n_7 (ATerm n_30, ATerm o_30, ATerm t)
{
  ATerm a_50 = NULL;
  t = SSL_write_term_to_stream_text(n_30, o_30);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_50);
  return(t);
}
static ATerm p_7 (ATerm p_113 (ATerm), ATerm z_222, ATerm t_30, ATerm t)
{
  ATerm b_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_222, term_k_19);
  t = t_7(t);
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_50, t_30);
  t = p_113(t);
  t = fclose_0_0(t);
  t = t_30;
  return(t);
}
static ATerm o_7 (ATerm j_30, ATerm k_30, ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_write_term_to_stream_baf(j_30, k_30);
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_50);
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
  ATerm f_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if(match_cons(l_19, sym_Stream_1))
        {
          f_22 = ATgetArgument(l_19, 0);
        }
      else
        _fail(t);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(f_22, g_22, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,f_23 = NULL,h_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if(match_cons(m_19, sym_Stream_1))
        {
          h_23 = ATgetArgument(m_19, 0);
        }
      else
        _fail(t);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(h_23, j_23, t);
  z_22 = t;
  t = term_p_19;
  a_23 = t;
  t = z_22;
  if(match_cons(t, sym_Stream_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, z_22);
  t = m_7(a_23, f_23, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,y_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,e_51 = NULL,f_51 = NULL,o_52 = NULL,s_52 = NULL,q_4 = NULL,p_4 = NULL;
  r_50 = t;
  if(match_cons(t, sym__2))
    {
      c_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_50);
  b_51 = t;
  t = c_51;
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_50 != NULL) && (q_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(l_5, t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = term_s_19;
        q_50 = t;
      }
  }
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_51, e_51);
  p_4 = t;
  t = SSLsetAnnotations(p_4, b_51);
  t = r_50;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      y_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_50);
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_50, (ATerm) ATmakeAppl(sym__2, not_null(q_50), y_50));
  q_4 = t;
  t = SSLsetAnnotations(q_4, s_50);
  a_51 = t;
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,b_5 = NULL;
        t = SSLgetAnnotations(a_51);
        w_21 = t;
        t = o_52;
        t = fetch_1_0(m_5, t);
        a_22 = t;
        t = s_52;
        if(match_cons(t, sym__2))
          {
            c_22 = ATgetArgument(t, 0);
            d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_7(n_5, c_22, d_22, t);
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
        b_5 = t;
        t = SSLsetAnnotations(b_5, w_21);
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        {
          ATerm m_22 = NULL,q_22 = NULL,v_22 = NULL,w_22 = NULL,j_5 = NULL;
          t = SSLgetAnnotations(a_51);
          m_22 = t;
          t = s_52;
          if(match_cons(t, sym__2))
            {
              v_22 = ATgetArgument(t, 0);
              w_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_7(q_5, v_22, w_22, t);
          q_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_52, q_22);
          j_5 = t;
          t = SSLsetAnnotations(j_5, m_22);
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
ATerm apply_strategy_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm v_52 = NULL,y_52 = NULL,z_52 = NULL,c_53 = NULL,e_53 = NULL;
  e_53 = t;
  t = dtime_0_0(t);
  t = e_53;
  t = c_133(t);
  c_53 = t;
  t = dtime_0_0(t);
  v_52 = t;
  t = c_53;
  if(match_cons(t, sym__2))
    {
      y_52 = ATgetArgument(t, 0);
      z_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_52), (ATerm) ATmakeAppl(sym_Runtime_1, v_52)), z_52);
  return(t);
}
static ATerm e_54 (ATerm n_53, ATerm t)
{
  t = SSL_fclose(n_53);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  z_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_53 = ATgetArgument(t, 0);
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_53);
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            t = e_54(z_53, t);
          }
      }
    }
  else
    {
      t = e_54(z_53, t);
    }
  return(t);
}
static ATerm q_7 (ATerm p_30, ATerm t)
{
  t = SSL_read_term_from_stream(p_30);
  return(t);
}
static ATerm r_7 (ATerm i_57, ATerm j_57, ATerm t)
{
  t = SSL_strcat(i_57, j_57);
  return(t);
}
static ATerm s_7 (ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm f_54 = NULL;
  t = SSL_fopen(x_31, y_31);
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_54);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_54 = NULL;
  t = SSL_stdin_stream();
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_54);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_54 = NULL;
  t = SSL_stdout_stream();
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_54);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_54 = NULL;
  t = SSL_stderr_stream();
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_54);
  return(t);
}
static ATerm i_56 (ATerm w_54, ATerm t)
{
  ATerm x_54 = NULL;
  t = SSL_explode_term(w_54);
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_20 = ATgetArgument(t, 1);
        if(((ATgetType(a_20) == AT_LIST) && !(ATisEmpty(a_20))))
          {
            x_54 = ATgetFirst((ATermList) a_20);
            {
              ATerm b_20 = (ATerm) ATgetNext((ATermList) a_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_54;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_54;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_54;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_54;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_56 (ATerm d_55, ATerm e_55, ATerm f_55, ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,l_55 = NULL,r_5 = NULL;
  t = SSLgetAnnotations(f_55);
  i_55 = t;
  t = d_55;
  if(match_cons(t, sym_Path_1))
    {
      l_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_55, e_55);
  r_5 = t;
  t = SSLsetAnnotations(r_5, i_55);
  if(match_cons(t, sym__2))
    {
      g_55 = ATgetArgument(t, 0);
      h_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(g_55, h_55, t);
  return(t);
}
static ATerm k_56 (ATerm n_55, ATerm o_55, ATerm p_55, ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,x_55 = NULL,v_5 = NULL;
  t = SSLgetAnnotations(p_55);
  s_55 = t;
  t = SSL_is_string(n_55);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_55, o_55);
  v_5 = t;
  t = SSLsetAnnotations(v_5, s_55);
  if(match_cons(t, sym__2))
    {
      q_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(q_55, r_55, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm b_56 = NULL,e_56 = NULL,f_56 = NULL;
  b_56 = t;
  if(match_cons(t, sym__2))
    {
      e_56 = ATgetArgument(t, 0);
      f_56 = ATgetArgument(t, 1);
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_56(b_56, t);
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_56(e_56, f_56, b_56, t);
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  t = k_56(e_56, f_56, b_56, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_56(b_56, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_56 = NULL,q_56 = NULL,r_56 = NULL,w_56 = NULL;
  w_56 = t;
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_56, term_i_20);
        t = t_7(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        {
          ATerm a_24 = NULL,i_24 = NULL;
          t = term_j_20;
          i_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_20, w_56);
          t = r_7(i_24, w_56, t);
          a_24 = t;
          t = SSL_perror(a_24);
          _fail(t);
        }
      }
  }
  q_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(r_56, t);
  o_56 = t;
  t = q_56;
  t = fclose_0_0(t);
  t = o_56;
  return(t);
}
ATerm fetch_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  static ATerm x_57 (ATerm t)
  {
    ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
    u_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_57 = ATgetFirst((ATermList) t);
        w_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_24 = NULL,y_24 = NULL,n_6 = NULL;
          t = SSLgetAnnotations(u_57);
          s_24 = t;
          t = v_57;
          t = x_118(t);
          y_24 = t;
          t = (ATerm) ATinsert(CheckATermList(w_57), y_24);
          n_6 = t;
          t = SSLsetAnnotations(n_6, s_24);
          LocalPopChoice(l_20);
        }
      else
        {
          t = k_20;
          {
            ATerm m_25 = NULL,r_25 = NULL,a_7 = NULL;
            t = SSLgetAnnotations(u_57);
            m_25 = t;
            t = w_57;
            t = x_57(t);
            r_25 = t;
            t = (ATerm) ATinsert(CheckATermList(r_25), v_57);
            a_7 = t;
            t = SSLsetAnnotations(a_7, m_25);
          }
        }
    }
    return(t);
  }
  t = x_57(t);
  return(t);
}
static ATerm y_7 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm a_58 = NULL;
  t = lookup_table_0_1(n_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(o_43, a_58, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_115 (ATerm), ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
        t = term_o_20;
        g_58 = t;
        t = term_q_20;
        h_58 = t;
        t = term_r_20;
        t = y_7(g_58, h_58, t);
        f_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_58, term_s_20);
        t = geq_0_0(t);
        t = d_58;
        t = g_115(t);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = d_58;
      }
  }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm k_58 = NULL;
  k_58 = t;
  if(match_string(t, "-k"))
    {
      t = k_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_58;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
  l_58 = t;
  t = SSL_string_to_int(l_58);
  m_58 = t;
  t = term_t_20;
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, m_58);
  t = b_8(n_58, m_58, t);
  t = l_58;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  if(match_string(t, "-S"))
    {
      t = p_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_58;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  t = term_q_20;
  q_58 = t;
  t = term_v_20;
  r_58 = t;
  t = term_w_20;
  t = b_8(q_58, r_58, t);
  t = term_x_20;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
  s_58 = t;
  t = SSL_string_to_int(s_58);
  t_58 = t;
  t = term_q_20;
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_20, t_58);
  t = b_8(u_58, t_58, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_58);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  t = term_a_21;
  v_58 = t;
  t = term_x_0;
  w_58 = t;
  t = term_b_21;
  t = b_8(v_58, w_58, t);
  t = term_c_21;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_5, a_6, b_6, t);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = Option_3_0(c_6, e_6, f_6, t);
          }
      }
    }
  return(t);
}
static ATerm b_8 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL;
  t = term_o_20;
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_20, c_36, d_36);
  t = lookup_table_0_1(x_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(c_36, d_36, y_58, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_20, c_36, d_36);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
      t = term_x_0;
      t = e_0(t);
      e_59 = t;
      t = term_j_21;
      f_59 = t;
      t = term_k_21;
      g_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_21, term_k_21, e_59);
      t = z_7(f_59, g_59, e_59, t);
      _fail(t);
    }
  else
    {
      ATerm j_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_59 = ATgetFirst((ATermList) t);
          d_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_59;
      t = c_0(t);
      t = term_x_0;
      t = d_0(t);
      j_59 = t;
      t = (ATerm) ATinsert(CheckATermList(d_59), j_59);
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  if(match_string(t, "-o"))
    {
      t = p_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_59;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL;
  q_59 = t;
  t = term_l_21;
  r_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, q_59);
  t = b_8(r_59, q_59, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_59);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, k_6, l_6, t);
  return(t);
}
static ATerm z_7 (ATerm u_41, ATerm v_41, ATerm t_41, ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_41, v_41);
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_21 = ATgetArgument(t, 0);
            ATerm r_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_41, v_41);
        t = y_7(u_41, v_41, t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = (ATerm) ATempty;
      }
  }
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_41, v_41, (ATerm) ATinsert(CheckATermList(u_59), t_41));
  t = lookup_table_0_1(u_41, t);
  x_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), t_41);
  v_59 = t;
  t = x_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(v_41, v_59, w_59, t);
  t = t_59;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
      t = term_x_0;
      t = n_0(t);
      i_60 = t;
      t = term_j_21;
      j_60 = t;
      t = term_k_21;
      k_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_21, term_k_21, i_60);
      t = z_7(j_60, k_60, i_60, t);
      _fail(t);
    }
  else
    {
      ATerm o_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_60 = ATgetFirst((ATermList) t);
          f_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_60 = ATgetFirst((ATermList) t);
          h_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_60;
      t = k_0(t);
      t = g_60;
      t = l_0(t);
      o_60 = t;
      t = (ATerm) ATinsert(CheckATermList(h_60), o_60);
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm q_60 = NULL;
  q_60 = t;
  if(match_string(t, "-i"))
    {
      t = q_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_60;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL;
  r_60 = t;
  t = term_s_21;
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, r_60);
  t = b_8(s_60, r_60, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_60);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_6, p_6, q_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  t_60 = t;
  t = term_f_9;
  v_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_21), t_60);
  w_60 = t;
  t = SSL_printnl(v_60, w_60);
  t = term_i_9;
  u_60 = t;
  t = SSL_exit(u_60);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL;
  t = term_o_20;
  x_60 = t;
  t = term_v_21;
  y_60 = t;
  t = term_x_21;
  t = y_7(x_60, y_60, t);
  return(t);
}
static ATerm u_7 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_38, a_39);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      t = SSL_addr(z_38, a_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
  a_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_61;
      t = c_124(t);
    }
  else
    {
      ATerm f_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_61 = ATgetFirst((ATermList) t);
          c_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_61;
      t = foldr_2_0(c_124, d_124, t);
      f_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_61, f_61);
      t = d_124(t);
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
  t = term_v_20;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(a_26, b_26, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_61 = NULL,w_25 = NULL,x_25 = NULL;
  t = times_0_0(t);
  x_25 = t;
  t = SSL_explode_term(x_25);
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_25;
  t = foldr_2_0(s_6, t_6, t);
  i_61 = t;
  t = SSL_TicksToSeconds(i_61);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  if(match_cons(t, sym__2))
    {
      u_61 = ATgetArgument(t, 0);
      v_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_61;
        if((u_61 != t))
          {
            _fail(t);
          }
        t = t_61;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = (ATerm) ATmakeAppl(sym__2, u_61, v_61);
        {
          ATerm j_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_61, v_61);
              LocalPopChoice(k_22);
            }
          else
            {
              t = j_22;
              t = SSL_gtr(u_61, v_61);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_61, v_61);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  ATerm e_62 = NULL;
  e_62 = t;
  {
    ATerm l_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
        t = term_o_20;
        h_62 = t;
        t = term_q_20;
        i_62 = t;
        t = term_r_20;
        t = y_7(h_62, i_62, t);
        g_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_62, term_i_9);
        t = geq_0_0(t);
        t = e_62;
        t = f_115(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = l_22;
        t = e_62;
      }
  }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,n_62 = NULL,p_62 = NULL;
  t = run_time_0_0(t);
  k_62 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  l_62 = t;
  t = term_f_9;
  n_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_22), k_62), term_o_22), l_62);
  p_62 = t;
  t = SSL_printnl(n_62, p_62);
  t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_22), k_62), term_o_22), l_62));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_62 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_20;
  q_62 = t;
  t = SSL_exit(q_62);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  b_63 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_63;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_63 = ATgetArgument(t, 0);
          {
            ATerm n_26 = NULL,f_8 = NULL;
            t = SSLgetAnnotations(b_63);
            n_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_63);
            f_8 = t;
            t = SSLsetAnnotations(f_8, n_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_63;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_134 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_62 = NULL,u_62 = NULL;
      t = term_o_20;
      t_62 = t;
      t = term_d_23;
      u_62 = t;
      t = term_e_23;
      t = y_7(t_62, u_62, t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      t = fetch_1_0(v_6, t);
    }
  t = a_134(t);
  return(t);
}
static ATerm c_8 (ATerm b_45, ATerm c_45, ATerm d_45, ATerm t)
{
  ATerm d_63 = NULL;
  t = SSL_hashtable_put(d_45, b_45, c_45);
  d_63 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_63);
  return(t);
}
static ATerm d_8 (ATerm e_45, ATerm f_45, ATerm t)
{
  t = SSL_hashtable_get(f_45, e_45);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_43, ATerm t)
{
  ATerm m_63 = NULL;
  t = table_hashtable_0_0(t);
  m_63 = t;
  {
    ATerm g_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_27 = NULL;
        t = m_63;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_8(g_43, h_27, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = g_23;
        {
          ATerm s_27 = NULL;
          t = g_43;
          t = table_create_0_0(t);
          t = m_63;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_8(g_43, s_27, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm q_63 = NULL;
  t = SSL_hashtable_create(j_45, k_45);
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_63);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,z_63 = NULL,a_64 = NULL;
  v_63 = t;
  t = term_k_23;
  z_63 = t;
  t = term_l_23;
  a_64 = t;
  t = v_63;
  t = new_hashtable_0_2(z_63, a_64, t);
  w_63 = t;
  t = v_63;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(v_63, w_63, x_63, t);
  t = v_63;
  return(t);
}
static ATerm w_7 (ATerm g_45, ATerm h_45, ATerm t)
{
  ATerm b_64 = NULL;
  t = SSL_hashtable_remove(h_45, g_45);
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_64);
  return(t);
}
static ATerm x_7 (ATerm l_45, ATerm t)
{
  ATerm c_64 = NULL;
  t = SSL_hashtable_destroy(l_45);
  c_64 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_64);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_64 = NULL;
  t = SSL_table_hashtable();
  d_64 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_64);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL;
  e_64 = t;
  t = table_hashtable_0_0(t);
  f_64 = t;
  t = lookup_table_0_1(e_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(h_64, t);
  t = f_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(e_64, g_64, t);
  t = e_64;
  return(t);
}
ATerm map_1_0 (ATerm n_118 (ATerm), ATerm t)
{
  static ATerm w_64 (ATerm t)
  {
    ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
    t_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_64;
      }
    else
      {
        ATerm z_27 = NULL,d_28 = NULL,f_28 = NULL,h_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_64 = ATgetFirst((ATermList) t);
            v_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_64);
        z_27 = t;
        t = u_64;
        t = n_118(t);
        d_28 = t;
        t = v_64;
        t = w_64(t);
        f_28 = t;
        t = (ATerm) ATinsert(CheckATermList(f_28), d_28);
        h_8 = t;
        t = SSLsetAnnotations(h_8, z_27);
      }
    return(t);
  }
  t = w_64(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_64 = ATgetFirst((ATermList) t);
      a_65 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_65 = NULL,f_65 = NULL;
        static ATerm x_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_65)), not_null(f_65));
          return(t);
        }
        t = a_65;
        t = i_0(t);
        if(((e_65 != NULL) && (e_65 != t)))
          _fail(t);
        else
          e_65 = t;
        t = z_64;
        t = g_0(t);
        if(((f_65 != NULL) && (f_65 != t)))
          _fail(t);
        else
          f_65 = t;
        t = a_65;
        t = reverse_acc_2_0(g_0, x_6, t);
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
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,j_8 = NULL;
  n_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_65);
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_65);
  j_8 = t;
  t = SSLsetAnnotations(j_8, l_65);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_65), term_m_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL;
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_65 = NULL,k_65 = NULL;
      t = term_o_20;
      j_65 = t;
      t = term_v_21;
      k_65 = t;
      t = term_x_21;
      t = y_7(j_65, k_65, t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = fetch_1_0(z_6, t);
    }
  t = term_p_23;
  t = echo_0_0(t);
  t = term_j_21;
  h_65 = t;
  t = term_k_21;
  i_65 = t;
  t = term_q_23;
  t = y_7(h_65, i_65, t);
  t = reverse_acc_2_0(_id, c_7, t);
  t = map_1_0(g_7, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  r_65 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_65;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_23 = ATgetFirst((ATermList) t);
                ATerm u_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_65;
          }
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATinsert(ATempty, r_65);
      }
  }
  s_65 = t;
  t = term_s_19;
  t_65 = t;
  t = SSL_printnl(t_65, s_65);
  t = r_65;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL;
  t = term_o_20;
  x_65 = t;
  t = term_v_21;
  y_65 = t;
  t = term_x_21;
  t = y_7(x_65, y_65, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL;
  t = term_v_23;
  z_65 = t;
  t = term_x_0;
  a_66 = t;
  t = term_w_23;
  t = b_8(z_65, a_66, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_x_23;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
  t = term_v_23;
  d_66 = t;
  t = term_x_0;
  e_66 = t;
  t = term_w_23;
  t = b_8(d_66, e_66, t);
  t = term_y_23;
  b_66 = t;
  t = term_x_0;
  c_66 = t;
  t = term_z_23;
  t = b_8(b_66, c_66, t);
  t = term_d_24;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_7, a_8, e_8, t);
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      t = Option_3_0(g_8, i_8, l_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,m_8 = NULL;
  k_66 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_66 = ATgetFirst((ATermList) t);
      h_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_66);
  f_66 = t;
  t = g_66;
  t = w_90(t);
  i_66 = t;
  t = h_66;
  t = x_90(t);
  j_66 = t;
  t = (ATerm) ATinsert(CheckATermList(j_66), i_66);
  m_8 = t;
  t = SSLsetAnnotations(m_8, f_66);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_136 (ATerm), ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,u_66 = NULL,v_66 = NULL,o_8 = NULL;
  p_66 = t;
  {
    ATerm h_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_24;
        t = d_136(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = h_24;
      }
  }
  t = p_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_66 = ATgetFirst((ATermList) t);
      s_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_66);
  q_66 = t;
  t = term_v_21;
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, r_66);
  t = b_8(v_66, r_66, t);
  t = s_66;
  {
    static ATerm f_67 (ATerm t)
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_66 = NULL;
              y_66 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_66;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = d_136(t);
              t = Cons_2_0(_id, f_67, t);
            }
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          {
            ATerm b_67 = NULL,c_67 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_67 = ATgetFirst((ATermList) t);
                c_67 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_67), (ATerm) ATmakeAppl(sym_Undefined_1, b_67));
          }
        }
      return(t);
    }
    t = f_67(t);
  }
  u_66 = t;
  t = (ATerm) ATinsert(CheckATermList(u_66), (ATerm) ATmakeAppl(sym_Program_1, r_66));
  o_8 = t;
  t = SSLsetAnnotations(o_8, q_66);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm s_67 = NULL;
  s_67 = t;
  if(match_string(t, "--help"))
    {
      t = s_67;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_67;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_67;
        }
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL;
  t = term_d_23;
  t_67 = t;
  t = term_x_0;
  u_67 = t;
  t = term_p_24;
  t = b_8(t_67, u_67, t);
  t = term_r_24;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_t_24;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
  m_67 = t;
  t = term_j_21;
  n_67 = t;
  t = term_w_24;
  t = lookup_table_0_1(n_67, t);
  r_67 = t;
  t = term_k_21;
  o_67 = t;
  t = (ATerm) ATempty;
  p_67 = t;
  t = r_67;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(o_67, p_67, q_67, t);
  t = m_67;
  {
    static ATerm n_8 (ATerm t)
    {
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_136(t);
          LocalPopChoice(a_25);
        }
      else
        {
          t = z_24;
          {
            ATerm b_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_8, r_8, t_8, t);
                LocalPopChoice(d_25);
              }
            else
              {
                t = b_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_8, t);
  }
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_68 = NULL;
        f_68 = t;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_28 = NULL;
              t = f_68;
              {
                ATerm i_25 = t;
                int j_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_28 = NULL,q_28 = NULL;
                    t = term_o_20;
                    p_28 = t;
                    t = term_d_23;
                    q_28 = t;
                    t = term_e_23;
                    t = y_7(p_28, q_28, t);
                    LocalPopChoice(j_25);
                  }
                else
                  {
                    t = i_25;
                    t = fetch_1_0(u_8, t);
                  }
              }
              t = f_68;
              t = default_system_usage_0_0(t);
              t = term_v_20;
              o_28 = t;
              t = SSL_exit(o_28);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
                t = term_o_20;
                f_29 = t;
                t = term_v_23;
                g_29 = t;
                t = term_k_25;
                t = y_7(f_29, g_29, t);
                t = f_68;
                t = default_system_about_0_0(t);
                t = term_v_20;
                e_29 = t;
                t = SSL_exit(e_29);
              }
            }
        }
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm l_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
              static ATerm v_8 (ATerm t)
              {
                ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,q_8 = NULL;
                l_68 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_68 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_68);
                j_68 = t;
                t = k_68;
                if(((k_67 != NULL) && (k_67 != t)))
                  _fail(t);
                else
                  k_67 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_68);
                q_8 = t;
                t = SSLsetAnnotations(q_8, j_68);
                return(t);
              }
              t = fetch_1_0(v_8, t);
              t = term_f_9;
              h_68 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_67)), term_o_25);
              i_68 = t;
              t = SSL_printnl(h_68, i_68);
              t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_67)), term_o_25));
              t = default_system_usage_0_0(t);
              t = term_i_9;
              g_68 = t;
              t = SSL_exit(g_68);
              LocalPopChoice(n_25);
            }
          else
            {
              t = l_25;
            }
        }
      }
  }
  l_67 = t;
  t = term_j_21;
  t = table_destroy_0_0(t);
  t = l_67;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL;
  t = parse_options_1_0(c_134, t);
  q_68 = t;
  t = term_p_25;
  t = table_create_0_0(t);
  t = term_p_25;
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_25, term_q_25, q_68);
  t = lookup_table_0_1(r_68, t);
  u_68 = t;
  t = term_q_25;
  s_68 = t;
  t = u_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(s_68, q_68, t_68, t);
  t = q_68;
  t = e_134(t);
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_134, t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_134(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = if_verbose2_1_0(c_9, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL;
  t = term_y_25;
  v_68 = t;
  t = term_x_0;
  w_68 = t;
  t = term_z_25;
  t = b_8(v_68, w_68, t);
  t = term_c_26;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  x_68 = t;
  t = term_o_20;
  b_69 = t;
  t = term_v_21;
  c_69 = t;
  t = term_x_21;
  t = y_7(b_69, c_69, t);
  y_68 = t;
  t = term_f_9;
  z_68 = t;
  t = (ATerm) ATinsert(ATempty, y_68);
  a_69 = t;
  t = SSL_printnl(z_68, a_69);
  t = x_68;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm t)
{
  static ATerm w_8 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_133(t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm g_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(h_26);
            }
          else
            {
              t = g_26;
              {
                ATerm i_26 = t;
                int j_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(j_26);
                  }
                else
                  {
                    t = i_26;
                    {
                      ATerm k_26 = t;
                      int l_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_8, a_9, b_9, t);
                          LocalPopChoice(l_26);
                        }
                      else
                        {
                          t = k_26;
                          {
                            ATerm m_26 = t;
                            int o_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_26);
                              }
                            else
                              {
                                t = m_26;
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
  static ATerm y_8 (ATerm t)
  {
    ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
    e_69 = t;
    {
      ATerm q_26 = t;
      int r_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_69 != NULL) && (d_69 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_69 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_9, t);
          LocalPopChoice(r_26);
        }
      else
        {
          t = q_26;
          t = term_t_26;
          d_69 = t;
        }
    }
    t = not_null(d_69);
    t = ReadFromFile_0_0(t);
    f_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_69, f_69);
    t = apply_strategy_1_0(l_133, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(w_8, n_133, x_8, y_8, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,s_8 = NULL;
  k_69 = t;
  if(match_cons(t, sym__2))
    {
      h_69 = ATgetArgument(t, 0);
      i_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_69);
  g_69 = t;
  t = i_69;
  t = lift_definitions_0_0(t);
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_69, j_69);
  s_8 = t;
  t = SSLsetAnnotations(s_8, g_69);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(e_9, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_Prefix_2;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_l_25;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_c_23;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_n_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_x_14;
ATerm term_e_9;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_x_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_x_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_m_20);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_x_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_x_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_x_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_x_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm g_111 (ATerm), ATerm t);
static ATerm h_2 (ATerm x_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_6 (ATerm g_41, ATerm h_41, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm k_6 (ATerm y_23, ATerm x_23, ATerm t);
ATerm foldr_3_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t);
static ATerm p_6 (ATerm y_112 (ATerm), ATerm b_45, ATerm a_45, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm u_6 (ATerm q_624, ATerm v_624, ATerm s_60, ATerm t);
ATerm while_not_2_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t);
ATerm for_3_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm m_17 (ATerm n_15, ATerm o_15, ATerm t_15, ATerm t);
static ATerm r_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm free_vars_3_0 (ATerm k_119 (ATerm), ATerm l_119 (ATerm), ATerm m_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm d_117 (ATerm), ATerm t);
static ATerm w_6 (ATerm u_22, ATerm t_22, ATerm t);
static ATerm x_6 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm h_45, ATerm g_45, ATerm t);
static ATerm y_6 (ATerm d_113 (ATerm), ATerm d_45, ATerm c_45, ATerm t);
ATerm genzip_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm CollectSplit_2_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm n_114 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm c_7 (ATerm n_22, ATerm o_22, ATerm p_22, ATerm q_22, ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm d_7 (ATerm g_110 (ATerm), ATerm n_40, ATerm l_40, ATerm t);
static ATerm p_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm g_7 (ATerm n_31, ATerm o_31, ATerm t);
static ATerm h_7 (ATerm h_30, ATerm i_30, ATerm t);
static ATerm j_7 (ATerm x_105 (ATerm), ATerm i_212, ATerm l_30, ATerm t);
static ATerm i_7 (ATerm d_30, ATerm e_30, ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm r_124 (ATerm), ATerm t);
static ATerm w_47 (ATerm j_47, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_7 (ATerm j_30, ATerm t);
static ATerm l_7 (ATerm p_31, ATerm q_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_50 (ATerm q_48, ATerm t);
static ATerm f_50 (ATerm x_48, ATerm y_48, ATerm z_48, ATerm t);
static ATerm g_50 (ATerm h_49, ATerm i_49, ATerm j_49, ATerm t);
static ATerm m_7 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_111 (ATerm), ATerm t);
static ATerm f_7 (ATerm g_54, ATerm h_54, ATerm t);
ATerm debug_1_0 (ATerm v_105 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm o_107 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_7 (ATerm s_35, ATerm t_35, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_7 (ATerm v_40, ATerm w_40, ATerm u_40, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_7 (ATerm z_38, ATerm a_39, ATerm t);
ATerm foldr_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_107 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm need_help_1_0 (ATerm p_125 (ATerm), ATerm t);
ATerm map_1_0 (ATerm q_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_7 (ATerm m_42, ATerm n_42, ATerm t);
static ATerm t_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_127 (ATerm), ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm parse_options_1_0 (ATerm r_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm iowrap_3_0 (ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,l_0 = NULL,m_0 = NULL;
  a_0 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_s_8;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), b_0), term_t_8);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t = term_x_8;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL,u_0 = NULL;
  q_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_0;
    }
  else
    {
      static ATerm o_0 (ATerm t)
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
      t = at_end_1_0(o_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  static ATerm q_1 (ATerm t)
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
          t = q_1(t);
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
        t = g_111(t);
      }
    return(t);
  }
  t = q_1(t);
  return(t);
}
static ATerm h_2 (ATerm x_1, ATerm t)
{
  ATerm z_1 = NULL;
  t = SSL_explode_term(x_1);
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
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
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_0 (ATerm t)
            {
              t = c_2;
              return(t);
            }
            t = b_2;
            t = at_end_1_0(v_0, t);
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
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
static ATerm f_6 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm i_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_41, h_41);
  t = p_7(g_41, h_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_2 = ATgetFirst((ATermList) t);
      {
        ATerm b_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_2;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_3 = NULL;
        t = term_e_9;
        g_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, d_3);
        t = f_6(g_3, d_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_9) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_x_0;
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_3 = NULL;
              t = term_e_9;
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_9, d_3);
              t = f_6(n_3, d_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm i_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_9) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_x_0;
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
              {
                ATerm j_9 = t;
                int k_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_3 = NULL;
                    t = term_e_9;
                    v_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_9, d_3);
                    t = f_6(v_3, d_3, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm l_9 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) l_9) != ATmakeSymbol("e_0", 0, ATtrue)))
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
                      ATerm c_4 = NULL;
                      t = term_e_9;
                      c_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_e_9, d_3);
                      t = f_6(c_4, d_3, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm m_9 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) m_9) != ATmakeSymbol("c_0", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm v_116 (ATerm), ATerm t)
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
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 = NULL,y_4 = NULL,z_4 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(r_4);
            q_4 = t;
            t = s_4;
            t = v_116(t);
            y_4 = t;
            t = t_4;
            t = filter_1_0(v_116, t);
            z_4 = t;
            t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
            g_1 = t;
            t = SSLsetAnnotations(g_1, q_4);
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            t = t_4;
            t = filter_1_0(v_116, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  ATerm p_10 = NULL,u_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  z_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      {
        ATerm m_5 = NULL,t_5 = NULL,u_5 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(z_10);
        m_5 = t;
        t = a_11;
        t = s_97(t);
        t_5 = t;
        t = b_11;
        t = s_97(t);
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_5, u_5);
        i_1 = t;
        t = SSLsetAnnotations(i_1, m_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_11 = ATgetArgument(t, 0);
          b_11 = ATgetArgument(t, 1);
          p_10 = ATgetArgument(t, 2);
          {
            ATerm e_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(z_10);
            e_6 = t;
            t = a_11;
            t = u_97(t);
            l_6 = t;
            t = b_11;
            t = u_97(t);
            m_6 = t;
            t = p_10;
            t = s_97(t);
            n_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, l_6, m_6, n_6);
            j_1 = t;
            t = SSLsetAnnotations(j_1, e_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              a_11 = ATgetArgument(t, 0);
              b_11 = ATgetArgument(t, 1);
              p_10 = ATgetArgument(t, 2);
              u_10 = ATgetArgument(t, 3);
              {
                ATerm r_7 = NULL,n_8 = NULL,o_8 = NULL,v_8 = NULL,w_8 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(z_10);
                r_7 = t;
                t = a_11;
                t = u_97(t);
                n_8 = t;
                t = b_11;
                t = u_97(t);
                o_8 = t;
                t = p_10;
                t = u_97(t);
                v_8 = t;
                t = u_10;
                t = s_97(t);
                w_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_8, o_8, v_8, w_8);
                k_1 = t;
                t = SSLsetAnnotations(k_1, r_7);
              }
            }
          else
            {
              ATerm p_9 = NULL,s_9 = NULL,u_9 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  a_11 = ATgetArgument(t, 0);
                  b_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_10);
              p_9 = t;
              t = a_11;
              t = u_97(t);
              s_9 = t;
              t = b_11;
              t = s_97(t);
              u_9 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, s_9, u_9);
              l_1 = t;
              t = SSLsetAnnotations(l_1, p_9);
            }
        }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm i_11 = NULL;
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_11 = ATgetArgument(t, 0);
          {
            ATerm t_9 = ATgetArgument(t, 1);
          }
          {
            ATerm v_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_9);
      t = i_11;
    }
  else
    {
      t = q_9;
      if(match_cons(t, sym_SDefT_4))
        {
          i_11 = ATgetArgument(t, 0);
          {
            ATerm w_9 = ATgetArgument(t, 1);
          }
          {
            ATerm x_9 = ATgetArgument(t, 2);
          }
          {
            ATerm y_9 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_11;
    }
  return(t);
}
static ATerm k_6 (ATerm y_23, ATerm x_23, ATerm t)
{
  t = y_23;
  t = map_1_0(w_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,x_11 = NULL,y_11 = NULL;
  t_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_11;
      t = t_115(t);
    }
  else
    {
      ATerm c_12 = NULL,d_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_11 = ATgetFirst((ATermList) t);
          y_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_11;
      t = v_115(t);
      c_12 = t;
      t = y_11;
      t = foldr_3_0(t_115, u_115, v_115, t);
      d_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
      t = u_115(t);
    }
  return(t);
}
static ATerm p_6 (ATerm y_112 (ATerm), ATerm b_45, ATerm a_45, ATerm t)
{
  static ATerm s_13 (ATerm t)
  {
    ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
    n_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_13 = ATgetFirst((ATermList) t);
            p_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_13;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = a_45;
                  return(t);
                }
                t = x_6(y_112, y_0, o_13, p_13, t);
              }
              t = s_13(t);
              LocalPopChoice(a_10);
            }
          else
            {
              t = z_9;
              {
                ATerm c_10 = NULL,g_10 = NULL,e_2 = NULL;
                t = SSLgetAnnotations(n_13);
                c_10 = t;
                t = p_13;
                t = s_13(t);
                g_10 = t;
                t = (ATerm) ATinsert(CheckATermList(g_10), o_13);
                e_2 = t;
                t = SSLsetAnnotations(e_2, c_10);
              }
            }
        }
      }
    return(t);
  }
  t = b_45;
  t = s_13(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(((ATgetType(b_10) != AT_LIST) || !(ATisEmpty(b_10))))
        _fail(t);
      {
        ATerm d_10 = ATgetArgument(t, 1);
        if(((ATgetType(d_10) != AT_LIST) || !(ATisEmpty(d_10))))
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
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
        {
          l_14 = ATgetFirst((ATermList) e_10);
          m_14 = (ATerm) ATgetNext((ATermList) e_10);
        }
      else
        _fail(t);
      {
        ATerm f_10 = ATgetArgument(t, 1);
        if(((ATgetType(f_10) == AT_LIST) && !(ATisEmpty(f_10))))
          {
            n_14 = ATgetFirst((ATermList) f_10);
            o_14 = (ATerm) ATgetNext((ATermList) f_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_14, n_14), (ATerm) ATmakeAppl(sym__2, m_14, o_14));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm p_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_14), p_14);
  return(t);
}
static ATerm u_6 (ATerm q_624, ATerm v_624, ATerm s_60, ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,e_14 = NULL,f_14 = NULL;
  t = SSL_explode_term(v_624);
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_624);
  if(match_cons(t, sym__2))
    {
      if((z_13 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_14, e_14);
  t = genzip_4_0(z_0, b_1, c_1, _id, t);
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_14, s_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t)
{
  static ATerm u_14 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_104(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = a_105(t);
        t = u_14(t);
      }
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm for_3_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t)
{
  t = c_105(t);
  t = while_not_2_0(d_105, e_105, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_15);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,k_2 = NULL;
  l_15 = t;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_15);
  i_15 = t;
  t = k_15;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_15, k_15);
  k_2 = t;
  t = SSLsetAnnotations(k_2, i_15);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,w_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_16 = ATgetFirst((ATermList) t);
      w_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_17(s_16, t_16, r_16, t);
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_16), u_16), w_16);
          }
      }
    }
  else
    {
      t = m_17(s_16, t_16, r_16, t);
    }
  return(t);
}
static ATerm m_17 (ATerm n_15, ATerm o_15, ATerm t_15, ATerm t)
{
  ATerm u_15 = NULL,x_15 = NULL,l_2 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,j_16 = NULL;
  t = SSLgetAnnotations(t_15);
  u_15 = t;
  t = o_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_16 = ATgetFirst((ATermList) t);
      j_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_16;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_16;
        if((d_16 != t))
          {
            _fail(t);
          }
        t = j_16;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = o_15;
        t = u_6(d_16, e_16, j_16, t);
      }
  }
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_15, x_15);
  l_2 = t;
  t = SSLsetAnnotations(l_2, u_15);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm l_17 = NULL;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      if((l_17 != ATgetArgument(t, 1)))
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
  ATerm q_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_1, h_1, p_1, t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = q_10;
      {
        ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
        e_17 = t;
        if(match_cons(t, sym__2))
          {
            f_17 = ATgetArgument(t, 0);
            g_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_17;
        t = p_6(r_1, f_17, g_17, t);
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(w_1, r_10, s_10, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      if((t_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(f_2, l_11, m_11, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      if((p_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_119 (ATerm), ATerm l_119 (ATerm), ATerm m_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm q_18 (ATerm t)
  {
    ATerm y_10 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_119(t);
        LocalPopChoice(c_11);
      }
    else
      {
        t = y_10;
        {
          ATerm d_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_17 = NULL,t_17 = NULL,l_10 = NULL,m_10 = NULL;
              s_17 = t;
              t = l_119(t);
              t_17 = t;
              t = s_17;
              {
                static ATerm s_1 (ATerm t)
                {
                  ATerm v_17 = NULL;
                  t = q_18(t);
                  v_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_17, t_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_119(s_1, q_18, t_1, t);
              }
              m_10 = t;
              t = SSL_explode_term(m_10);
              if(match_cons(t, sym__2))
                {
                  ATerm f_11 = ATgetArgument(t, 0);
                  l_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_10;
              t = foldr_3_0(u_1, v_1, _id, t);
              LocalPopChoice(e_11);
            }
          else
            {
              t = d_11;
              {
                ATerm w_10 = NULL,x_10 = NULL;
                x_10 = t;
                t = SSL_explode_term(x_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_11 = ATgetArgument(t, 0);
                    w_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_10;
                t = foldr_3_0(y_1, a_2, q_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  a_24 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_24 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      {
        ATerm w_11 = NULL,g_12 = NULL,h_12 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(a_24);
        w_11 = t;
        t = b_24;
        t = q_97(t);
        g_12 = t;
        t = u_23;
        t = o_97(t);
        h_12 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, h_12);
        o_2 = t;
        t = SSLsetAnnotations(o_2, w_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_24 = ATgetArgument(t, 0);
          u_23 = ATgetArgument(t, 1);
          v_23 = ATgetArgument(t, 2);
          z_23 = ATgetArgument(t, 3);
          {
            ATerm t_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,g_13 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(a_24);
            t_12 = t;
            t = b_24;
            t = q_97(t);
            c_13 = t;
            t = u_23;
            t = q_97(t);
            d_13 = t;
            t = v_23;
            t = q_97(t);
            e_13 = t;
            t = z_23;
            t = o_97(t);
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, c_13, d_13, e_13, g_13);
            p_2 = t;
            t = SSLsetAnnotations(p_2, t_12);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              b_24 = ATgetArgument(t, 0);
              u_23 = ATgetArgument(t, 1);
              v_23 = ATgetArgument(t, 2);
              z_23 = ATgetArgument(t, 3);
              {
                ATerm d_14 = NULL,q_14 = NULL,r_14 = NULL,v_14 = NULL,w_14 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(a_24);
                d_14 = t;
                t = b_24;
                t = q_97(t);
                q_14 = t;
                t = u_23;
                t = q_97(t);
                r_14 = t;
                t = v_23;
                t = q_97(t);
                v_14 = t;
                t = z_23;
                t = o_97(t);
                w_14 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, q_14, r_14, v_14, w_14);
                q_2 = t;
                t = SSLsetAnnotations(q_2, d_14);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_24 = ATgetArgument(t, 0);
                  {
                    ATerm g_15 = NULL,m_15 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(a_24);
                    g_15 = t;
                    t = b_24;
                    t = o_97(t);
                    m_15 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, m_15);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, g_15);
                  }
                }
              else
                {
                  ATerm a_16 = NULL,g_16 = NULL,s_2 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      b_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_24);
                  a_16 = t;
                  t = b_24;
                  t = o_97(t);
                  g_16 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, g_16);
                  s_2 = t;
                  t = SSLsetAnnotations(s_2, a_16);
                }
            }
        }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm e_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_25);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm h_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = h_11;
      {
        ATerm k_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_11);
          }
        else
          {
            t = k_11;
            {
              ATerm h_25 = NULL,i_25 = NULL,p_25 = NULL,q_25 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_25 = ATgetArgument(t, 0);
                  i_25 = ATgetArgument(t, 1);
                  p_25 = ATgetArgument(t, 2);
                  q_25 = ATgetArgument(t, 3);
                  t = p_25;
                  t = map_1_0(m_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_25 = ATgetArgument(t, 0);
                      i_25 = ATgetArgument(t, 1);
                      p_25 = ATgetArgument(t, 2);
                      q_25 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_25;
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
  ATerm c_26 = NULL;
  ATerm o_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_26 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_11);
      t = c_26;
    }
  else
    {
      t = o_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_26;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_26 = NULL;
  ATerm s_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_26 = ATgetArgument(t, 0);
          {
            ATerm v_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_11);
      t = u_26;
    }
  else
    {
      t = s_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_26;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_26);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm b_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_12);
          }
        else
          {
            t = b_12;
            {
              ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,j_27 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_27 = ATgetArgument(t, 0);
                  d_27 = ATgetArgument(t, 1);
                  e_27 = ATgetArgument(t, 2);
                  j_27 = ATgetArgument(t, 3);
                  t = e_27;
                  t = map_1_0(v_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_27 = ATgetArgument(t, 0);
                      d_27 = ATgetArgument(t, 1);
                      e_27 = ATgetArgument(t, 2);
                      j_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_27;
                  t = map_1_0(w_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm s_27 = NULL;
  ATerm f_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_27 = ATgetArgument(t, 0);
          {
            ATerm j_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
      t = s_27;
    }
  else
    {
      t = f_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_27;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm h_28 = NULL;
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_28 = ATgetArgument(t, 0);
          {
            ATerm m_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_12);
      t = h_28;
    }
  else
    {
      t = k_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_28;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm a_25 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      a_25 = ATgetArgument(t, 0);
      t = a_25;
      t = free_vars_3_0(g_2, j_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_25;
      t = free_vars_3_0(t_2, u_2, tboundin_3_0, t);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm j_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_29);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_29 = ATgetArgument(t, 0);
                  m_29 = ATgetArgument(t, 1);
                  n_29 = ATgetArgument(t, 2);
                  o_29 = ATgetArgument(t, 3);
                  t = n_29;
                  t = map_1_0(z_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_29 = ATgetArgument(t, 0);
                      m_29 = ATgetArgument(t, 1);
                      n_29 = ATgetArgument(t, 2);
                      o_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_29;
                  t = map_1_0(c_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm b_30 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_30 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_12);
      t = b_30;
    }
  else
    {
      t = r_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_30;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm t_30 = NULL;
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_30 = ATgetArgument(t, 0);
          {
            ATerm x_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_12);
      t = t_30;
    }
  else
    {
      t = v_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_30;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_28 = NULL,c_29 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      c_29 = ATgetArgument(t, 0);
      t = c_29;
      if(match_cons(t, sym_Rule_3))
        {
          v_28 = ATgetArgument(t, 0);
          {
            ATerm y_12 = ATgetArgument(t, 1);
          }
          {
            ATerm z_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_28;
      t = free_vars_3_0(x_2, y_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm a_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_29;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm i_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_31);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm b_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = b_13;
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            {
              ATerm k_31 = NULL,l_31 = NULL,u_31 = NULL,v_31 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_31 = ATgetArgument(t, 0);
                  l_31 = ATgetArgument(t, 1);
                  u_31 = ATgetArgument(t, 2);
                  v_31 = ATgetArgument(t, 3);
                  t = u_31;
                  t = map_1_0(h_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_31 = ATgetArgument(t, 0);
                      l_31 = ATgetArgument(t, 1);
                      u_31 = ATgetArgument(t, 2);
                      v_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_31;
                  t = map_1_0(i_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm c_32 = NULL;
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_32 = ATgetArgument(t, 0);
          {
            ATerm l_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_13);
      t = c_32;
    }
  else
    {
      t = j_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_32;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm l_32 = NULL;
  ATerm m_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_32 = ATgetArgument(t, 0);
          {
            ATerm r_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_13);
      t = l_32;
    }
  else
    {
      t = m_13;
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
static ATerm j_3 (ATerm t)
{
  ATerm o_32 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      o_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_32);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  p_32 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_32 = ATgetArgument(t, 0);
      r_32 = ATgetArgument(t, 1);
      t = p_32;
      t = k_6(q_32, r_32, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_32 = ATgetArgument(t, 0);
          r_32 = ATgetArgument(t, 1);
          s_32 = ATgetArgument(t, 2);
          t = r_32;
          t = map_1_0(m_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              q_32 = ATgetArgument(t, 0);
              r_32 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, q_32);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  q_32 = ATgetArgument(t, 0);
                  r_32 = ATgetArgument(t, 1);
                  s_32 = ATgetArgument(t, 2);
                  t_32 = ATgetArgument(t, 3);
                  t = r_32;
                  t = map_1_0(o_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_32 = ATgetArgument(t, 0);
                      r_32 = ATgetArgument(t, 1);
                      s_32 = ATgetArgument(t, 2);
                      t_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_32;
                  t = map_1_0(q_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm b_33 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_33 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = b_33;
    }
  else
    {
      t = t_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_33;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm o_33 = NULL;
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_33 = ATgetArgument(t, 0);
          {
            ATerm y_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_13);
      t = o_33;
    }
  else
    {
      t = w_13;
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
static ATerm q_3 (ATerm t)
{
  ATerm b_34 = NULL;
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_34 = ATgetArgument(t, 0);
          {
            ATerm g_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_14);
      t = b_34;
    }
  else
    {
      t = b_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_34;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm h_14 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_14;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  g_31 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      ATerm j_14 = ATgetArgument(t, 1);
      ATerm k_14 = ATgetArgument(t, 2);
      ATerm t_14 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  h_31 = t;
  t = g_31;
  t = free_vars_3_0(e_3, f_3, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = g_31;
  t = free_vars_3_0(j_3, l_3, sboundin_3_0, t);
  t = filter_1_0(r_3, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = h_31;
  return(t);
}
ATerm partition_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  static ATerm l_36 (ATerm t)
  {
    ATerm c_36 = NULL,d_36 = NULL,f_36 = NULL;
    c_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_x_14;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_36 = ATgetFirst((ATermList) t);
            f_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,k_18 = NULL,a_3 = NULL;
              t = SSLgetAnnotations(c_36);
              r_17 = t;
              t = d_36;
              t = d_117(t);
              j_17 = t;
              t = (ATerm) ATinsert(CheckATermList(f_36), j_17);
              a_3 = t;
              t = SSLsetAnnotations(a_3, r_17);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_15 = ATgetFirst((ATermList) t);
                  p_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_17;
              t = l_36(t);
              o_17 = t;
              t = SSL_explode_term(o_17);
              if(match_cons(t, sym__2))
                {
                  ATerm b_15 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_15) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm c_15 = ATgetArgument(t, 1);
                    if(((ATgetType(c_15) == AT_LIST) && !(ATisEmpty(c_15))))
                      {
                        q_17 = ATgetFirst((ATermList) c_15);
                        {
                          ATerm d_15 = (ATerm) ATgetNext((ATermList) c_15);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(o_17);
              if(match_cons(t, sym__2))
                {
                  ATerm e_15 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm h_15 = ATgetArgument(t, 1);
                    if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
                      {
                        ATerm p_15 = ATgetFirst((ATermList) h_15);
                        ATerm q_15 = (ATerm) ATgetNext((ATermList) h_15);
                        if(((ATgetType(q_15) == AT_LIST) && !(ATisEmpty(q_15))))
                          {
                            k_18 = ATgetFirst((ATermList) q_15);
                            {
                              ATerm r_15 = (ATerm) ATgetNext((ATermList) q_15);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_17), j_17), k_18);
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              {
                ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,h_19 = NULL,b_3 = NULL;
                t = SSLgetAnnotations(c_36);
                u_18 = t;
                t = (ATerm) ATinsert(CheckATermList(f_36), d_36);
                b_3 = t;
                t = SSLsetAnnotations(b_3, u_18);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm s_15 = ATgetFirst((ATermList) t);
                    s_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_18;
                t = l_36(t);
                r_18 = t;
                t = SSL_explode_term(r_18);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_15 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_15) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm w_15 = ATgetArgument(t, 1);
                      if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
                        {
                          t_18 = ATgetFirst((ATermList) w_15);
                          {
                            ATerm y_15 = (ATerm) ATgetNext((ATermList) w_15);
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
                    ATerm z_15 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_15) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm b_16 = ATgetArgument(t, 1);
                      if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
                        {
                          ATerm f_16 = ATgetFirst((ATermList) b_16);
                          ATerm h_16 = (ATerm) ATgetNext((ATermList) b_16);
                          if(((ATgetType(h_16) == AT_LIST) && !(ATisEmpty(h_16))))
                            {
                              h_19 = ATgetFirst((ATermList) h_16);
                              {
                                ATerm i_16 = (ATerm) ATgetNext((ATermList) h_16);
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
                t = (ATerm) ATmakeAppl(sym__2, t_18, (ATerm) ATinsert(CheckATermList(h_19), d_36));
              }
            }
        }
      }
    return(t);
  }
  t = l_36(t);
  return(t);
}
static ATerm w_6 (ATerm u_22, ATerm t_22, ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  t = u_22;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      p_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_36;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, o_36, t_22), p_36);
  return(t);
}
static ATerm x_6 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm h_45, ATerm g_45, ATerm t)
{
  t = h_113(t);
  {
    static ATerm s_3 (ATerm t)
    {
      ATerm q_36 = NULL;
      q_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_45, q_36);
      t = g_113(t);
      return(t);
    }
    t = fetch_1_0(s_3, t);
  }
  t = g_45;
  return(t);
}
static ATerm y_6 (ATerm d_113 (ATerm), ATerm d_45, ATerm c_45, ATerm t)
{
  static ATerm m_37 (ATerm t)
  {
    ATerm f_37 = NULL,g_37 = NULL,j_37 = NULL;
    f_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_37 = ATgetFirst((ATermList) t);
            j_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_16 = t;
          int l_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_37;
              {
                static ATerm t_3 (ATerm t)
                {
                  t = c_45;
                  return(t);
                }
                t = x_6(d_113, t_3, g_37, j_37, t);
              }
              t = m_37(t);
              LocalPopChoice(l_16);
            }
          else
            {
              t = k_16;
              {
                ATerm p_19 = NULL,t_19 = NULL,k_3 = NULL;
                t = SSLgetAnnotations(f_37);
                p_19 = t;
                t = j_37;
                t = m_37(t);
                t_19 = t;
                t = (ATerm) ATinsert(CheckATermList(t_19), g_37);
                k_3 = t;
                t = SSLsetAnnotations(k_3, p_19);
              }
            }
        }
      }
    return(t);
  }
  t = d_45;
  t = m_37(t);
  return(t);
}
ATerm genzip_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  static ATerm u_37 (ATerm t)
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_102(t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,p_3 = NULL;
          t = a_103(t);
          t_37 = t;
          if(match_cons(t, sym__2))
            {
              p_37 = ATgetArgument(t, 0);
              q_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_37);
          o_37 = t;
          t = p_37;
          t = c_103(t);
          r_37 = t;
          t = q_37;
          t = u_37(t);
          s_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
          p_3 = t;
          t = SSLsetAnnotations(p_3, o_37);
          t = b_103(t);
        }
      }
    return(t);
  }
  t = u_37(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_14;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_38 = ATgetFirst((ATermList) t);
      j_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,q_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if(match_cons(o_16, sym__2))
        {
          k_38 = ATgetArgument(o_16, 0);
          l_38 = ATgetArgument(o_16, 1);
        }
      else
        _fail(t);
      {
        ATerm p_16 = ATgetArgument(t, 1);
        if(match_cons(p_16, sym__2))
          {
            q_38 = ATgetArgument(p_16, 0);
            r_38 = ATgetArgument(p_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_38), k_38), (ATerm) ATinsert(CheckATermList(r_38), l_38));
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL;
  if(match_cons(t, sym__2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(e_4, s_38, t_38, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm u_38 = NULL;
  if(match_cons(t, sym__2))
    {
      u_38 = ATgetArgument(t, 0);
      if((u_38 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm x_38 = NULL;
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      if((x_38 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  f_38 = t;
  g_38 = t;
  t = SSL_explode_term(g_38);
  if(match_cons(t, sym__2))
    {
      x_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_38);
  z_37 = t;
  t = v_37;
  t = genzip_4_0(u_3, x_3, y_3, a_114, t);
  if(match_cons(t, sym__2))
    {
      y_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(x_37, y_37);
  e_38 = t;
  t = SSLsetAnnotations(e_38, z_37);
  t = b_114(t);
  if(match_cons(t, sym__2))
    {
      a_38 = ATgetArgument(t, 0);
      b_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_37;
  t = foldr_2_0(z_3, a_4, t);
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_38, d_38);
  t = y_6(f_4, b_38, d_38, t);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_38, c_38);
  return(t);
}
ATerm collect_split_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  static ATerm h_39 (ATerm t)
  {
    static ATerm g_4 (ATerm t)
    {
      ATerm q_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_114(t);
          LocalPopChoice(v_16);
        }
      else
        {
          t = q_16;
          {
            ATerm y_38 = NULL;
            y_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_38, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(h_39, g_4, t);
    return(t);
  }
  t = h_39(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm n_39 = NULL,q_39 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      n_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(n_39, q_39, t);
  return(t);
}
static ATerm c_7 (ATerm n_22, ATerm o_22, ATerm p_22, ATerm q_22, ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  t = q_22;
  t = collect_split_1_0(h_4, t);
  if(match_cons(t, sym__2))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, n_22, o_22, p_22, k_39)));
  t = conc_0_0(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm t_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      t_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
      y_39 = ATgetArgument(t, 2);
      {
        ATerm h_40 = NULL;
        t = term_y_16;
        h_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_39, term_y_16);
        t = d_7(i_4, t_39, h_40, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, t_39, x_39, y_39);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          t_39 = ATgetArgument(t, 0);
          x_39 = ATgetArgument(t, 1);
          y_39 = ATgetArgument(t, 2);
          z_39 = ATgetArgument(t, 3);
          {
            ATerm r_40 = NULL;
            t = term_a_17;
            r_40 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_39, term_a_17);
            t = d_7(k_4, t_39, r_40, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, t_39, x_39, y_39, z_39);
          }
        }
      else
        {
          ATerm j_41 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              t_39 = ATgetArgument(t, 0);
              x_39 = ATgetArgument(t, 1);
              y_39 = ATgetArgument(t, 2);
              z_39 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_c_17;
          j_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_39, term_c_17);
          t = d_7(o_4, t_39, j_41, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, t_39, x_39, y_39, z_39);
        }
    }
  return(t);
}
static ATerm d_7 (ATerm g_110 (ATerm), ATerm n_40, ATerm l_40, ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,n_41 = NULL,o_41 = NULL,r_41 = NULL,t_41 = NULL;
  o_41 = t;
  t = g_110(t);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_41, n_40, l_40);
  t = q_7(k_41, n_40, l_40, t);
  {
    ATerm d_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_41 = NULL;
        t = term_i_17;
        u_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_41, term_i_17);
        t = p_7(k_41, u_41, t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = d_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_41 = ATgetFirst((ATermList) t);
      n_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_17;
  r_41 = t;
  t = (ATerm) ATinsert(CheckATermList(n_41), (ATerm) ATinsert(CheckATermList(l_41), n_40));
  t_41 = t;
  t = SSL_table_put(k_41, r_41, t_41);
  t = o_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL;
  w_41 = t;
  t = term_n_17;
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_41, term_n_17);
  t = d_7(u_4, w_41, x_41, t);
  t = w_41;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm v_41 = NULL;
  v_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_17), term_u_17);
  t = map_1_0(p_4, t);
  t = v_41;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,w_3 = NULL;
  s_42 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  p_42 = t;
  t = q_42;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(x_4, t);
  t = concat_0_0(t);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_42);
  w_3 = t;
  t = SSLsetAnnotations(w_3, p_42);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm t_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  z_42 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
      x_42 = ATgetArgument(t, 2);
      y_42 = ATgetArgument(t, 3);
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_42;
            t = c_7(t_42, w_42, x_42, y_42, t);
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            t = (ATerm) ATinsert(ATempty, z_42);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, z_42);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,d_4 = NULL,b_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  l_42 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_42);
  b_42 = t;
  t = c_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_42 = ATgetFirst((ATermList) t);
      i_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_42);
  d_42 = t;
  t = i_42;
  t = Cons_2_0(v_4, w_4, t);
  j_42 = t;
  t = (ATerm) ATinsert(CheckATermList(j_42), h_42);
  b_4 = t;
  t = SSLsetAnnotations(b_4, d_42);
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_42);
  d_4 = t;
  t = SSLsetAnnotations(d_4, b_42);
  return(t);
}
static ATerm g_7 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_fputc(n_31, o_31);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_43);
  return(t);
}
static ATerm h_7 (ATerm h_30, ATerm i_30, ATerm t)
{
  ATerm q_43 = NULL;
  t = SSL_write_term_to_stream_text(h_30, i_30);
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_43);
  return(t);
}
static ATerm j_7 (ATerm x_105 (ATerm), ATerm i_212, ATerm l_30, ATerm t)
{
  ATerm s_43 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_212, term_z_17);
  t = m_7(t);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_43, l_30);
  t = x_105(t);
  t = fclose_0_0(t);
  t = l_30;
  return(t);
}
static ATerm i_7 (ATerm d_30, ATerm e_30, ATerm t)
{
  ATerm v_43 = NULL;
  t = SSL_write_term_to_stream_baf(d_30, e_30);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_43);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      if(match_cons(a_18, sym_Stream_1))
        {
          e_21 = ATgetArgument(a_18, 0);
        }
      else
        _fail(t);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(e_21, f_21, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if(match_cons(b_18, sym_Stream_1))
        {
          b_22 = ATgetArgument(b_18, 0);
        }
      else
        _fail(t);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(b_22, c_22, t);
  x_21 = t;
  t = term_c_18;
  y_21 = t;
  t = x_21;
  if(match_cons(t, sym_Stream_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, x_21);
  t = g_7(y_21, z_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,l_44 = NULL,q_46 = NULL,r_46 = NULL,l_4 = NULL,j_4 = NULL;
  a_44 = t;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_44);
  g_44 = t;
  t = h_44;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_43 != NULL) && (z_43 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(a_5, t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = term_f_18;
        z_43 = t;
      }
  }
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_44, i_44);
  j_4 = t;
  t = SSLsetAnnotations(j_4, g_44);
  t = a_44;
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_44);
  b_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_44, (ATerm) ATmakeAppl(sym__2, not_null(z_43), d_44));
  l_4 = t;
  t = SSLsetAnnotations(l_4, b_44);
  f_44 = t;
  if(match_cons(t, sym__2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,u_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL,m_4 = NULL;
        t = SSLgetAnnotations(f_44);
        r_20 = t;
        t = q_46;
        t = fetch_1_0(b_5, t);
        u_20 = t;
        t = r_46;
        if(match_cons(t, sym__2))
          {
            y_20 = ATgetArgument(t, 0);
            z_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7(c_5, y_20, z_20, t);
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_20, w_20);
        m_4 = t;
        t = SSLsetAnnotations(m_4, r_20);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm q_21 = NULL,t_21 = NULL,v_21 = NULL,w_21 = NULL,n_4 = NULL;
          t = SSLgetAnnotations(f_44);
          q_21 = t;
          t = r_46;
          if(match_cons(t, sym__2))
            {
              v_21 = ATgetArgument(t, 0);
              w_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_7(d_5, v_21, w_21, t);
          t_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_46, t_21);
          n_4 = t;
          t = SSLsetAnnotations(n_4, q_21);
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
ATerm apply_strategy_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  ATerm u_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  z_46 = t;
  t = dtime_0_0(t);
  t = z_46;
  t = r_124(t);
  y_46 = t;
  t = dtime_0_0(t);
  u_46 = t;
  t = y_46;
  if(match_cons(t, sym__2))
    {
      w_46 = ATgetArgument(t, 0);
      x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_46), (ATerm) ATmakeAppl(sym_Runtime_1, u_46)), x_46);
  return(t);
}
static ATerm w_47 (ATerm j_47, ATerm t)
{
  t = SSL_fclose(j_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL;
  p_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_47 = ATgetArgument(t, 0);
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_47);
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            t = w_47(p_47, t);
          }
      }
    }
  else
    {
      t = w_47(p_47, t);
    }
  return(t);
}
static ATerm k_7 (ATerm j_30, ATerm t)
{
  t = SSL_read_term_from_stream(j_30);
  return(t);
}
static ATerm l_7 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm y_47 = NULL;
  t = SSL_fopen(p_31, q_31);
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_48 = NULL;
  t = SSL_stdin_stream();
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_48 = NULL;
  t = SSL_stdout_stream();
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_48 = NULL;
  t = SSL_stderr_stream();
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_48);
  return(t);
}
static ATerm d_50 (ATerm q_48, ATerm t)
{
  ATerm u_48 = NULL;
  t = SSL_explode_term(q_48);
  if(match_cons(t, sym__2))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
          {
            u_48 = ATgetFirst((ATermList) m_18);
            {
              ATerm n_18 = (ATerm) ATgetNext((ATermList) m_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_48;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_50 (ATerm x_48, ATerm y_48, ATerm z_48, ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,f_49 = NULL,g_5 = NULL;
  t = SSLgetAnnotations(z_48);
  c_49 = t;
  t = x_48;
  if(match_cons(t, sym_Path_1))
    {
      f_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_49, y_48);
  g_5 = t;
  t = SSLsetAnnotations(g_5, c_49);
  if(match_cons(t, sym__2))
    {
      a_49 = ATgetArgument(t, 0);
      b_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(a_49, b_49, t);
  return(t);
}
static ATerm g_50 (ATerm h_49, ATerm i_49, ATerm j_49, ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,o_49 = NULL,u_49 = NULL,h_5 = NULL;
  t = SSLgetAnnotations(j_49);
  o_49 = t;
  t = SSL_is_string(h_49);
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_49, i_49);
  h_5 = t;
  t = SSLsetAnnotations(h_5, o_49);
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(k_49, l_49, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,c_50 = NULL;
  y_49 = t;
  if(match_cons(t, sym__2))
    {
      z_49 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_50(y_49, t);
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            {
              ATerm v_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_50(z_49, c_50, y_49, t);
                  LocalPopChoice(w_18);
                }
              else
                {
                  t = v_18;
                  t = g_50(z_49, c_50, y_49, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_50(y_49, t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_50 = NULL;
      k_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_50, term_a_19);
      t = m_7(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      t = debug_1_0(e_5, t);
      _fail(t);
    }
  i_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(j_50, t);
  h_50 = t;
  t = i_50;
  t = fclose_0_0(t);
  t = h_50;
  return(t);
}
ATerm fetch_1_0 (ATerm a_111 (ATerm), ATerm t)
{
  static ATerm i_51 (ATerm t)
  {
    ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
    f_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_51 = ATgetFirst((ATermList) t);
        h_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_22 = NULL,d_23 = NULL,n_5 = NULL;
          t = SSLgetAnnotations(f_51);
          w_22 = t;
          t = g_51;
          t = a_111(t);
          d_23 = t;
          t = (ATerm) ATinsert(CheckATermList(h_51), d_23);
          n_5 = t;
          t = SSLsetAnnotations(n_5, w_22);
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          {
            ATerm o_23 = NULL,r_23 = NULL,o_5 = NULL;
            t = SSLgetAnnotations(f_51);
            o_23 = t;
            t = h_51;
            t = i_51(t);
            r_23 = t;
            t = (ATerm) ATinsert(CheckATermList(r_23), g_51);
            o_5 = t;
            t = SSLsetAnnotations(o_5, o_23);
          }
        }
    }
    return(t);
  }
  t = i_51(t);
  return(t);
}
static ATerm f_7 (ATerm g_54, ATerm h_54, ATerm t)
{
  t = SSL_strcat(g_54, h_54);
  return(t);
}
ATerm debug_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
  l_51 = t;
  t = v_105(t);
  m_51 = t;
  t = term_s_8;
  n_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_51), m_51);
  o_51 = t;
  t = SSL_printnl(n_51, o_51);
  t = l_51;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_51 = NULL;
      v_51 = t;
      t = SSL_is_string(v_51);
      LocalPopChoice(i_19);
    }
  else
    {
      t = g_19;
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_5, t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
              b_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_52 = ATgetArgument(t, 0);
                  t = c_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_52 = ATgetArgument(t, 0);
                      t = c_52;
                      {
                        ATerm l_19 = t;
                        int m_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(m_19);
                          }
                        else
                          {
                            t = l_19;
                            t = debug_1_0(i_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_52 = NULL,i_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_52 = ATgetArgument(t, 0);
                          d_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_52;
                      t = eval_config_0_0(t);
                      h_52 = t;
                      t = d_52;
                      t = eval_config_0_0(t);
                      i_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
                      t = f_7(h_52, i_52, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL;
  m_52 = t;
  t = term_n_19;
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, m_52);
  t = p_7(n_52, m_52, t);
  {
    ATerm o_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_52 = NULL,p_52 = NULL;
        t = eval_config_0_0(t);
        o_52 = t;
        t = term_n_19;
        p_52 = t;
        t = SSL_table_put(p_52, m_52, o_52);
        t = o_52;
        LocalPopChoice(q_19);
      }
    else
      {
        t = o_19;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_52 = NULL;
        t = term_u_19;
        t = get_config_0_0(t);
        v_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_52, term_v_19);
        t = geq_0_0(t);
        t = t_52;
        t = o_107(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = t_52;
      }
  }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm y_52 = NULL;
  y_52 = t;
  if(match_string(t, "-k"))
    {
      t = y_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_52;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  z_52 = t;
  t = SSL_string_to_int(z_52);
  a_53 = t;
  t = term_w_19;
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, a_53);
  t = s_7(b_53, a_53, t);
  t = z_52;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, l_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm d_53 = NULL;
  d_53 = t;
  if(match_string(t, "-S"))
    {
      t = d_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_53;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  t = term_u_19;
  e_53 = t;
  t = term_y_19;
  f_53 = t;
  t = term_z_19;
  t = s_7(e_53, f_53, t);
  t = term_a_20;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  t = SSL_string_to_int(g_53);
  h_53 = t;
  t = term_u_19;
  i_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, h_53);
  t = s_7(i_53, h_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_53);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  t = term_d_20;
  j_53 = t;
  t = term_x_0;
  k_53 = t;
  t = term_e_20;
  t = s_7(j_53, k_53, t);
  t = term_f_20;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, q_5, r_5, t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_5, w_5, x_5, t);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = Option_3_0(y_5, z_5, a_6, t);
          }
      }
    }
  return(t);
}
static ATerm s_7 (ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm l_53 = NULL;
  t = term_n_19;
  l_53 = t;
  t = SSL_table_put(l_53, s_35, t_35);
  t = (ATerm) ATmakeAppl(sym__3, term_n_19, s_35, t_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
      t = term_x_0;
      t = i_0(t);
      q_53 = t;
      t = term_l_20;
      r_53 = t;
      t = term_m_20;
      s_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_20, term_m_20, q_53);
      t = q_7(r_53, s_53, q_53, t);
      _fail(t);
    }
  else
    {
      ATerm v_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_53 = ATgetFirst((ATermList) t);
          p_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_53;
      t = d_0(t);
      t = term_x_0;
      t = g_0(t);
      v_53 = t;
      t = (ATerm) ATinsert(CheckATermList(p_53), v_53);
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  if(match_string(t, "-o"))
    {
      t = x_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_53;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  y_53 = t;
  t = term_n_20;
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, y_53);
  t = s_7(z_53, y_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_53);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, c_6, d_6, t);
  return(t);
}
static ATerm q_7 (ATerm v_40, ATerm w_40, ATerm u_40, ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_20 = ATgetArgument(t, 0);
            ATerm t_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        t = p_7(v_40, w_40, t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATempty;
      }
  }
  c_54 = t;
  t = (ATerm) ATinsert(CheckATermList(c_54), u_40);
  d_54 = t;
  t = SSL_table_put(v_40, w_40, d_54);
  t = b_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
      t = term_x_0;
      t = t_0(t);
      q_54 = t;
      t = term_l_20;
      r_54 = t;
      t = term_m_20;
      s_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_20, term_m_20, q_54);
      t = q_7(r_54, s_54, q_54, t);
      _fail(t);
    }
  else
    {
      ATerm w_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_54 = ATgetFirst((ATermList) t);
          n_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_54 = ATgetFirst((ATermList) t);
          p_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_54;
      t = p_0(t);
      t = o_54;
      t = r_0(t);
      w_54 = t;
      t = (ATerm) ATinsert(CheckATermList(p_54), w_54);
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm y_54 = NULL;
  y_54 = t;
  if(match_string(t, "-i"))
    {
      t = y_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_54;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  z_54 = t;
  t = term_v_20;
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_20, z_54);
  t = s_7(a_55, z_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_54);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  b_55 = t;
  t = term_s_8;
  d_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_21), b_55);
  e_55 = t;
  t = SSL_printnl(d_55, e_55);
  t = term_x_8;
  c_55 = t;
  t = SSL_exit(c_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_21;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_38, a_39);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      t = SSL_addr(z_38, a_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
  g_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_55;
      t = r_115(t);
    }
  else
    {
      ATerm l_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_55 = ATgetFirst((ATermList) t);
          i_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_55;
      t = foldr_2_0(r_115, s_115, t);
      l_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_55, l_55);
      t = s_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_y_19;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(v_24, w_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_55 = NULL,r_24 = NULL,s_24 = NULL;
  t = times_0_0(t);
  s_24 = t;
  t = SSL_explode_term(s_24);
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_24;
  t = foldr_2_0(j_6, o_6, t);
  o_55 = t;
  t = SSL_TicksToSeconds(o_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
  z_55 = t;
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_56;
        if((a_56 != t))
          {
            _fail(t);
          }
        t = z_55;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATmakeAppl(sym__2, a_56, b_56);
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_56, b_56);
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              t = SSL_gtr(a_56, b_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_56, b_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm f_56 = NULL;
  f_56 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_56 = NULL;
        t = term_u_19;
        t = get_config_0_0(t);
        h_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_56, term_x_8);
        t = geq_0_0(t);
        t = f_56;
        t = n_107(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = f_56;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,q_56 = NULL,r_56 = NULL;
  t = run_time_0_0(t);
  n_56 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  o_56 = t;
  t = term_s_8;
  q_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_21), n_56), term_n_21), o_56);
  r_56 = t;
  t = SSL_printnl(q_56, r_56);
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_21), n_56), term_n_21), o_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_19;
  s_56 = t;
  t = SSL_exit(s_56);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  b_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_57 = ATgetArgument(t, 0);
          {
            ATerm s_25 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(b_57);
            s_25 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_57);
            v_5 = t;
            t = SSLsetAnnotations(v_5, s_25);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_125 (ATerm), ATerm t)
{
  ATerm p_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_21;
      t = get_config_0_0(t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = p_21;
      t = fetch_1_0(r_6, t);
    }
  t = p_125(t);
  return(t);
}
ATerm map_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  static ATerm r_57 (ATerm t)
  {
    ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
    o_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_57;
      }
    else
      {
        ATerm k_26 = NULL,q_26 = NULL,r_26 = NULL,v_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_57 = ATgetFirst((ATermList) t);
            q_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_57);
        k_26 = t;
        t = p_57;
        t = q_110(t);
        q_26 = t;
        t = q_57;
        t = r_57(t);
        r_26 = t;
        t = (ATerm) ATinsert(CheckATermList(r_26), q_26);
        v_6 = t;
        t = SSLsetAnnotations(v_6, k_26);
      }
    return(t);
  }
  t = r_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_57 = ATgetFirst((ATermList) t);
      v_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_57 = NULL,a_58 = NULL;
        static ATerm s_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_57)), not_null(a_58));
          return(t);
        }
        t = v_57;
        t = n_0(t);
        if(((z_57 != NULL) && (z_57 != t)))
          _fail(t);
        else
          z_57 = t;
        t = u_57;
        t = k_0(t);
        if(((a_58 != NULL) && (a_58 != t)))
          _fail(t);
        else
          a_58 = t;
        t = v_57;
        t = reverse_acc_2_0(k_0, s_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_0;
      t = n_0(t);
    }
  return(t);
}
static ATerm p_7 (ATerm m_42, ATerm n_42, ATerm t)
{
  t = SSL_table_get(m_42, n_42);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,u_7 = NULL;
  g_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_58);
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_58);
  u_7 = t;
  t = SSLsetAnnotations(u_7, e_58);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_58), term_u_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  ATerm a_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_21;
      t = get_config_0_0(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = a_22;
      t = fetch_1_0(t_6, t);
    }
  t = term_e_22;
  t = echo_0_0(t);
  t = term_l_20;
  c_58 = t;
  t = term_m_20;
  d_58 = t;
  t = term_f_22;
  t = p_7(c_58, d_58, t);
  t = reverse_acc_2_0(_id, z_6, t);
  t = map_1_0(a_7, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
  k_58 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_22 = ATgetFirst((ATermList) t);
                ATerm j_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATinsert(ATempty, k_58);
      }
  }
  l_58 = t;
  t = term_f_18;
  m_58 = t;
  t = SSL_printnl(m_58, l_58);
  t = k_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  t = term_k_22;
  q_58 = t;
  t = term_x_0;
  r_58 = t;
  t = term_l_22;
  t = s_7(q_58, r_58, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_m_22;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL;
  t = term_k_22;
  u_58 = t;
  t = term_x_0;
  v_58 = t;
  t = term_l_22;
  t = s_7(u_58, v_58, t);
  t = term_r_22;
  s_58 = t;
  t = term_x_0;
  t_58 = t;
  t = term_s_22;
  t = s_7(s_58, t_58, t);
  t = term_v_22;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_7, e_7, o_7, t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      t = Option_3_0(t_7, v_7, x_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t)
{
  ATerm w_58 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,w_7 = NULL;
  g_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_59 = ATgetFirst((ATermList) t);
      d_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_59);
  w_58 = t;
  t = c_59;
  t = g_83(t);
  e_59 = t;
  t = d_59;
  t = h_83(t);
  f_59 = t;
  t = (ATerm) ATinsert(CheckATermList(f_59), e_59);
  w_7 = t;
  t = SSLsetAnnotations(w_7, w_58);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm l_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,r_59 = NULL,s_59 = NULL,y_7 = NULL;
  l_59 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_23;
        t = s_127(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
      }
  }
  t = l_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_59 = ATgetFirst((ATermList) t);
      p_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_59);
  n_59 = t;
  t = term_b_21;
  s_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_21, o_59);
  t = s_7(s_59, o_59, t);
  t = p_59;
  {
    static ATerm c_60 (ATerm t)
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_59 = NULL;
              v_59 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_59;
              LocalPopChoice(h_23);
            }
          else
            {
              t = g_23;
              t = s_127(t);
              t = Cons_2_0(_id, c_60, t);
            }
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          {
            ATerm y_59 = NULL,z_59 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_59 = ATgetFirst((ATermList) t);
                z_59 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_59), (ATerm) ATmakeAppl(sym_Undefined_1, y_59));
          }
        }
      return(t);
    }
    t = c_60(t);
  }
  r_59 = t;
  t = (ATerm) ATinsert(CheckATermList(r_59), (ATerm) ATmakeAppl(sym_Program_1, o_59));
  y_7 = t;
  t = SSLsetAnnotations(y_7, n_59);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm t_60 = NULL;
  t_60 = t;
  if(match_string(t, "--help"))
    {
      t = t_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_60;
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL;
  t = term_s_21;
  u_60 = t;
  t = term_x_0;
  v_60 = t;
  t = term_i_23;
  t = s_7(u_60, v_60, t);
  t = term_j_23;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_127 (ATerm), ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,n_60 = NULL,o_60 = NULL;
  j_60 = t;
  t = term_l_20;
  l_60 = t;
  t = term_m_20;
  n_60 = t;
  t = (ATerm) ATempty;
  o_60 = t;
  t = SSL_table_put(l_60, n_60, o_60);
  t = j_60;
  {
    static ATerm z_7 (ATerm t)
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_127(t);
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          {
            ATerm n_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_8, c_8, e_8, t);
                LocalPopChoice(p_23);
              }
            else
              {
                t = n_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_7, t);
  }
  {
    ATerm q_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_61 = NULL;
        c_61 = t;
        {
          ATerm t_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_27 = NULL;
              t = c_61;
              {
                ATerm c_24 = t;
                int d_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_s_21;
                    t = get_config_0_0(t);
                    LocalPopChoice(d_24);
                  }
                else
                  {
                    t = c_24;
                    t = fetch_1_0(f_8, t);
                  }
              }
              t = c_61;
              t = default_system_usage_0_0(t);
              t = term_y_19;
              i_27 = t;
              t = SSL_exit(i_27);
              LocalPopChoice(w_23);
            }
          else
            {
              t = t_23;
              {
                ATerm y_27 = NULL;
                t = term_k_22;
                t = get_config_0_0(t);
                t = c_61;
                t = default_system_about_0_0(t);
                t = term_y_19;
                y_27 = t;
                t = SSL_exit(y_27);
              }
            }
        }
        LocalPopChoice(s_23);
      }
    else
      {
        t = q_23;
        {
          ATerm e_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
              static ATerm g_8 (ATerm t)
              {
                ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,b_8 = NULL;
                i_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_61);
                g_61 = t;
                t = h_61;
                if(((h_60 != NULL) && (h_60 != t)))
                  _fail(t);
                else
                  h_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_61);
                b_8 = t;
                t = SSLsetAnnotations(b_8, g_61);
                return(t);
              }
              t = fetch_1_0(g_8, t);
              t = term_s_8;
              e_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_60)), term_g_24);
              f_61 = t;
              t = SSL_printnl(e_61, f_61);
              t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_60)), term_g_24));
              t = default_system_usage_0_0(t);
              t = term_x_8;
              d_61 = t;
              t = SSL_exit(d_61);
              LocalPopChoice(f_24);
            }
          else
            {
              t = e_24;
            }
        }
      }
  }
  i_60 = t;
  t = term_l_20;
  k_60 = t;
  t = SSL_table_destroy(k_60);
  t = i_60;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
  t = parse_options_1_0(r_125, t);
  n_61 = t;
  t = term_h_24;
  q_61 = t;
  t = SSL_table_create(q_61);
  t = term_h_24;
  o_61 = t;
  t = term_i_24;
  p_61 = t;
  t = SSL_table_put(o_61, p_61, n_61);
  t = n_61;
  t = t_125(t);
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_125, t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        {
          ATerm l_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_24);
            }
          else
            {
              t = l_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = if_verbose2_1_0(p_8, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL;
  t = term_n_24;
  r_61 = t;
  t = term_x_0;
  s_61 = t;
  t = term_o_24;
  t = s_7(r_61, s_61, t);
  t = term_p_24;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_q_24;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  t_61 = t;
  t = term_b_21;
  t = get_config_0_0(t);
  u_61 = t;
  t = term_s_8;
  v_61 = t;
  t = (ATerm) ATinsert(ATempty, u_61);
  w_61 = t;
  t = SSL_printnl(v_61, w_61);
  t = t_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  static ATerm h_8 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_125(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        {
          ATerm x_24 = t;
          int y_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(y_24);
            }
          else
            {
              t = x_24;
              {
                ATerm z_24 = t;
                int b_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(b_25);
                  }
                else
                  {
                    t = z_24;
                    {
                      ATerm c_25 = t;
                      int d_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_8, l_8, m_8, t);
                          LocalPopChoice(d_25);
                        }
                      else
                        {
                          t = c_25;
                          {
                            ATerm f_25 = t;
                            int g_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(g_25);
                              }
                            else
                              {
                                t = f_25;
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
  static ATerm j_8 (ATerm t)
  {
    ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
    y_61 = t;
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_61 != NULL) && (x_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_8, t);
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          t = term_l_25;
          x_61 = t;
        }
    }
    t = not_null(x_61);
    t = ReadFromFile_0_0(t);
    z_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_61, z_61);
    t = apply_strategy_1_0(a_125, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(h_8, c_125, i_8, j_8, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,d_8 = NULL;
  e_62 = t;
  if(match_cons(t, sym__2))
    {
      b_62 = ATgetArgument(t, 0);
      c_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_62);
  a_62 = t;
  t = c_62;
  t = lift_definitions_0_0(t);
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_62, d_62);
  d_8 = t;
  t = SSLsetAnnotations(d_8, a_62);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_8, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_l_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_p_18;
ATerm term_e_18;
ATerm term_w_17;
ATerm term_p_17;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_i_13;
ATerm term_z_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_a_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_1));
  term_a_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_u_18, term_a_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_a_1);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_v_19);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_a_1);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_a_1);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_a_1);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_a_1);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_111 (ATerm), ATerm t);
static ATerm k_2 (ATerm a_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_6 (ATerm e_41, ATerm f_41, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_116 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm f_6 (ATerm y_23, ATerm x_23, ATerm t);
ATerm foldr_3_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
static ATerm l_6 (ATerm u_112 (ATerm), ATerm z_44, ATerm y_44, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm q_6 (ATerm n_622, ATerm s_622, ATerm o_60, ATerm t);
ATerm while_not_2_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm b_18 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm t);
static ATerm k_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm free_vars_3_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm z_116 (ATerm), ATerm t);
static ATerm s_6 (ATerm u_22, ATerm t_22, ATerm t);
static ATerm t_6 (ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm f_45, ATerm e_45, ATerm t);
static ATerm u_6 (ATerm z_112 (ATerm), ATerm b_45, ATerm a_45, ATerm t);
ATerm genzip_4_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm CollectSplit_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm j_114 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm y_6 (ATerm n_22, ATerm o_22, ATerm p_22, ATerm q_22, ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm z_6 (ATerm c_110 (ATerm), ATerm l_40, ATerm j_40, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm c_7 (ATerm m_31, ATerm n_31, ATerm t);
static ATerm d_7 (ATerm g_30, ATerm h_30, ATerm t);
static ATerm f_7 (ATerm t_105 (ATerm), ATerm j_211, ATerm k_30, ATerm t);
static ATerm e_7 (ATerm c_30, ATerm d_30, ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm n_124 (ATerm), ATerm t);
static ATerm b_44 (ATerm t_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_7 (ATerm i_30, ATerm t);
static ATerm h_7 (ATerm o_31, ATerm p_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_46 (ATerm o_44, ATerm t);
static ATerm u_46 (ATerm s_44, ATerm t_44, ATerm u_44, ATerm t);
static ATerm v_46 (ATerm n_45, ATerm o_45, ATerm p_45, ATerm t);
static ATerm i_7 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_110 (ATerm), ATerm t);
static ATerm b_7 (ATerm c_54, ATerm d_54, ATerm t);
ATerm debug_1_0 (ATerm r_105 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm k_107 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_7 (ATerm q_35, ATerm s_35, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_7 (ATerm t_40, ATerm u_40, ATerm s_40, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_7 (ATerm x_38, ATerm y_38, ATerm t);
ATerm foldr_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_107 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm need_help_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_7 (ATerm k_42, ATerm l_42, ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_127 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm parse_options_1_0 (ATerm n_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm iowrap_3_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
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
  t = term_a_1;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_n_8;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), m_0), term_o_8);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_s_8;
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
ATerm at_end_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  static ATerm v_1 (ATerm t)
  {
    ATerm q_1 = NULL,s_1 = NULL,u_1 = NULL;
    u_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_1 = ATgetFirst((ATermList) t);
        s_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_0 = NULL,d_1 = NULL,f_1 = NULL;
          t = SSLgetAnnotations(u_1);
          y_0 = t;
          t = s_1;
          t = v_1(t);
          d_1 = t;
          t = (ATerm) ATinsert(CheckATermList(d_1), q_1);
          f_1 = t;
          t = SSLsetAnnotations(f_1, y_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_1;
        t = c_111(t);
      }
    return(t);
  }
  t = v_1(t);
  return(t);
}
static ATerm k_2 (ATerm a_2, ATerm t)
{
  ATerm b_2 = NULL;
  t = SSL_explode_term(a_2);
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_0 (ATerm t)
            {
              t = e_2;
              return(t);
            }
            t = d_2;
            t = at_end_1_0(v_0, t);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            t = k_2(f_2, t);
          }
      }
    }
  else
    {
      t = k_2(f_2, t);
    }
  return(t);
}
static ATerm a_6 (ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm l_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_41, f_41);
  t = l_7(e_41, f_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_2 = ATgetFirst((ATermList) t);
      {
        ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_2;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm x_3 = NULL;
  x_3 = t;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 = NULL;
        t = term_z_8;
        a_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_8, x_3);
        t = a_6(a_3, x_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm a_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_a_1;
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        {
          ATerm b_9 = t;
          int c_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_3 = NULL;
              t = term_z_8;
              h_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_8, x_3);
              t = a_6(h_3, x_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm d_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_9) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_a_1;
              LocalPopChoice(c_9);
            }
          else
            {
              t = b_9;
              {
                ATerm e_9 = t;
                int f_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_3 = NULL;
                    t = term_z_8;
                    p_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_z_8, x_3);
                    t = a_6(p_3, x_3, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm g_9 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) g_9) != ATmakeSymbol("f_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = term_a_1;
                    LocalPopChoice(f_9);
                  }
                else
                  {
                    t = e_9;
                    {
                      ATerm y_3 = NULL;
                      t = term_z_8;
                      y_3 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_z_8, x_3);
                      t = a_6(y_3, x_3, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm h_9 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_a_1;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,w_4 = NULL,y_4 = NULL;
  r_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_4 = ATgetFirst((ATermList) t);
          y_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 = NULL,u_4 = NULL,v_4 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(r_4);
            l_4 = t;
            t = w_4;
            t = r_116(t);
            u_4 = t;
            t = y_4;
            t = filter_1_0(r_116, t);
            v_4 = t;
            t = (ATerm) ATinsert(CheckATermList(v_4), u_4);
            h_1 = t;
            t = SSLsetAnnotations(h_1, l_4);
            LocalPopChoice(k_9);
          }
        else
          {
            t = i_9;
            t = y_4;
            t = filter_1_0(r_116, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,a_11 = NULL;
  v_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
      {
        ATerm h_5 = NULL,l_5 = NULL,o_5 = NULL,j_1 = NULL;
        t = SSLgetAnnotations(v_10);
        h_5 = t;
        t = w_10;
        t = o_97(t);
        l_5 = t;
        t = a_11;
        t = o_97(t);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, l_5, o_5);
        j_1 = t;
        t = SSLsetAnnotations(j_1, h_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_10 = ATgetArgument(t, 0);
          a_11 = ATgetArgument(t, 1);
          t_10 = ATgetArgument(t, 2);
          {
            ATerm y_5 = NULL,e_6 = NULL,g_6 = NULL,h_6 = NULL,l_1 = NULL;
            t = SSLgetAnnotations(v_10);
            y_5 = t;
            t = w_10;
            t = q_97(t);
            e_6 = t;
            t = a_11;
            t = q_97(t);
            g_6 = t;
            t = t_10;
            t = o_97(t);
            h_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_6, g_6, h_6);
            l_1 = t;
            t = SSLsetAnnotations(l_1, y_5);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              w_10 = ATgetArgument(t, 0);
              a_11 = ATgetArgument(t, 1);
              t_10 = ATgetArgument(t, 2);
              u_10 = ATgetArgument(t, 3);
              {
                ATerm a_7 = NULL,h_8 = NULL,i_8 = NULL,p_8 = NULL,q_8 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(v_10);
                a_7 = t;
                t = w_10;
                t = q_97(t);
                h_8 = t;
                t = a_11;
                t = q_97(t);
                i_8 = t;
                t = t_10;
                t = q_97(t);
                p_8 = t;
                t = u_10;
                t = o_97(t);
                q_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, h_8, i_8, p_8, q_8);
                m_1 = t;
                t = SSLsetAnnotations(m_1, a_7);
              }
            }
          else
            {
              ATerm j_9 = NULL,m_9 = NULL,o_9 = NULL,n_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  w_10 = ATgetArgument(t, 0);
                  a_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_10);
              j_9 = t;
              t = w_10;
              t = q_97(t);
              m_9 = t;
              t = a_11;
              t = o_97(t);
              o_9 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, m_9, o_9);
              n_1 = t;
              t = SSLsetAnnotations(n_1, j_9);
            }
        }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm l_11 = NULL;
  ATerm l_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_11 = ATgetArgument(t, 0);
          {
            ATerm p_9 = ATgetArgument(t, 1);
          }
          {
            ATerm q_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_9);
      t = l_11;
    }
  else
    {
      t = l_9;
      if(match_cons(t, sym_SDefT_4))
        {
          l_11 = ATgetArgument(t, 0);
          {
            ATerm r_9 = ATgetArgument(t, 1);
          }
          {
            ATerm s_9 = ATgetArgument(t, 2);
          }
          {
            ATerm t_9 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_11;
    }
  return(t);
}
static ATerm f_6 (ATerm y_23, ATerm x_23, ATerm t)
{
  t = y_23;
  t = map_1_0(w_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_11;
      t = p_115(t);
    }
  else
    {
      ATerm j_12 = NULL,o_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_11 = ATgetFirst((ATermList) t);
          a_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_11;
      t = r_115(t);
      j_12 = t;
      t = a_12;
      t = foldr_3_0(p_115, q_115, r_115, t);
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_12, o_12);
      t = q_115(t);
    }
  return(t);
}
static ATerm l_6 (ATerm u_112 (ATerm), ATerm z_44, ATerm y_44, ATerm t)
{
  static ATerm f_14 (ATerm t)
  {
    ATerm n_13 = NULL,r_13 = NULL,t_13 = NULL;
    n_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_13 = ATgetFirst((ATermList) t);
            t_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_13;
              {
                static ATerm x_0 (ATerm t)
                {
                  t = y_44;
                  return(t);
                }
                t = t_6(u_112, x_0, r_13, t_13, t);
              }
              t = f_14(t);
              LocalPopChoice(v_9);
            }
          else
            {
              t = u_9;
              {
                ATerm w_9 = NULL,a_10 = NULL,y_1 = NULL;
                t = SSLgetAnnotations(n_13);
                w_9 = t;
                t = t_13;
                t = f_14(t);
                a_10 = t;
                t = (ATerm) ATinsert(CheckATermList(a_10), r_13);
                y_1 = t;
                t = SSLsetAnnotations(y_1, w_9);
              }
            }
        }
      }
    return(t);
  }
  t = z_44;
  t = f_14(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
        _fail(t);
      {
        ATerm y_9 = ATgetArgument(t, 1);
        if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
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
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
        {
          o_14 = ATgetFirst((ATermList) z_9);
          p_14 = (ATerm) ATgetNext((ATermList) z_9);
        }
      else
        _fail(t);
      {
        ATerm b_10 = ATgetArgument(t, 1);
        if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
          {
            q_14 = ATgetFirst((ATermList) b_10);
            u_14 = (ATerm) ATgetNext((ATermList) b_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_14, q_14), (ATerm) ATmakeAppl(sym__2, p_14, u_14));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm v_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_14), v_14);
  return(t);
}
static ATerm q_6 (ATerm n_622, ATerm s_622, ATerm o_60, ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  t = SSL_explode_term(s_622);
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_622);
  if(match_cons(t, sym__2))
    {
      if((j_14 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_14, l_14);
  t = genzip_4_0(z_0, b_1, c_1, _id, t);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_14, o_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t)
{
  static ATerm e_15 (ATerm t)
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_104(t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = w_104(t);
        t = e_15(t);
      }
    return(t);
  }
  t = e_15(t);
  return(t);
}
ATerm for_3_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t)
{
  t = y_104(t);
  t = while_not_2_0(z_104, a_105, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_15);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,g_2 = NULL;
  z_15 = t;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_15);
  w_15 = t;
  t = y_15;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_15, y_15);
  g_2 = t;
  t = SSLsetAnnotations(g_2, w_15);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_17 = ATgetFirst((ATermList) t);
      l_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_18(i_17, j_17, h_17, t);
            LocalPopChoice(h_10);
          }
        else
          {
            t = e_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_17), k_17), l_17);
          }
      }
    }
  else
    {
      t = b_18(i_17, j_17, h_17, t);
    }
  return(t);
}
static ATerm b_18 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm t)
{
  ATerm d_16 = NULL,j_16 = NULL,h_2 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,w_16 = NULL;
  t = SSLgetAnnotations(c_16);
  d_16 = t;
  t = b_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_16 = ATgetFirst((ATermList) t);
      w_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_16;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_16;
        if((t_16 != t))
          {
            _fail(t);
          }
        t = w_16;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = b_16;
        t = q_6(t_16, u_16, w_16, t);
      }
  }
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_16, j_16);
  h_2 = t;
  t = SSLsetAnnotations(h_2, d_16);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      a_18 = ATgetArgument(t, 0);
      if((a_18 != ATgetArgument(t, 1)))
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
  ATerm k_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_1, g_1, i_1, t);
      LocalPopChoice(o_10);
    }
  else
    {
      t = k_10;
      {
        ATerm r_17 = NULL,s_17 = NULL,x_17 = NULL;
        r_17 = t;
        if(match_cons(t, sym__2))
          {
            s_17 = ATgetArgument(t, 0);
            x_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_17;
        t = l_6(k_1, s_17, x_17, t);
      }
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(w_1, l_10, m_10, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      if((n_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(c_2, i_11, j_11, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      m_11 = ATgetArgument(t, 0);
      if((m_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm c_19 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_119(t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_18 = NULL,g_18 = NULL,f_10 = NULL,g_10 = NULL;
              f_18 = t;
              t = h_119(t);
              g_18 = t;
              t = f_18;
              {
                static ATerm o_1 (ATerm t)
                {
                  ATerm i_18 = NULL;
                  t = c_19(t);
                  i_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_18, g_18);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_119(o_1, c_19, p_1, t);
              }
              g_10 = t;
              t = SSL_explode_term(g_10);
              if(match_cons(t, sym__2))
                {
                  ATerm x_10 = ATgetArgument(t, 0);
                  f_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_10;
              t = foldr_3_0(r_1, t_1, _id, t);
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              {
                ATerm y_10 = NULL,z_10 = NULL;
                z_10 = t;
                t = SSL_explode_term(z_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_11 = ATgetArgument(t, 0);
                    y_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_10;
                t = foldr_3_0(x_1, z_1, c_19, t);
              }
            }
        }
      }
    return(t);
  }
  t = c_19(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,g_23 = NULL,j_23 = NULL,k_23 = NULL,m_23 = NULL;
  k_23 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
      {
        ATerm v_11 = NULL,b_12 = NULL,c_12 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(k_23);
        v_11 = t;
        t = m_23;
        t = m_97(t);
        b_12 = t;
        t = d_23;
        t = k_97(t);
        c_12 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_12, c_12);
        o_2 = t;
        t = SSLsetAnnotations(o_2, v_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          m_23 = ATgetArgument(t, 0);
          d_23 = ATgetArgument(t, 1);
          g_23 = ATgetArgument(t, 2);
          j_23 = ATgetArgument(t, 3);
          {
            ATerm q_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(k_23);
            q_12 = t;
            t = m_23;
            t = m_97(t);
            x_12 = t;
            t = d_23;
            t = m_97(t);
            y_12 = t;
            t = g_23;
            t = m_97(t);
            z_12 = t;
            t = j_23;
            t = k_97(t);
            a_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_12, y_12, z_12, a_13);
            p_2 = t;
            t = SSLsetAnnotations(p_2, q_12);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              m_23 = ATgetArgument(t, 0);
              d_23 = ATgetArgument(t, 1);
              g_23 = ATgetArgument(t, 2);
              j_23 = ATgetArgument(t, 3);
              {
                ATerm x_13 = NULL,e_14 = NULL,g_14 = NULL,i_14 = NULL,r_14 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(k_23);
                x_13 = t;
                t = m_23;
                t = m_97(t);
                e_14 = t;
                t = d_23;
                t = m_97(t);
                g_14 = t;
                t = g_23;
                t = m_97(t);
                i_14 = t;
                t = j_23;
                t = k_97(t);
                r_14 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, e_14, g_14, i_14, r_14);
                q_2 = t;
                t = SSLsetAnnotations(q_2, x_13);
              }
            }
          else
            {
              ATerm f_15 = NULL,h_15 = NULL,r_2 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_23);
              f_15 = t;
              t = m_23;
              t = k_97(t);
              h_15 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_15);
              r_2 = t;
              t = SSLsetAnnotations(r_2, f_15);
            }
        }
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm b_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_24);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_24 = ATgetArgument(t, 0);
            t = d_24;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_24 = ATgetArgument(t, 0);
                e_24 = ATgetArgument(t, 1);
                f_24 = ATgetArgument(t, 2);
                g_24 = ATgetArgument(t, 3);
                t = f_24;
                t = map_1_0(m_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_24 = ATgetArgument(t, 0);
                    e_24 = ATgetArgument(t, 1);
                    f_24 = ATgetArgument(t, 2);
                    g_24 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_24;
                t = map_1_0(n_2, t);
              }
          }
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm o_24 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_24 = ATgetArgument(t, 0);
          {
            ATerm g_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_11);
      t = o_24;
    }
  else
    {
      t = e_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_24;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm z_24 = NULL;
  ATerm h_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_24 = ATgetArgument(t, 0);
          {
            ATerm n_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_11);
      t = z_24;
    }
  else
    {
      t = h_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_24;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(i_2, j_2, tboundin_3_0, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm x_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_25);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm z_25 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_25 = ATgetArgument(t, 0);
            t = z_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_25 = ATgetArgument(t, 0);
                e_26 = ATgetArgument(t, 1);
                f_26 = ATgetArgument(t, 2);
                g_26 = ATgetArgument(t, 3);
                t = f_26;
                t = map_1_0(u_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_25 = ATgetArgument(t, 0);
                    e_26 = ATgetArgument(t, 1);
                    f_26 = ATgetArgument(t, 2);
                    g_26 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_26;
                t = map_1_0(v_2, t);
              }
          }
      }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm r_26 = NULL;
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_26 = ATgetArgument(t, 0);
          {
            ATerm s_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_11);
      t = r_26;
    }
  else
    {
      t = q_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_26;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_27 = NULL;
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_27 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_11);
      t = c_27;
    }
  else
    {
      t = t_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_27;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm o_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      s_25 = ATgetArgument(t, 0);
      t = s_25;
      if(match_cons(t, sym_Rule_3))
        {
          o_25 = ATgetArgument(t, 0);
          {
            ATerm x_11 = ATgetArgument(t, 1);
          }
          {
            ATerm d_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_25;
      t = free_vars_3_0(s_2, t_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          s_25 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_25;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm z_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_27);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm b_28 = NULL,c_28 = NULL,f_28 = NULL,g_28 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_28 = ATgetArgument(t, 0);
            t = b_28;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_28 = ATgetArgument(t, 0);
                c_28 = ATgetArgument(t, 1);
                f_28 = ATgetArgument(t, 2);
                g_28 = ATgetArgument(t, 3);
                t = f_28;
                t = map_1_0(y_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_28 = ATgetArgument(t, 0);
                    c_28 = ATgetArgument(t, 1);
                    f_28 = ATgetArgument(t, 2);
                    g_28 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_28;
                t = map_1_0(z_2, t);
              }
          }
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm p_28 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_28 = ATgetArgument(t, 0);
          {
            ATerm k_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
      t = p_28;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_28;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm d_29 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_29 = ATgetArgument(t, 0);
          {
            ATerm n_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_12);
      t = d_29;
    }
  else
    {
      t = l_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_29;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm g_29 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      g_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_29);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm h_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,p_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
      t = h_29;
      t = f_6(k_29, l_29, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_29 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
          m_29 = ATgetArgument(t, 2);
          t = l_29;
          t = map_1_0(e_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              k_29 = ATgetArgument(t, 0);
              l_29 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, k_29);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  k_29 = ATgetArgument(t, 0);
                  l_29 = ATgetArgument(t, 1);
                  m_29 = ATgetArgument(t, 2);
                  p_29 = ATgetArgument(t, 3);
                  t = l_29;
                  t = map_1_0(g_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_29 = ATgetArgument(t, 0);
                      l_29 = ATgetArgument(t, 1);
                      m_29 = ATgetArgument(t, 2);
                      p_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_29;
                  t = map_1_0(i_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm b_30 = NULL;
  ATerm p_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_30 = ATgetArgument(t, 0);
          {
            ATerm s_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_12);
      t = b_30;
    }
  else
    {
      t = p_12;
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
static ATerm g_3 (ATerm t)
{
  ATerm z_30 = NULL;
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_30 = ATgetArgument(t, 0);
          {
            ATerm v_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_12);
      t = z_30;
    }
  else
    {
      t = t_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_30;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm k_31 = NULL;
  ATerm w_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_31 = ATgetArgument(t, 0);
          {
            ATerm c_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_13);
      t = k_31;
    }
  else
    {
      t = w_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_31;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm d_13 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_13;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      ATerm f_13 = ATgetArgument(t, 1);
      ATerm g_13 = ATgetArgument(t, 2);
      ATerm h_13 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  y_27 = t;
  t = x_27;
  t = free_vars_3_0(w_2, x_2, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_27;
  t = free_vars_3_0(c_3, d_3, sboundin_3_0, t);
  t = filter_1_0(j_3, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_27;
  return(t);
}
ATerm partition_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  static ATerm c_33 (ATerm t)
  {
    ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
    z_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_i_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_33 = ATgetFirst((ATermList) t);
            b_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_15 = NULL,v_15 = NULL,e_16 = NULL,f_16 = NULL,h_16 = NULL,v_16 = NULL,b_3 = NULL;
              t = SSLgetAnnotations(z_32);
              h_16 = t;
              t = a_33;
              t = z_116(t);
              s_15 = t;
              t = (ATerm) ATinsert(CheckATermList(b_33), s_15);
              b_3 = t;
              t = SSLsetAnnotations(b_3, h_16);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_13 = ATgetFirst((ATermList) t);
                  e_16 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_16;
              t = c_33(t);
              v_15 = t;
              t = SSL_explode_term(v_15);
              if(match_cons(t, sym__2))
                {
                  ATerm m_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_13) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_13 = ATgetArgument(t, 1);
                    if(((ATgetType(o_13) == AT_LIST) && !(ATisEmpty(o_13))))
                      {
                        f_16 = ATgetFirst((ATermList) o_13);
                        {
                          ATerm p_13 = (ATerm) ATgetNext((ATermList) o_13);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(v_15);
              if(match_cons(t, sym__2))
                {
                  ATerm q_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_13) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_13 = ATgetArgument(t, 1);
                    if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
                      {
                        ATerm u_13 = ATgetFirst((ATermList) s_13);
                        ATerm v_13 = (ATerm) ATgetNext((ATermList) s_13);
                        if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
                          {
                            v_16 = ATgetFirst((ATermList) v_13);
                            {
                              ATerm w_13 = (ATerm) ATgetNext((ATermList) v_13);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_16), s_15), v_16);
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              {
                ATerm n_17 = NULL,o_17 = NULL,t_17 = NULL,u_17 = NULL,m_18 = NULL,f_3 = NULL;
                t = SSLgetAnnotations(z_32);
                u_17 = t;
                t = (ATerm) ATinsert(CheckATermList(b_33), a_33);
                f_3 = t;
                t = SSLsetAnnotations(f_3, u_17);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm y_13 = ATgetFirst((ATermList) t);
                    o_17 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_17;
                t = c_33(t);
                n_17 = t;
                t = SSL_explode_term(n_17);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm a_14 = ATgetArgument(t, 1);
                      if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
                        {
                          t_17 = ATgetFirst((ATermList) a_14);
                          {
                            ATerm b_14 = (ATerm) ATgetNext((ATermList) a_14);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(n_17);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_14 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_14) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm d_14 = ATgetArgument(t, 1);
                      if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
                        {
                          ATerm h_14 = ATgetFirst((ATermList) d_14);
                          ATerm n_14 = (ATerm) ATgetNext((ATermList) d_14);
                          if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
                            {
                              m_18 = ATgetFirst((ATermList) n_14);
                              {
                                ATerm s_14 = (ATerm) ATgetNext((ATermList) n_14);
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
                t = (ATerm) ATmakeAppl(sym__2, t_17, (ATerm) ATinsert(CheckATermList(m_18), a_33));
              }
            }
        }
      }
    return(t);
  }
  t = c_33(t);
  return(t);
}
static ATerm s_6 (ATerm u_22, ATerm t_22, ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  t = u_22;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_33;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, f_33, t_22), g_33);
  return(t);
}
static ATerm t_6 (ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm f_45, ATerm e_45, ATerm t)
{
  t = d_113(t);
  {
    static ATerm k_3 (ATerm t)
    {
      ATerm h_33 = NULL;
      h_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_45, h_33);
      t = c_113(t);
      return(t);
    }
    t = fetch_1_0(k_3, t);
  }
  t = e_45;
  return(t);
}
static ATerm u_6 (ATerm z_112 (ATerm), ATerm b_45, ATerm a_45, ATerm t)
{
  static ATerm x_33 (ATerm t)
  {
    ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
    s_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_33 = ATgetFirst((ATermList) t);
            u_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_33;
              {
                static ATerm m_3 (ATerm t)
                {
                  t = a_45;
                  return(t);
                }
                t = t_6(z_112, m_3, t_33, u_33, t);
              }
              t = x_33(t);
              LocalPopChoice(w_14);
            }
          else
            {
              t = t_14;
              {
                ATerm v_18 = NULL,y_18 = NULL,l_3 = NULL;
                t = SSLgetAnnotations(s_33);
                v_18 = t;
                t = u_33;
                t = x_33(t);
                y_18 = t;
                t = (ATerm) ATinsert(CheckATermList(y_18), t_33);
                l_3 = t;
                t = SSLsetAnnotations(l_3, v_18);
              }
            }
        }
      }
    return(t);
  }
  t = b_45;
  t = x_33(t);
  return(t);
}
ATerm genzip_4_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  static ATerm l_34 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_102(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm z_33 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,k_34 = NULL,v_3 = NULL;
          t = w_102(t);
          k_34 = t;
          if(match_cons(t, sym__2))
            {
              c_34 = ATgetArgument(t, 0);
              d_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_34);
          z_33 = t;
          t = c_34;
          t = y_102(t);
          e_34 = t;
          t = d_34;
          t = l_34(t);
          f_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
          v_3 = t;
          t = SSLsetAnnotations(v_3, z_33);
          t = x_102(t);
        }
      }
    return(t);
  }
  t = l_34(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_13;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm h_35 = NULL,j_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_35 = ATgetFirst((ATermList) t);
      j_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_35, j_35);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(match_cons(a_15, sym__2))
        {
          k_35 = ATgetArgument(a_15, 0);
          l_35 = ATgetArgument(a_15, 1);
        }
      else
        _fail(t);
      {
        ATerm b_15 = ATgetArgument(t, 1);
        if(match_cons(b_15, sym__2))
          {
            m_35 = ATgetArgument(b_15, 0);
            n_35 = ATgetArgument(b_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_35), k_35), (ATerm) ATinsert(CheckATermList(n_35), l_35));
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm p_35 = NULL,u_35 = NULL;
  if(match_cons(t, sym__2))
    {
      p_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(t_3, p_35, u_35, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm v_35 = NULL;
  if(match_cons(t, sym__2))
    {
      v_35 = ATgetArgument(t, 0);
      if((v_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_35 = NULL;
  if(match_cons(t, sym__2))
    {
      x_35 = ATgetArgument(t, 0);
      if((x_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,v_34 = NULL,w_34 = NULL,a_35 = NULL,c_35 = NULL,d_35 = NULL,f_35 = NULL;
  d_35 = t;
  f_35 = t;
  t = SSL_explode_term(f_35);
  if(match_cons(t, sym__2))
    {
      o_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_35);
  q_34 = t;
  t = m_34;
  t = genzip_4_0(n_3, o_3, q_3, w_113, t);
  if(match_cons(t, sym__2))
    {
      p_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(o_34, p_34);
  c_35 = t;
  t = SSLsetAnnotations(c_35, q_34);
  t = x_113(t);
  if(match_cons(t, sym__2))
    {
      r_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_34;
  t = foldr_2_0(r_3, s_3, t);
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_34, a_35);
  t = u_6(u_3, v_34, a_35, t);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_34, w_34);
  return(t);
}
ATerm collect_split_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  static ATerm a_36 (ATerm t)
  {
    static ATerm w_3 (ATerm t)
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_114(t);
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          {
            ATerm y_35 = NULL;
            y_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_35, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(a_36, w_3, t);
    return(t);
  }
  t = a_36(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm i_36 = NULL,k_36 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      i_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(i_36, k_36, t);
  return(t);
}
static ATerm y_6 (ATerm n_22, ATerm o_22, ATerm p_22, ATerm q_22, ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  t = q_22;
  t = collect_split_1_0(c_4, t);
  if(match_cons(t, sym__2))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, n_22, o_22, p_22, b_36)));
  t = conc_0_0(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm s_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      s_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
      w_36 = ATgetArgument(t, 2);
      {
        ATerm c_37 = NULL;
        t = term_i_15;
        c_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_36, term_i_15);
        t = z_6(d_4, s_36, c_37, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, s_36, v_36, w_36);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          s_36 = ATgetArgument(t, 0);
          v_36 = ATgetArgument(t, 1);
          w_36 = ATgetArgument(t, 2);
          x_36 = ATgetArgument(t, 3);
          {
            ATerm i_37 = NULL;
            t = term_k_15;
            i_37 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_36, term_k_15);
            t = z_6(e_4, s_36, i_37, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, s_36, v_36, w_36, x_36);
          }
        }
      else
        {
          ATerm p_37 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              s_36 = ATgetArgument(t, 0);
              v_36 = ATgetArgument(t, 1);
              w_36 = ATgetArgument(t, 2);
              x_36 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_m_15;
          p_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_36, term_m_15);
          t = z_6(f_4, s_36, p_37, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, s_36, v_36, w_36, x_36);
        }
    }
  return(t);
}
static ATerm z_6 (ATerm c_110 (ATerm), ATerm l_40, ATerm j_40, ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,x_37 = NULL,y_37 = NULL;
  u_37 = t;
  t = c_110(t);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_37, l_40, j_40);
  t = m_7(r_37, l_40, j_40, t);
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_37 = NULL;
        t = term_p_15;
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_37, term_p_15);
        t = l_7(r_37, z_37, t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_37 = ATgetFirst((ATermList) t);
      t_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_p_15;
  x_37 = t;
  t = (ATerm) ATinsert(CheckATermList(t_37), (ATerm) ATinsert(CheckATermList(s_37), l_40));
  y_37 = t;
  t = SSL_table_put(r_37, x_37, y_37);
  t = u_37;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  b_38 = t;
  t = term_r_15;
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_38, term_r_15);
  t = z_6(h_4, b_38, c_38, t);
  t = b_38;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_16), term_u_15);
  t = map_1_0(g_4, t);
  t = a_38;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,z_3 = NULL;
  p_38 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_38);
  m_38 = t;
  t = n_38;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(p_4, t);
  t = concat_0_0(t);
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_38);
  z_3 = t;
  t = SSLsetAnnotations(z_3, m_38);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  u_38 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
      s_38 = ATgetArgument(t, 2);
      t_38 = ATgetArgument(t, 3);
      {
        ATerm i_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_38;
            t = y_6(q_38, r_38, s_38, t_38, t);
            LocalPopChoice(k_16);
          }
        else
          {
            t = i_16;
            t = (ATerm) ATinsert(ATempty, u_38);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, u_38);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,b_4 = NULL,a_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  l_38 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_38);
  e_38 = t;
  t = f_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_38 = ATgetFirst((ATermList) t);
      i_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_38);
  g_38 = t;
  t = i_38;
  t = Cons_2_0(n_4, o_4, t);
  j_38 = t;
  t = (ATerm) ATinsert(CheckATermList(j_38), h_38);
  a_4 = t;
  t = SSLsetAnnotations(a_4, g_38);
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_38);
  b_4 = t;
  t = SSLsetAnnotations(b_4, e_38);
  return(t);
}
static ATerm c_7 (ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm h_39 = NULL;
  t = SSL_fputc(m_31, n_31);
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_39);
  return(t);
}
static ATerm d_7 (ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm i_39 = NULL;
  t = SSL_write_term_to_stream_text(g_30, h_30);
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_39);
  return(t);
}
static ATerm f_7 (ATerm t_105 (ATerm), ATerm j_211, ATerm k_30, ATerm t)
{
  ATerm j_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_211, term_l_16);
  t = i_7(t);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_39, k_30);
  t = t_105(t);
  t = fclose_0_0(t);
  t = k_30;
  return(t);
}
static ATerm e_7 (ATerm c_30, ATerm d_30, ATerm t)
{
  ATerm k_39 = NULL;
  t = SSL_write_term_to_stream_baf(c_30, d_30);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_39);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm s_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_16 = ATgetArgument(t, 0);
      if(match_cons(m_16, sym_Stream_1))
        {
          s_19 = ATgetArgument(m_16, 0);
        }
      else
        _fail(t);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(s_19, w_19, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym_Stream_1))
        {
          k_21 = ATgetArgument(n_16, 0);
        }
      else
        _fail(t);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(k_21, l_21, t);
  d_21 = t;
  t = term_o_16;
  e_21 = t;
  t = d_21;
  if(match_cons(t, sym_Stream_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, d_21);
  t = c_7(e_21, j_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_39 = NULL,x_39 = NULL,y_39 = NULL,a_40 = NULL,b_40 = NULL,e_40 = NULL,h_40 = NULL,i_40 = NULL,o_40 = NULL,p_40 = NULL,o_42 = NULL,p_42 = NULL,j_4 = NULL,i_4 = NULL;
  x_39 = t;
  if(match_cons(t, sym__2))
    {
      i_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_39);
  h_40 = t;
  t = i_40;
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_39 != NULL) && (v_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_4, t);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        t = term_r_16;
        v_39 = t;
      }
  }
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_40, o_40);
  i_4 = t;
  t = SSLsetAnnotations(i_4, h_40);
  t = x_39;
  if(match_cons(t, sym__2))
    {
      a_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_39);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_40, (ATerm) ATmakeAppl(sym__2, not_null(v_39), b_40));
  j_4 = t;
  t = SSLsetAnnotations(j_4, y_39);
  e_40 = t;
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,l_19 = NULL,m_19 = NULL,p_19 = NULL,q_19 = NULL,k_4 = NULL;
        t = SSLgetAnnotations(e_40);
        i_19 = t;
        t = o_42;
        t = fetch_1_0(s_4, t);
        l_19 = t;
        t = p_42;
        if(match_cons(t, sym__2))
          {
            p_19 = ATgetArgument(t, 0);
            q_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_7(t_4, p_19, q_19, t);
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_19, m_19);
        k_4 = t;
        t = SSLsetAnnotations(k_4, i_19);
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        {
          ATerm d_20 = NULL,g_20 = NULL,p_20 = NULL,q_20 = NULL,m_4 = NULL;
          t = SSLgetAnnotations(e_40);
          d_20 = t;
          t = p_42;
          if(match_cons(t, sym__2))
            {
              p_20 = ATgetArgument(t, 0);
              q_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_7(x_4, p_20, q_20, t);
          g_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_42, g_20);
          m_4 = t;
          t = SSLsetAnnotations(m_4, d_20);
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
ATerm apply_strategy_1_0 (ATerm n_124 (ATerm), ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,w_42 = NULL,x_42 = NULL,d_43 = NULL;
  d_43 = t;
  t = dtime_0_0(t);
  t = d_43;
  t = n_124(t);
  x_42 = t;
  t = dtime_0_0(t);
  s_42 = t;
  t = x_42;
  if(match_cons(t, sym__2))
    {
      t_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_42), (ATerm) ATmakeAppl(sym_Runtime_1, s_42)), w_42);
  return(t);
}
static ATerm b_44 (ATerm t_43, ATerm t)
{
  t = SSL_fclose(t_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL;
  x_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_43 = ATgetArgument(t, 0);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_43);
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = b_44(x_43, t);
          }
      }
    }
  else
    {
      t = b_44(x_43, t);
    }
  return(t);
}
static ATerm g_7 (ATerm i_30, ATerm t)
{
  t = SSL_read_term_from_stream(i_30);
  return(t);
}
static ATerm h_7 (ATerm o_31, ATerm p_31, ATerm t)
{
  ATerm c_44 = NULL;
  t = SSL_fopen(o_31, p_31);
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_44);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_44 = NULL;
  t = SSL_stdin_stream();
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_44);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_44 = NULL;
  t = SSL_stdout_stream();
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_44);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_44 = NULL;
  t = SSL_stderr_stream();
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_44);
  return(t);
}
static ATerm t_46 (ATerm o_44, ATerm t)
{
  ATerm p_44 = NULL;
  t = SSL_explode_term(o_44);
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_17 = ATgetArgument(t, 1);
        if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
          {
            p_44 = ATgetFirst((ATermList) c_17);
            {
              ATerm d_17 = (ATerm) ATgetNext((ATermList) c_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_46 (ATerm s_44, ATerm t_44, ATerm u_44, ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,d_45 = NULL,l_45 = NULL,a_5 = NULL;
  t = SSLgetAnnotations(u_44);
  d_45 = t;
  t = s_44;
  if(match_cons(t, sym_Path_1))
    {
      l_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_45, t_44);
  a_5 = t;
  t = SSLsetAnnotations(a_5, d_45);
  if(match_cons(t, sym__2))
    {
      v_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(v_44, w_44, t);
  return(t);
}
static ATerm v_46 (ATerm n_45, ATerm o_45, ATerm p_45, ATerm t)
{
  ATerm q_45 = NULL,y_45 = NULL,a_46 = NULL,d_46 = NULL,j_5 = NULL;
  t = SSLgetAnnotations(p_45);
  a_46 = t;
  t = SSL_is_string(n_45);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_46, o_45);
  j_5 = t;
  t = SSLsetAnnotations(j_5, a_46);
  if(match_cons(t, sym__2))
    {
      q_45 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(q_45, y_45, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  if(match_cons(t, sym__2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_46(p_46, t);
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            {
              ATerm g_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_46(q_46, r_46, p_46, t);
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = g_17;
                  t = v_46(q_46, r_46, p_46, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_46(p_46, t);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_46 = NULL,y_46 = NULL,z_46 = NULL;
  ATerm q_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_47 = NULL;
      c_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_47, term_w_17);
      t = i_7(t);
      LocalPopChoice(v_17);
    }
  else
    {
      t = q_17;
      t = debug_1_0(z_4, t);
      _fail(t);
    }
  y_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(z_46, t);
  w_46 = t;
  t = y_46;
  t = fclose_0_0(t);
  t = w_46;
  return(t);
}
ATerm fetch_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  static ATerm j_48 (ATerm t)
  {
    ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
    d_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_48 = ATgetFirst((ATermList) t);
        f_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_17 = t;
      int z_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_22 = NULL,h_22 = NULL,p_5 = NULL;
          t = SSLgetAnnotations(d_48);
          d_22 = t;
          t = e_48;
          t = w_110(t);
          h_22 = t;
          t = (ATerm) ATinsert(CheckATermList(f_48), h_22);
          p_5 = t;
          t = SSLsetAnnotations(p_5, d_22);
          LocalPopChoice(z_17);
        }
      else
        {
          t = y_17;
          {
            ATerm w_22 = NULL,f_23 = NULL,b_6 = NULL;
            t = SSLgetAnnotations(d_48);
            w_22 = t;
            t = f_48;
            t = j_48(t);
            f_23 = t;
            t = (ATerm) ATinsert(CheckATermList(f_23), e_48);
            b_6 = t;
            t = SSLsetAnnotations(b_6, w_22);
          }
        }
    }
    return(t);
  }
  t = j_48(t);
  return(t);
}
static ATerm b_7 (ATerm c_54, ATerm d_54, ATerm t)
{
  t = SSL_strcat(c_54, d_54);
  return(t);
}
ATerm debug_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  s_48 = t;
  t = r_105(t);
  t_48 = t;
  t = term_n_8;
  u_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_48), t_48);
  v_48 = t;
  t = SSL_printnl(u_48, v_48);
  t = s_48;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_49 = NULL;
      k_49 = t;
      t = SSL_is_string(k_49);
      LocalPopChoice(j_18);
    }
  else
    {
      t = h_18;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_5, t);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
              r_49 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_49 = ATgetArgument(t, 0);
                  t = s_49;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_49 = ATgetArgument(t, 0);
                      t = s_49;
                      {
                        ATerm n_18 = t;
                        int o_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(o_18);
                          }
                        else
                          {
                            t = n_18;
                            t = debug_1_0(c_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_49 = NULL,y_49 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_49 = ATgetArgument(t, 0);
                          t_49 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_49;
                      t = eval_config_0_0(t);
                      x_49 = t;
                      t = t_49;
                      t = eval_config_0_0(t);
                      y_49 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_49, y_49);
                      t = b_7(x_49, y_49, t);
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
  ATerm e_50 = NULL,h_50 = NULL;
  e_50 = t;
  t = term_p_18;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, e_50);
  t = l_7(h_50, e_50, t);
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_50 = NULL,l_50 = NULL;
        t = eval_config_0_0(t);
        i_50 = t;
        t = term_p_18;
        l_50 = t;
        t = SSL_table_put(l_50, e_50, i_50);
        t = i_50;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_50 = NULL;
        t = term_u_18;
        t = get_config_0_0(t);
        u_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_50, term_w_18);
        t = geq_0_0(t);
        t = r_50;
        t = k_107(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = r_50;
      }
  }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm x_50 = NULL;
  x_50 = t;
  if(match_string(t, "-k"))
    {
      t = x_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_50;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  t = SSL_string_to_int(y_50);
  z_50 = t;
  t = term_x_18;
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_18, z_50);
  t = o_7(a_51, z_50, t);
  t = y_50;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, f_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm c_51 = NULL;
  c_51 = t;
  if(match_string(t, "-S"))
    {
      t = c_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_51;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL;
  t = term_u_18;
  d_51 = t;
  t = term_a_19;
  e_51 = t;
  t = term_b_19;
  t = o_7(d_51, e_51, t);
  t = term_d_19;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_e_19;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
  f_51 = t;
  t = SSL_string_to_int(f_51);
  g_51 = t;
  t = term_u_18;
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, g_51);
  t = o_7(h_51, g_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_51);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_f_19;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL;
  t = term_g_19;
  i_51 = t;
  t = term_a_1;
  j_51 = t;
  t = term_h_19;
  t = o_7(i_51, j_51, t);
  t = term_j_19;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_5, i_5, k_5, t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm r_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_5, n_5, q_5, t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = r_19;
            t = Option_3_0(r_5, s_5, t_5, t);
          }
      }
    }
  return(t);
}
static ATerm o_7 (ATerm q_35, ATerm s_35, ATerm t)
{
  ATerm k_51 = NULL;
  t = term_p_18;
  k_51 = t;
  t = SSL_table_put(k_51, q_35, s_35);
  t = (ATerm) ATmakeAppl(sym__3, term_p_18, q_35, s_35);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
      t = term_a_1;
      t = e_0(t);
      p_51 = t;
      t = term_u_19;
      q_51 = t;
      t = term_v_19;
      r_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, p_51);
      t = m_7(q_51, r_51, p_51, t);
      _fail(t);
    }
  else
    {
      ATerm u_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_51 = ATgetFirst((ATermList) t);
          o_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_51;
      t = c_0(t);
      t = term_a_1;
      t = d_0(t);
      u_51 = t;
      t = (ATerm) ATinsert(CheckATermList(o_51), u_51);
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  if(match_string(t, "-o"))
    {
      t = w_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_51;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  x_51 = t;
  t = term_x_19;
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_19, x_51);
  t = o_7(y_51, x_51, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_51);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
static ATerm m_7 (ATerm t_40, ATerm u_40, ATerm s_40, ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_40, u_40);
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_20 = ATgetArgument(t, 0);
            ATerm c_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_40, u_40);
        t = l_7(t_40, u_40, t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = (ATerm) ATempty;
      }
  }
  b_52 = t;
  t = (ATerm) ATinsert(CheckATermList(b_52), s_40);
  c_52 = t;
  t = SSL_table_put(t_40, u_40, c_52);
  t = a_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
      t = term_a_1;
      t = n_0(t);
      n_52 = t;
      t = term_u_19;
      o_52 = t;
      t = term_v_19;
      p_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, n_52);
      t = m_7(o_52, p_52, n_52, t);
      _fail(t);
    }
  else
    {
      ATerm t_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_52 = ATgetFirst((ATermList) t);
          k_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_52 = ATgetFirst((ATermList) t);
          m_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_52;
      t = k_0(t);
      t = l_52;
      t = l_0(t);
      t_52 = t;
      t = (ATerm) ATinsert(CheckATermList(m_52), t_52);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm v_52 = NULL;
  v_52 = t;
  if(match_string(t, "-i"))
    {
      t = v_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_52;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  w_52 = t;
  t = term_e_20;
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, w_52);
  t = o_7(x_52, w_52, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_52);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, z_5, c_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_1;
  t = whoami_0_0(t);
  y_52 = t;
  t = term_n_8;
  a_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_20), y_52);
  b_53 = t;
  t = SSL_printnl(a_53, b_53);
  t = term_s_8;
  z_52 = t;
  t = SSL_exit(z_52);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm j_7 (ATerm x_38, ATerm y_38, ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_38, y_38);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = SSL_addr(x_38, y_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_53;
      t = n_115(t);
    }
  else
    {
      ATerm i_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_53 = ATgetFirst((ATermList) t);
          f_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_53;
      t = foldr_2_0(n_115, o_115, t);
      i_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_53, i_53);
      t = o_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(f_25, g_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_53 = NULL,y_24 = NULL,a_25 = NULL;
  t = times_0_0(t);
  a_25 = t;
  t = SSL_explode_term(a_25);
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_24;
  t = foldr_2_0(d_6, i_6, t);
  l_53 = t;
  t = SSL_TicksToSeconds(l_53);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
  w_53 = t;
  if(match_cons(t, sym__2))
    {
      x_53 = ATgetArgument(t, 0);
      y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_53;
        if((x_53 != t))
          {
            _fail(t);
          }
        t = w_53;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATmakeAppl(sym__2, x_53, y_53);
        {
          ATerm o_20 = t;
          int r_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_53, y_53);
              LocalPopChoice(r_20);
            }
          else
            {
              t = o_20;
              t = SSL_gtr(x_53, y_53);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_53, y_53);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  ATerm e_54 = NULL;
  e_54 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_54 = NULL;
        t = term_u_18;
        t = get_config_0_0(t);
        g_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_54, term_s_8);
        t = geq_0_0(t);
        t = e_54;
        t = j_107(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = e_54;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,l_54 = NULL,m_54 = NULL;
  t = run_time_0_0(t);
  i_54 = t;
  t = term_a_1;
  t = whoami_0_0(t);
  j_54 = t;
  t = term_n_8;
  l_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_20), i_54), term_u_20), j_54);
  m_54 = t;
  t = SSL_printnl(l_54, m_54);
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_20), i_54), term_u_20), j_54));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_19;
  n_54 = t;
  t = SSL_exit(n_54);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL;
  w_54 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_54;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_54 = ATgetArgument(t, 0);
          {
            ATerm c_26 = NULL,n_7 = NULL;
            t = SSLgetAnnotations(w_54);
            c_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_54);
            n_7 = t;
            t = SSLsetAnnotations(n_7, c_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_54;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_20;
      t = get_config_0_0(t);
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      t = fetch_1_0(k_6, t);
    }
  t = l_125(t);
  return(t);
}
ATerm map_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  static ATerm m_55 (ATerm t)
  {
    ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
    j_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_55;
      }
    else
      {
        ATerm e_27 = NULL,k_27 = NULL,l_27 = NULL,q_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_55 = ATgetFirst((ATermList) t);
            l_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_55);
        e_27 = t;
        t = k_55;
        t = m_110(t);
        k_27 = t;
        t = l_55;
        t = m_55(t);
        l_27 = t;
        t = (ATerm) ATinsert(CheckATermList(l_27), k_27);
        q_7 = t;
        t = SSLsetAnnotations(q_7, e_27);
      }
    return(t);
  }
  t = m_55(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_55 = ATgetFirst((ATermList) t);
      q_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_55 = NULL,v_55 = NULL;
        static ATerm m_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_55)), not_null(v_55));
          return(t);
        }
        t = q_55;
        t = i_0(t);
        if(((u_55 != NULL) && (u_55 != t)))
          _fail(t);
        else
          u_55 = t;
        t = p_55;
        t = g_0(t);
        if(((v_55 != NULL) && (v_55 != t)))
          _fail(t);
        else
          v_55 = t;
        t = q_55;
        t = reverse_acc_2_0(g_0, m_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_1;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_7 (ATerm k_42, ATerm l_42, ATerm t)
{
  t = SSL_table_get(k_42, l_42);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,s_7 = NULL;
  b_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_56);
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_56);
  s_7 = t;
  t = SSLsetAnnotations(s_7, z_55);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm d_56 = NULL;
  d_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_56), term_z_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_20;
      t = get_config_0_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = fetch_1_0(n_6, t);
    }
  t = term_c_21;
  t = echo_0_0(t);
  t = term_u_19;
  x_55 = t;
  t = term_v_19;
  y_55 = t;
  t = term_f_21;
  t = l_7(x_55, y_55, t);
  t = reverse_acc_2_0(_id, o_6, t);
  t = map_1_0(p_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
  j_56 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_21 = ATgetFirst((ATermList) t);
                ATerm m_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_56;
          }
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = (ATerm) ATinsert(ATempty, j_56);
      }
  }
  k_56 = t;
  t = term_r_16;
  l_56 = t;
  t = SSL_printnl(l_56, k_56);
  t = j_56;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL;
  t = term_n_21;
  p_56 = t;
  t = term_a_1;
  q_56 = t;
  t = term_o_21;
  t = o_7(p_56, q_56, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_p_21;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
  t = term_n_21;
  t_56 = t;
  t = term_a_1;
  u_56 = t;
  t = term_o_21;
  t = o_7(t_56, u_56, t);
  t = term_q_21;
  r_56 = t;
  t = term_a_1;
  s_56 = t;
  t = term_r_21;
  t = o_7(r_56, s_56, t);
  t = term_s_21;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_6, v_6, w_6, t);
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      t = Option_3_0(x_6, k_7, p_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,u_7 = NULL;
  a_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_56 = ATgetFirst((ATermList) t);
      x_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_57);
  v_56 = t;
  t = w_56;
  t = c_83(t);
  y_56 = t;
  t = x_56;
  t = d_83(t);
  z_56 = t;
  t = (ATerm) ATinsert(CheckATermList(z_56), y_56);
  u_7 = t;
  t = SSLsetAnnotations(u_7, v_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,k_57 = NULL,l_57 = NULL,x_7 = NULL;
  f_57 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_21;
        t = o_127(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
      }
  }
  t = f_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_57 = ATgetFirst((ATermList) t);
      i_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_57);
  g_57 = t;
  t = term_i_20;
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, h_57);
  t = o_7(l_57, h_57, t);
  t = i_57;
  {
    static ATerm v_57 (ATerm t)
    {
      ATerm z_21 = t;
      int a_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_57 = NULL;
              o_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_57;
              LocalPopChoice(c_22);
            }
          else
            {
              t = b_22;
              t = o_127(t);
              t = Cons_2_0(_id, v_57, t);
            }
          LocalPopChoice(a_22);
        }
      else
        {
          t = z_21;
          {
            ATerm r_57 = NULL,s_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_57 = ATgetFirst((ATermList) t);
                s_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_57), (ATerm) ATmakeAppl(sym_Undefined_1, r_57));
          }
        }
      return(t);
    }
    t = v_57(t);
  }
  k_57 = t;
  t = (ATerm) ATinsert(CheckATermList(k_57), (ATerm) ATmakeAppl(sym_Program_1, h_57));
  x_7 = t;
  t = SSLsetAnnotations(x_7, g_57);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm h_58 = NULL;
  h_58 = t;
  if(match_string(t, "--help"))
    {
      t = h_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_58;
        }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL;
  t = term_y_20;
  i_58 = t;
  t = term_a_1;
  j_58 = t;
  t = term_e_22;
  t = o_7(i_58, j_58, t);
  t = term_f_22;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  c_58 = t;
  t = term_u_19;
  e_58 = t;
  t = term_v_19;
  f_58 = t;
  t = (ATerm) ATempty;
  g_58 = t;
  t = SSL_table_put(e_58, f_58, g_58);
  t = c_58;
  {
    static ATerm r_7 (ATerm t)
    {
      ATerm i_22 = t;
      int j_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_127(t);
          LocalPopChoice(j_22);
        }
      else
        {
          t = i_22;
          {
            ATerm k_22 = t;
            int l_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_7, v_7, w_7, t);
                LocalPopChoice(l_22);
              }
            else
              {
                t = k_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_7, t);
  }
  {
    ATerm m_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_58 = NULL;
        q_58 = t;
        {
          ATerm s_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_27 = NULL;
              t = q_58;
              {
                ATerm x_22 = t;
                int y_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_y_20;
                    t = get_config_0_0(t);
                    LocalPopChoice(y_22);
                  }
                else
                  {
                    t = x_22;
                    t = fetch_1_0(y_7, t);
                  }
              }
              t = q_58;
              t = default_system_usage_0_0(t);
              t = term_a_19;
              s_27 = t;
              t = SSL_exit(s_27);
              LocalPopChoice(v_22);
            }
          else
            {
              t = s_22;
              {
                ATerm w_27 = NULL;
                t = term_n_21;
                t = get_config_0_0(t);
                t = q_58;
                t = default_system_about_0_0(t);
                t = term_a_19;
                w_27 = t;
                t = SSL_exit(w_27);
              }
            }
        }
        LocalPopChoice(r_22);
      }
    else
      {
        t = m_22;
        {
          ATerm z_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_58 = NULL,s_58 = NULL,y_58 = NULL;
              static ATerm a_8 (ATerm t)
              {
                ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,z_7 = NULL;
                b_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_59);
                z_58 = t;
                t = a_59;
                if(((a_58 != NULL) && (a_58 != t)))
                  _fail(t);
                else
                  a_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_59);
                z_7 = t;
                t = SSLsetAnnotations(z_7, z_58);
                return(t);
              }
              t = fetch_1_0(a_8, t);
              t = term_n_8;
              s_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_58)), term_b_23);
              y_58 = t;
              t = SSL_printnl(s_58, y_58);
              t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_58)), term_b_23));
              t = default_system_usage_0_0(t);
              t = term_s_8;
              r_58 = t;
              t = SSL_exit(r_58);
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
            }
        }
      }
  }
  b_58 = t;
  t = term_u_19;
  d_58 = t;
  t = SSL_table_destroy(d_58);
  t = b_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,j_59 = NULL,k_59 = NULL;
  t = parse_options_1_0(n_125, t);
  g_59 = t;
  t = term_c_23;
  k_59 = t;
  t = SSL_table_create(k_59);
  t = term_c_23;
  h_59 = t;
  t = term_e_23;
  j_59 = t;
  t = SSL_table_put(h_59, j_59, g_59);
  t = g_59;
  t = p_125(t);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_125, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm l_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_23);
            }
          else
            {
              t = l_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = if_verbose2_1_0(k_8, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  t = term_o_23;
  l_59 = t;
  t = term_a_1;
  m_59 = t;
  t = term_p_23;
  t = o_7(l_59, m_59, t);
  t = term_q_23;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_r_23;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  n_59 = t;
  t = term_i_20;
  t = get_config_0_0(t);
  o_59 = t;
  t = term_n_8;
  p_59 = t;
  t = (ATerm) ATinsert(ATempty, o_59);
  q_59 = t;
  t = SSL_printnl(p_59, q_59);
  t = n_59;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm t)
{
  static ATerm c_8 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_124(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              {
                ATerm w_23 = t;
                int z_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(z_23);
                  }
                else
                  {
                    t = w_23;
                    {
                      ATerm a_24 = t;
                      int c_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_8, g_8, j_8, t);
                          LocalPopChoice(c_24);
                        }
                      else
                        {
                          t = a_24;
                          {
                            ATerm h_24 = t;
                            int i_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(i_24);
                              }
                            else
                              {
                                t = h_24;
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
  static ATerm e_8 (ATerm t)
  {
    ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
    s_59 = t;
    {
      ATerm j_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_59 != NULL) && (r_59 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_8, t);
          LocalPopChoice(k_24);
        }
      else
        {
          t = j_24;
          t = term_l_24;
          r_59 = t;
        }
    }
    t = not_null(r_59);
    t = ReadFromFile_0_0(t);
    t_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_59, t_59);
    t = apply_strategy_1_0(w_124, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(c_8, y_124, d_8, e_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,b_8 = NULL;
  y_59 = t;
  if(match_cons(t, sym__2))
    {
      v_59 = ATgetArgument(t, 0);
      w_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_59);
  u_59 = t;
  t = w_59;
  t = lift_definitions_0_0(t);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_59, x_59);
  b_8 = t;
  t = SSLsetAnnotations(b_8, u_59);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_8, _fail, default_usage_0_0, t);
  return(t);
}

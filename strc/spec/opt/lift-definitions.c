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
ATerm term_w_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_z_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_u_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_z_16;
ATerm term_o_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_x_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_e_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_x_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_u_21);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_z_23, term_x_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_x_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_x_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_x_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_115 (ATerm), ATerm t);
static ATerm h_2 (ATerm u_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_6 (ATerm f_42, ATerm g_42, ATerm t);
ATerm TopLevel_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_121 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm m_6 (ATerm b_24, ATerm a_24, ATerm t);
ATerm foldr_3_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t);
static ATerm r_6 (ATerm q_117 (ATerm), ATerm a_46, ATerm z_45, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm w_6 (ATerm c_635, ATerm h_635, ATerm r_61, ATerm t);
ATerm while_not_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm o_17 (ATerm o_15, ATerm p_15, ATerm r_15, ATerm t);
static ATerm r_1 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm free_vars_3_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm t);
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
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm SuperCombinator_0_0 (ATerm t);
ATerm partition_1_0 (ATerm v_121 (ATerm), ATerm t);
static ATerm y_6 (ATerm x_22, ATerm w_22, ATerm t);
static ATerm z_6 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm g_46, ATerm f_46, ATerm t);
static ATerm a_7 (ATerm v_117 (ATerm), ATerm c_46, ATerm b_46, ATerm t);
ATerm genzip_4_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm CollectSplit_2_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t);
ATerm collect_split_1_0 (ATerm f_119 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_7 (ATerm q_22, ATerm r_22, ATerm s_22, ATerm t_22, ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm DeclareTopLevel_0_0 (ATerm t);
static ATerm f_7 (ATerm t_114 (ATerm), ATerm q_40, ATerm n_40, ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm declare_standard_strategies_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm lift_definitions_0_0 (ATerm t);
static ATerm i_7 (ATerm r_31, ATerm s_31, ATerm t);
static ATerm j_7 (ATerm m_30, ATerm n_30, ATerm t);
static ATerm l_7 (ATerm k_110 (ATerm), ATerm n_218, ATerm q_30, ATerm t);
static ATerm k_7 (ATerm i_30, ATerm j_30, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_129 (ATerm), ATerm t);
static ATerm s_52 (ATerm i_52, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_7 (ATerm o_30, ATerm t);
static ATerm n_7 (ATerm t_31, ATerm u_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_54 (ATerm h_53, ATerm t);
static ATerm j_54 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t);
static ATerm k_54 (ATerm v_53, ATerm w_53, ATerm x_53, ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_115 (ATerm), ATerm t);
static ATerm h_7 (ATerm f_55, ATerm g_55, ATerm t);
ATerm debug_1_0 (ATerm i_110 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm b_112 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_7 (ATerm u_35, ATerm v_35, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_7 (ATerm u_41, ATerm v_41, ATerm t_41, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_7 (ATerm z_38, ATerm a_39, ATerm t);
ATerm foldr_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_112 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm need_help_1_0 (ATerm h_130 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_115 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_7 (ATerm l_43, ATerm m_43, ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_132 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm parse_options_1_0 (ATerm j_132 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm iowrap_3_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,l_0 = NULL,m_0 = NULL;
  a_0 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_e_9;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_9), b_0), term_f_9);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t = term_h_9;
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
ATerm at_end_1_0 (ATerm y_115 (ATerm), ATerm t)
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
        t = y_115(t);
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
      ATerm i_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_9) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_0 (ATerm t)
            {
              t = c_2;
              return(t);
            }
            t = b_2;
            t = at_end_1_0(v_0, t);
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
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
static ATerm h_6 (ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm i_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_42, g_42);
  t = r_7(f_42, g_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_2 = ATgetFirst((ATermList) t);
      {
        ATerm l_9 = (ATerm) ATgetNext((ATermList) t);
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
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 = NULL;
        t = term_o_9;
        i_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, d_3);
        t = h_6(i_3, d_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm p_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_x_0;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          ATerm q_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_3 = NULL;
              t = term_o_9;
              p_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_9, d_3);
              t = h_6(p_3, d_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm t_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_9) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_x_0;
              LocalPopChoice(s_9);
            }
          else
            {
              t = q_9;
              {
                ATerm x_9 = t;
                int y_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_3 = NULL;
                    t = term_o_9;
                    w_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_o_9, d_3);
                    t = h_6(w_3, d_3, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm z_9 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("e_0", 0, ATtrue)))
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
                      ATerm c_4 = NULL;
                      t = term_o_9;
                      c_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_o_9, d_3);
                      t = h_6(c_4, d_3, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm a_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) a_10) != ATmakeSymbol("c_0", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,t_4 = NULL;
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
          t_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 = NULL,y_4 = NULL,z_4 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(q_4);
            s_4 = t;
            t = r_4;
            t = n_121(t);
            y_4 = t;
            t = t_4;
            t = filter_1_0(n_121, t);
            z_4 = t;
            t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
            g_1 = t;
            t = SSLsetAnnotations(g_1, s_4);
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            t = t_4;
            t = filter_1_0(n_121, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,g_10 = NULL,r_10 = NULL,w_10 = NULL,b_11 = NULL;
  r_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_10 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      {
        ATerm o_5 = NULL,v_5 = NULL,w_5 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(r_10);
        o_5 = t;
        t = w_10;
        t = f_102(t);
        v_5 = t;
        t = b_11;
        t = f_102(t);
        w_5 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_5, w_5);
        i_1 = t;
        t = SSLsetAnnotations(i_1, o_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_10 = ATgetArgument(t, 0);
          b_11 = ATgetArgument(t, 1);
          v_9 = ATgetArgument(t, 2);
          {
            ATerm g_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(r_10);
            g_6 = t;
            t = w_10;
            t = h_102(t);
            n_6 = t;
            t = b_11;
            t = h_102(t);
            o_6 = t;
            t = v_9;
            t = f_102(t);
            p_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_6, o_6, p_6);
            j_1 = t;
            t = SSLsetAnnotations(j_1, g_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              w_10 = ATgetArgument(t, 0);
              b_11 = ATgetArgument(t, 1);
              v_9 = ATgetArgument(t, 2);
              g_10 = ATgetArgument(t, 3);
              {
                ATerm t_7 = NULL,p_8 = NULL,q_8 = NULL,x_8 = NULL,y_8 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(r_10);
                t_7 = t;
                t = w_10;
                t = h_102(t);
                p_8 = t;
                t = b_11;
                t = h_102(t);
                q_8 = t;
                t = v_9;
                t = h_102(t);
                x_8 = t;
                t = g_10;
                t = f_102(t);
                y_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_8, q_8, x_8, y_8);
                k_1 = t;
                t = SSLsetAnnotations(k_1, t_7);
              }
            }
          else
            {
              ATerm r_9 = NULL,u_9 = NULL,w_9 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  w_10 = ATgetArgument(t, 0);
                  b_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_10);
              r_9 = t;
              t = w_10;
              t = h_102(t);
              u_9 = t;
              t = b_11;
              t = f_102(t);
              w_9 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, u_9, w_9);
              l_1 = t;
              t = SSLsetAnnotations(l_1, r_9);
            }
        }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm q_11 = NULL;
  ATerm d_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_11 = ATgetArgument(t, 0);
          {
            ATerm h_10 = ATgetArgument(t, 1);
          }
          {
            ATerm j_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_10);
      t = q_11;
    }
  else
    {
      t = d_10;
      if(match_cons(t, sym_SDefT_4))
        {
          q_11 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
          {
            ATerm l_10 = ATgetArgument(t, 2);
          }
          {
            ATerm m_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_11;
    }
  return(t);
}
static ATerm m_6 (ATerm b_24, ATerm a_24, ATerm t)
{
  t = b_24;
  t = map_1_0(w_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  x_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_11;
      t = l_120(t);
    }
  else
    {
      ATerm g_12 = NULL,h_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_11 = ATgetFirst((ATermList) t);
          z_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_11;
      t = n_120(t);
      g_12 = t;
      t = z_11;
      t = foldr_3_0(l_120, m_120, n_120, t);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_12, h_12);
      t = m_120(t);
    }
  return(t);
}
static ATerm r_6 (ATerm q_117 (ATerm), ATerm a_46, ATerm z_45, ATerm t)
{
  static ATerm v_13 (ATerm t)
  {
    ATerm d_13 = NULL,k_13 = NULL,l_13 = NULL;
    d_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_13 = ATgetFirst((ATermList) t);
            l_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_13;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = z_45;
                  return(t);
                }
                t = z_6(q_117, y_0, k_13, l_13, t);
              }
              t = v_13(t);
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
              {
                ATerm e_10 = NULL,i_10 = NULL,g_2 = NULL;
                t = SSLgetAnnotations(d_13);
                e_10 = t;
                t = l_13;
                t = v_13(t);
                i_10 = t;
                t = (ATerm) ATinsert(CheckATermList(i_10), k_13);
                g_2 = t;
                t = SSLsetAnnotations(g_2, e_10);
              }
            }
        }
      }
    return(t);
  }
  t = a_46;
  t = v_13(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      if(((ATgetType(s_10) != AT_LIST) || !(ATisEmpty(s_10))))
        _fail(t);
      {
        ATerm x_10 = ATgetArgument(t, 1);
        if(((ATgetType(x_10) != AT_LIST) || !(ATisEmpty(x_10))))
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
  ATerm j_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if(((ATgetType(a_11) == AT_LIST) && !(ATisEmpty(a_11))))
        {
          j_14 = ATgetFirst((ATermList) a_11);
          o_14 = (ATerm) ATgetNext((ATermList) a_11);
        }
      else
        _fail(t);
      {
        ATerm c_11 = ATgetArgument(t, 1);
        if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
          {
            p_14 = ATgetFirst((ATermList) c_11);
            q_14 = (ATerm) ATgetNext((ATermList) c_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_14, p_14), (ATerm) ATmakeAppl(sym__2, o_14, q_14));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      r_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_14), r_14);
  return(t);
}
static ATerm w_6 (ATerm c_635, ATerm h_635, ATerm r_61, ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  t = SSL_explode_term(h_635);
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_635);
  if(match_cons(t, sym__2))
    {
      if((d_14 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_14, f_14);
  t = genzip_4_0(z_0, b_1, c_1, _id, t);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_14, r_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  static ATerm w_14 (ATerm t)
  {
    ATerm d_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_109(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = d_11;
        t = n_109(t);
        t = w_14(t);
      }
    return(t);
  }
  t = w_14(t);
  return(t);
}
ATerm for_3_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t)
{
  t = p_109(t);
  t = while_not_2_0(q_109, r_109, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_15 = NULL;
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_15);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,m_15 = NULL,n_15 = NULL,k_2 = NULL;
  n_15 = t;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_15);
  i_15 = t;
  t = m_15;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_15, m_15);
  k_2 = t;
  t = SSLsetAnnotations(k_2, i_15);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_16 = ATgetFirst((ATermList) t);
      x_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_17(s_16, v_16, r_16, t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_16), w_16), x_16);
          }
      }
    }
  else
    {
      t = o_17(s_16, v_16, r_16, t);
    }
  return(t);
}
static ATerm o_17 (ATerm o_15, ATerm p_15, ATerm r_15, ATerm t)
{
  ATerm s_15 = NULL,z_15 = NULL,l_2 = NULL,c_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  t = SSLgetAnnotations(r_15);
  s_15 = t;
  t = p_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_16 = ATgetFirst((ATermList) t);
      h_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_16;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_16;
        if((f_16 != t))
          {
            _fail(t);
          }
        t = h_16;
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        t = p_15;
        t = w_6(f_16, g_16, h_16, t);
      }
  }
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_15, z_15);
  l_2 = t;
  t = SSLsetAnnotations(l_2, s_15);
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_1, h_1, q_1, t);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
        g_17 = t;
        if(match_cons(t, sym__2))
          {
            h_17 = ATgetArgument(t, 0);
            i_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_17;
        t = r_6(r_1, h_17, i_17, t);
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
  t = a_7(y_1, t_10, u_10, t);
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
  ATerm e_11 = NULL,f_11 = NULL;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(e_2, e_11, f_11, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      if((h_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm j_18 (ATerm t)
  {
    ATerm p_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_124(t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = p_11;
        {
          ATerm s_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_17 = NULL,r_17 = NULL,n_10 = NULL,o_10 = NULL;
              q_17 = t;
              t = d_124(t);
              r_17 = t;
              t = q_17;
              {
                static ATerm s_1 (ATerm t)
                {
                  ATerm x_17 = NULL;
                  t = j_18(t);
                  x_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_17, r_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_124(s_1, j_18, t_1, t);
              }
              o_10 = t;
              t = SSL_explode_term(o_10);
              if(match_cons(t, sym__2))
                {
                  ATerm u_11 = ATgetArgument(t, 0);
                  n_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_10;
              t = foldr_3_0(v_1, w_1, _id, t);
              LocalPopChoice(t_11);
            }
          else
            {
              t = s_11;
              {
                ATerm y_10 = NULL,z_10 = NULL;
                z_10 = t;
                t = SSL_explode_term(z_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_11 = ATgetArgument(t, 0);
                    y_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_10;
                t = foldr_3_0(z_1, a_2, j_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_18(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,m_24 = NULL;
  e_24 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_24 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
      {
        ATerm o_11 = NULL,b_12 = NULL,c_12 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(e_24);
        o_11 = t;
        t = m_24;
        t = d_102(t);
        b_12 = t;
        t = y_23;
        t = b_102(t);
        c_12 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_12, c_12);
        o_2 = t;
        t = SSLsetAnnotations(o_2, o_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          m_24 = ATgetArgument(t, 0);
          y_23 = ATgetArgument(t, 1);
          c_24 = ATgetArgument(t, 2);
          d_24 = ATgetArgument(t, 3);
          {
            ATerm x_12 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(e_24);
            x_12 = t;
            t = m_24;
            t = d_102(t);
            g_13 = t;
            t = y_23;
            t = d_102(t);
            h_13 = t;
            t = c_24;
            t = d_102(t);
            i_13 = t;
            t = d_24;
            t = b_102(t);
            j_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_13, h_13, i_13, j_13);
            p_2 = t;
            t = SSLsetAnnotations(p_2, x_12);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              m_24 = ATgetArgument(t, 0);
              y_23 = ATgetArgument(t, 1);
              c_24 = ATgetArgument(t, 2);
              d_24 = ATgetArgument(t, 3);
              {
                ATerm b_14 = NULL,m_14 = NULL,n_14 = NULL,u_14 = NULL,v_14 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(e_24);
                b_14 = t;
                t = m_24;
                t = d_102(t);
                m_14 = t;
                t = y_23;
                t = d_102(t);
                n_14 = t;
                t = c_24;
                t = d_102(t);
                u_14 = t;
                t = d_24;
                t = b_102(t);
                v_14 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, m_14, n_14, u_14, v_14);
                q_2 = t;
                t = SSLsetAnnotations(q_2, b_14);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_24 = ATgetArgument(t, 0);
                  {
                    ATerm f_15 = NULL,k_15 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(e_24);
                    f_15 = t;
                    t = m_24;
                    t = b_102(t);
                    k_15 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_15);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, f_15);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      m_24 = ATgetArgument(t, 0);
                      {
                        ATerm w_15 = NULL,e_16 = NULL,s_2 = NULL;
                        t = SSLgetAnnotations(e_24);
                        w_15 = t;
                        t = m_24;
                        t = b_102(t);
                        e_16 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_16);
                        s_2 = t;
                        t = SSLsetAnnotations(s_2, w_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          m_24 = ATgetArgument(t, 0);
                          {
                            ATerm u_16 = NULL,c_17 = NULL,t_2 = NULL;
                            t = SSLgetAnnotations(e_24);
                            u_16 = t;
                            t = m_24;
                            t = b_102(t);
                            c_17 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, c_17);
                            t_2 = t;
                            t = SSLsetAnnotations(t_2, u_16);
                          }
                        }
                      else
                        {
                          ATerm p_17 = NULL,t_17 = NULL,u_2 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              m_24 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(e_24);
                          p_17 = t;
                          t = m_24;
                          t = b_102(t);
                          t_17 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, t_17);
                          u_2 = t;
                          t = SSLsetAnnotations(u_2, p_17);
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
  ATerm g_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_26);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm w_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = w_11;
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_26 = ATgetArgument(t, 0);
                  j_26 = ATgetArgument(t, 1);
                  k_26 = ATgetArgument(t, 2);
                  l_26 = ATgetArgument(t, 3);
                  t = k_26;
                  t = map_1_0(m_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_26 = ATgetArgument(t, 0);
                      j_26 = ATgetArgument(t, 1);
                      k_26 = ATgetArgument(t, 2);
                      l_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_26;
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
  ATerm v_26 = NULL;
  ATerm f_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_26 = ATgetArgument(t, 0);
          {
            ATerm j_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
      t = v_26;
    }
  else
    {
      t = f_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_26;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm p_27 = NULL;
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_27 = ATgetArgument(t, 0);
          {
            ATerm m_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_12);
      t = p_27;
    }
  else
    {
      t = k_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_27;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_28);
  return(t);
}
static ATerm w_2 (ATerm t)
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
              ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_28 = ATgetArgument(t, 0);
                  l_28 = ATgetArgument(t, 1);
                  m_28 = ATgetArgument(t, 2);
                  n_28 = ATgetArgument(t, 3);
                  t = m_28;
                  t = map_1_0(x_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_28 = ATgetArgument(t, 0);
                      l_28 = ATgetArgument(t, 1);
                      m_28 = ATgetArgument(t, 2);
                      n_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_28;
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
  ATerm d_29 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_29 = ATgetArgument(t, 0);
          {
            ATerm t_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_12);
      t = d_29;
    }
  else
    {
      t = r_12;
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
static ATerm y_2 (ATerm t)
{
  ATerm t_29 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_29 = ATgetArgument(t, 0);
          {
            ATerm w_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_12);
      t = t_29;
    }
  else
    {
      t = u_12;
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
static ATerm z_2 (ATerm t)
{
  ATerm d_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_30);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,k_30 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_30 = ATgetArgument(t, 0);
                  g_30 = ATgetArgument(t, 1);
                  h_30 = ATgetArgument(t, 2);
                  k_30 = ATgetArgument(t, 3);
                  t = h_30;
                  t = map_1_0(b_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_30 = ATgetArgument(t, 0);
                      g_30 = ATgetArgument(t, 1);
                      h_30 = ATgetArgument(t, 2);
                      k_30 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_30;
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
  ATerm c_31 = NULL;
  ATerm c_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_31 = ATgetArgument(t, 0);
          {
            ATerm f_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_13);
      t = c_31;
    }
  else
    {
      t = c_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_31;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm n_31 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_31 = ATgetArgument(t, 0);
          {
            ATerm o_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_13);
      t = n_31;
    }
  else
    {
      t = m_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_31;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm d_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_32);
  return(t);
}
static ATerm g_3 (ATerm t)
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
              ATerm f_32 = NULL,g_32 = NULL,j_32 = NULL,k_32 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_32 = ATgetArgument(t, 0);
                  g_32 = ATgetArgument(t, 1);
                  j_32 = ATgetArgument(t, 2);
                  k_32 = ATgetArgument(t, 3);
                  t = j_32;
                  t = map_1_0(h_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_32 = ATgetArgument(t, 0);
                      g_32 = ATgetArgument(t, 1);
                      j_32 = ATgetArgument(t, 2);
                      k_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_32;
                  t = map_1_0(k_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm x_32 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_32 = ATgetArgument(t, 0);
          {
            ATerm w_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = x_32;
    }
  else
    {
      t = t_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_32;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm m_33 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_33 = ATgetArgument(t, 0);
          {
            ATerm z_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_13);
      t = m_33;
    }
  else
    {
      t = x_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_33;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm c_26 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      c_26 = ATgetArgument(t, 0);
      t = c_26;
      t = free_vars_3_0(f_2, j_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          c_26 = ATgetArgument(t, 0);
          t = c_26;
          t = free_vars_3_0(v_2, w_2, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              c_26 = ATgetArgument(t, 0);
              t = c_26;
              t = free_vars_3_0(z_2, a_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  c_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_26;
              t = free_vars_3_0(e_3, g_3, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm h_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_34);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm a_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = a_14;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm k_34 = NULL,l_34 = NULL,o_34 = NULL,p_34 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_34 = ATgetArgument(t, 0);
                  l_34 = ATgetArgument(t, 1);
                  o_34 = ATgetArgument(t, 2);
                  p_34 = ATgetArgument(t, 3);
                  t = o_34;
                  t = map_1_0(n_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_34 = ATgetArgument(t, 0);
                      l_34 = ATgetArgument(t, 1);
                      o_34 = ATgetArgument(t, 2);
                      p_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_34;
                  t = map_1_0(o_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm y_34 = NULL;
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_34 = ATgetArgument(t, 0);
          {
            ATerm t_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_14);
      t = y_34;
    }
  else
    {
      t = k_14;
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
static ATerm o_3 (ATerm t)
{
  ATerm h_35 = NULL;
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_35 = ATgetArgument(t, 0);
          {
            ATerm z_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_14);
      t = h_35;
    }
  else
    {
      t = x_14;
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
  ATerm w_33 = NULL,d_34 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      d_34 = ATgetArgument(t, 0);
      t = d_34;
      if(match_cons(t, sym_Rule_3))
        {
          w_33 = ATgetArgument(t, 0);
          {
            ATerm a_15 = ATgetArgument(t, 1);
          }
          {
            ATerm b_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_33;
      t = free_vars_3_0(l_3, m_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          d_34 = ATgetArgument(t, 0);
          {
            ATerm c_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_34;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm w_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_35);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm g_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_15);
          }
        else
          {
            t = g_15;
            {
              ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_35 = ATgetArgument(t, 0);
                  z_35 = ATgetArgument(t, 1);
                  a_36 = ATgetArgument(t, 2);
                  b_36 = ATgetArgument(t, 3);
                  t = a_36;
                  t = map_1_0(t_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_35 = ATgetArgument(t, 0);
                      z_35 = ATgetArgument(t, 1);
                      a_36 = ATgetArgument(t, 2);
                      b_36 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_36;
                  t = map_1_0(u_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm n_36 = NULL;
  ATerm q_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_36 = ATgetArgument(t, 0);
          {
            ATerm u_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_15);
      t = n_36;
    }
  else
    {
      t = q_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_36;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm c_37 = NULL;
  ATerm v_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_37 = ATgetArgument(t, 0);
          {
            ATerm y_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_15);
      t = c_37;
    }
  else
    {
      t = v_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_37;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm f_37 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      f_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_37);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,n_37 = NULL;
  g_37 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
      t = g_37;
      t = m_6(h_37, i_37, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_37 = ATgetArgument(t, 0);
          i_37 = ATgetArgument(t, 1);
          j_37 = ATgetArgument(t, 2);
          t = i_37;
          t = map_1_0(y_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              h_37 = ATgetArgument(t, 0);
              i_37 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, h_37);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  h_37 = ATgetArgument(t, 0);
                  i_37 = ATgetArgument(t, 1);
                  j_37 = ATgetArgument(t, 2);
                  n_37 = ATgetArgument(t, 3);
                  t = i_37;
                  t = map_1_0(z_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_37 = ATgetArgument(t, 0);
                      i_37 = ATgetArgument(t, 1);
                      j_37 = ATgetArgument(t, 2);
                      n_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_37;
                  t = map_1_0(a_4, t);
                }
            }
        }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm b_38 = NULL;
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_38 = ATgetArgument(t, 0);
          {
            ATerm d_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_16);
      t = b_38;
    }
  else
    {
      t = a_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_38;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm q_38 = NULL;
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_38 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_16);
      t = q_38;
    }
  else
    {
      t = i_16;
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
  ATerm i_39 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_39 = ATgetArgument(t, 0);
          {
            ATerm n_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_16);
      t = i_39;
    }
  else
    {
      t = l_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_39;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm o_16 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_16;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  s_35 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      ATerm q_16 = ATgetArgument(t, 1);
      ATerm t_16 = ATgetArgument(t, 2);
      ATerm y_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t_35 = t;
  t = s_35;
  t = free_vars_3_0(q_3, s_3, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = s_35;
  t = free_vars_3_0(v_3, x_3, sboundin_3_0, t);
  t = filter_1_0(b_4, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = t_35;
  return(t);
}
ATerm partition_1_0 (ATerm v_121 (ATerm), ATerm t)
{
  static ATerm e_41 (ATerm t)
  {
    ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
    b_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_z_16;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_41 = ATgetFirst((ATermList) t);
            d_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,f_19 = NULL,f_3 = NULL;
              t = SSLgetAnnotations(b_41);
              u_18 = t;
              t = c_41;
              t = v_121(t);
              p_18 = t;
              t = (ATerm) ATinsert(CheckATermList(d_41), p_18);
              f_3 = t;
              t = SSLsetAnnotations(f_3, u_18);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_17 = ATgetFirst((ATermList) t);
                  s_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_18;
              t = e_41(t);
              r_18 = t;
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
                        t_18 = ATgetFirst((ATermList) f_17);
                        {
                          ATerm j_17 = (ATerm) ATgetNext((ATermList) f_17);
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
                  ATerm k_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm m_17 = ATgetArgument(t, 1);
                    if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
                      {
                        ATerm n_17 = ATgetFirst((ATermList) m_17);
                        ATerm s_17 = (ATerm) ATgetNext((ATermList) m_17);
                        if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
                          {
                            f_19 = ATgetFirst((ATermList) s_17);
                            {
                              ATerm u_17 = (ATerm) ATgetNext((ATermList) s_17);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_18), p_18), f_19);
              LocalPopChoice(b_17);
            }
          else
            {
              t = a_17;
              {
                ATerm x_19 = NULL,y_19 = NULL,f_20 = NULL,g_20 = NULL,d_21 = NULL,j_3 = NULL;
                t = SSLgetAnnotations(b_41);
                g_20 = t;
                t = (ATerm) ATinsert(CheckATermList(d_41), c_41);
                j_3 = t;
                t = SSLsetAnnotations(j_3, g_20);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm v_17 = ATgetFirst((ATermList) t);
                    y_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_19;
                t = e_41(t);
                x_19 = t;
                t = SSL_explode_term(x_19);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_17 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm y_17 = ATgetArgument(t, 1);
                      if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
                        {
                          f_20 = ATgetFirst((ATermList) y_17);
                          {
                            ATerm z_17 = (ATerm) ATgetNext((ATermList) y_17);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(x_19);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_18 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) a_18) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm b_18 = ATgetArgument(t, 1);
                      if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
                        {
                          ATerm c_18 = ATgetFirst((ATermList) b_18);
                          ATerm d_18 = (ATerm) ATgetNext((ATermList) b_18);
                          if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
                            {
                              d_21 = ATgetFirst((ATermList) d_18);
                              {
                                ATerm e_18 = (ATerm) ATgetNext((ATermList) d_18);
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
                t = (ATerm) ATmakeAppl(sym__2, f_20, (ATerm) ATinsert(CheckATermList(d_21), c_41));
              }
            }
        }
      }
    return(t);
  }
  t = e_41(t);
  return(t);
}
static ATerm y_6 (ATerm x_22, ATerm w_22, ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  t = x_22;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      i_41 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_41;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, h_41, w_22), i_41);
  return(t);
}
static ATerm z_6 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm g_46, ATerm f_46, ATerm t)
{
  t = z_117(t);
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm j_41 = NULL;
      j_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_46, j_41);
      t = y_117(t);
      return(t);
    }
    t = fetch_1_0(e_4, t);
  }
  t = f_46;
  return(t);
}
static ATerm a_7 (ATerm v_117 (ATerm), ATerm c_46, ATerm b_46, ATerm t)
{
  static ATerm i_42 (ATerm t)
  {
    ATerm x_41 = NULL,y_41 = NULL,d_42 = NULL;
    x_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_46;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_41 = ATgetFirst((ATermList) t);
            d_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_41;
              {
                static ATerm f_4 (ATerm t)
                {
                  t = b_46;
                  return(t);
                }
                t = z_6(v_117, f_4, y_41, d_42, t);
              }
              t = i_42(t);
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              {
                ATerm i_21 = NULL,o_21 = NULL,r_3 = NULL;
                t = SSLgetAnnotations(x_41);
                i_21 = t;
                t = d_42;
                t = i_42(t);
                o_21 = t;
                t = (ATerm) ATinsert(CheckATermList(o_21), y_41);
                r_3 = t;
                t = SSLsetAnnotations(r_3, i_21);
              }
            }
        }
      }
    return(t);
  }
  t = c_46;
  t = i_42(t);
  return(t);
}
ATerm genzip_4_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t)
{
  static ATerm z_42 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_107(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm m_42 = NULL,s_42 = NULL,t_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,d_4 = NULL;
          t = n_107(t);
          y_42 = t;
          if(match_cons(t, sym__2))
            {
              s_42 = ATgetArgument(t, 0);
              t_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_42);
          m_42 = t;
          t = s_42;
          t = p_107(t);
          w_42 = t;
          t = t_42;
          t = z_42(t);
          x_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
          d_4 = t;
          t = SSLsetAnnotations(d_4, m_42);
          t = o_107(t);
        }
      }
    return(t);
  }
  t = z_42(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_16;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_43 = ATgetFirst((ATermList) t);
      y_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_43, y_43);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(match_cons(k_18, sym__2))
        {
          e_44 = ATgetArgument(k_18, 0);
          f_44 = ATgetArgument(k_18, 1);
        }
      else
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(match_cons(l_18, sym__2))
          {
            g_44 = ATgetArgument(l_18, 0);
            h_44 = ATgetArgument(l_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_44), e_44), (ATerm) ATinsert(CheckATermList(h_44), f_44));
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm i_44 = NULL,k_44 = NULL;
  if(match_cons(t, sym__2))
    {
      i_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(u_4, i_44, k_44, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm n_44 = NULL;
  if(match_cons(t, sym__2))
    {
      n_44 = ATgetArgument(t, 0);
      if((n_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      p_44 = ATgetArgument(t, 0);
      if((p_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  r_43 = t;
  s_43 = t;
  t = SSL_explode_term(s_43);
  if(match_cons(t, sym__2))
    {
      e_43 = ATgetArgument(t, 0);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_43);
  g_43 = t;
  t = c_43;
  t = genzip_4_0(i_4, k_4, l_4, s_118, t);
  if(match_cons(t, sym__2))
    {
      f_43 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(e_43, f_43);
  q_43 = t;
  t = SSLsetAnnotations(q_43, g_43);
  t = t_118(t);
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_43;
  t = foldr_2_0(m_4, n_4, t);
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_43, k_43);
  t = a_7(w_4, i_43, k_43, t);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, j_43);
  return(t);
}
ATerm collect_split_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  static ATerm x_44 (ATerm t)
  {
    static ATerm x_4 (ATerm t)
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_119(t);
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          {
            ATerm u_44 = NULL;
            u_44 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_44, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(x_44, x_4, t);
    return(t);
  }
  t = x_44(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_45 = NULL,f_45 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      c_45 = ATgetArgument(t, 0);
      f_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(c_45, f_45, t);
  return(t);
}
static ATerm e_7 (ATerm q_22, ATerm r_22, ATerm s_22, ATerm t_22, ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  t = t_22;
  t = collect_split_1_0(a_5, t);
  if(match_cons(t, sym__2))
    {
      y_44 = ATgetArgument(t, 0);
      z_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, q_22, r_22, s_22, y_44)));
  t = conc_0_0(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_o_9;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_o_9;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      j_45 = ATgetArgument(t, 0);
      k_45 = ATgetArgument(t, 1);
      l_45 = ATgetArgument(t, 2);
      {
        ATerm w_45 = NULL;
        t = term_q_18;
        w_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_45, term_q_18);
        t = f_7(b_5, j_45, w_45, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, j_45, k_45, l_45);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          j_45 = ATgetArgument(t, 0);
          k_45 = ATgetArgument(t, 1);
          l_45 = ATgetArgument(t, 2);
          m_45 = ATgetArgument(t, 3);
          {
            ATerm m_46 = NULL;
            t = term_w_18;
            m_46 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_45, term_w_18);
            t = f_7(c_5, j_45, m_46, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, j_45, k_45, l_45, m_45);
          }
        }
      else
        {
          ATerm r_46 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              j_45 = ATgetArgument(t, 0);
              k_45 = ATgetArgument(t, 1);
              l_45 = ATgetArgument(t, 2);
              m_45 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_y_18;
          r_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_45, term_y_18);
          t = f_7(d_5, j_45, r_46, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, j_45, k_45, l_45, m_45);
        }
    }
  return(t);
}
static ATerm f_7 (ATerm t_114 (ATerm), ATerm q_40, ATerm n_40, ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  g_47 = t;
  t = t_114(t);
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_47, q_40, n_40);
  t = s_7(b_47, q_40, n_40, t);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_47 = NULL;
        t = term_b_19;
        k_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_47, term_b_19);
        t = r_7(b_47, k_47, t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_47 = ATgetFirst((ATermList) t);
      d_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_b_19;
  h_47 = t;
  t = (ATerm) ATinsert(CheckATermList(d_47), (ATerm) ATinsert(CheckATermList(c_47), q_40));
  i_47 = t;
  t = SSL_table_put(b_47, h_47, i_47);
  t = g_47;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL;
  q_47 = t;
  t = term_d_19;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_47, term_d_19);
  t = f_7(g_5, q_47, r_47, t);
  t = q_47;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm p_47 = NULL;
  p_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_19), term_e_19);
  t = map_1_0(e_5, t);
  t = p_47;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,g_4 = NULL;
  g_48 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_48);
  d_48 = t;
  t = e_48;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(j_5, t);
  t = concat_0_0(t);
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, f_48);
  g_4 = t;
  t = SSLsetAnnotations(g_4, d_48);
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
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  l_48 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
      j_48 = ATgetArgument(t, 2);
      k_48 = ATgetArgument(t, 3);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_48;
            t = e_7(h_48, i_48, j_48, k_48, t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = (ATerm) ATinsert(ATempty, l_48);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, l_48);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,j_4 = NULL,h_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  a_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_48);
  t_47 = t;
  t = u_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_47 = ATgetFirst((ATermList) t);
      x_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_47);
  v_47 = t;
  t = x_47;
  t = Cons_2_0(h_5, i_5, t);
  y_47 = t;
  t = (ATerm) ATinsert(CheckATermList(y_47), w_47);
  h_4 = t;
  t = SSLsetAnnotations(h_4, v_47);
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_47);
  j_4 = t;
  t = SSLsetAnnotations(j_4, t_47);
  return(t);
}
static ATerm i_7 (ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm a_49 = NULL;
  t = SSL_fputc(r_31, s_31);
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_49);
  return(t);
}
static ATerm j_7 (ATerm m_30, ATerm n_30, ATerm t)
{
  ATerm b_49 = NULL;
  t = SSL_write_term_to_stream_text(m_30, n_30);
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_49);
  return(t);
}
static ATerm l_7 (ATerm k_110 (ATerm), ATerm n_218, ATerm q_30, ATerm t)
{
  ATerm c_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_218, term_j_19);
  t = o_7(t);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_49, q_30);
  t = k_110(t);
  t = fclose_0_0(t);
  t = q_30;
  return(t);
}
static ATerm k_7 (ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm d_49 = NULL;
  t = SSL_write_term_to_stream_baf(i_30, j_30);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_49);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(match_cons(k_19, sym_Stream_1))
        {
          g_22 = ATgetArgument(k_19, 0);
        }
      else
        _fail(t);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(g_22, h_22, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,j_23 = NULL,k_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if(match_cons(l_19, sym_Stream_1))
        {
          j_23 = ATgetArgument(l_19, 0);
        }
      else
        _fail(t);
      k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(j_23, k_23, t);
  e_23 = t;
  t = term_m_19;
  f_23 = t;
  t = e_23;
  if(match_cons(t, sym_Stream_1))
    {
      g_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, e_23);
  t = i_7(f_23, g_23, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_49 = NULL,k_49 = NULL,l_49 = NULL,o_49 = NULL,p_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,w_49 = NULL,p_51 = NULL,t_51 = NULL,p_4 = NULL,o_4 = NULL;
  k_49 = t;
  if(match_cons(t, sym__2))
    {
      t_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_49);
  s_49 = t;
  t = t_49;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_5, t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = term_p_19;
        i_49 = t;
      }
  }
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_49, u_49);
  o_4 = t;
  t = SSLsetAnnotations(o_4, s_49);
  t = k_49;
  if(match_cons(t, sym__2))
    {
      o_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_49);
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_49, (ATerm) ATmakeAppl(sym__2, not_null(i_49), p_49));
  p_4 = t;
  t = SSLsetAnnotations(p_4, l_49);
  r_49 = t;
  if(match_cons(t, sym__2))
    {
      p_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL,b_22 = NULL,c_22 = NULL,e_22 = NULL,f_22 = NULL,v_4 = NULL;
        t = SSLgetAnnotations(r_49);
        y_21 = t;
        t = p_51;
        t = fetch_1_0(l_5, t);
        b_22 = t;
        t = t_51;
        if(match_cons(t, sym__2))
          {
            e_22 = ATgetArgument(t, 0);
            f_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_7(p_5, e_22, f_22, t);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_22, c_22);
        v_4 = t;
        t = SSLsetAnnotations(v_4, y_21);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          ATerm n_22 = NULL,v_22 = NULL,y_22 = NULL,z_22 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(r_49);
          n_22 = t;
          t = t_51;
          if(match_cons(t, sym__2))
            {
              y_22 = ATgetArgument(t, 0);
              z_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_7(q_5, y_22, z_22, t);
          v_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_51, v_22);
          f_5 = t;
          t = SSLsetAnnotations(f_5, n_22);
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
ATerm apply_strategy_1_0 (ATerm j_129 (ATerm), ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
  a_52 = t;
  t = dtime_0_0(t);
  t = a_52;
  t = j_129(t);
  z_51 = t;
  t = dtime_0_0(t);
  w_51 = t;
  t = z_51;
  if(match_cons(t, sym__2))
    {
      x_51 = ATgetArgument(t, 0);
      y_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_51), (ATerm) ATmakeAppl(sym_Runtime_1, w_51)), y_51);
  return(t);
}
static ATerm s_52 (ATerm i_52, ATerm t)
{
  t = SSL_fclose(i_52);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL;
  o_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_52 = ATgetArgument(t, 0);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_52);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = s_52(o_52, t);
          }
      }
    }
  else
    {
      t = s_52(o_52, t);
    }
  return(t);
}
static ATerm m_7 (ATerm o_30, ATerm t)
{
  t = SSL_read_term_from_stream(o_30);
  return(t);
}
static ATerm n_7 (ATerm t_31, ATerm u_31, ATerm t)
{
  ATerm v_52 = NULL;
  t = SSL_fopen(t_31, u_31);
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_52);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_52 = NULL;
  t = SSL_stdin_stream();
  w_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_52);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_52 = NULL;
  t = SSL_stdout_stream();
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_52);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_53 = NULL;
  t = SSL_stderr_stream();
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_53);
  return(t);
}
static ATerm i_54 (ATerm h_53, ATerm t)
{
  ATerm i_53 = NULL;
  t = SSL_explode_term(h_53);
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_19 = ATgetArgument(t, 1);
        if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
          {
            i_53 = ATgetFirst((ATermList) v_19);
            {
              ATerm w_19 = (ATerm) ATgetNext((ATermList) v_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_53;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_53;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_53;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_53;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_54 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,t_53 = NULL,m_5 = NULL;
  t = SSLgetAnnotations(n_53);
  q_53 = t;
  t = l_53;
  if(match_cons(t, sym_Path_1))
    {
      t_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_53, m_53);
  m_5 = t;
  t = SSLsetAnnotations(m_5, q_53);
  if(match_cons(t, sym__2))
    {
      o_53 = ATgetArgument(t, 0);
      p_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(o_53, p_53, t);
  return(t);
}
static ATerm k_54 (ATerm v_53, ATerm w_53, ATerm x_53, ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,d_54 = NULL,n_5 = NULL;
  t = SSLgetAnnotations(x_53);
  a_54 = t;
  t = SSL_is_string(v_53);
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_54, w_53);
  n_5 = t;
  t = SSLsetAnnotations(n_5, a_54);
  if(match_cons(t, sym__2))
    {
      y_53 = ATgetArgument(t, 0);
      z_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(y_53, z_53, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  if(match_cons(t, sym__2))
    {
      g_54 = ATgetArgument(t, 0);
      h_54 = ATgetArgument(t, 1);
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_54(f_54, t);
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm b_20 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_54(g_54, h_54, f_54, t);
                  LocalPopChoice(c_20);
                }
              else
                {
                  t = b_20;
                  t = k_54(g_54, h_54, f_54, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_54(f_54, t);
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
  ATerm e_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_54 = NULL;
      o_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_54, term_i_20);
      t = o_7(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = e_20;
      t = debug_1_0(r_5, t);
      _fail(t);
    }
  m_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(n_54, t);
  l_54 = t;
  t = m_54;
  t = fclose_0_0(t);
  t = l_54;
  return(t);
}
ATerm fetch_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  static ATerm o_55 (ATerm t)
  {
    ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
    l_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_55 = ATgetFirst((ATermList) t);
        n_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_24 = NULL,s_24 = NULL,t_5 = NULL;
          t = SSLgetAnnotations(l_55);
          o_24 = t;
          t = m_55;
          t = s_115(t);
          s_24 = t;
          t = (ATerm) ATinsert(CheckATermList(n_55), s_24);
          t_5 = t;
          t = SSLsetAnnotations(t_5, o_24);
          LocalPopChoice(k_20);
        }
      else
        {
          t = j_20;
          {
            ATerm f_25 = NULL,i_25 = NULL,u_5 = NULL;
            t = SSLgetAnnotations(l_55);
            f_25 = t;
            t = n_55;
            t = o_55(t);
            i_25 = t;
            t = (ATerm) ATinsert(CheckATermList(i_25), m_55);
            u_5 = t;
            t = SSLsetAnnotations(u_5, f_25);
          }
        }
    }
    return(t);
  }
  t = o_55(t);
  return(t);
}
static ATerm h_7 (ATerm f_55, ATerm g_55, ATerm t)
{
  t = SSL_strcat(f_55, g_55);
  return(t);
}
ATerm debug_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
  r_55 = t;
  t = i_110(t);
  s_55 = t;
  t = term_e_9;
  t_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_55), s_55);
  u_55 = t;
  t = SSL_printnl(t_55, u_55);
  t = r_55;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_56 = NULL;
      b_56 = t;
      t = SSL_is_string(b_56);
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_5, t);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            {
              ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
              h_56 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_56 = ATgetArgument(t, 0);
                  t = i_56;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_56 = ATgetArgument(t, 0);
                      t = i_56;
                      {
                        ATerm s_20 = t;
                        int t_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(t_20);
                          }
                        else
                          {
                            t = s_20;
                            t = debug_1_0(x_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_56 = NULL,o_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_56 = ATgetArgument(t, 0);
                          j_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_56;
                      t = eval_config_0_0(t);
                      n_56 = t;
                      t = j_56;
                      t = eval_config_0_0(t);
                      o_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_56, o_56);
                      t = h_7(n_56, o_56, t);
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
  ATerm s_56 = NULL,t_56 = NULL;
  s_56 = t;
  t = term_u_20;
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_20, s_56);
  t = r_7(t_56, s_56, t);
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL,v_56 = NULL;
        t = eval_config_0_0(t);
        u_56 = t;
        t = term_u_20;
        v_56 = t;
        t = SSL_table_put(v_56, s_56, u_56);
        t = u_56;
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm z_56 = NULL;
  z_56 = t;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_57 = NULL;
        t = term_z_20;
        t = get_config_0_0(t);
        b_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_57, term_a_21);
        t = geq_0_0(t);
        t = z_56;
        t = b_112(t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = z_56;
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  if(match_string(t, "-k"))
    {
      t = e_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_57;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,l_57 = NULL;
  f_57 = t;
  t = SSL_string_to_int(f_57);
  g_57 = t;
  t = term_b_21;
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_21, g_57);
  t = u_7(l_57, g_57, t);
  t = f_57;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, z_5, a_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm n_57 = NULL;
  n_57 = t;
  if(match_string(t, "-S"))
    {
      t = n_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_57;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL;
  t = term_z_20;
  o_57 = t;
  t = term_e_21;
  p_57 = t;
  t = term_f_21;
  t = u_7(o_57, p_57, t);
  t = term_g_21;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_h_21;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
  q_57 = t;
  t = SSL_string_to_int(q_57);
  r_57 = t;
  t = term_z_20;
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, r_57);
  t = u_7(s_57, r_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_57);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_j_21;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL;
  t = term_k_21;
  t_57 = t;
  t = term_x_0;
  u_57 = t;
  t = term_l_21;
  t = u_7(t_57, u_57, t);
  t = term_m_21;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_6, c_6, d_6, t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_6, f_6, i_6, t);
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = Option_3_0(j_6, k_6, l_6, t);
          }
      }
    }
  return(t);
}
static ATerm u_7 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm v_57 = NULL;
  t = term_u_20;
  v_57 = t;
  t = SSL_table_put(v_57, u_35, v_35);
  t = (ATerm) ATmakeAppl(sym__3, term_u_20, u_35, v_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
      t = term_x_0;
      t = i_0(t);
      a_58 = t;
      t = term_t_21;
      b_58 = t;
      t = term_u_21;
      c_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_21, term_u_21, a_58);
      t = s_7(b_58, c_58, a_58, t);
      _fail(t);
    }
  else
    {
      ATerm f_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_57 = ATgetFirst((ATermList) t);
          z_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_57;
      t = d_0(t);
      t = term_x_0;
      t = g_0(t);
      f_58 = t;
      t = (ATerm) ATinsert(CheckATermList(z_57), f_58);
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm h_58 = NULL;
  h_58 = t;
  if(match_string(t, "-o"))
    {
      t = h_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_58;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL;
  i_58 = t;
  t = term_v_21;
  j_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, i_58);
  t = u_7(j_58, i_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_58);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, s_6, t_6, t);
  return(t);
}
static ATerm s_7 (ATerm u_41, ATerm v_41, ATerm t_41, ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
  l_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_41, v_41);
  {
    ATerm x_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_22 = ATgetArgument(t, 0);
            ATerm d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_41, v_41);
        t = r_7(u_41, v_41, t);
        LocalPopChoice(z_21);
      }
    else
      {
        t = x_21;
        t = (ATerm) ATempty;
      }
  }
  m_58 = t;
  t = (ATerm) ATinsert(CheckATermList(m_58), t_41);
  n_58 = t;
  t = SSL_table_put(u_41, v_41, n_58);
  t = l_58;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
      t = term_x_0;
      t = t_0(t);
      y_58 = t;
      t = term_t_21;
      z_58 = t;
      t = term_u_21;
      a_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_21, term_u_21, y_58);
      t = s_7(z_58, a_59, y_58, t);
      _fail(t);
    }
  else
    {
      ATerm e_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_58 = ATgetFirst((ATermList) t);
          v_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_58;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_58 = ATgetFirst((ATermList) t);
          x_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_58;
      t = p_0(t);
      t = w_58;
      t = r_0(t);
      e_59 = t;
      t = (ATerm) ATinsert(CheckATermList(x_58), e_59);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm g_59 = NULL;
  g_59 = t;
  if(match_string(t, "-i"))
    {
      t = g_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_59;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  h_59 = t;
  t = term_i_22;
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, h_59);
  t = u_7(i_59, h_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_59);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_6, v_6, b_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  j_59 = t;
  t = term_e_9;
  l_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_22), j_59);
  m_59 = t;
  t = SSL_printnl(l_59, m_59);
  t = term_h_9;
  k_59 = t;
  t = SSL_exit(k_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_22;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_7 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm m_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_38, a_39);
      LocalPopChoice(o_22);
    }
  else
    {
      t = m_22;
      t = SSL_addr(z_38, a_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL;
  o_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_59;
      t = j_120(t);
    }
  else
    {
      ATerm t_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_59 = ATgetFirst((ATermList) t);
          q_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_59;
      t = foldr_2_0(j_120, k_120, t);
      t_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_59, t_59);
      t = k_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(z_25, a_26, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_60 = NULL,v_25 = NULL,w_25 = NULL;
  t = times_0_0(t);
  w_25 = t;
  t = SSL_explode_term(w_25);
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_25;
  t = foldr_2_0(c_7, d_7, t);
  b_60 = t;
  t = SSL_TicksToSeconds(b_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
  n_60 = t;
  if(match_cons(t, sym__2))
    {
      o_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_60;
        if((o_60 != t))
          {
            _fail(t);
          }
        t = n_60;
        LocalPopChoice(a_23);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
        {
          ATerm b_23 = t;
          int c_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_60, p_60);
              LocalPopChoice(c_23);
            }
          else
            {
              t = b_23;
              t = SSL_gtr(o_60, p_60);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm t_60 = NULL;
  t_60 = t;
  {
    ATerm d_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_60 = NULL;
        t = term_z_20;
        t = get_config_0_0(t);
        v_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_60, term_h_9);
        t = geq_0_0(t);
        t = t_60;
        t = a_112(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = d_23;
        t = t_60;
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,a_61 = NULL,b_61 = NULL;
  t = run_time_0_0(t);
  x_60 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  y_60 = t;
  t = term_e_9;
  a_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_23), x_60), term_i_23), y_60);
  b_61 = t;
  t = SSL_printnl(a_61, b_61);
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_23), x_60), term_i_23), y_60));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_21;
  c_61 = t;
  t = SSL_exit(c_61);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm k_61 = NULL,m_61 = NULL;
  m_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_61 = ATgetArgument(t, 0);
          {
            ATerm j_27 = NULL,x_6 = NULL;
            t = SSLgetAnnotations(m_61);
            j_27 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_61);
            x_6 = t;
            t = SSLsetAnnotations(x_6, j_27);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_130 (ATerm), ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_23;
      t = get_config_0_0(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = fetch_1_0(q_7, t);
    }
  t = h_130(t);
  return(t);
}
ATerm map_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  static ATerm g_62 (ATerm t)
  {
    ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL;
    d_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_62;
      }
    else
      {
        ATerm u_27 = NULL,x_27 = NULL,y_27 = NULL,w_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_62 = ATgetFirst((ATermList) t);
            f_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_62);
        u_27 = t;
        t = e_62;
        t = i_115(t);
        x_27 = t;
        t = f_62;
        t = g_62(t);
        y_27 = t;
        t = (ATerm) ATinsert(CheckATermList(y_27), x_27);
        w_7 = t;
        t = SSLsetAnnotations(w_7, u_27);
      }
    return(t);
  }
  t = g_62(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_62 = ATgetFirst((ATermList) t);
      k_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_62 = NULL,p_62 = NULL;
        static ATerm v_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_62)), not_null(p_62));
          return(t);
        }
        t = k_62;
        t = n_0(t);
        if(((o_62 != NULL) && (o_62 != t)))
          _fail(t);
        else
          o_62 = t;
        t = j_62;
        t = k_0(t);
        if(((p_62 != NULL) && (p_62 != t)))
          _fail(t);
        else
          p_62 = t;
        t = k_62;
        t = reverse_acc_2_0(k_0, v_7, t);
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
static ATerm r_7 (ATerm l_43, ATerm m_43, ATerm t)
{
  t = SSL_table_get(l_43, m_43);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,y_7 = NULL;
  v_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_62);
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_62);
  y_7 = t;
  t = SSLsetAnnotations(y_7, t_62);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm x_62 = NULL;
  x_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_62), term_p_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_22;
      t = get_config_0_0(t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      t = fetch_1_0(x_7, t);
    }
  t = term_s_23;
  t = echo_0_0(t);
  t = term_t_21;
  r_62 = t;
  t = term_u_21;
  s_62 = t;
  t = term_t_23;
  t = r_7(r_62, s_62, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(b_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
  z_62 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_23 = ATgetFirst((ATermList) t);
                ATerm x_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_62;
          }
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATinsert(ATempty, z_62);
      }
  }
  a_63 = t;
  t = term_p_19;
  b_63 = t;
  t = SSL_printnl(b_63, a_63);
  t = z_62;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL;
  t = term_z_23;
  f_63 = t;
  t = term_x_0;
  g_63 = t;
  t = term_f_24;
  t = u_7(f_63, g_63, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
  t = term_z_23;
  j_63 = t;
  t = term_x_0;
  k_63 = t;
  t = term_f_24;
  t = u_7(j_63, k_63, t);
  t = term_h_24;
  h_63 = t;
  t = term_x_0;
  i_63 = t;
  t = term_i_24;
  t = u_7(h_63, i_63, t);
  t = term_j_24;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_8, e_8, g_8, t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = l_24;
      t = Option_3_0(i_8, j_8, k_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,a_8 = NULL;
  q_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_63 = ATgetFirst((ATermList) t);
      n_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_63);
  l_63 = t;
  t = m_63;
  t = s_87(t);
  o_63 = t;
  t = n_63;
  t = t_87(t);
  p_63 = t;
  t = (ATerm) ATinsert(CheckATermList(p_63), o_63);
  a_8 = t;
  t = SSLsetAnnotations(a_8, l_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_132 (ATerm), ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,a_64 = NULL,b_64 = NULL,d_8 = NULL;
  v_63 = t;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_24;
        t = k_132(t);
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
      }
  }
  t = v_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_63 = ATgetFirst((ATermList) t);
      y_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_63);
  w_63 = t;
  t = term_l_22;
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_22, x_63);
  t = u_7(b_64, x_63, t);
  t = y_63;
  {
    static ATerm l_64 (ATerm t)
    {
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_64 = NULL;
              e_64 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_64;
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              t = k_132(t);
              t = Cons_2_0(_id, l_64, t);
            }
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          {
            ATerm h_64 = NULL,i_64 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_64 = ATgetFirst((ATermList) t);
                i_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_64), (ATerm) ATmakeAppl(sym_Undefined_1, h_64));
          }
        }
      return(t);
    }
    t = l_64(t);
  }
  a_64 = t;
  t = (ATerm) ATinsert(CheckATermList(a_64), (ATerm) ATmakeAppl(sym_Program_1, x_63));
  d_8 = t;
  t = SSLsetAnnotations(d_8, w_63);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  if(match_string(t, "--help"))
    {
      t = x_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_64;
        }
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  t = term_o_23;
  y_64 = t;
  t = term_x_0;
  z_64 = t;
  t = term_x_24;
  t = u_7(y_64, z_64, t);
  t = term_y_24;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_132 (ATerm), ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  s_64 = t;
  t = term_t_21;
  u_64 = t;
  t = term_u_21;
  v_64 = t;
  t = (ATerm) ATempty;
  w_64 = t;
  t = SSL_table_put(u_64, v_64, w_64);
  t = s_64;
  {
    static ATerm l_8 (ATerm t)
    {
      ATerm a_25 = t;
      int b_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_132(t);
          LocalPopChoice(b_25);
        }
      else
        {
          t = a_25;
          {
            ATerm c_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_8, n_8, o_8, t);
                LocalPopChoice(d_25);
              }
            else
              {
                t = c_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_8, t);
  }
  {
    ATerm e_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_65 = NULL;
        g_65 = t;
        {
          ATerm h_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_28 = NULL;
              t = g_65;
              {
                ATerm k_25 = t;
                int l_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_23;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_25);
                  }
                else
                  {
                    t = k_25;
                    t = fetch_1_0(r_8, t);
                  }
              }
              t = g_65;
              t = default_system_usage_0_0(t);
              t = term_e_21;
              i_28 = t;
              t = SSL_exit(i_28);
              LocalPopChoice(j_25);
            }
          else
            {
              t = h_25;
              {
                ATerm w_28 = NULL;
                t = term_z_23;
                t = get_config_0_0(t);
                t = g_65;
                t = default_system_about_0_0(t);
                t = term_e_21;
                w_28 = t;
                t = SSL_exit(w_28);
              }
            }
        }
        LocalPopChoice(g_25);
      }
    else
      {
        t = e_25;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
              static ATerm s_8 (ATerm t)
              {
                ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,f_8 = NULL;
                m_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_65);
                k_65 = t;
                t = l_65;
                if(((q_64 != NULL) && (q_64 != t)))
                  _fail(t);
                else
                  q_64 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_65);
                f_8 = t;
                t = SSLsetAnnotations(f_8, k_65);
                return(t);
              }
              t = fetch_1_0(s_8, t);
              t = term_e_9;
              i_65 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_64)), term_o_25);
              j_65 = t;
              t = SSL_printnl(i_65, j_65);
              t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_64)), term_o_25));
              t = default_system_usage_0_0(t);
              t = term_h_9;
              h_65 = t;
              t = SSL_exit(h_65);
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
            }
        }
      }
  }
  r_64 = t;
  t = term_t_21;
  t_64 = t;
  t = SSL_table_destroy(t_64);
  t = r_64;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL;
  t = parse_options_1_0(j_130, t);
  r_65 = t;
  t = term_p_25;
  u_65 = t;
  t = SSL_table_create(u_65);
  t = term_p_25;
  s_65 = t;
  t = term_q_25;
  t_65 = t;
  t = SSL_table_put(s_65, t_65, r_65);
  t = r_65;
  t = l_130(t);
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_130, t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = if_verbose2_1_0(b_9, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL;
  t = term_x_25;
  v_65 = t;
  t = term_x_0;
  w_65 = t;
  t = term_y_25;
  t = u_7(v_65, w_65, t);
  t = term_b_26;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
  x_65 = t;
  t = term_l_22;
  t = get_config_0_0(t);
  y_65 = t;
  t = term_e_9;
  z_65 = t;
  t = (ATerm) ATinsert(ATempty, y_65);
  a_66 = t;
  t = SSL_printnl(z_65, a_66);
  t = x_65;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t)
{
  static ATerm t_8 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_129(t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm h_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(m_26);
            }
          else
            {
              t = h_26;
              {
                ATerm n_26 = t;
                int o_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(o_26);
                  }
                else
                  {
                    t = n_26;
                    {
                      ATerm p_26 = t;
                      int q_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(w_8, z_8, a_9, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_26);
                              }
                            else
                              {
                                t = r_26;
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
    ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
    c_66 = t;
    {
      ATerm t_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm c_9 (ATerm t)
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
          t = fetch_1_0(c_9, t);
          LocalPopChoice(u_26);
        }
      else
        {
          t = t_26;
          t = term_w_26;
          b_66 = t;
        }
    }
    t = not_null(b_66);
    t = ReadFromFile_0_0(t);
    d_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_66, d_66);
    t = apply_strategy_1_0(s_129, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(t_8, u_129, u_8, v_8, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,h_8 = NULL;
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
  h_8 = t;
  t = SSLsetAnnotations(h_8, e_66);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_9, _fail, default_usage_0_0, t);
  return(t);
}

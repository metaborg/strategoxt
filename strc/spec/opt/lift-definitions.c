#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
ATerm term_m_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
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
void init_constant_terms (void)
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
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_w_19);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_a_1);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_a_1);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_a_1);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_a_1);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm k_2 (ATerm a_2, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_6 (ATerm y_36, ATerm z_36, ATerm);
ATerm TopLevel_0_0 (ATerm);
ATerm filter_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm f_6 (ATerm z_21, ATerm y_21, ATerm);
ATerm foldr_3_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm);
ATerm l_6 (ATerm a_102 (ATerm), ATerm g_30, ATerm f_30, ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm q_6 (ATerm x_603, ATerm c_604, ATerm z_57, ATerm);
ATerm while_not_2_0 (ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm b_18 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm);
ATerm k_1 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm free_vars_3_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tboundin_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm SuperCombinator_0_0 (ATerm);
ATerm partition_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm s_6 (ATerm v_20, ATerm u_20, ATerm);
ATerm t_6 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm m_30, ATerm l_30, ATerm);
ATerm u_6 (ATerm f_102 (ATerm), ATerm i_30, ATerm h_30, ATerm);
ATerm genzip_4_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm CollectSplit_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm y_6 (ATerm o_20, ATerm p_20, ATerm q_20, ATerm r_20, ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm DeclareTopLevel_0_0 (ATerm);
ATerm z_6 (ATerm f_106 (ATerm), ATerm f_36, ATerm d_36, ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm declare_standard_strategies_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm c_7 (ATerm h_47, ATerm i_47, ATerm);
ATerm d_7 (ATerm v_50, ATerm w_50, ATerm);
ATerm f_7 (ATerm r_115 (ATerm), ATerm z_476, ATerm z_50, ATerm);
ATerm e_7 (ATerm r_50, ATerm s_50, ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_118 (ATerm), ATerm);
ATerm d_44 (ATerm v_43, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_7 (ATerm x_50, ATerm);
ATerm h_7 (ATerm j_47, ATerm k_47, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_46 (ATerm q_44, ATerm);
ATerm e_46 (ATerm u_44, ATerm v_44, ATerm w_44, ATerm);
ATerm f_46 (ATerm i_45, ATerm j_45, ATerm k_45, ATerm);
ATerm i_7 (ATerm);
ATerm z_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_100 (ATerm), ATerm);
ATerm b_7 (ATerm x_44, ATerm y_44, ATerm);
ATerm debug_1_0 (ATerm p_115 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_117 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_7 (ATerm y_51, ATerm z_51, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_7 (ATerm n_36, ATerm o_36, ATerm m_36, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm c_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm j_7 (ATerm o_34, ATerm p_34, ATerm);
ATerm foldr_2_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm i_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_117 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm need_help_1_0 (ATerm r_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm l_7 (ATerm e_38, ATerm f_38, ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm k_7 (ATerm);
ATerm p_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_121 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm parse_options_1_0 (ATerm t_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm iowrap_3_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
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
      ATerm r_0 (ATerm t)
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
ATerm at_end_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm v_1 (ATerm t)
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
        t = i_100(t);
      }
    return(t);
  }
  t = v_1(t);
  return(t);
}
ATerm k_2 (ATerm a_2, ATerm t)
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
            ATerm v_0 (ATerm t)
            {
              t = e_2;
              return(t);
            }
            t = d_2;
            t = at_end_1_0(v_0, t);
            ;
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
ATerm a_6 (ATerm y_36, ATerm z_36, ATerm t)
{
  ATerm l_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
  t = l_7(y_36, z_36, t);
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
        ;
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
              ;
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
                    ;
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
ATerm filter_1_0 (ATerm j_106 (ATerm), ATerm t)
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
            t = j_106(t);
            u_4 = t;
            t = y_4;
            t = filter_1_0(j_106, t);
            v_4 = t;
            t = (ATerm) ATinsert(CheckATermList(v_4), u_4);
            h_1 = t;
            t = SSLsetAnnotations(h_1, l_4);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = i_9;
            t = y_4;
            t = filter_1_0(j_106, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
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
        t = w_92(t);
        l_5 = t;
        t = a_11;
        t = w_92(t);
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
            t = y_92(t);
            e_6 = t;
            t = a_11;
            t = y_92(t);
            g_6 = t;
            t = t_10;
            t = w_92(t);
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
                t = y_92(t);
                h_8 = t;
                t = a_11;
                t = y_92(t);
                i_8 = t;
                t = t_10;
                t = y_92(t);
                p_8 = t;
                t = u_10;
                t = w_92(t);
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
              t = y_92(t);
              m_9 = t;
              t = a_11;
              t = w_92(t);
              o_9 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, m_9, o_9);
              n_1 = t;
              t = SSLsetAnnotations(n_1, j_9);
            }
        }
    }
  return(t);
}
ATerm w_0 (ATerm t)
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
ATerm f_6 (ATerm z_21, ATerm y_21, ATerm t)
{
  t = z_21;
  t = map_1_0(w_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_11;
      t = v_104(t);
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
      t = x_104(t);
      j_12 = t;
      t = a_12;
      t = foldr_3_0(v_104, w_104, x_104, t);
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_12, o_12);
      t = w_104(t);
    }
  return(t);
}
ATerm l_6 (ATerm a_102 (ATerm), ATerm g_30, ATerm f_30, ATerm t)
{
  ATerm f_14 (ATerm t)
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
                ATerm x_0 (ATerm t)
                {
                  t = f_30;
                  return(t);
                }
                t = t_6(a_102, x_0, r_13, t_13, t);
                t = f_14(t);
              }
              ;
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
  t = g_30;
  t = f_14(t);
  return(t);
}
ATerm z_0 (ATerm t)
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
ATerm b_1 (ATerm t)
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
ATerm c_1 (ATerm t)
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
ATerm q_6 (ATerm x_603, ATerm c_604, ATerm z_57, ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  t = SSL_explode_term(c_604);
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_603);
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
  t = (ATerm) ATmakeAppl(sym__2, m_14, z_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  ATerm e_15 (ATerm t)
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_111(t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = k_111(t);
        t = e_15(t);
      }
    return(t);
  }
  t = e_15(t);
  return(t);
}
ATerm for_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t)
{
  t = m_111(t);
  t = while_not_2_0(n_111, o_111, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_15);
  return(t);
}
ATerm g_1 (ATerm t)
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
ATerm i_1 (ATerm t)
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
            ;
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
ATerm b_18 (ATerm a_16, ATerm b_16, ATerm c_16, ATerm t)
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
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = b_16;
        t = q_6(t_16, u_16, w_16, t);
      }
    j_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, j_16);
    h_2 = t;
    t = SSLsetAnnotations(h_2, d_16);
  }
  return(t);
}
ATerm k_1 (ATerm t)
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
      ;
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
ATerm p_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_1 (ATerm t)
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
ATerm w_1 (ATerm t)
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
ATerm x_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_1 (ATerm t)
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
ATerm c_2 (ATerm t)
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
ATerm free_vars_3_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_19 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_108(t);
        ;
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
              t = z_108(t);
              g_18 = t;
              t = f_18;
              {
                ATerm o_1 (ATerm t)
                {
                  ATerm i_18 = NULL;
                  t = c_19(t);
                  i_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_18, g_18);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_109(o_1, c_19, p_1, t);
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
              }
              ;
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
ATerm tboundin_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  a_23 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_23 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
      {
        ATerm v_11 = NULL,b_12 = NULL,c_12 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(a_23);
        v_11 = t;
        t = b_23;
        t = u_92(t);
        b_12 = t;
        t = x_22;
        t = s_92(t);
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
          b_23 = ATgetArgument(t, 0);
          x_22 = ATgetArgument(t, 1);
          y_22 = ATgetArgument(t, 2);
          z_22 = ATgetArgument(t, 3);
          {
            ATerm q_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(a_23);
            q_12 = t;
            t = b_23;
            t = u_92(t);
            x_12 = t;
            t = x_22;
            t = u_92(t);
            y_12 = t;
            t = y_22;
            t = u_92(t);
            z_12 = t;
            t = z_22;
            t = s_92(t);
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
              b_23 = ATgetArgument(t, 0);
              x_22 = ATgetArgument(t, 1);
              y_22 = ATgetArgument(t, 2);
              z_22 = ATgetArgument(t, 3);
              {
                ATerm x_13 = NULL,e_14 = NULL,g_14 = NULL,i_14 = NULL,r_14 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(a_23);
                x_13 = t;
                t = b_23;
                t = u_92(t);
                e_14 = t;
                t = x_22;
                t = u_92(t);
                g_14 = t;
                t = y_22;
                t = u_92(t);
                i_14 = t;
                t = z_22;
                t = s_92(t);
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
                  b_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_23);
              f_15 = t;
              t = b_23;
              t = s_92(t);
              h_15 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_15);
              r_2 = t;
              t = SSLsetAnnotations(r_2, f_15);
            }
        }
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm l_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_23);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_23 = ATgetArgument(t, 0);
            t = n_23;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_23 = ATgetArgument(t, 0);
                o_23 = ATgetArgument(t, 1);
                p_23 = ATgetArgument(t, 2);
                q_23 = ATgetArgument(t, 3);
                t = p_23;
                t = map_1_0(m_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_23 = ATgetArgument(t, 0);
                    o_23 = ATgetArgument(t, 1);
                    p_23 = ATgetArgument(t, 2);
                    q_23 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_23;
                t = map_1_0(n_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm g_24 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_24 = ATgetArgument(t, 0);
          {
            ATerm g_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_11);
      t = g_24;
    }
  else
    {
      t = e_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_24;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm u_24 = NULL;
  ATerm h_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_24 = ATgetArgument(t, 0);
          {
            ATerm n_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_11);
      t = u_24;
    }
  else
    {
      t = h_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_24;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(i_2, j_2, tboundin_3_0, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm w_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_25);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm y_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_25 = ATgetArgument(t, 0);
            t = y_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_25 = ATgetArgument(t, 0);
                b_26 = ATgetArgument(t, 1);
                c_26 = ATgetArgument(t, 2);
                d_26 = ATgetArgument(t, 3);
                t = c_26;
                t = map_1_0(u_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_25 = ATgetArgument(t, 0);
                    b_26 = ATgetArgument(t, 1);
                    c_26 = ATgetArgument(t, 2);
                    d_26 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_26;
                t = map_1_0(v_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm p_26 = NULL;
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_26 = ATgetArgument(t, 0);
          {
            ATerm s_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_11);
      t = p_26;
    }
  else
    {
      t = q_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_26;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm a_27 = NULL;
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_27 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_11);
      t = a_27;
    }
  else
    {
      t = t_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_27;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_25 = ATgetArgument(t, 0);
      t = t_25;
      if(match_cons(t, sym_Rule_3))
        {
          l_25 = ATgetArgument(t, 0);
          {
            ATerm x_11 = ATgetArgument(t, 1);
          }
          {
            ATerm d_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_25;
      t = free_vars_3_0(s_2, t_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_25 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_25;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm t_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_27);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_27 = ATgetArgument(t, 0);
            t = v_27;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_27 = ATgetArgument(t, 0);
                w_27 = ATgetArgument(t, 1);
                x_27 = ATgetArgument(t, 2);
                y_27 = ATgetArgument(t, 3);
                t = x_27;
                t = map_1_0(y_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_27 = ATgetArgument(t, 0);
                    w_27 = ATgetArgument(t, 1);
                    x_27 = ATgetArgument(t, 2);
                    y_27 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_27;
                t = map_1_0(z_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm r_28 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_28 = ATgetArgument(t, 0);
          {
            ATerm k_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
      t = r_28;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_28;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm f_29 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_29 = ATgetArgument(t, 0);
          {
            ATerm n_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_12);
      t = f_29;
    }
  else
    {
      t = l_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_29;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm n_29 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      n_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_29);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,t_29 = NULL,u_29 = NULL;
  o_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
      t = o_29;
      t = f_6(p_29, q_29, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_29 = ATgetArgument(t, 0);
          q_29 = ATgetArgument(t, 1);
          t_29 = ATgetArgument(t, 2);
          t = q_29;
          t = map_1_0(e_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              p_29 = ATgetArgument(t, 0);
              q_29 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, p_29);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  p_29 = ATgetArgument(t, 0);
                  q_29 = ATgetArgument(t, 1);
                  t_29 = ATgetArgument(t, 2);
                  u_29 = ATgetArgument(t, 3);
                  t = q_29;
                  t = map_1_0(g_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_29 = ATgetArgument(t, 0);
                      q_29 = ATgetArgument(t, 1);
                      t_29 = ATgetArgument(t, 2);
                      u_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_29;
                  t = map_1_0(i_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm r_30 = NULL;
  ATerm p_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_30 = ATgetArgument(t, 0);
          {
            ATerm s_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_12);
      t = r_30;
    }
  else
    {
      t = p_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_30;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm p_31 = NULL;
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_31 = ATgetArgument(t, 0);
          {
            ATerm v_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_12);
      t = p_31;
    }
  else
    {
      t = t_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_31;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm e_32 = NULL;
  ATerm w_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_32 = ATgetArgument(t, 0);
          {
            ATerm c_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_13);
      t = e_32;
    }
  else
    {
      t = w_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_32;
    }
  return(t);
}
ATerm j_3 (ATerm t)
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
  ATerm n_27 = NULL,o_27 = NULL;
  n_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      ATerm f_13 = ATgetArgument(t, 1);
      ATerm g_13 = ATgetArgument(t, 2);
      ATerm h_13 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  o_27 = t;
  t = n_27;
  t = free_vars_3_0(w_2, x_2, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = n_27;
  t = free_vars_3_0(c_3, d_3, sboundin_3_0, t);
  t = filter_1_0(j_3, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = o_27;
  return(t);
}
ATerm partition_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm q_33 (ATerm t)
  {
    ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
    n_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_i_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_33 = ATgetFirst((ATermList) t);
            p_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_15 = NULL,v_15 = NULL,e_16 = NULL,f_16 = NULL,h_16 = NULL,v_16 = NULL,b_3 = NULL;
              t = SSLgetAnnotations(n_33);
              h_16 = t;
              t = o_33;
              t = r_106(t);
              s_15 = t;
              t = (ATerm) ATinsert(CheckATermList(p_33), s_15);
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
              t = q_33(t);
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
              ;
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              {
                ATerm n_17 = NULL,o_17 = NULL,t_17 = NULL,u_17 = NULL,m_18 = NULL,f_3 = NULL;
                t = SSLgetAnnotations(n_33);
                u_17 = t;
                t = (ATerm) ATinsert(CheckATermList(p_33), o_33);
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
                t = q_33(t);
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
                t = (ATerm) ATmakeAppl(sym__2, t_17, (ATerm) ATinsert(CheckATermList(m_18), o_33));
              }
            }
        }
      }
    return(t);
  }
  t = q_33(t);
  return(t);
}
ATerm s_6 (ATerm v_20, ATerm u_20, ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t = v_20;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      u_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_33;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, t_33, u_20), u_33);
  return(t);
}
ATerm t_6 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  t = j_102(t);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm v_33 = NULL;
      v_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_30, v_33);
      t = i_102(t);
      return(t);
    }
    t = fetch_1_0(k_3, t);
    t = l_30;
  }
  return(t);
}
ATerm u_6 (ATerm f_102 (ATerm), ATerm i_30, ATerm h_30, ATerm t)
{
  ATerm l_34 (ATerm t)
  {
    ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
    g_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_34 = ATgetFirst((ATermList) t);
            i_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_34;
              {
                ATerm m_3 (ATerm t)
                {
                  t = h_30;
                  return(t);
                }
                t = t_6(f_102, m_3, h_34, i_34, t);
                t = l_34(t);
              }
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = t_14;
              {
                ATerm v_18 = NULL,y_18 = NULL,l_3 = NULL;
                t = SSLgetAnnotations(g_34);
                v_18 = t;
                t = i_34;
                t = l_34(t);
                y_18 = t;
                t = (ATerm) ATinsert(CheckATermList(y_18), h_34);
                l_3 = t;
                t = SSLsetAnnotations(l_3, v_18);
              }
            }
        }
      }
    return(t);
  }
  t = i_30;
  t = l_34(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm b_35 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm n_34 = NULL,q_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,v_3 = NULL;
          t = e_98(t);
          w_34 = t;
          if(match_cons(t, sym__2))
            {
              q_34 = ATgetArgument(t, 0);
              t_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_34);
          n_34 = t;
          t = q_34;
          t = g_98(t);
          u_34 = t;
          t = t_34;
          t = b_35(t);
          v_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_34, v_34);
          v_3 = t;
          t = SSLsetAnnotations(v_3, n_34);
          t = f_98(t);
        }
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_13;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm w_35 = NULL,z_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_35 = ATgetFirst((ATermList) t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_35, z_35);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm a_36 = NULL,c_36 = NULL,i_36 = NULL,j_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(match_cons(a_15, sym__2))
        {
          a_36 = ATgetArgument(a_15, 0);
          c_36 = ATgetArgument(a_15, 1);
        }
      else
        _fail(t);
      {
        ATerm b_15 = ATgetArgument(t, 1);
        if(match_cons(b_15, sym__2))
          {
            i_36 = ATgetArgument(b_15, 0);
            j_36 = ATgetArgument(b_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_36), a_36), (ATerm) ATinsert(CheckATermList(j_36), c_36));
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm k_36 = NULL,p_36 = NULL;
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(t_3, k_36, p_36, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm r_36 = NULL;
  if(match_cons(t, sym__2))
    {
      r_36 = ATgetArgument(t, 0);
      if((r_36 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm u_36 = NULL;
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      if((u_36 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,t_35 = NULL;
  p_35 = t;
  t_35 = t;
  t = SSL_explode_term(t_35);
  if(match_cons(t, sym__2))
    {
      e_35 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_35);
  g_35 = t;
  t = c_35;
  t = genzip_4_0(n_3, o_3, q_3, c_103, t);
  if(match_cons(t, sym__2))
    {
      f_35 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(e_35, f_35);
  o_35 = t;
  t = SSLsetAnnotations(o_35, g_35);
  t = d_103(t);
  if(match_cons(t, sym__2))
    {
      h_35 = ATgetArgument(t, 0);
      i_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_35;
  t = foldr_2_0(r_3, s_3, t);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_35, n_35);
  t = u_6(u_3, i_35, n_35, t);
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, m_35);
  return(t);
}
ATerm collect_split_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm a_37 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_103(t);
          ;
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          {
            ATerm v_36 = NULL;
            v_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_36, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(a_37, w_3, t);
    return(t);
  }
  t = a_37(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(e_37, f_37, t);
  return(t);
}
ATerm y_6 (ATerm o_20, ATerm p_20, ATerm q_20, ATerm r_20, ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  t = r_20;
  t = collect_split_1_0(c_4, t);
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_37, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, o_20, p_20, q_20, b_37)));
  t = conc_0_0(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm DeclareTopLevel_0_0 (ATerm t)
{
  ATerm i_37 = NULL,o_37 = NULL,p_37 = NULL,s_37 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      i_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
      p_37 = ATgetArgument(t, 2);
      {
        ATerm x_37 = NULL;
        t = term_i_15;
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_37, term_i_15);
        t = z_6(d_4, i_37, x_37, t);
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, i_37, o_37, p_37);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          i_37 = ATgetArgument(t, 0);
          o_37 = ATgetArgument(t, 1);
          p_37 = ATgetArgument(t, 2);
          s_37 = ATgetArgument(t, 3);
          {
            ATerm c_38 = NULL;
            t = term_k_15;
            c_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_37, term_k_15);
            t = z_6(e_4, i_37, c_38, t);
            t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, i_37, o_37, p_37, s_37);
          }
        }
      else
        {
          ATerm j_38 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              i_37 = ATgetArgument(t, 0);
              o_37 = ATgetArgument(t, 1);
              p_37 = ATgetArgument(t, 2);
              s_37 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = term_m_15;
          j_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_37, term_m_15);
          t = z_6(f_4, i_37, j_38, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_37, o_37, p_37, s_37);
        }
    }
  return(t);
}
ATerm z_6 (ATerm f_106 (ATerm), ATerm f_36, ATerm d_36, ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,r_38 = NULL,s_38 = NULL;
  p_38 = t;
  t = f_106(t);
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_38, f_36, d_36);
  t = m_7(m_38, f_36, d_36, t);
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_38 = NULL;
        t = term_p_15;
        u_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_38, term_p_15);
        t = l_7(m_38, u_38, t);
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_38 = ATgetFirst((ATermList) t);
        o_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_15;
    r_38 = t;
    t = (ATerm) ATinsert(CheckATermList(o_38), (ATerm) ATinsert(CheckATermList(n_38), f_36));
    s_38 = t;
    t = SSL_table_put(m_38, r_38, s_38);
    t = p_38;
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  x_38 = t;
  t = term_r_15;
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, term_r_15);
  t = z_6(h_4, x_38, y_38, t);
  t = x_38;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_16), term_u_15);
  t = map_1_0(g_4, t);
  t = v_38;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,z_3 = NULL;
  n_39 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_39);
  k_39 = t;
  t = l_39;
  t = map_1_0(DeclareTopLevel_0_0, t);
  t = map_1_0(p_4, t);
  t = concat_0_0(t);
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_39);
  z_3 = t;
  t = SSLsetAnnotations(z_3, k_39);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  s_39 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
      q_39 = ATgetArgument(t, 2);
      r_39 = ATgetArgument(t, 3);
      {
        ATerm i_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_39;
            t = y_6(o_39, p_39, q_39, r_39, t);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = i_16;
            t = (ATerm) ATinsert(ATempty, s_39);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, s_39);
    }
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm a_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,b_4 = NULL,a_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  j_39 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_39);
  a_39 = t;
  t = d_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_39 = ATgetFirst((ATermList) t);
      g_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_39);
  e_39 = t;
  t = g_39;
  t = Cons_2_0(n_4, o_4, t);
  h_39 = t;
  t = (ATerm) ATinsert(CheckATermList(h_39), f_39);
  a_4 = t;
  t = SSLsetAnnotations(a_4, e_39);
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_39);
  b_4 = t;
  t = SSLsetAnnotations(b_4, a_39);
  return(t);
}
ATerm c_7 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm z_39 = NULL;
  t = SSL_fputc(h_47, i_47);
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_39);
  return(t);
}
ATerm d_7 (ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_write_term_to_stream_text(v_50, w_50);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_40);
  return(t);
}
ATerm f_7 (ATerm r_115 (ATerm), ATerm z_476, ATerm z_50, ATerm t)
{
  ATerm b_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_476, term_l_16);
  t = i_7(t);
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, z_50);
  t = r_115(t);
  t = fclose_0_0(t);
  t = z_50;
  return(t);
}
ATerm e_7 (ATerm r_50, ATerm s_50, ATerm t)
{
  ATerm c_40 = NULL;
  t = SSL_write_term_to_stream_baf(r_50, s_50);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_40);
  return(t);
}
ATerm s_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm s_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_16 = ATgetArgument(t, 0);
      if(match_cons(m_16, sym_Stream_1))
        {
          s_19 = ATgetArgument(m_16, 0);
        }
      else
        _fail(t);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(s_19, u_19, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,n_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym_Stream_1))
        {
          l_20 = ATgetArgument(n_16, 0);
        }
      else
        _fail(t);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(l_20, n_20, t);
  i_20 = t;
  t = term_o_16;
  j_20 = t;
  t = i_20;
  if(match_cons(t, sym_Stream_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, i_20);
  t = c_7(j_20, k_20, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,r_40 = NULL,y_40 = NULL,z_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,x_42 = NULL,y_42 = NULL,j_4 = NULL,i_4 = NULL;
  m_40 = t;
  if(match_cons(t, sym__2))
    {
      c_41 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_40);
  z_40 = t;
  t = c_41;
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_40 != NULL) && (l_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_4, t);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        t = term_r_16;
        l_40 = t;
      }
    e_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_41, d_41);
    i_4 = t;
    t = SSLsetAnnotations(i_4, z_40);
    t = m_40;
    if(match_cons(t, sym__2))
      {
        o_40 = ATgetArgument(t, 0);
        r_40 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_40);
    n_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_40, (ATerm) ATmakeAppl(sym__2, not_null(l_40), r_40));
    j_4 = t;
    t = SSLsetAnnotations(j_4, n_40);
    y_40 = t;
    if(match_cons(t, sym__2))
      {
        x_42 = ATgetArgument(t, 0);
        y_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_19 = NULL,l_19 = NULL,m_19 = NULL,p_19 = NULL,q_19 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(y_40);
          i_19 = t;
          t = x_42;
          t = fetch_1_0(s_4, t);
          l_19 = t;
          t = y_42;
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
          ;
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          {
            ATerm a_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,m_4 = NULL;
            t = SSLgetAnnotations(y_40);
            a_20 = t;
            t = y_42;
            if(match_cons(t, sym__2))
              {
                f_20 = ATgetArgument(t, 0);
                g_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_7(x_4, f_20, g_20, t);
            e_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_42, e_20);
            m_4 = t;
            t = SSLsetAnnotations(m_4, a_20);
          }
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
ATerm apply_strategy_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  h_43 = t;
  t = dtime_0_0(t);
  t = h_43;
  t = t_118(t);
  g_43 = t;
  t = dtime_0_0(t);
  b_43 = t;
  t = g_43;
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_43), (ATerm) ATmakeAppl(sym_Runtime_1, b_43)), f_43);
  return(t);
}
ATerm d_44 (ATerm v_43, ATerm t)
{
  t = SSL_fclose(v_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_43 = NULL,b_44 = NULL;
  b_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_43 = ATgetArgument(t, 0);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_43);
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = d_44(b_44, t);
          }
      }
    }
  else
    {
      t = d_44(b_44, t);
    }
  return(t);
}
ATerm g_7 (ATerm x_50, ATerm t)
{
  t = SSL_read_term_from_stream(x_50);
  return(t);
}
ATerm h_7 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm g_44 = NULL;
  t = SSL_fopen(j_47, k_47);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_44);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_44 = NULL;
  t = SSL_stdin_stream();
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_44);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_44 = NULL;
  t = SSL_stdout_stream();
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_44);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_44 = NULL;
  t = SSL_stderr_stream();
  k_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_44);
  return(t);
}
ATerm d_46 (ATerm q_44, ATerm t)
{
  ATerm r_44 = NULL;
  t = SSL_explode_term(q_44);
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_17 = ATgetArgument(t, 1);
        if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
          {
            r_44 = ATgetFirst((ATermList) c_17);
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
  t = r_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_46 (ATerm u_44, ATerm v_44, ATerm w_44, ATerm t)
{
  ATerm a_45 = NULL,c_45 = NULL,d_45 = NULL,g_45 = NULL,a_5 = NULL;
  t = SSLgetAnnotations(w_44);
  d_45 = t;
  t = u_44;
  if(match_cons(t, sym_Path_1))
    {
      g_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_45, v_44);
  a_5 = t;
  t = SSLsetAnnotations(a_5, d_45);
  if(match_cons(t, sym__2))
    {
      a_45 = ATgetArgument(t, 0);
      c_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(a_45, c_45, t);
  return(t);
}
ATerm f_46 (ATerm i_45, ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm l_45 = NULL,n_45 = NULL,o_45 = NULL,x_45 = NULL,j_5 = NULL;
  t = SSLgetAnnotations(k_45);
  o_45 = t;
  t = SSL_is_string(i_45);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_45, j_45);
  j_5 = t;
  t = SSLsetAnnotations(j_5, o_45);
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(l_45, n_45, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,c_46 = NULL;
  z_45 = t;
  if(match_cons(t, sym__2))
    {
      a_46 = ATgetArgument(t, 0);
      c_46 = ATgetArgument(t, 1);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_46(z_45, t);
            ;
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
                  t = e_46(a_46, c_46, z_45, t);
                  ;
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = g_17;
                  t = f_46(a_46, c_46, z_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_46(z_45, t);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,l_46 = NULL;
  ATerm q_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_46 = NULL;
      m_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_46, term_w_17);
      t = i_7(t);
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = q_17;
      t = debug_1_0(z_4, t);
      _fail(t);
    }
  i_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(l_46, t);
  h_46 = t;
  t = i_46;
  t = fclose_0_0(t);
  t = h_46;
  return(t);
}
ATerm fetch_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  ATerm c_48 (ATerm t)
  {
    ATerm s_47 = NULL,w_47 = NULL,z_47 = NULL;
    s_47 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_47 = ATgetFirst((ATermList) t);
        z_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_17 = t;
      int z_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_21 = NULL,u_21 = NULL,p_5 = NULL;
          t = SSLgetAnnotations(s_47);
          n_21 = t;
          t = w_47;
          t = c_100(t);
          u_21 = t;
          t = (ATerm) ATinsert(CheckATermList(z_47), u_21);
          p_5 = t;
          t = SSLsetAnnotations(p_5, n_21);
          ;
          LocalPopChoice(z_17);
        }
      else
        {
          t = y_17;
          {
            ATerm t_23 = NULL,a_24 = NULL,b_6 = NULL;
            t = SSLgetAnnotations(s_47);
            t_23 = t;
            t = z_47;
            t = c_48(t);
            a_24 = t;
            t = (ATerm) ATinsert(CheckATermList(a_24), w_47);
            b_6 = t;
            t = SSLsetAnnotations(b_6, t_23);
          }
        }
    }
    return(t);
  }
  t = c_48(t);
  return(t);
}
ATerm b_7 (ATerm x_44, ATerm y_44, ATerm t)
{
  t = SSL_strcat(x_44, y_44);
  return(t);
}
ATerm debug_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,l_48 = NULL,m_48 = NULL;
  h_48 = t;
  t = p_115(t);
  i_48 = t;
  t = term_n_8;
  l_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_48), i_48);
  m_48 = t;
  t = SSL_printnl(l_48, m_48);
  t = h_48;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
    }
  return(t);
}
ATerm c_5 (ATerm t)
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
      ATerm z_48 = NULL;
      z_48 = t;
      t = SSL_is_string(z_48);
      ;
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
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
              f_49 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_49 = ATgetArgument(t, 0);
                  t = g_49;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_49 = ATgetArgument(t, 0);
                      t = g_49;
                      {
                        ATerm n_18 = t;
                        int o_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
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
                      ATerm l_49 = NULL,m_49 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_49 = ATgetArgument(t, 0);
                          h_49 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_49;
                      t = eval_config_0_0(t);
                      l_49 = t;
                      t = h_49;
                      t = eval_config_0_0(t);
                      m_49 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
                      t = b_7(l_49, m_49, t);
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
  ATerm u_49 = NULL,x_49 = NULL;
  u_49 = t;
  t = term_p_18;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, u_49);
  t = l_7(x_49, u_49, t);
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_49 = NULL,z_49 = NULL;
        t = eval_config_0_0(t);
        y_49 = t;
        t = term_p_18;
        z_49 = t;
        t = SSL_table_put(z_49, u_49, y_49);
        t = y_49;
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm g_50 = NULL;
  g_50 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_50 = NULL;
        t = term_u_18;
        t = get_config_0_0(t);
        i_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_50, term_w_18);
        t = geq_0_0(t);
        t = g_50;
        t = c_117(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = g_50;
      }
  }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm l_50 = NULL;
  l_50 = t;
  if(match_string(t, "-k"))
    {
      t = l_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_50;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL;
  m_50 = t;
  t = SSL_string_to_int(m_50);
  n_50 = t;
  t = term_x_18;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_18, n_50);
  t = o_7(o_50, n_50, t);
  t = m_50;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, f_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  if(match_string(t, "-S"))
    {
      t = q_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_50;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  t = term_u_18;
  t_50 = t;
  t = term_a_19;
  u_50 = t;
  t = term_b_19;
  t = o_7(t_50, u_50, t);
  t = term_d_19;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  t = SSL_string_to_int(a_51);
  b_51 = t;
  t = term_u_18;
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, b_51);
  t = o_7(c_51, b_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_51);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL;
  t = term_g_19;
  d_51 = t;
  t = term_a_1;
  e_51 = t;
  t = term_h_19;
  t = o_7(d_51, e_51, t);
  t = term_j_19;
  return(t);
}
ATerm t_5 (ATerm t)
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
      ;
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
            ;
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
ATerm o_7 (ATerm y_51, ATerm z_51, ATerm t)
{
  ATerm f_51 = NULL;
  t = term_p_18;
  f_51 = t;
  t = SSL_table_put(f_51, y_51, z_51);
  t = (ATerm) ATmakeAppl(sym__3, term_p_18, y_51, z_51);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
      t = term_a_1;
      t = e_0(t);
      k_51 = t;
      t = term_v_19;
      l_51 = t;
      t = term_w_19;
      m_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, k_51);
      t = m_7(l_51, m_51, k_51, t);
      _fail(t);
    }
  else
    {
      ATerm p_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_51 = ATgetFirst((ATermList) t);
          j_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_51;
      t = c_0(t);
      t = term_a_1;
      t = d_0(t);
      p_51 = t;
      t = (ATerm) ATinsert(CheckATermList(j_51), p_51);
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm r_51 = NULL;
  r_51 = t;
  if(match_string(t, "-o"))
    {
      t = r_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_51;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  s_51 = t;
  t = term_x_19;
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_19, s_51);
  t = o_7(t_51, s_51, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_51);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
ATerm m_7 (ATerm n_36, ATerm o_36, ATerm m_36, ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_36, o_36);
  {
    ATerm z_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_20 = ATgetArgument(t, 0);
            ATerm d_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_36, o_36);
        t = l_7(n_36, o_36, t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = z_19;
        t = (ATerm) ATempty;
      }
    w_51 = t;
    t = (ATerm) ATinsert(CheckATermList(w_51), m_36);
    x_51 = t;
    t = SSL_table_put(n_36, o_36, x_51);
    t = v_51;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
      t = term_a_1;
      t = n_0(t);
      p_52 = t;
      t = term_v_19;
      q_52 = t;
      t = term_w_19;
      r_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, p_52);
      t = m_7(q_52, r_52, p_52, t);
      _fail(t);
    }
  else
    {
      ATerm v_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_52 = ATgetFirst((ATermList) t);
          m_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_52 = ATgetFirst((ATermList) t);
          o_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_52;
      t = k_0(t);
      t = n_52;
      t = l_0(t);
      v_52 = t;
      t = (ATerm) ATinsert(CheckATermList(o_52), v_52);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm x_52 = NULL;
  x_52 = t;
  if(match_string(t, "-i"))
    {
      t = x_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_52;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  t = term_h_20;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, y_52);
  t = o_7(z_52, y_52, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_52);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, z_5, c_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_1;
  t = whoami_0_0(t);
  a_53 = t;
  t = term_n_8;
  c_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_20), a_53);
  d_53 = t;
  t = SSL_printnl(c_53, d_53);
  t = term_s_8;
  b_53 = t;
  t = SSL_exit(b_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm j_7 (ATerm o_34, ATerm p_34, ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_34, p_34);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      t = SSL_addr(o_34, p_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  f_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_53;
      t = t_104(t);
    }
  else
    {
      ATerm k_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_53 = ATgetFirst((ATermList) t);
          h_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_53;
      t = foldr_2_0(t_104, u_104, t);
      k_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_53, k_53);
      t = u_104(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm i_6 (ATerm t)
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
  ATerm n_53 = NULL,b_25 = NULL,c_25 = NULL;
  t = times_0_0(t);
  c_25 = t;
  t = SSL_explode_term(c_25);
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_25;
  t = foldr_2_0(d_6, i_6, t);
  n_53 = t;
  t = SSL_TicksToSeconds(n_53);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  if(match_cons(t, sym__2))
    {
      d_54 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_54;
        if((d_54 != t))
          {
            _fail(t);
          }
        t = c_54;
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_54, e_54);
              ;
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              t = SSL_gtr(d_54, e_54);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_117 (ATerm), ATerm t)
{
  ATerm i_54 = NULL;
  i_54 = t;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_54 = NULL;
        t = term_u_18;
        t = get_config_0_0(t);
        k_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_54, term_s_8);
        t = geq_0_0(t);
        t = i_54;
        t = b_117(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = i_54;
      }
  }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,p_54 = NULL,q_54 = NULL;
  t = run_time_0_0(t);
  m_54 = t;
  t = term_a_1;
  t = whoami_0_0(t);
  n_54 = t;
  t = term_n_8;
  p_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_21), m_54), term_f_21), n_54);
  q_54 = t;
  t = SSL_printnl(p_54, q_54);
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_21), m_54), term_f_21), n_54));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_19;
  r_54 = t;
  t = SSL_exit(r_54);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  a_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_54 = ATgetArgument(t, 0);
          {
            ATerm g_26 = NULL,n_7 = NULL;
            t = SSLgetAnnotations(a_55);
            g_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_54);
            n_7 = t;
            t = SSLsetAnnotations(n_7, g_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_119 (ATerm), ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      t = fetch_1_0(k_6, t);
    }
  t = r_119(t);
  return(t);
}
ATerm map_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  ATerm q_55 (ATerm t)
  {
    ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
    n_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_55;
      }
    else
      {
        ATerm h_27 = NULL,k_27 = NULL,l_27 = NULL,q_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_55 = ATgetFirst((ATermList) t);
            p_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_55);
        h_27 = t;
        t = o_55;
        t = s_99(t);
        k_27 = t;
        t = p_55;
        t = q_55(t);
        l_27 = t;
        t = (ATerm) ATinsert(CheckATermList(l_27), k_27);
        q_7 = t;
        t = SSLsetAnnotations(q_7, h_27);
      }
    return(t);
  }
  t = q_55(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_55 = ATgetFirst((ATermList) t);
      u_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_55 = NULL,z_55 = NULL;
        ATerm m_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_55)), not_null(z_55));
          return(t);
        }
        t = u_55;
        t = i_0(t);
        if(((y_55 != NULL) && (y_55 != t)))
          _fail(t);
        else
          y_55 = t;
        t = t_55;
        t = g_0(t);
        if(((z_55 != NULL) && (z_55 != t)))
          _fail(t);
        else
          z_55 = t;
        t = u_55;
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
ATerm l_7 (ATerm e_38, ATerm f_38, ATerm t)
{
  t = SSL_table_get(e_38, f_38);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm d_56 = NULL,j_56 = NULL,k_56 = NULL,s_7 = NULL;
  k_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_56);
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_56);
  s_7 = t;
  t = SSLsetAnnotations(s_7, d_56);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm m_56 = NULL;
  m_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_56), term_k_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL;
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      t = fetch_1_0(n_6, t);
    }
  t = term_o_21;
  t = echo_0_0(t);
  t = term_v_19;
  b_56 = t;
  t = term_w_19;
  c_56 = t;
  t = term_p_21;
  t = l_7(b_56, c_56, t);
  t = reverse_acc_2_0(_id, o_6, t);
  t = map_1_0(p_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  o_56 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_21 = ATgetFirst((ATermList) t);
                ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_56;
          }
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATinsert(ATempty, o_56);
      }
    p_56 = t;
    t = term_r_16;
    q_56 = t;
    t = SSL_printnl(q_56, p_56);
    t = o_56;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  t = term_v_21;
  v_56 = t;
  t = term_a_1;
  w_56 = t;
  t = term_w_21;
  t = o_7(v_56, w_56, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  t = term_v_21;
  z_56 = t;
  t = term_a_1;
  a_57 = t;
  t = term_w_21;
  t = o_7(z_56, a_57, t);
  t = term_a_22;
  x_56 = t;
  t = term_a_1;
  y_56 = t;
  t = term_b_22;
  t = o_7(x_56, y_56, t);
  t = term_c_22;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_6, v_6, w_6, t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = Option_3_0(x_6, k_7, p_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,u_7 = NULL;
  g_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_57 = ATgetFirst((ATermList) t);
      d_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  b_57 = t;
  t = c_57;
  t = h_77(t);
  e_57 = t;
  t = d_57;
  t = i_77(t);
  f_57 = t;
  t = (ATerm) ATinsert(CheckATermList(f_57), e_57);
  u_7 = t;
  t = SSLsetAnnotations(u_7, b_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_121 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,q_57 = NULL,r_57 = NULL,x_7 = NULL;
  l_57 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_22;
        t = u_121(t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
      }
    t = l_57;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_57 = ATgetFirst((ATermList) t);
        o_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_57);
    m_57 = t;
    t = term_t_20;
    r_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_20, n_57);
    t = o_7(r_57, n_57, t);
    t = o_57;
    {
      ATerm g_58 (ATerm t)
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_57 = NULL;
                v_57 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_57;
                ;
                LocalPopChoice(m_22);
              }
            else
              {
                t = l_22;
                t = u_121(t);
                t = Cons_2_0(_id, g_58, t);
              }
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            {
              ATerm c_58 = NULL,d_58 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_58 = ATgetFirst((ATermList) t);
                  d_58 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_58), (ATerm) ATmakeAppl(sym_Undefined_1, c_58));
            }
          }
        return(t);
      }
      t = g_58(t);
      q_57 = t;
      t = (ATerm) ATinsert(CheckATermList(q_57), (ATerm) ATmakeAppl(sym_Program_1, n_57));
      x_7 = t;
      t = SSLsetAnnotations(x_7, m_57);
    }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm s_58 = NULL;
  s_58 = t;
  if(match_string(t, "--help"))
    {
      t = s_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_58;
        }
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  t = term_j_21;
  t_58 = t;
  t = term_a_1;
  u_58 = t;
  t = term_n_22;
  t = o_7(t_58, u_58, t);
  t = term_o_22;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm y_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_121 (ATerm), ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL;
  n_58 = t;
  t = term_v_19;
  p_58 = t;
  t = term_w_19;
  q_58 = t;
  t = (ATerm) ATempty;
  r_58 = t;
  t = SSL_table_put(p_58, q_58, r_58);
  t = n_58;
  {
    ATerm r_7 (ATerm t)
    {
      ATerm q_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_121(t);
          ;
          LocalPopChoice(r_22);
        }
      else
        {
          t = q_22;
          {
            ATerm s_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_7, v_7, w_7, t);
                ;
                LocalPopChoice(t_22);
              }
            else
              {
                t = s_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_7, t);
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_59 = NULL;
          b_59 = t;
          {
            ATerm w_22 = t;
            int c_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_28 = NULL;
                t = b_59;
                {
                  ATerm d_23 = t;
                  int e_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_21;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_23);
                    }
                  else
                    {
                      t = d_23;
                      t = fetch_1_0(y_7, t);
                    }
                  t = b_59;
                  t = default_system_usage_0_0(t);
                  t = term_a_19;
                  a_28 = t;
                  t = SSL_exit(a_28);
                }
                ;
                LocalPopChoice(c_23);
              }
            else
              {
                t = w_22;
                {
                  ATerm i_28 = NULL;
                  t = term_v_21;
                  t = get_config_0_0(t);
                  t = b_59;
                  t = default_system_about_0_0(t);
                  t = term_a_19;
                  i_28 = t;
                  t = SSL_exit(i_28);
                }
              }
          }
          ;
          LocalPopChoice(v_22);
        }
      else
        {
          t = u_22;
          {
            ATerm f_23 = t;
            int g_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
                ATerm a_8 (ATerm t)
                {
                  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,z_7 = NULL;
                  h_59 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_59);
                  f_59 = t;
                  t = g_59;
                  if(((l_58 != NULL) && (l_58 != t)))
                    _fail(t);
                  else
                    l_58 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_59);
                  z_7 = t;
                  t = SSLsetAnnotations(z_7, f_59);
                  return(t);
                }
                t = fetch_1_0(a_8, t);
                t = term_n_8;
                d_59 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_58)), term_h_23);
                e_59 = t;
                t = SSL_printnl(d_59, e_59);
                t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_58)), term_h_23));
                t = default_system_usage_0_0(t);
                t = term_s_8;
                c_59 = t;
                t = SSL_exit(c_59);
                ;
                LocalPopChoice(g_23);
              }
            else
              {
                t = f_23;
              }
          }
        }
      m_58 = t;
      t = term_v_19;
      o_58 = t;
      t = SSL_table_destroy(o_58);
      t = m_58;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  t = parse_options_1_0(t_119, t);
  m_59 = t;
  t = term_i_23;
  p_59 = t;
  t = SSL_table_create(p_59);
  t = term_i_23;
  n_59 = t;
  t = term_j_23;
  o_59 = t;
  t = SSL_table_put(n_59, o_59, m_59);
  t = m_59;
  t = v_119(t);
  {
    ATerm k_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_119, t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = k_23;
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_119(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = if_verbose2_1_0(k_8, t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL;
  t = term_u_23;
  q_59 = t;
  t = term_a_1;
  r_59 = t;
  t = term_v_23;
  t = o_7(q_59, r_59, t);
  t = term_w_23;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  s_59 = t;
  t = term_t_20;
  t = get_config_0_0(t);
  t_59 = t;
  t = term_n_8;
  u_59 = t;
  t = (ATerm) ATinsert(ATempty, t_59);
  v_59 = t;
  t = SSL_printnl(u_59, v_59);
  t = s_59;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_119(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          ATerm b_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
              {
                ATerm d_24 = t;
                int e_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(e_24);
                  }
                else
                  {
                    t = d_24;
                    {
                      ATerm f_24 = t;
                      int h_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_8, g_8, j_8, t);
                          ;
                          LocalPopChoice(h_24);
                        }
                      else
                        {
                          t = f_24;
                          {
                            ATerm i_24 = t;
                            int j_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_24);
                              }
                            else
                              {
                                t = i_24;
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
  ATerm e_8 (ATerm t)
  {
    ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
    x_59 = t;
    {
      ATerm k_24 = t;
      int l_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_59 != NULL) && (w_59 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_8, t);
          ;
          LocalPopChoice(l_24);
        }
      else
        {
          t = k_24;
          t = term_m_24;
          w_59 = t;
        }
      t = not_null(w_59);
      t = ReadFromFile_0_0(t);
      y_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_59, y_59);
      t = apply_strategy_1_0(c_119, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_8, e_119, d_8, e_8, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,b_8 = NULL;
  d_60 = t;
  if(match_cons(t, sym__2))
    {
      a_60 = ATgetArgument(t, 0);
      b_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_60);
  z_59 = t;
  t = b_60;
  t = lift_definitions_0_0(t);
  c_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_60, c_60);
  b_8 = t;
  t = SSLsetAnnotations(b_8, z_59);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_8, _fail, default_usage_0_0, t);
  return(t);
}

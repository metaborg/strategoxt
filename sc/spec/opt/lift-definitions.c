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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_u_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_m_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_e_18;
ATerm term_v_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_g_13;
ATerm term_a_9;
ATerm term_s_8;
ATerm term_p_8;
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
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_v_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_a_1);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_r_19);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_a_1);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_a_1);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_a_1);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_z_22, term_a_1);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_121 (ATerm), ATerm);
ATerm m_2 (ATerm z_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_5 (ATerm c_56, ATerm d_56, ATerm);
ATerm TopLevel_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_127 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm y_5 (ATerm z_41, ATerm y_41, ATerm);
ATerm foldr_3_0 (ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm);
ATerm e_6 (ATerm q_123 (ATerm), ATerm g_50, ATerm f_50, ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm i_6 (ATerm d_638, ATerm i_638, ATerm a_77, ATerm);
ATerm while_not_2_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm y_132 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm r_17 (ATerm q_15, ATerm r_15, ATerm s_15, ATerm);
ATerm g_1 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm b_2 (ATerm);
ATerm free_vars_3_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm p_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tboundin_3_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm SuperCombinator_0_0 (ATerm);
ATerm partition_1_0 (ATerm g_128 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_6 (ATerm v_40, ATerm u_40, ATerm);
ATerm l_6 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm m_50, ATerm l_50, ATerm);
ATerm m_6 (ATerm v_123 (ATerm), ATerm i_50, ATerm h_50, ATerm);
ATerm genzip_4_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm CollectSplit_2_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm f_125 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm p_6 (ATerm o_40, ATerm p_40, ATerm q_40, ATerm r_40, ATerm);
ATerm r_6 (ATerm u_127 (ATerm), ATerm j_55, ATerm h_55, ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm declare_standard_strategies_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm u_6 (ATerm i_66, ATerm j_66, ATerm);
ATerm v_6 (ATerm w_69, ATerm x_69, ATerm);
ATerm x_6 (ATerm b_137 (ATerm), ATerm f_511, ATerm a_70, ATerm);
ATerm w_6 (ATerm s_69, ATerm t_69, ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_140 (ATerm), ATerm);
ATerm y_40 (ATerm g_40, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_6 (ATerm y_69, ATerm);
ATerm z_6 (ATerm k_66, ATerm l_66, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_42 (ATerm j_41, ATerm);
ATerm r_42 (ATerm p_41, ATerm q_41, ATerm r_41, ATerm);
ATerm s_42 (ATerm d_42, ATerm e_42, ATerm f_42, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_121 (ATerm), ATerm);
ATerm t_6 (ATerm y_63, ATerm z_63, ATerm);
ATerm debug_1_0 (ATerm z_136 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_138 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_7 (ATerm z_70, ATerm a_71, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_7 (ATerm r_55, ATerm s_55, ATerm q_55, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_7 (ATerm v_53, ATerm w_53, ATerm);
ATerm foldr_2_0 (ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_138 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm need_help_1_0 (ATerm b_141 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_121 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_7 (ATerm i_57, ATerm j_57, ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm n_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_143 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm parse_options_1_0 (ATerm d_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_141 (ATerm), ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm iowrap_3_0 (ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL,l_0 = NULL,n_0 = NULL,o_0 = NULL;
  h_0 = t;
  t = term_a_1;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_n_8;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), j_0), term_o_8);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_s_8;
  l_0 = t;
  t = SSL_exit(l_0);
  t = h_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,v_0 = NULL;
  q_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_0;
    }
  else
    {
      ATerm p_0 (ATerm t)
      {
        t = not_null(v_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_0 != NULL) && (r_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_0 = ATgetFirst((ATermList) t);
          if(((v_0 != NULL) && (v_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_0);
      t = at_end_1_0(p_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_121 (ATerm), ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL;
    t_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_1 = ATgetFirst((ATermList) t);
        s_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_0 = NULL,b_1 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(t_1);
          u_0 = t;
          t = s_1;
          t = u_1(t);
          b_1 = t;
          t = (ATerm) ATinsert(CheckATermList(b_1), r_1);
          d_1 = t;
          t = SSLsetAnnotations(d_1, u_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_1;
        t = y_121(t);
      }
    return(t);
  }
  t = u_1(t);
  return(t);
}
ATerm m_2 (ATerm z_1, ATerm t)
{
  ATerm a_2 = NULL;
  t = SSL_explode_term(z_1);
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,h_2 = NULL;
  if(((h_2 != NULL) && (h_2 != t)))
    _fail(t);
  else
    h_2 = t;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = not_null(f_2);
              return(t);
            }
            t = not_null(e_2);
            t = at_end_1_0(s_0, t);
            ;
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            t = m_2(not_null(h_2), t);
          }
      }
    }
  else
    {
      t = m_2(not_null(h_2), t);
    }
  return(t);
}
ATerm t_5 (ATerm c_56, ATerm d_56, ATerm t)
{
  ATerm n_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_56, d_56);
  t = c_7(c_56, d_56, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_2 = ATgetFirst((ATermList) t);
      {
        ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_2;
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL;
        t = term_a_9;
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, q_3);
        t = t_5(k_2, q_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm b_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("e_0", 0, ATtrue)))
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
          ATerm v_2 = NULL;
          t = term_a_9;
          v_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_9, q_3);
          t = t_5(v_2, q_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm c_9 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_9) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_a_1;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_4;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_4 = ATgetFirst((ATermList) t);
          k_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 = NULL,f_3 = NULL,g_3 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(i_4);
            a_3 = t;
            t = j_4;
            t = y_127(t);
            f_3 = t;
            t = k_4;
            t = filter_1_0(y_127, t);
            g_3 = t;
            t = (ATerm) ATinsert(CheckATermList(g_3), f_3);
            h_1 = t;
            t = SSLsetAnnotations(h_1, a_3);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = d_9;
            t = k_4;
            t = filter_1_0(y_127, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
      {
        ATerm r_3 = NULL,w_3 = NULL,y_3 = NULL,j_1 = NULL;
        t = SSLgetAnnotations(l_10);
        r_3 = t;
        t = m_10;
        t = m_114(t);
        w_3 = t;
        t = n_10;
        t = m_114(t);
        y_3 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, w_3, y_3);
        j_1 = t;
        t = SSLsetAnnotations(j_1, r_3);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_10 = ATgetArgument(t, 0);
          n_10 = ATgetArgument(t, 1);
          j_10 = ATgetArgument(t, 2);
          {
            ATerm u_4 = NULL,y_4 = NULL,a_5 = NULL,d_5 = NULL,l_1 = NULL;
            t = SSLgetAnnotations(l_10);
            u_4 = t;
            t = m_10;
            t = o_114(t);
            y_4 = t;
            t = n_10;
            t = o_114(t);
            a_5 = t;
            t = j_10;
            t = m_114(t);
            d_5 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_4, a_5, d_5);
            l_1 = t;
            t = SSLsetAnnotations(l_1, u_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_10 = ATgetArgument(t, 0);
              n_10 = ATgetArgument(t, 1);
              j_10 = ATgetArgument(t, 2);
              k_10 = ATgetArgument(t, 3);
              {
                ATerm r_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(l_10);
                r_5 = t;
                t = m_10;
                t = o_114(t);
                z_5 = t;
                t = n_10;
                t = o_114(t);
                a_6 = t;
                t = j_10;
                t = o_114(t);
                b_6 = t;
                t = k_10;
                t = m_114(t);
                c_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_5, a_6, b_6, c_6);
                m_1 = t;
                t = SSLsetAnnotations(m_1, r_5);
              }
            }
          else
            {
              ATerm m_7 = NULL,x_7 = NULL,z_7 = NULL,n_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  m_10 = ATgetArgument(t, 0);
                  n_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_10);
              m_7 = t;
              t = m_10;
              t = o_114(t);
              x_7 = t;
              t = n_10;
              t = m_114(t);
              z_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, x_7, z_7);
              n_1 = t;
              t = SSLsetAnnotations(n_1, m_7);
            }
        }
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm y_10 = NULL;
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_10 = ATgetArgument(t, 0);
          {
            ATerm j_9 = ATgetArgument(t, 1);
          }
          {
            ATerm n_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_9);
      t = y_10;
    }
  else
    {
      t = h_9;
      if(match_cons(t, sym_SDefT_4))
        {
          y_10 = ATgetArgument(t, 0);
          {
            ATerm q_9 = ATgetArgument(t, 1);
          }
          {
            ATerm r_9 = ATgetArgument(t, 2);
          }
          {
            ATerm s_9 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_10;
    }
  return(t);
}
ATerm y_5 (ATerm z_41, ATerm y_41, ATerm t)
{
  t = z_41;
  t = map_1_0(t_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,n_11 = NULL,q_11 = NULL;
  j_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_11;
      t = l_126(t);
    }
  else
    {
      ATerm z_11 = NULL,a_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_11 = ATgetFirst((ATermList) t);
          q_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_11;
      t = n_126(t);
      z_11 = t;
      t = q_11;
      t = foldr_3_0(l_126, m_126, n_126, t);
      a_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_11, a_12);
      t = m_126(t);
    }
  return(t);
}
ATerm e_6 (ATerm q_123 (ATerm), ATerm g_50, ATerm f_50, ATerm t)
{
  ATerm s_13 (ATerm t)
  {
    ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
    d_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_13 = ATgetFirst((ATermList) t);
            f_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_13;
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(f_50);
                  return(t);
                }
                t = l_6(q_123, w_0, not_null(e_13), not_null(f_13), t);
                t = s_13(t);
              }
              ;
              LocalPopChoice(x_9);
            }
          else
            {
              t = t_9;
              {
                ATerm q_8 = NULL,z_8 = NULL,w_1 = NULL;
                t = SSLgetAnnotations(d_13);
                q_8 = t;
                t = f_13;
                t = s_13(t);
                z_8 = t;
                t = (ATerm) ATinsert(CheckATermList(z_8), e_13);
                w_1 = t;
                t = SSLsetAnnotations(w_1, q_8);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(g_50);
  t = s_13(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
        _fail(t);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(((ATgetType(z_9) != AT_LIST) || !(ATisEmpty(z_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
        {
          e_14 = ATgetFirst((ATermList) b_10);
          f_14 = (ATerm) ATgetNext((ATermList) b_10);
        }
      else
        _fail(t);
      {
        ATerm c_10 = ATgetArgument(t, 1);
        if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
          {
            g_14 = ATgetFirst((ATermList) c_10);
            h_14 = (ATerm) ATgetNext((ATermList) c_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_14, g_14), (ATerm) ATmakeAppl(sym__2, f_14, h_14));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm i_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_14), i_14);
  return(t);
}
ATerm i_6 (ATerm d_638, ATerm i_638, ATerm a_77, ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  t = SSL_explode_term(i_638);
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_638);
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
  t = (ATerm) ATmakeAppl(sym__2, a_14, b_14);
  t = genzip_4_0(x_0, y_0, z_0, _id, t);
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_14, a_77);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm t)
{
  ATerm p_14 (ATerm t)
  {
    ATerm d_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_132(t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = d_10;
        t = u_132(t);
        t = p_14(t);
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm for_3_0 (ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm y_132 (ATerm), ATerm t)
{
  t = w_132(t);
  t = while_not_2_0(x_132, y_132, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_15);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm h_15 = NULL,l_15 = NULL,o_15 = NULL,p_15 = NULL,y_1 = NULL;
  p_15 = t;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_15);
  h_15 = t;
  t = o_15;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_15, o_15);
  y_1 = t;
  t = SSLsetAnnotations(y_1, h_15);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm t_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  t_16 = t;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_17 = ATgetFirst((ATermList) t);
      b_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_17(y_16, z_16, t_16, t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_16), a_17), b_17);
          }
      }
    }
  else
    {
      t = r_17(y_16, z_16, t_16, t);
    }
  return(t);
}
ATerm r_17 (ATerm q_15, ATerm r_15, ATerm s_15, ATerm t)
{
  ATerm t_15 = NULL,y_15 = NULL,o_2 = NULL,c_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  t = SSLgetAnnotations(s_15);
  t_15 = t;
  t = r_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_16 = ATgetFirst((ATermList) t);
      l_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_16;
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_16;
        if((j_16 != t))
          {
            _fail(t);
          }
        t = l_16;
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        t = r_15;
        t = i_6(j_16, k_16, l_16, t);
      }
    y_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_15, y_15);
    o_2 = t;
    t = SSLsetAnnotations(o_2, t_15);
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      if((q_17 != ATgetArgument(t, 1)))
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
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_1, e_1, f_1, t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
        f_17 = t;
        if(match_cons(t, sym__2))
          {
            g_17 = ATgetArgument(t, 0);
            h_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_17;
        t = e_6(g_1, g_17, h_17, t);
      }
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(q_1, k_9, l_9, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      if((m_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(b_2, u_9, v_9, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      w_9 = ATgetArgument(t, 0);
      if((w_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm p_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_18 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_130(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        {
          ATerm u_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_17 = NULL,u_17 = NULL,e_9 = NULL,g_9 = NULL;
              if(((t_17 != NULL) && (t_17 != t)))
                _fail(t);
              else
                t_17 = t;
              t = o_130(t);
              if(((u_17 != NULL) && (u_17 != t)))
                _fail(t);
              else
                u_17 = t;
              t = not_null(t_17);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm w_17 = NULL;
                  t = s_18(t);
                  w_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_17, not_null(u_17));
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_130(i_1, s_18, k_1, t);
                if(((g_9 != NULL) && (g_9 != t)))
                  _fail(t);
                else
                  g_9 = t;
                t = SSL_explode_term(not_null(g_9));
                if(match_cons(t, sym__2))
                  {
                    ATerm w_10 = ATgetArgument(t, 0);
                    if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      e_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(e_9);
                t = foldr_3_0(o_1, p_1, _id, t);
              }
              ;
              LocalPopChoice(v_10);
            }
          else
            {
              t = u_10;
              {
                ATerm o_9 = NULL,p_9 = NULL;
                p_9 = t;
                t = SSL_explode_term(p_9);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_10 = ATgetArgument(t, 0);
                    o_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_9;
                t = foldr_3_0(v_1, x_1, s_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  i_22 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
      {
        ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(i_22);
        a_10 = t;
        t = j_22;
        t = k_114(t);
        e_10 = t;
        t = e_22;
        t = i_114(t);
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, f_10);
        w_2 = t;
        t = SSLsetAnnotations(w_2, a_10);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          j_22 = ATgetArgument(t, 0);
          e_22 = ATgetArgument(t, 1);
          f_22 = ATgetArgument(t, 2);
          h_22 = ATgetArgument(t, 3);
          {
            ATerm i_11 = NULL,p_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(i_22);
            i_11 = t;
            t = j_22;
            t = k_114(t);
            p_11 = t;
            t = e_22;
            t = k_114(t);
            t_11 = t;
            t = f_22;
            t = k_114(t);
            u_11 = t;
            t = h_22;
            t = i_114(t);
            v_11 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, p_11, t_11, u_11, v_11);
            d_3 = t;
            t = SSLsetAnnotations(d_3, i_11);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              j_22 = ATgetArgument(t, 0);
              e_22 = ATgetArgument(t, 1);
              f_22 = ATgetArgument(t, 2);
              h_22 = ATgetArgument(t, 3);
              {
                ATerm l_12 = NULL,r_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,e_3 = NULL;
                t = SSLgetAnnotations(i_22);
                l_12 = t;
                t = j_22;
                t = k_114(t);
                r_12 = t;
                t = e_22;
                t = k_114(t);
                z_12 = t;
                t = f_22;
                t = k_114(t);
                a_13 = t;
                t = h_22;
                t = i_114(t);
                b_13 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, r_12, z_12, a_13, b_13);
                e_3 = t;
                t = SSLsetAnnotations(e_3, l_12);
              }
            }
          else
            {
              ATerm p_13 = NULL,r_13 = NULL,o_3 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  j_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_22);
              p_13 = t;
              t = j_22;
              t = i_114(t);
              r_13 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_13);
              o_3 = t;
              t = SSLsetAnnotations(o_3, p_13);
            }
        }
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm v_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_22);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm x_22 = NULL,y_22 = NULL,f_23 = NULL,g_23 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_22 = ATgetArgument(t, 0);
            t = x_22;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_22 = ATgetArgument(t, 0);
                y_22 = ATgetArgument(t, 1);
                f_23 = ATgetArgument(t, 2);
                g_23 = ATgetArgument(t, 3);
                t = f_23;
                t = map_1_0(g_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_22 = ATgetArgument(t, 0);
                    y_22 = ATgetArgument(t, 1);
                    f_23 = ATgetArgument(t, 2);
                    g_23 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_23;
                t = map_1_0(i_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm o_23 = NULL;
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_23 = ATgetArgument(t, 0);
          {
            ATerm d_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_11);
      t = o_23;
    }
  else
    {
      t = b_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_23;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm f_24 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_24 = ATgetArgument(t, 0);
          {
            ATerm g_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_11);
      t = f_24;
    }
  else
    {
      t = e_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_24;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(c_2, d_2, tboundin_3_0, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm a_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_25);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm h_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = h_11;
      {
        ATerm c_25 = NULL,g_25 = NULL,h_25 = NULL,n_25 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_25 = ATgetArgument(t, 0);
            t = c_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_25 = ATgetArgument(t, 0);
                g_25 = ATgetArgument(t, 1);
                h_25 = ATgetArgument(t, 2);
                n_25 = ATgetArgument(t, 3);
                t = h_25;
                t = map_1_0(p_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_25 = ATgetArgument(t, 0);
                    g_25 = ATgetArgument(t, 1);
                    h_25 = ATgetArgument(t, 2);
                    n_25 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_25;
                t = map_1_0(q_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm z_25 = NULL;
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_25 = ATgetArgument(t, 0);
          {
            ATerm o_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_11);
      t = z_25;
    }
  else
    {
      t = l_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_25;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm m_26 = NULL;
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_26 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_11);
      t = m_26;
    }
  else
    {
      t = r_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_26;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_24 = NULL,x_24 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_24 = ATgetArgument(t, 0);
      t = x_24;
      if(match_cons(t, sym_Rule_3))
        {
          t_24 = ATgetArgument(t, 0);
          {
            ATerm x_11 = ATgetArgument(t, 1);
          }
          {
            ATerm y_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_24;
      t = free_vars_3_0(j_2, l_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          x_24 = ATgetArgument(t, 0);
          {
            ATerm b_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_24;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm f_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_27);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,n_27 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_27 = ATgetArgument(t, 0);
            t = j_27;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_27 = ATgetArgument(t, 0);
                k_27 = ATgetArgument(t, 1);
                l_27 = ATgetArgument(t, 2);
                n_27 = ATgetArgument(t, 3);
                t = l_27;
                t = map_1_0(t_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_27 = ATgetArgument(t, 0);
                    k_27 = ATgetArgument(t, 1);
                    l_27 = ATgetArgument(t, 2);
                    n_27 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_27;
                t = map_1_0(u_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm w_27 = NULL;
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_27 = ATgetArgument(t, 0);
          {
            ATerm g_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_12);
      t = w_27;
    }
  else
    {
      t = e_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_27;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm j_28 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_28 = ATgetArgument(t, 0);
          {
            ATerm j_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
      t = j_28;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_28;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm n_28 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_28);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,t_28 = NULL,u_28 = NULL;
  o_28 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
      t = o_28;
      t = y_5(p_28, q_28, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_28 = ATgetArgument(t, 0);
          q_28 = ATgetArgument(t, 1);
          t_28 = ATgetArgument(t, 2);
          t = q_28;
          t = map_1_0(z_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              p_28 = ATgetArgument(t, 0);
              q_28 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, p_28);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  p_28 = ATgetArgument(t, 0);
                  q_28 = ATgetArgument(t, 1);
                  t_28 = ATgetArgument(t, 2);
                  u_28 = ATgetArgument(t, 3);
                  t = q_28;
                  t = map_1_0(b_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_28 = ATgetArgument(t, 0);
                      q_28 = ATgetArgument(t, 1);
                      t_28 = ATgetArgument(t, 2);
                      u_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_28;
                  t = map_1_0(c_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm c_29 = NULL;
  ATerm k_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm n_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_12);
      t = c_29;
    }
  else
    {
      t = k_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_29;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm n_29 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_29 = ATgetArgument(t, 0);
          {
            ATerm q_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_12);
      t = n_29;
    }
  else
    {
      t = o_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_29;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm w_29 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_29 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_12);
      t = w_29;
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_29;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm v_12 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_12;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      ATerm x_12 = ATgetArgument(t, 1);
      ATerm y_12 = ATgetArgument(t, 2);
      ATerm c_13 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  e_27 = t;
  t = d_27;
  t = free_vars_3_0(r_2, s_2, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = d_27;
  t = free_vars_3_0(x_2, y_2, sboundin_3_0, t);
  t = filter_1_0(h_3, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_27;
  return(t);
}
ATerm partition_1_0 (ATerm g_128 (ATerm), ATerm t)
{
  ATerm q_31 (ATerm t)
  {
    ATerm k_31 = NULL,l_31 = NULL,p_31 = NULL;
    k_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_g_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_31 = ATgetFirst((ATermList) t);
            p_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,d_15 = NULL,z_3 = NULL;
              t = SSLgetAnnotations(k_31);
              w_14 = t;
              t = l_31;
              t = g_128(t);
              r_14 = t;
              t = (ATerm) ATinsert(CheckATermList(p_31), r_14);
              z_3 = t;
              t = SSLsetAnnotations(z_3, w_14);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_13 = ATgetFirst((ATermList) t);
                  u_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_14;
              t = q_31(t);
              t_14 = t;
              t = SSL_explode_term(t_14);
              if(match_cons(t, sym__2))
                {
                  ATerm k_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm l_13 = ATgetArgument(t, 1);
                    if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
                      {
                        v_14 = ATgetFirst((ATermList) l_13);
                        {
                          ATerm m_13 = (ATerm) ATgetNext((ATermList) l_13);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(t_14);
              if(match_cons(t, sym__2))
                {
                  ATerm n_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_13) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_13 = ATgetArgument(t, 1);
                    if(((ATgetType(o_13) == AT_LIST) && !(ATisEmpty(o_13))))
                      {
                        ATerm q_13 = ATgetFirst((ATermList) o_13);
                        ATerm t_13 = (ATerm) ATgetNext((ATermList) o_13);
                        if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
                          {
                            d_15 = ATgetFirst((ATermList) t_13);
                            {
                              ATerm u_13 = (ATerm) ATgetNext((ATermList) t_13);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_14), r_14), d_15);
              ;
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              {
                ATerm m_15 = NULL,n_15 = NULL,w_15 = NULL,x_15 = NULL,i_16 = NULL,a_4 = NULL;
                t = SSLgetAnnotations(k_31);
                x_15 = t;
                t = (ATerm) ATinsert(CheckATermList(p_31), l_31);
                a_4 = t;
                t = SSLsetAnnotations(a_4, x_15);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm v_13 = ATgetFirst((ATermList) t);
                    n_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_15;
                t = q_31(t);
                m_15 = t;
                t = SSL_explode_term(m_15);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm x_13 = ATgetArgument(t, 1);
                      if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
                        {
                          w_15 = ATgetFirst((ATermList) x_13);
                          {
                            ATerm y_13 = (ATerm) ATgetNext((ATermList) x_13);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(m_15);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_14 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_14) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm j_14 = ATgetArgument(t, 1);
                      if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
                        {
                          ATerm k_14 = ATgetFirst((ATermList) j_14);
                          ATerm l_14 = (ATerm) ATgetNext((ATermList) j_14);
                          if(((ATgetType(l_14) == AT_LIST) && !(ATisEmpty(l_14))))
                            {
                              i_16 = ATgetFirst((ATermList) l_14);
                              {
                                ATerm n_14 = (ATerm) ATgetNext((ATermList) l_14);
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
                t = (ATerm) ATmakeAppl(sym__2, w_15, (ATerm) ATinsert(CheckATermList(i_16), l_31));
              }
            }
        }
      }
    return(t);
  }
  t = q_31(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      v_31 = ATgetArgument(t, 0);
      w_31 = ATgetArgument(t, 1);
      x_31 = ATgetArgument(t, 2);
      y_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = term_q_14;
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_31, term_q_14);
  t = r_6(j_3, v_31, z_31, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, v_31, w_31, x_31, y_31);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm k_6 (ATerm v_40, ATerm u_40, ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  t = v_40;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      u_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_31;
  t = map_1_0(i_3, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, t_31, u_40), u_31);
  return(t);
}
ATerm l_6 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm m_50, ATerm l_50, ATerm t)
{
  t = z_123(t);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm a_32 = NULL;
      a_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_50), a_32);
      t = y_123(t);
      return(t);
    }
    t = fetch_1_0(k_3, t);
    t = not_null(l_50);
  }
  return(t);
}
ATerm m_6 (ATerm v_123 (ATerm), ATerm i_50, ATerm h_50, ATerm t)
{
  ATerm y_32 (ATerm t)
  {
    ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
    p_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(h_50);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_32 = ATgetFirst((ATermList) t);
            r_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_32;
              {
                ATerm l_3 (ATerm t)
                {
                  t = not_null(h_50);
                  return(t);
                }
                t = l_6(v_123, l_3, not_null(q_32), not_null(r_32), t);
                t = y_32(t);
              }
              ;
              LocalPopChoice(x_14);
            }
          else
            {
              t = s_14;
              {
                ATerm w_16 = NULL,j_17 = NULL,d_4 = NULL;
                t = SSLgetAnnotations(p_32);
                w_16 = t;
                t = r_32;
                t = y_32(t);
                j_17 = t;
                t = (ATerm) ATinsert(CheckATermList(j_17), q_32);
                d_4 = t;
                t = SSLsetAnnotations(d_4, w_16);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(i_50);
  t = y_32(t);
  return(t);
}
ATerm genzip_4_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm t)
{
  ATerm g_33 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_119(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_4 = NULL;
          t = u_119(t);
          f_33 = t;
          if(match_cons(t, sym__2))
            {
              b_33 = ATgetArgument(t, 0);
              c_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_33);
          a_33 = t;
          t = b_33;
          t = w_119(t);
          d_33 = t;
          t = c_33;
          t = g_33(t);
          e_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_33, e_33);
          g_4 = t;
          t = SSLsetAnnotations(g_4, a_33);
          t = v_119(t);
        }
      }
    return(t);
  }
  t = g_33(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_13;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm c_34 = NULL,e_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_34 = ATgetFirst((ATermList) t);
      e_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_34, e_34);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,i_34 = NULL,j_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(match_cons(a_15, sym__2))
        {
          f_34 = ATgetArgument(a_15, 0);
          g_34 = ATgetArgument(a_15, 1);
        }
      else
        _fail(t);
      {
        ATerm b_15 = ATgetArgument(t, 1);
        if(match_cons(b_15, sym__2))
          {
            i_34 = ATgetArgument(b_15, 0);
            j_34 = ATgetArgument(b_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_34), f_34), (ATerm) ATinsert(CheckATermList(j_34), g_34));
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  if(match_cons(t, sym__2))
    {
      l_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(u_3, l_34, m_34, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm o_34 = NULL;
  if(match_cons(t, sym__2))
    {
      o_34 = ATgetArgument(t, 0);
      if((o_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm p_34 = NULL;
  if(match_cons(t, sym__2))
    {
      p_34 = ATgetArgument(t, 0);
      if((p_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,j_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  z_33 = t;
  a_34 = t;
  t = SSL_explode_term(a_34);
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_33);
  s_33 = t;
  t = h_33;
  t = genzip_4_0(m_3, n_3, p_3, s_124, t);
  if(match_cons(t, sym__2))
    {
      p_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(o_33, p_33);
  y_33 = t;
  t = SSLsetAnnotations(y_33, s_33);
  t = t_124(t);
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_33;
  t = foldr_2_0(s_3, t_3, t);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, x_33);
  t = m_6(v_3, u_33, x_33, t);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, w_33);
  return(t);
}
ATerm collect_split_1_0 (ATerm f_125 (ATerm), ATerm t)
{
  ATerm u_34 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm c_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_125(t);
          ;
          LocalPopChoice(e_15);
        }
      else
        {
          t = c_15;
          {
            ATerm q_34 = NULL;
            q_34 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_34, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(u_34, x_3, t);
    return(t);
  }
  t = u_34(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(y_34, z_34, t);
  return(t);
}
ATerm p_6 (ATerm o_40, ATerm p_40, ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  t = r_40;
  t = collect_split_1_0(b_4, t);
  if(match_cons(t, sym__2))
    {
      v_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, o_40, p_40, q_40, v_34)));
  t = conc_0_0(t);
  return(t);
}
ATerm r_6 (ATerm u_127 (ATerm), ATerm j_55, ATerm h_55, ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  t = u_127(t);
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_35, j_55, h_55);
  t = d_7(a_35, j_55, h_55, t);
  {
    ATerm g_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_35 = NULL;
        t = term_j_15;
        g_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_35, term_j_15);
        t = c_7(a_35, g_35, t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = g_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_35 = ATgetFirst((ATermList) t);
        c_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_15;
    e_35 = t;
    t = (ATerm) ATinsert(CheckATermList(c_35), (ATerm) ATinsert(CheckATermList(b_35), j_55));
    f_35 = t;
    t = SSL_table_put(a_35, e_35, f_35);
    t = d_35;
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  t = term_u_15;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_35, term_u_15);
  t = r_6(e_4, i_35, j_35, t);
  t = i_35;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_15), term_v_15);
  t = map_1_0(c_4, t);
  t = h_35;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,r_4 = NULL;
  v_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_35);
  s_35 = t;
  t = t_35;
  t = map_1_0(l_4, t);
  t = map_1_0(n_4, t);
  t = concat_0_0(t);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_35);
  r_4 = t;
  t = SSLsetAnnotations(r_4, s_35);
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm w_35 = NULL,z_35 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      w_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
      c_36 = ATgetArgument(t, 2);
      d_36 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = term_q_14;
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, term_q_14);
  t = r_6(m_4, w_35, e_36, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, w_35, z_35, c_36, d_36);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm f_36 = NULL,i_36 = NULL,j_36 = NULL,p_36 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      f_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
      j_36 = ATgetArgument(t, 2);
      p_36 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_6(f_36, i_36, j_36, p_36, t);
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,b_5 = NULL,z_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  r_35 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_35);
  k_35 = t;
  t = l_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_35 = ATgetFirst((ATermList) t);
      o_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_35);
  m_35 = t;
  t = o_35;
  t = Cons_2_0(f_4, h_4, t);
  p_35 = t;
  t = (ATerm) ATinsert(CheckATermList(p_35), n_35);
  z_4 = t;
  t = SSLsetAnnotations(z_4, m_35);
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_35);
  b_5 = t;
  t = SSLsetAnnotations(b_5, k_35);
  return(t);
}
ATerm u_6 (ATerm i_66, ATerm j_66, ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_fputc(i_66, j_66);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_36);
  return(t);
}
ATerm v_6 (ATerm w_69, ATerm x_69, ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_write_term_to_stream_text(w_69, x_69);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_36);
  return(t);
}
ATerm x_6 (ATerm b_137 (ATerm), ATerm f_511, ATerm a_70, ATerm t)
{
  ATerm u_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_511, term_a_16);
  t = open_stream_0_0(t);
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_36, a_70);
  t = b_137(t);
  t = fclose_0_0(t);
  t = a_70;
  return(t);
}
ATerm w_6 (ATerm s_69, ATerm t_69, ATerm t)
{
  ATerm v_36 = NULL;
  t = SSL_write_term_to_stream_baf(s_69, t_69);
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_36);
  return(t);
}
ATerm p_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if(match_cons(b_16, sym_Stream_1))
        {
          n_18 = ATgetArgument(b_16, 0);
        }
      else
        _fail(t);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(n_18, o_18, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if(match_cons(d_16, sym_Stream_1))
        {
          h_19 = ATgetArgument(d_16, 0);
        }
      else
        _fail(t);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(h_19, i_19, t);
  a_19 = t;
  t = term_e_16;
  b_19 = t;
  t = a_19;
  if(match_cons(t, sym_Stream_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_16, a_19);
  t = u_6(b_19, c_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,k_39 = NULL,l_39 = NULL,u_5 = NULL,i_5 = NULL;
  if(((c_37 != NULL) && (c_37 != t)))
    _fail(t);
  else
    c_37 = t;
  if(match_cons(t, sym__2))
    {
      if(((p_37 != NULL) && (p_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_37 = ATgetArgument(t, 0);
      if(((q_37 != NULL) && (q_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(c_37));
  if(((o_37 != NULL) && (o_37 != t)))
    _fail(t);
  else
    o_37 = t;
  t = not_null(p_37);
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_37 != NULL) && (b_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_4, t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = term_h_16;
        if(((b_37 != NULL) && (b_37 != t)))
          _fail(t);
        else
          b_37 = t;
      }
    if(((r_37 != NULL) && (r_37 != t)))
      _fail(t);
    else
      r_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), not_null(q_37));
    if(((i_5 != NULL) && (i_5 != t)))
      _fail(t);
    else
      i_5 = t;
    t = SSLsetAnnotations(not_null(i_5), not_null(o_37));
    t = not_null(c_37);
    if(match_cons(t, sym__2))
      {
        if(((h_37 != NULL) && (h_37 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_37 = ATgetArgument(t, 0);
        if(((i_37 != NULL) && (i_37 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_37));
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), (ATerm) ATmakeAppl(sym__2, not_null(b_37), not_null(i_37)));
    if(((u_5 != NULL) && (u_5 != t)))
      _fail(t);
    else
      u_5 = t;
    t = SSLsetAnnotations(not_null(u_5), not_null(g_37));
    if(((n_37 != NULL) && (n_37 != t)))
      _fail(t);
    else
      n_37 = t;
    if(match_cons(t, sym__2))
      {
        if(((k_39 != NULL) && (k_39 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          k_39 = ATgetArgument(t, 0);
        if(((l_39 != NULL) && (l_39 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          l_39 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_17 = NULL,f_18 = NULL,g_18 = NULL,i_18 = NULL,m_18 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(not_null(n_37));
          z_17 = t;
          t = not_null(k_39);
          t = fetch_1_0(p_4, t);
          f_18 = t;
          t = not_null(l_39);
          if(match_cons(t, sym__2))
            {
              i_18 = ATgetArgument(t, 0);
              m_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_6(q_4, i_18, m_18, t);
          g_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_18, g_18);
          h_6 = t;
          t = SSLsetAnnotations(h_6, z_17);
          ;
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          {
            ATerm u_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,e_7 = NULL;
            t = SSLgetAnnotations(not_null(n_37));
            u_18 = t;
            t = not_null(l_39);
            if(match_cons(t, sym__2))
              {
                y_18 = ATgetArgument(t, 0);
                z_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_6(s_4, y_18, z_18, t);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_39), x_18);
            e_7 = t;
            t = SSLsetAnnotations(e_7, u_18);
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
ATerm apply_strategy_1_0 (ATerm d_140 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  u_39 = t;
  t = dtime_0_0(t);
  t = u_39;
  t = d_140(t);
  t_39 = t;
  t = dtime_0_0(t);
  o_39 = t;
  t = t_39;
  if(match_cons(t, sym__2))
    {
      p_39 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_39), (ATerm) ATmakeAppl(sym_Runtime_1, o_39)), s_39);
  return(t);
}
ATerm y_40 (ATerm g_40, ATerm t)
{
  t = SSL_fclose(g_40);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  l_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_40 = ATgetArgument(t, 0);
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_40);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            t = y_40(l_40, t);
          }
      }
    }
  else
    {
      t = y_40(l_40, t);
    }
  return(t);
}
ATerm y_6 (ATerm y_69, ATerm t)
{
  t = SSL_read_term_from_stream(y_69);
  return(t);
}
ATerm z_6 (ATerm k_66, ATerm l_66, ATerm t)
{
  ATerm z_40 = NULL;
  t = SSL_fopen(k_66, l_66);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_stdin_stream();
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_41 = NULL;
  t = SSL_stdout_stream();
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_41 = NULL;
  t = SSL_stderr_stream();
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_41);
  return(t);
}
ATerm q_42 (ATerm j_41, ATerm t)
{
  ATerm k_41 = NULL;
  t = SSL_explode_term(j_41);
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_16 = ATgetArgument(t, 1);
        if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
          {
            k_41 = ATgetFirst((ATermList) r_16);
            {
              ATerm s_16 = (ATerm) ATgetNext((ATermList) r_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_41;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_41;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_41;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_41;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_42 (ATerm p_41, ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,v_41 = NULL,b_42 = NULL,k_7 = NULL;
  t = SSLgetAnnotations(r_41);
  v_41 = t;
  t = p_41;
  if(match_cons(t, sym_Path_1))
    {
      b_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_42, q_41);
  k_7 = t;
  t = SSLsetAnnotations(k_7, v_41);
  if(match_cons(t, sym__2))
    {
      s_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(s_41, t_41, t);
  return(t);
}
ATerm s_42 (ATerm d_42, ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,l_42 = NULL,l_7 = NULL;
  t = SSLgetAnnotations(f_42);
  i_42 = t;
  t = SSL_is_string(d_42);
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_42, e_42);
  l_7 = t;
  t = SSLsetAnnotations(l_7, i_42);
  if(match_cons(t, sym__2))
    {
      g_42 = ATgetArgument(t, 0);
      h_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(g_42, h_42, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      ATerm v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_42 = t;
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
      {
        ATerm x_16 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_42(n_42, t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = x_16;
            {
              ATerm d_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_42(o_42, p_42, n_42, t);
                  ;
                  LocalPopChoice(e_17);
                }
              else
                {
                  t = d_17;
                  t = s_42(o_42, p_42, n_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_42(n_42, t);
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_42 = NULL;
      w_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_42, term_m_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      t = debug_1_0(t_4, t);
      _fail(t);
    }
  u_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(v_42, t);
  t_42 = t;
  t = u_42;
  t = fclose_0_0(t);
  t = t_42;
  return(t);
}
ATerm fetch_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  ATerm f_44 (ATerm t)
  {
    ATerm a_44 = NULL,d_44 = NULL,e_44 = NULL;
    a_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_44 = ATgetFirst((ATermList) t);
        e_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_17 = t;
      int o_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_20 = NULL,z_20 = NULL,p_7 = NULL;
          t = SSLgetAnnotations(a_44);
          l_20 = t;
          t = d_44;
          t = s_121(t);
          z_20 = t;
          t = (ATerm) ATinsert(CheckATermList(e_44), z_20);
          p_7 = t;
          t = SSLsetAnnotations(p_7, l_20);
          ;
          LocalPopChoice(o_17);
        }
      else
        {
          t = n_17;
          {
            ATerm o_21 = NULL,v_21 = NULL,q_7 = NULL;
            t = SSLgetAnnotations(a_44);
            o_21 = t;
            t = e_44;
            t = f_44(t);
            v_21 = t;
            t = (ATerm) ATinsert(CheckATermList(v_21), d_44);
            q_7 = t;
            t = SSLsetAnnotations(q_7, o_21);
          }
        }
    }
    return(t);
  }
  t = f_44(t);
  return(t);
}
ATerm t_6 (ATerm y_63, ATerm z_63, ATerm t)
{
  t = SSL_strcat(y_63, z_63);
  return(t);
}
ATerm debug_1_0 (ATerm z_136 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,l_44 = NULL,m_44 = NULL;
  i_44 = t;
  t = z_136(t);
  j_44 = t;
  t = term_n_8;
  l_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_44), j_44);
  m_44 = t;
  t = SSL_printnl(l_44, m_44);
  t = i_44;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm p_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = p_17;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_44 = NULL;
      u_44 = t;
      t = SSL_is_string(u_44);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_4, t);
            ;
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            {
              ATerm a_45 = NULL,d_45 = NULL,g_45 = NULL;
              a_45 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_45 = ATgetArgument(t, 0);
                  t = d_45;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_45 = ATgetArgument(t, 0);
                      t = d_45;
                      {
                        ATerm c_18 = t;
                        int d_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_18);
                          }
                        else
                          {
                            t = c_18;
                            t = debug_1_0(w_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_45 = NULL,q_45 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_45 = ATgetArgument(t, 0);
                          g_45 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_45;
                      t = eval_config_0_0(t);
                      n_45 = t;
                      t = g_45;
                      t = eval_config_0_0(t);
                      q_45 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_45, q_45);
                      t = t_6(n_45, q_45, t);
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
  ATerm y_45 = NULL,z_45 = NULL;
  y_45 = t;
  t = term_e_18;
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_18, y_45);
  t = c_7(z_45, y_45, t);
  {
    ATerm h_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_46 = NULL,d_46 = NULL;
        t = eval_config_0_0(t);
        c_46 = t;
        t = term_e_18;
        d_46 = t;
        t = SSL_table_put(d_46, y_45, c_46);
        t = c_46;
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = h_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm n_46 = NULL;
  n_46 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_46 = NULL;
        t = term_p_18;
        t = get_config_0_0(t);
        p_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_46, term_q_18);
        t = geq_0_0(t);
        t = n_46;
        t = m_138(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = n_46;
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  if(match_string(t, "-k"))
    {
      t = s_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_46;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
  t_46 = t;
  t = SSL_string_to_int(t_46);
  u_46 = t;
  t = term_r_18;
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, u_46);
  t = f_7(v_46, u_46, t);
  t = t_46;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, c_5, e_5, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm x_46 = NULL;
  x_46 = t;
  if(match_string(t, "-S"))
    {
      t = x_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_46;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  t = term_p_18;
  y_46 = t;
  t = term_v_18;
  z_46 = t;
  t = term_w_18;
  t = f_7(y_46, z_46, t);
  t = term_d_19;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL;
  a_47 = t;
  t = SSL_string_to_int(a_47);
  b_47 = t;
  t = term_p_18;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, b_47);
  t = f_7(c_47, b_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_47);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  t = term_g_19;
  d_47 = t;
  t = term_a_1;
  e_47 = t;
  t = term_j_19;
  t = f_7(d_47, e_47, t);
  t = term_k_19;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, g_5, h_5, t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_5, k_5, l_5, t);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            t = Option_3_0(m_5, n_5, o_5, t);
          }
      }
    }
  return(t);
}
ATerm f_7 (ATerm z_70, ATerm a_71, ATerm t)
{
  ATerm f_47 = NULL;
  t = term_e_18;
  f_47 = t;
  t = SSL_table_put(f_47, z_70, a_71);
  t = (ATerm) ATmakeAppl(sym__3, term_e_18, z_70, a_71);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
      t = term_a_1;
      t = d_0(t);
      k_47 = t;
      t = term_q_19;
      l_47 = t;
      t = term_r_19;
      m_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_19, term_r_19, k_47);
      t = d_7(l_47, m_47, k_47, t);
      _fail(t);
    }
  else
    {
      ATerm p_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_47 = ATgetFirst((ATermList) t);
          j_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_47;
      t = a_0(t);
      t = term_a_1;
      t = b_0(t);
      p_47 = t;
      t = (ATerm) ATinsert(CheckATermList(j_47), p_47);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  if(match_string(t, "-o"))
    {
      t = t_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_47;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  w_47 = t;
  t = term_s_19;
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, w_47);
  t = f_7(x_47, w_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_47);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, s_5, t);
  return(t);
}
ATerm d_7 (ATerm r_55, ATerm s_55, ATerm q_55, ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,k_48 = NULL;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_55, s_55);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_19 = ATgetArgument(t, 0);
            ATerm x_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_55, s_55);
        t = c_7(r_55, s_55, t);
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = (ATerm) ATempty;
      }
    c_48 = t;
    t = (ATerm) ATinsert(CheckATermList(c_48), q_55);
    k_48 = t;
    t = SSL_table_put(r_55, s_55, k_48);
    t = b_48;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_48 = NULL,x_48 = NULL,a_49 = NULL;
      t = term_a_1;
      t = m_0(t);
      w_48 = t;
      t = term_q_19;
      x_48 = t;
      t = term_r_19;
      a_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_19, term_r_19, w_48);
      t = d_7(x_48, a_49, w_48, t);
      _fail(t);
    }
  else
    {
      ATerm e_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_48 = ATgetFirst((ATermList) t);
          t_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_48 = ATgetFirst((ATermList) t);
          v_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_48;
      t = i_0(t);
      t = u_48;
      t = k_0(t);
      e_49 = t;
      t = (ATerm) ATinsert(CheckATermList(v_48), e_49);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  if(match_string(t, "-i"))
    {
      t = g_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_49;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  h_49 = t;
  t = term_y_19;
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, h_49);
  t = f_7(i_49, h_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_49);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_1;
  t = whoami_0_0(t);
  j_49 = t;
  t = term_n_8;
  l_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_20), j_49);
  m_49 = t;
  t = SSL_printnl(l_49, m_49);
  t = term_s_8;
  k_49 = t;
  t = SSL_exit(k_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_7 (ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_53, w_53);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      t = SSL_addr(v_53, w_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_49;
      t = j_126(t);
    }
  else
    {
      ATerm t_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_49 = ATgetFirst((ATermList) t);
          q_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_49;
      t = foldr_2_0(j_126, k_126, t);
      t_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_49, t_49);
      t = k_126(t);
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
  t = term_v_18;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(b_23, c_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_49 = NULL,t_22 = NULL,u_22 = NULL;
  t = times_0_0(t);
  u_22 = t;
  t = SSL_explode_term(u_22);
  if(match_cons(t, sym__2))
    {
      ATerm e_20 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_22;
  t = foldr_2_0(d_6, f_6, t);
  w_49 = t;
  t = SSL_TicksToSeconds(w_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_50 = NULL,r_50 = NULL,s_50 = NULL;
  o_50 = t;
  if(match_cons(t, sym__2))
    {
      r_50 = ATgetArgument(t, 0);
      s_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_50;
        if((r_50 != t))
          {
            _fail(t);
          }
        t = o_50;
        ;
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = (ATerm) ATmakeAppl(sym__2, r_50, s_50);
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_50, s_50);
              ;
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
              t = SSL_gtr(r_50, s_50);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_50, s_50);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_138 (ATerm), ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_51 = NULL;
        t = term_p_18;
        t = get_config_0_0(t);
        f_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_51, term_s_8);
        t = geq_0_0(t);
        t = w_50;
        t = l_138(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = w_50;
      }
  }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,k_51 = NULL,l_51 = NULL;
  t = run_time_0_0(t);
  h_51 = t;
  t = term_a_1;
  t = whoami_0_0(t);
  i_51 = t;
  t = term_n_8;
  k_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_20), h_51), term_m_20), i_51);
  l_51 = t;
  t = SSL_printnl(k_51, l_51);
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_20), h_51), term_m_20), i_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_18;
  m_51 = t;
  t = SSL_exit(m_51);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  z_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_51 = ATgetArgument(t, 0);
          {
            ATerm j_24 = NULL,t_7 = NULL;
            t = SSLgetAnnotations(z_51);
            j_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_51);
            t_7 = t;
            t = SSLsetAnnotations(t_7, j_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_141 (ATerm), ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      t = fetch_1_0(j_6, t);
    }
  t = b_141(t);
  return(t);
}
ATerm map_1_0 (ATerm i_121 (ATerm), ATerm t)
{
  ATerm p_52 (ATerm t)
  {
    ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
    m_52 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_52;
      }
    else
      {
        ATerm r_24 = NULL,e_25 = NULL,f_25 = NULL,y_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_52 = ATgetFirst((ATermList) t);
            o_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_52);
        r_24 = t;
        t = n_52;
        t = i_121(t);
        e_25 = t;
        t = o_52;
        t = p_52(t);
        f_25 = t;
        t = (ATerm) ATinsert(CheckATermList(f_25), e_25);
        y_7 = t;
        t = SSLsetAnnotations(y_7, r_24);
      }
    return(t);
  }
  t = p_52(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_52 = ATgetFirst((ATermList) t);
      t_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_52 = NULL,y_52 = NULL;
        ATerm n_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_52)), not_null(y_52));
          return(t);
        }
        t = not_null(t_52);
        t = g_0(t);
        if(((x_52 != NULL) && (x_52 != t)))
          _fail(t);
        else
          x_52 = t;
        t = not_null(s_52);
        t = f_0(t);
        if(((y_52 != NULL) && (y_52 != t)))
          _fail(t);
        else
          y_52 = t;
        t = not_null(t_52);
        t = reverse_acc_2_0(f_0, n_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_1;
      t = g_0(t);
    }
  return(t);
}
ATerm c_7 (ATerm i_57, ATerm j_57, ATerm t)
{
  t = SSL_table_get(i_57, j_57);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,c_8 = NULL;
  e_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_53);
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_53);
  c_8 = t;
  t = SSLsetAnnotations(c_8, c_53);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm g_53 = NULL;
  g_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_53), term_r_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      t = fetch_1_0(o_6, t);
    }
  t = term_u_20;
  t = echo_0_0(t);
  t = term_q_19;
  a_53 = t;
  t = term_r_19;
  b_53 = t;
  t = term_v_20;
  t = c_7(a_53, b_53, t);
  t = reverse_acc_2_0(_id, q_6, t);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_20 = ATgetFirst((ATermList) t);
                ATerm a_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_53;
          }
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = (ATerm) ATinsert(ATempty, i_53);
      }
    j_53 = t;
    t = term_h_16;
    k_53 = t;
    t = SSL_printnl(k_53, j_53);
    t = i_53;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL;
  t = term_b_21;
  o_53 = t;
  t = term_a_1;
  p_53 = t;
  t = term_c_21;
  t = f_7(o_53, p_53, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  t = term_b_21;
  s_53 = t;
  t = term_a_1;
  t_53 = t;
  t = term_c_21;
  t = f_7(s_53, t_53, t);
  t = term_e_21;
  q_53 = t;
  t = term_a_1;
  r_53 = t;
  t = term_f_21;
  t = f_7(q_53, r_53, t);
  t = term_g_21;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_7, g_7, h_7, t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = Option_3_0(i_7, j_7, n_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,e_8 = NULL;
  b_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_53 = ATgetFirst((ATermList) t);
      y_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_54);
  u_53 = t;
  t = x_53;
  t = f_99(t);
  z_53 = t;
  t = y_53;
  t = g_99(t);
  a_54 = t;
  t = (ATerm) ATinsert(CheckATermList(a_54), z_53);
  e_8 = t;
  t = SSLsetAnnotations(e_8, u_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_143 (ATerm), ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,l_54 = NULL,m_54 = NULL,g_8 = NULL;
  if(((g_54 != NULL) && (g_54 != t)))
    _fail(t);
  else
    g_54 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_21;
        t = e_143(t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
      }
    t = not_null(g_54);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_54 != NULL) && (i_54 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_54 = ATgetFirst((ATermList) t);
        if(((j_54 != NULL) && (j_54 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          j_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(g_54));
    if(((h_54 != NULL) && (h_54 != t)))
      _fail(t);
    else
      h_54 = t;
    t = term_b_20;
    if(((m_54 != NULL) && (m_54 != t)))
      _fail(t);
    else
      m_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_20, not_null(i_54));
    t = f_7(not_null(m_54), not_null(i_54), t);
    t = not_null(j_54);
    {
      ATerm w_54 (ATerm t)
      {
        ATerm n_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_54 = NULL;
                p_54 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_54;
                ;
                LocalPopChoice(r_21);
              }
            else
              {
                t = q_21;
                t = e_143(t);
                t = Cons_2_0(_id, w_54, t);
              }
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = n_21;
            {
              ATerm s_54 = NULL,t_54 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_54 = ATgetFirst((ATermList) t);
                  t_54 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_54), (ATerm) ATmakeAppl(sym_Undefined_1, s_54));
            }
          }
        return(t);
      }
      t = w_54(t);
      if(((l_54 != NULL) && (l_54 != t)))
        _fail(t);
      else
        l_54 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(l_54)), (ATerm) ATmakeAppl(sym_Program_1, not_null(i_54)));
      if(((g_8 != NULL) && (g_8 != t)))
        _fail(t);
      else
        g_8 = t;
      t = SSLsetAnnotations(not_null(g_8), not_null(h_54));
    }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm o_55 = NULL;
  o_55 = t;
  if(match_string(t, "--help"))
    {
      t = o_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_55;
        }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL;
  t = term_q_20;
  t_55 = t;
  t = term_a_1;
  u_55 = t;
  t = term_s_21;
  t = f_7(t_55, u_55, t);
  t = term_t_21;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_143 (ATerm), ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,m_55 = NULL,n_55 = NULL;
  if(((e_55 != NULL) && (e_55 != t)))
    _fail(t);
  else
    e_55 = t;
  t = term_q_19;
  if(((g_55 != NULL) && (g_55 != t)))
    _fail(t);
  else
    g_55 = t;
  t = term_r_19;
  if(((m_55 != NULL) && (m_55 != t)))
    _fail(t);
  else
    m_55 = t;
  t = (ATerm) ATempty;
  if(((n_55 != NULL) && (n_55 != t)))
    _fail(t);
  else
    n_55 = t;
  t = SSL_table_put(not_null(g_55), not_null(m_55), not_null(n_55));
  t = not_null(e_55);
  {
    ATerm o_7 (ATerm t)
    {
      ATerm w_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_143(t);
          ;
          LocalPopChoice(x_21);
        }
      else
        {
          t = w_21;
          {
            ATerm y_21 = t;
            int z_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_7, s_7, u_7, t);
                ;
                LocalPopChoice(z_21);
              }
            else
              {
                t = y_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_7, t);
    {
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_56 = NULL;
          b_56 = t;
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_25 = NULL;
                t = b_56;
                {
                  ATerm g_22 = t;
                  int k_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_22);
                    }
                  else
                    {
                      t = g_22;
                      t = fetch_1_0(v_7, t);
                    }
                  t = b_56;
                  t = default_system_usage_0_0(t);
                  t = term_v_18;
                  w_25 = t;
                  t = SSL_exit(w_25);
                }
                ;
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                {
                  ATerm e_26 = NULL;
                  t = term_b_21;
                  t = get_config_0_0(t);
                  t = b_56;
                  t = default_system_about_0_0(t);
                  t = term_v_18;
                  e_26 = t;
                  t = SSL_exit(e_26);
                }
              }
          }
          ;
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          {
            ATerm l_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
                ATerm w_7 (ATerm t)
                {
                  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,l_8 = NULL;
                  j_56 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      i_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_56);
                  h_56 = t;
                  t = i_56;
                  if(((c_55 != NULL) && (c_55 != t)))
                    _fail(t);
                  else
                    c_55 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_56);
                  l_8 = t;
                  t = SSLsetAnnotations(l_8, h_56);
                  return(t);
                }
                t = fetch_1_0(w_7, t);
                t = term_n_8;
                if(((f_56 != NULL) && (f_56 != t)))
                  _fail(t);
                else
                  f_56 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_55)), term_n_22);
                if(((g_56 != NULL) && (g_56 != t)))
                  _fail(t);
                else
                  g_56 = t;
                t = SSL_printnl(not_null(f_56), not_null(g_56));
                t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_55)), term_n_22));
                t = default_system_usage_0_0(t);
                t = term_s_8;
                if(((e_56 != NULL) && (e_56 != t)))
                  _fail(t);
                else
                  e_56 = t;
                t = SSL_exit(not_null(e_56));
                ;
                LocalPopChoice(m_22);
              }
            else
              {
                t = l_22;
              }
          }
        }
      if(((d_55 != NULL) && (d_55 != t)))
        _fail(t);
      else
        d_55 = t;
      t = term_q_19;
      if(((f_55 != NULL) && (f_55 != t)))
        _fail(t);
      else
        f_55 = t;
      t = SSL_table_destroy(not_null(f_55));
      t = not_null(d_55);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_141 (ATerm), ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
  t = parse_options_1_0(d_141, t);
  o_56 = t;
  t = term_o_22;
  r_56 = t;
  t = SSL_table_create(r_56);
  t = term_o_22;
  p_56 = t;
  t = term_p_22;
  q_56 = t;
  t = SSL_table_put(p_56, q_56, o_56);
  t = o_56;
  t = f_141(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_141, t);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm s_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_22);
            }
          else
            {
              t = s_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = if_verbose2_1_0(j_8, t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  t = term_z_22;
  s_56 = t;
  t = term_a_1;
  t_56 = t;
  t = term_a_23;
  t = f_7(s_56, t_56, t);
  t = term_d_23;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  u_56 = t;
  t = term_b_20;
  t = get_config_0_0(t);
  v_56 = t;
  t = term_n_8;
  w_56 = t;
  t = (ATerm) ATinsert(ATempty, v_56);
  x_56 = t;
  t = SSL_printnl(w_56, x_56);
  t = u_56;
  return(t);
}
ATerm iowrap_3_0 (ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_140(t);
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm j_23 = t;
          int k_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_23);
            }
          else
            {
              t = j_23;
              {
                ATerm l_23 = t;
                int m_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
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
                          t = Option_3_0(f_8, h_8, i_8, t);
                          ;
                          LocalPopChoice(p_23);
                        }
                      else
                        {
                          t = n_23;
                          {
                            ATerm q_23 = t;
                            int r_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_23);
                              }
                            else
                              {
                                t = q_23;
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
  ATerm d_8 (ATerm t)
  {
    ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
    if(((z_56 != NULL) && (z_56 != t)))
      _fail(t);
    else
      z_56 = t;
    {
      ATerm s_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_56 != NULL) && (y_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_8, t);
          ;
          LocalPopChoice(t_23);
        }
      else
        {
          t = s_23;
          t = term_u_23;
          if(((y_56 != NULL) && (y_56 != t)))
            _fail(t);
          else
            y_56 = t;
        }
      t = not_null(y_56);
      t = ReadFromFile_0_0(t);
      if(((a_57 != NULL) && (a_57 != t)))
        _fail(t);
      else
        a_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_56), not_null(a_57));
      t = apply_strategy_1_0(m_140, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_8, o_140, b_8, d_8, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,r_8 = NULL;
  f_57 = t;
  if(match_cons(t, sym__2))
    {
      c_57 = ATgetArgument(t, 0);
      d_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_57);
  b_57 = t;
  t = d_57;
  t = lift_definitions_0_0(t);
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_57, e_57);
  r_8 = t;
  t = SSLsetAnnotations(r_8, b_57);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_8, _fail, default_usage_0_0, t);
  return(t);
}

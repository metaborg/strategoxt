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
ATerm term_y_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_d_18;
ATerm term_q_17;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_h_13;
ATerm term_b_9;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_b_1;
void init_constant_terms (void)
{
  ATprotect(&(term_b_1));
  term_b_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_14);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_s_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_b_1);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_q_19);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_b_1);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_b_1);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_b_1);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_b_1);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_99 (ATerm), ATerm);
ATerm m_2 (ATerm z_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_5 (ATerm c_36, ATerm d_36, ATerm);
ATerm TopLevel_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_105 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm y_5 (ATerm d_21, ATerm c_21, ATerm);
ATerm foldr_3_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm);
ATerm e_6 (ATerm p_101 (ATerm), ATerm k_29, ATerm j_29, ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm j_6 (ATerm s_600, ATerm x_600, ATerm d_57, ATerm);
ATerm while_not_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm s_17 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm);
ATerm g_1 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm b_2 (ATerm);
ATerm free_vars_3_0 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tboundin_3_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm);
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
ATerm partition_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm l_6 (ATerm z_19, ATerm y_19, ATerm);
ATerm m_6 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm q_29, ATerm p_29, ATerm);
ATerm n_6 (ATerm u_101 (ATerm), ATerm m_29, ATerm l_29, ATerm);
ATerm genzip_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm CollectSplit_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm e_103 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm r_6 (ATerm s_19, ATerm t_19, ATerm u_19, ATerm v_19, ATerm);
ATerm t_6 (ATerm u_105 (ATerm), ATerm g_35, ATerm e_35, ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm declare_standard_strategies_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm w_6 (ATerm l_46, ATerm m_46, ATerm);
ATerm x_6 (ATerm z_49, ATerm a_50, ATerm);
ATerm z_6 (ATerm g_115 (ATerm), ATerm u_473, ATerm d_50, ATerm);
ATerm y_6 (ATerm v_49, ATerm w_49, ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_118 (ATerm), ATerm);
ATerm l_41 (ATerm b_41, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_7 (ATerm b_50, ATerm);
ATerm b_7 (ATerm n_46, ATerm o_46, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_43 (ATerm e_42, ATerm);
ATerm z_43 (ATerm o_42, ATerm p_42, ATerm q_42, ATerm);
ATerm a_44 (ATerm c_43, ATerm g_43, ATerm h_43, ATerm);
ATerm c_7 (ATerm);
ATerm t_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm v_6 (ATerm b_44, ATerm c_44, ATerm);
ATerm debug_1_0 (ATerm e_115 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_116 (ATerm), ATerm);
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
ATerm i_7 (ATerm c_51, ATerm d_51, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm g_7 (ATerm r_35, ATerm s_35, ATerm q_35, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm d_7 (ATerm q_33, ATerm r_33, ATerm);
ATerm foldr_2_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_116 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm need_help_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm f_7 (ATerm i_37, ATerm j_37, ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm e_7 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm n_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_121 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm parse_options_1_0 (ATerm i_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_119 (ATerm), ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm l_119 (ATerm), ATerm);
ATerm c_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm iowrap_3_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm);
ATerm n_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,j_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_b_1;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_o_8;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_8), c_0), term_p_8);
  o_0 = t;
  t = SSL_printnl(j_0, o_0);
  t = term_t_8;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_0 = NULL,v_0 = NULL,w_0 = NULL;
  r_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_0;
    }
  else
    {
      ATerm h_0 (ATerm t)
      {
        t = not_null(w_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_0 = ATgetFirst((ATermList) t);
          if(((w_0 != NULL) && (w_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_0;
      t = at_end_1_0(h_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_99 (ATerm), ATerm t)
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
          ATerm t_0 = NULL,y_0 = NULL,e_1 = NULL;
          t = SSLgetAnnotations(t_1);
          t_0 = t;
          t = s_1;
          t = u_1(t);
          y_0 = t;
          t = (ATerm) ATinsert(CheckATermList(y_0), r_1);
          e_1 = t;
          t = SSLsetAnnotations(e_1, t_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_1;
        t = x_99(t);
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
      ATerm u_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_8) != ATmakeSymbol("", 0, ATtrue)))
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
  h_2 = t;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = f_2;
              return(t);
            }
            t = e_2;
            t = at_end_1_0(q_0, t);
            ;
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            t = m_2(h_2, t);
          }
      }
    }
  else
    {
      t = m_2(h_2, t);
    }
  return(t);
}
ATerm t_5 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm n_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
  t = f_7(c_36, d_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_2 = ATgetFirst((ATermList) t);
      {
        ATerm x_8 = (ATerm) ATgetNext((ATermList) t);
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
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL;
        t = term_b_9;
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_9, q_3);
        t = t_5(k_2, q_3, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_9) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_b_1;
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          ATerm v_2 = NULL;
          t = term_b_9;
          v_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_9, q_3);
          t = t_5(v_2, q_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_9 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_9) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_b_1;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_105 (ATerm), ATerm t)
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
        ATerm e_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 = NULL,f_3 = NULL,g_3 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(i_4);
            a_3 = t;
            t = j_4;
            t = y_105(t);
            f_3 = t;
            t = k_4;
            t = filter_1_0(y_105, t);
            g_3 = t;
            t = (ATerm) ATinsert(CheckATermList(g_3), f_3);
            h_1 = t;
            t = SSLsetAnnotations(h_1, a_3);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = e_9;
            t = k_4;
            t = filter_1_0(y_105, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
      {
        ATerm r_3 = NULL,w_3 = NULL,y_3 = NULL,j_1 = NULL;
        t = SSLgetAnnotations(m_10);
        r_3 = t;
        t = n_10;
        t = l_92(t);
        w_3 = t;
        t = o_10;
        t = l_92(t);
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
          n_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
          k_10 = ATgetArgument(t, 2);
          {
            ATerm u_4 = NULL,y_4 = NULL,a_5 = NULL,d_5 = NULL,l_1 = NULL;
            t = SSLgetAnnotations(m_10);
            u_4 = t;
            t = n_10;
            t = n_92(t);
            y_4 = t;
            t = o_10;
            t = n_92(t);
            a_5 = t;
            t = k_10;
            t = l_92(t);
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
              n_10 = ATgetArgument(t, 0);
              o_10 = ATgetArgument(t, 1);
              k_10 = ATgetArgument(t, 2);
              l_10 = ATgetArgument(t, 3);
              {
                ATerm r_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(m_10);
                r_5 = t;
                t = n_10;
                t = n_92(t);
                z_5 = t;
                t = o_10;
                t = n_92(t);
                a_6 = t;
                t = k_10;
                t = n_92(t);
                b_6 = t;
                t = l_10;
                t = l_92(t);
                c_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_5, a_6, b_6, c_6);
                m_1 = t;
                t = SSLsetAnnotations(m_1, r_5);
              }
            }
          else
            {
              ATerm p_7 = NULL,y_7 = NULL,a_8 = NULL,n_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  n_10 = ATgetArgument(t, 0);
                  o_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_10);
              p_7 = t;
              t = n_10;
              t = n_92(t);
              y_7 = t;
              t = o_10;
              t = l_92(t);
              a_8 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, y_7, a_8);
              n_1 = t;
              t = SSLsetAnnotations(n_1, p_7);
            }
        }
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm z_10 = NULL;
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_10 = ATgetArgument(t, 0);
          {
            ATerm k_9 = ATgetArgument(t, 1);
          }
          {
            ATerm o_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_9);
      t = z_10;
    }
  else
    {
      t = i_9;
      if(match_cons(t, sym_SDefT_4))
        {
          z_10 = ATgetArgument(t, 0);
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
      t = z_10;
    }
  return(t);
}
ATerm y_5 (ATerm d_21, ATerm c_21, ATerm t)
{
  t = d_21;
  t = map_1_0(s_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,o_11 = NULL,r_11 = NULL;
  k_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_11;
      t = k_104(t);
    }
  else
    {
      ATerm a_12 = NULL,b_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_11 = ATgetFirst((ATermList) t);
          r_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_11;
      t = m_104(t);
      a_12 = t;
      t = r_11;
      t = foldr_3_0(k_104, l_104, m_104, t);
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
      t = l_104(t);
    }
  return(t);
}
ATerm e_6 (ATerm p_101 (ATerm), ATerm k_29, ATerm j_29, ATerm t)
{
  ATerm t_13 (ATerm t)
  {
    ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
    e_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_13 = ATgetFirst((ATermList) t);
            g_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_13;
              {
                ATerm u_0 (ATerm t)
                {
                  t = j_29;
                  return(t);
                }
                t = m_6(p_101, u_0, f_13, g_13, t);
                t = t_13(t);
              }
              ;
              LocalPopChoice(y_9);
            }
          else
            {
              t = u_9;
              {
                ATerm r_8 = NULL,a_9 = NULL,w_1 = NULL;
                t = SSLgetAnnotations(e_13);
                r_8 = t;
                t = g_13;
                t = t_13(t);
                a_9 = t;
                t = (ATerm) ATinsert(CheckATermList(a_9), f_13);
                w_1 = t;
                t = SSLsetAnnotations(w_1, r_8);
              }
            }
        }
      }
    return(t);
  }
  t = k_29;
  t = t_13(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(((ATgetType(z_9) != AT_LIST) || !(ATisEmpty(z_9))))
        _fail(t);
      {
        ATerm a_10 = ATgetArgument(t, 1);
        if(((ATgetType(a_10) != AT_LIST) || !(ATisEmpty(a_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_10 = ATgetArgument(t, 0);
      if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
        {
          f_14 = ATgetFirst((ATermList) c_10);
          g_14 = (ATerm) ATgetNext((ATermList) c_10);
        }
      else
        _fail(t);
      {
        ATerm d_10 = ATgetArgument(t, 1);
        if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
          {
            h_14 = ATgetFirst((ATermList) d_10);
            i_14 = (ATerm) ATgetNext((ATermList) d_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_14, h_14), (ATerm) ATmakeAppl(sym__2, g_14, i_14));
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm j_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_14), j_14);
  return(t);
}
ATerm j_6 (ATerm s_600, ATerm x_600, ATerm d_57, ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  t = SSL_explode_term(x_600);
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_600);
  if(match_cons(t, sym__2))
    {
      if((a_14 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_14, c_14);
  t = genzip_4_0(x_0, z_0, a_1, _id, t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_14, d_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t)
{
  ATerm q_14 (ATerm t)
  {
    ATerm e_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_110(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = e_10;
        t = z_110(t);
        t = q_14(t);
      }
    return(t);
  }
  t = q_14(t);
  return(t);
}
ATerm for_3_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t)
{
  t = b_111(t);
  t = while_not_2_0(c_111, d_111, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_15);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm i_15 = NULL,m_15 = NULL,p_15 = NULL,q_15 = NULL,y_1 = NULL;
  q_15 = t;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_15);
  i_15 = t;
  t = p_15;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_15, p_15);
  y_1 = t;
  t = SSLsetAnnotations(y_1, i_15);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,b_17 = NULL,c_17 = NULL;
  u_16 = t;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_17(v_16, w_16, u_16, t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_16), b_17), c_17);
          }
      }
    }
  else
    {
      t = s_17(v_16, w_16, u_16, t);
    }
  return(t);
}
ATerm s_17 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm t)
{
  ATerm u_15 = NULL,z_15 = NULL,o_2 = NULL,d_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  t = SSLgetAnnotations(t_15);
  u_15 = t;
  t = s_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_16 = ATgetFirst((ATermList) t);
      m_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_16;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_16;
        if((k_16 != t))
          {
            _fail(t);
          }
        t = m_16;
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = s_15;
        t = j_6(k_16, l_16, m_16, t);
      }
    z_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_15, z_15);
    o_2 = t;
    t = SSLsetAnnotations(o_2, u_15);
  }
  return(t);
}
ATerm g_1 (ATerm t)
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
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_1, d_1, f_1, t);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
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
        t = e_6(g_1, h_17, i_17, t);
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
  ATerm l_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(q_1, l_9, m_9, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      if((n_9 != ATgetArgument(t, 1)))
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
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(b_2, v_9, w_9, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm x_9 = NULL;
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      if((x_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_18 (ATerm t)
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_108(t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm v_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_17 = NULL,v_17 = NULL,f_9 = NULL,h_9 = NULL;
              u_17 = t;
              t = o_108(t);
              v_17 = t;
              t = u_17;
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm x_17 = NULL;
                  t = t_18(t);
                  x_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_17, v_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_108(i_1, t_18, k_1, t);
                h_9 = t;
                t = SSL_explode_term(h_9);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_10 = ATgetArgument(t, 0);
                    f_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_9;
                t = foldr_3_0(o_1, p_1, _id, t);
              }
              ;
              LocalPopChoice(w_10);
            }
          else
            {
              t = v_10;
              {
                ATerm p_9 = NULL,q_9 = NULL;
                q_9 = t;
                t = SSL_explode_term(q_9);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_10 = ATgetArgument(t, 0);
                    p_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_9;
                t = foldr_3_0(v_1, x_1, t_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm tboundin_3_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  e_22 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_22 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
      {
        ATerm b_10 = NULL,f_10 = NULL,g_10 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(e_22);
        b_10 = t;
        t = f_22;
        t = j_92(t);
        f_10 = t;
        t = a_22;
        t = h_92(t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, g_10);
        w_2 = t;
        t = SSLsetAnnotations(w_2, b_10);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          f_22 = ATgetArgument(t, 0);
          a_22 = ATgetArgument(t, 1);
          b_22 = ATgetArgument(t, 2);
          d_22 = ATgetArgument(t, 3);
          {
            ATerm j_11 = NULL,q_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(e_22);
            j_11 = t;
            t = f_22;
            t = j_92(t);
            q_11 = t;
            t = a_22;
            t = j_92(t);
            u_11 = t;
            t = b_22;
            t = j_92(t);
            v_11 = t;
            t = d_22;
            t = h_92(t);
            w_11 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_11, u_11, v_11, w_11);
            d_3 = t;
            t = SSLsetAnnotations(d_3, j_11);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              f_22 = ATgetArgument(t, 0);
              a_22 = ATgetArgument(t, 1);
              b_22 = ATgetArgument(t, 2);
              d_22 = ATgetArgument(t, 3);
              {
                ATerm m_12 = NULL,s_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,e_3 = NULL;
                t = SSLgetAnnotations(e_22);
                m_12 = t;
                t = f_22;
                t = j_92(t);
                s_12 = t;
                t = a_22;
                t = j_92(t);
                a_13 = t;
                t = b_22;
                t = j_92(t);
                b_13 = t;
                t = d_22;
                t = h_92(t);
                c_13 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, s_12, a_13, b_13, c_13);
                e_3 = t;
                t = SSLsetAnnotations(e_3, m_12);
              }
            }
          else
            {
              ATerm q_13 = NULL,s_13 = NULL,o_3 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  f_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_22);
              q_13 = t;
              t = f_22;
              t = h_92(t);
              s_13 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_13);
              o_3 = t;
              t = SSLsetAnnotations(o_3, q_13);
            }
        }
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm p_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_22);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_22 = ATgetArgument(t, 0);
            t = r_22;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_22 = ATgetArgument(t, 0);
                s_22 = ATgetArgument(t, 1);
                t_22 = ATgetArgument(t, 2);
                u_22 = ATgetArgument(t, 3);
                t = t_22;
                t = map_1_0(g_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_22 = ATgetArgument(t, 0);
                    s_22 = ATgetArgument(t, 1);
                    t_22 = ATgetArgument(t, 2);
                    u_22 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_22;
                t = map_1_0(i_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm e_23 = NULL;
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_23 = ATgetArgument(t, 0);
          {
            ATerm e_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_11);
      t = e_23;
    }
  else
    {
      t = c_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_23;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm u_23 = NULL;
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_23 = ATgetArgument(t, 0);
          {
            ATerm h_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_11);
      t = u_23;
    }
  else
    {
      t = f_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_23;
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
  ATerm w_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_24);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm i_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = i_11;
      {
        ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
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
                d_25 = ATgetArgument(t, 1);
                e_25 = ATgetArgument(t, 2);
                f_25 = ATgetArgument(t, 3);
                t = e_25;
                t = map_1_0(p_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_25 = ATgetArgument(t, 0);
                    d_25 = ATgetArgument(t, 1);
                    e_25 = ATgetArgument(t, 2);
                    f_25 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_25;
                t = map_1_0(q_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm t_25 = NULL;
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_25 = ATgetArgument(t, 0);
          {
            ATerm p_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_11);
      t = t_25;
    }
  else
    {
      t = m_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_25;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm c_26 = NULL;
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_26 = ATgetArgument(t, 0);
          {
            ATerm x_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_11);
      t = c_26;
    }
  else
    {
      t = s_11;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_24 = NULL,t_24 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_24 = ATgetArgument(t, 0);
      t = t_24;
      if(match_cons(t, sym_Rule_3))
        {
          j_24 = ATgetArgument(t, 0);
          {
            ATerm y_11 = ATgetArgument(t, 1);
          }
          {
            ATerm z_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_24;
      t = free_vars_3_0(j_2, l_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_24 = ATgetArgument(t, 0);
          {
            ATerm c_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_24;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm t_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_26);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm v_26 = NULL,w_26 = NULL,b_27 = NULL,c_27 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_26 = ATgetArgument(t, 0);
            t = v_26;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_26 = ATgetArgument(t, 0);
                w_26 = ATgetArgument(t, 1);
                b_27 = ATgetArgument(t, 2);
                c_27 = ATgetArgument(t, 3);
                t = b_27;
                t = map_1_0(t_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_26 = ATgetArgument(t, 0);
                    w_26 = ATgetArgument(t, 1);
                    b_27 = ATgetArgument(t, 2);
                    c_27 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_27;
                t = map_1_0(u_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm p_27 = NULL;
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_27 = ATgetArgument(t, 0);
          {
            ATerm h_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_12);
      t = p_27;
    }
  else
    {
      t = f_12;
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
ATerm u_2 (ATerm t)
{
  ATerm g_28 = NULL;
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_28 = ATgetArgument(t, 0);
          {
            ATerm k_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_12);
      t = g_28;
    }
  else
    {
      t = i_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_28;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm j_28 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_28);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
      t = n_28;
      t = y_5(o_28, u_28, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_28 = ATgetArgument(t, 0);
          u_28 = ATgetArgument(t, 1);
          v_28 = ATgetArgument(t, 2);
          t = u_28;
          t = map_1_0(z_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              o_28 = ATgetArgument(t, 0);
              u_28 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, o_28);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  o_28 = ATgetArgument(t, 0);
                  u_28 = ATgetArgument(t, 1);
                  v_28 = ATgetArgument(t, 2);
                  w_28 = ATgetArgument(t, 3);
                  t = u_28;
                  t = map_1_0(b_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_28 = ATgetArgument(t, 0);
                      u_28 = ATgetArgument(t, 1);
                      v_28 = ATgetArgument(t, 2);
                      w_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_28;
                  t = map_1_0(c_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm i_29 = NULL;
  ATerm l_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_29 = ATgetArgument(t, 0);
          {
            ATerm o_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_12);
      t = i_29;
    }
  else
    {
      t = l_12;
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
ATerm b_3 (ATerm t)
{
  ATerm n_30 = NULL;
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_30 = ATgetArgument(t, 0);
          {
            ATerm r_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_12);
      t = n_30;
    }
  else
    {
      t = p_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_30;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm g_31 = NULL;
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_31 = ATgetArgument(t, 0);
          {
            ATerm v_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_12);
      t = g_31;
    }
  else
    {
      t = t_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_31;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm w_12 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_12;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm x_12 = ATgetArgument(t, 0);
      ATerm y_12 = ATgetArgument(t, 1);
      ATerm z_12 = ATgetArgument(t, 2);
      ATerm d_13 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  r_26 = t;
  t = q_26;
  t = free_vars_3_0(r_2, s_2, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_26;
  t = free_vars_3_0(x_2, y_2, sboundin_3_0, t);
  t = filter_1_0(h_3, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_26;
  return(t);
}
ATerm partition_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm z_32 (ATerm t)
  {
    ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
    w_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_h_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_32 = ATgetFirst((ATermList) t);
            y_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,e_15 = NULL,z_3 = NULL;
              t = SSLgetAnnotations(w_32);
              x_14 = t;
              t = x_32;
              t = g_106(t);
              s_14 = t;
              t = (ATerm) ATinsert(CheckATermList(y_32), s_14);
              z_3 = t;
              t = SSLsetAnnotations(z_3, x_14);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_13 = ATgetFirst((ATermList) t);
                  v_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_14;
              t = z_32(t);
              u_14 = t;
              t = SSL_explode_term(u_14);
              if(match_cons(t, sym__2))
                {
                  ATerm l_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_13) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm m_13 = ATgetArgument(t, 1);
                    if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
                      {
                        w_14 = ATgetFirst((ATermList) m_13);
                        {
                          ATerm n_13 = (ATerm) ATgetNext((ATermList) m_13);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(u_14);
              if(match_cons(t, sym__2))
                {
                  ATerm o_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) o_13) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm p_13 = ATgetArgument(t, 1);
                    if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
                      {
                        ATerm r_13 = ATgetFirst((ATermList) p_13);
                        ATerm u_13 = (ATerm) ATgetNext((ATermList) p_13);
                        if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
                          {
                            e_15 = ATgetFirst((ATermList) u_13);
                            {
                              ATerm v_13 = (ATerm) ATgetNext((ATermList) u_13);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_14), s_14), e_15);
              ;
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
              {
                ATerm n_15 = NULL,o_15 = NULL,x_15 = NULL,y_15 = NULL,j_16 = NULL,a_4 = NULL;
                t = SSLgetAnnotations(w_32);
                y_15 = t;
                t = (ATerm) ATinsert(CheckATermList(y_32), x_32);
                a_4 = t;
                t = SSLsetAnnotations(a_4, y_15);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm w_13 = ATgetFirst((ATermList) t);
                    o_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_15;
                t = z_32(t);
                n_15 = t;
                t = SSL_explode_term(n_15);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm y_13 = ATgetArgument(t, 1);
                      if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
                        {
                          x_15 = ATgetFirst((ATermList) y_13);
                          {
                            ATerm z_13 = (ATerm) ATgetNext((ATermList) y_13);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(n_15);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_14 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_14) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm k_14 = ATgetArgument(t, 1);
                      if(((ATgetType(k_14) == AT_LIST) && !(ATisEmpty(k_14))))
                        {
                          ATerm l_14 = ATgetFirst((ATermList) k_14);
                          ATerm m_14 = (ATerm) ATgetNext((ATermList) k_14);
                          if(((ATgetType(m_14) == AT_LIST) && !(ATisEmpty(m_14))))
                            {
                              j_16 = ATgetFirst((ATermList) m_14);
                              {
                                ATerm o_14 = (ATerm) ATgetNext((ATermList) m_14);
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
                t = (ATerm) ATmakeAppl(sym__2, x_15, (ATerm) ATinsert(CheckATermList(j_16), x_32));
              }
            }
        }
      }
    return(t);
  }
  t = z_32(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
      g_33 = ATgetArgument(t, 2);
      h_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = term_r_14;
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, term_r_14);
  t = t_6(j_3, e_33, i_33, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_33, f_33, g_33, h_33);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm l_6 (ATerm z_19, ATerm y_19, ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  t = z_19;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      d_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_33;
  t = map_1_0(i_3, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, c_33, y_19), d_33);
  return(t);
}
ATerm m_6 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm q_29, ATerm p_29, ATerm t)
{
  t = y_101(t);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm j_33 = NULL;
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_29, j_33);
      t = x_101(t);
      return(t);
    }
    t = fetch_1_0(k_3, t);
    t = p_29;
  }
  return(t);
}
ATerm n_6 (ATerm u_101 (ATerm), ATerm m_29, ATerm l_29, ATerm t)
{
  ATerm b_34 (ATerm t)
  {
    ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
    w_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_33 = ATgetFirst((ATermList) t);
            y_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_33;
              {
                ATerm l_3 (ATerm t)
                {
                  t = l_29;
                  return(t);
                }
                t = m_6(u_101, l_3, x_33, y_33, t);
                t = b_34(t);
              }
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = t_14;
              {
                ATerm z_16 = NULL,m_17 = NULL,d_4 = NULL;
                t = SSLgetAnnotations(w_33);
                z_16 = t;
                t = y_33;
                t = b_34(t);
                m_17 = t;
                t = (ATerm) ATinsert(CheckATermList(m_17), x_33);
                d_4 = t;
                t = SSLsetAnnotations(d_4, z_16);
              }
            }
        }
      }
    return(t);
  }
  t = m_29;
  t = b_34(t);
  return(t);
}
ATerm genzip_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  ATerm j_34 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_97(t);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        {
          ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,g_4 = NULL;
          t = t_97(t);
          i_34 = t;
          if(match_cons(t, sym__2))
            {
              e_34 = ATgetArgument(t, 0);
              f_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_34);
          d_34 = t;
          t = e_34;
          t = v_97(t);
          g_34 = t;
          t = f_34;
          t = j_34(t);
          h_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_34, h_34);
          g_4 = t;
          t = SSLsetAnnotations(g_4, d_34);
          t = u_97(t);
        }
      }
    return(t);
  }
  t = j_34(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_13;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm i_35 = NULL,k_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_35 = ATgetFirst((ATermList) t);
      k_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_35, k_35);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_15 = ATgetArgument(t, 0);
      if(match_cons(b_15, sym__2))
        {
          l_35 = ATgetArgument(b_15, 0);
          m_35 = ATgetArgument(b_15, 1);
        }
      else
        _fail(t);
      {
        ATerm c_15 = ATgetArgument(t, 1);
        if(match_cons(c_15, sym__2))
          {
            n_35 = ATgetArgument(c_15, 0);
            o_35 = ATgetArgument(c_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_35), l_35), (ATerm) ATinsert(CheckATermList(o_35), m_35));
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  if(match_cons(t, sym__2))
    {
      t_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(u_3, t_35, u_35, t);
  return(t);
}
ATerm u_3 (ATerm t)
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
ATerm v_3 (ATerm t)
{
  ATerm z_35 = NULL;
  if(match_cons(t, sym__2))
    {
      z_35 = ATgetArgument(t, 0);
      if((z_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  w_34 = t;
  x_34 = t;
  t = SSL_explode_term(x_34);
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_34);
  o_34 = t;
  t = k_34;
  t = genzip_4_0(m_3, n_3, p_3, r_102, t);
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(m_34, n_34);
  v_34 = t;
  t = SSLsetAnnotations(v_34, o_34);
  t = s_102(t);
  if(match_cons(t, sym__2))
    {
      p_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_34;
  t = foldr_2_0(s_3, t_3, t);
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_34, u_34);
  t = n_6(v_3, s_34, u_34, t);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_34, t_34);
  return(t);
}
ATerm collect_split_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm h_36 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm d_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_103(t);
          ;
          LocalPopChoice(f_15);
        }
      else
        {
          t = d_15;
          {
            ATerm a_36 = NULL;
            a_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_36, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(h_36, x_3, t);
    return(t);
  }
  t = h_36(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      l_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(l_36, m_36, t);
  return(t);
}
ATerm r_6 (ATerm s_19, ATerm t_19, ATerm u_19, ATerm v_19, ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  t = v_19;
  t = collect_split_1_0(b_4, t);
  if(match_cons(t, sym__2))
    {
      i_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, s_19, t_19, u_19, i_36)));
  t = conc_0_0(t);
  return(t);
}
ATerm t_6 (ATerm u_105 (ATerm), ATerm g_35, ATerm e_35, ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  t = u_105(t);
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_36, g_35, e_35);
  t = g_7(n_36, g_35, e_35, t);
  {
    ATerm h_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_36 = NULL;
        t = term_k_15;
        t_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_36, term_k_15);
        t = f_7(n_36, t_36, t);
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = h_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_36 = ATgetFirst((ATermList) t);
        p_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_15;
    r_36 = t;
    t = (ATerm) ATinsert(CheckATermList(p_36), (ATerm) ATinsert(CheckATermList(o_36), g_35));
    s_36 = t;
    t = SSL_table_put(n_36, r_36, s_36);
    t = q_36;
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  v_36 = t;
  t = term_v_15;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_36, term_v_15);
  t = t_6(e_4, v_36, w_36, t);
  t = v_36;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_16), term_w_15);
  t = map_1_0(c_4, t);
  t = u_36;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm h_37 = NULL,l_37 = NULL,m_37 = NULL,o_37 = NULL,r_4 = NULL;
  o_37 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_37);
  h_37 = t;
  t = l_37;
  t = map_1_0(l_4, t);
  t = map_1_0(n_4, t);
  t = concat_0_0(t);
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_37);
  r_4 = t;
  t = SSLsetAnnotations(r_4, h_37);
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
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
      s_37 = ATgetArgument(t, 2);
      t_37 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = term_r_14;
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_37, term_r_14);
  t = t_6(m_4, q_37, u_37, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_37, r_37, s_37, t_37);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      z_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
      b_38 = ATgetArgument(t, 2);
      c_38 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = r_6(z_37, a_38, b_38, c_38, t);
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,b_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,b_5 = NULL,z_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  g_37 = t;
  if(match_cons(t, sym_Specification_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_37);
  x_36 = t;
  t = y_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_37 = ATgetFirst((ATermList) t);
      d_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_36);
  z_36 = t;
  t = d_37;
  t = Cons_2_0(f_4, h_4, t);
  e_37 = t;
  t = (ATerm) ATinsert(CheckATermList(e_37), b_37);
  z_4 = t;
  t = SSLsetAnnotations(z_4, z_36);
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_37);
  b_5 = t;
  t = SSLsetAnnotations(b_5, x_36);
  return(t);
}
ATerm w_6 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm d_38 = NULL;
  t = SSL_fputc(l_46, m_46);
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_38);
  return(t);
}
ATerm x_6 (ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm e_38 = NULL;
  t = SSL_write_term_to_stream_text(z_49, a_50);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_38);
  return(t);
}
ATerm z_6 (ATerm g_115 (ATerm), ATerm u_473, ATerm d_50, ATerm t)
{
  ATerm f_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_473, term_b_16);
  t = c_7(t);
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_38, d_50);
  t = g_115(t);
  t = fclose_0_0(t);
  t = d_50;
  return(t);
}
ATerm y_6 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm g_38 = NULL;
  t = SSL_write_term_to_stream_baf(v_49, w_49);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_38);
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
  ATerm o_18 = NULL,p_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_Stream_1))
        {
          o_18 = ATgetArgument(c_16, 0);
        }
      else
        _fail(t);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(o_18, p_18, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if(match_cons(e_16, sym_Stream_1))
        {
          i_19 = ATgetArgument(e_16, 0);
        }
      else
        _fail(t);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(i_19, j_19, t);
  b_19 = t;
  t = term_f_16;
  c_19 = t;
  t = b_19;
  if(match_cons(t, sym_Stream_1))
    {
      d_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, b_19);
  t = w_6(c_19, d_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,j_40 = NULL,k_40 = NULL,u_5 = NULL,i_5 = NULL;
  q_38 = t;
  if(match_cons(t, sym__2))
    {
      a_39 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_38);
  z_38 = t;
  t = a_39;
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((p_38 != NULL) && (p_38 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_4, t);
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = term_i_16;
        p_38 = t;
      }
    c_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_39, b_39);
    i_5 = t;
    t = SSLsetAnnotations(i_5, z_38);
    t = q_38;
    if(match_cons(t, sym__2))
      {
        u_38 = ATgetArgument(t, 0);
        v_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_38);
    t_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_38, (ATerm) ATmakeAppl(sym__2, not_null(p_38), v_38));
    u_5 = t;
    t = SSLsetAnnotations(u_5, t_38);
    y_38 = t;
    if(match_cons(t, sym__2))
      {
        j_40 = ATgetArgument(t, 0);
        k_40 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm n_16 = t;
      int o_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_18 = NULL,g_18 = NULL,h_18 = NULL,j_18 = NULL,n_18 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(y_38);
          c_18 = t;
          t = j_40;
          t = fetch_1_0(p_4, t);
          g_18 = t;
          t = k_40;
          if(match_cons(t, sym__2))
            {
              j_18 = ATgetArgument(t, 0);
              n_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_6(q_4, j_18, n_18, t);
          h_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_18, h_18);
          h_6 = t;
          t = SSLsetAnnotations(h_6, c_18);
          ;
          LocalPopChoice(o_16);
        }
      else
        {
          t = n_16;
          {
            ATerm v_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,u_6 = NULL;
            t = SSLgetAnnotations(y_38);
            v_18 = t;
            t = k_40;
            if(match_cons(t, sym__2))
              {
                z_18 = ATgetArgument(t, 0);
                a_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_6(s_4, z_18, a_19, t);
            y_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_40, y_18);
            u_6 = t;
            t = SSLsetAnnotations(u_6, v_18);
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
ATerm apply_strategy_1_0 (ATerm i_118 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  r_40 = t;
  t = dtime_0_0(t);
  t = r_40;
  t = i_118(t);
  q_40 = t;
  t = dtime_0_0(t);
  n_40 = t;
  t = q_40;
  if(match_cons(t, sym__2))
    {
      o_40 = ATgetArgument(t, 0);
      p_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_40), (ATerm) ATmakeAppl(sym_Runtime_1, n_40)), p_40);
  return(t);
}
ATerm l_41 (ATerm b_41, ATerm t)
{
  t = SSL_fclose(b_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  h_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_41 = ATgetArgument(t, 0);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_41);
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = l_41(h_41, t);
          }
      }
    }
  else
    {
      t = l_41(h_41, t);
    }
  return(t);
}
ATerm a_7 (ATerm b_50, ATerm t)
{
  t = SSL_read_term_from_stream(b_50);
  return(t);
}
ATerm b_7 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm r_41 = NULL;
  t = SSL_fopen(n_46, o_46);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_41 = NULL;
  t = SSL_stdin_stream();
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_41 = NULL;
  t = SSL_stdout_stream();
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_41 = NULL;
  t = SSL_stderr_stream();
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_41);
  return(t);
}
ATerm y_43 (ATerm e_42, ATerm t)
{
  ATerm i_42 = NULL;
  t = SSL_explode_term(e_42);
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
          {
            i_42 = ATgetFirst((ATermList) s_16);
            {
              ATerm t_16 = (ATerm) ATgetNext((ATermList) s_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm z_43 (ATerm o_42, ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,x_42 = NULL,l_7 = NULL;
  t = SSLgetAnnotations(q_42);
  t_42 = t;
  t = o_42;
  if(match_cons(t, sym_Path_1))
    {
      x_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_42, p_42);
  l_7 = t;
  t = SSLsetAnnotations(l_7, t_42);
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(r_42, s_42, t);
  return(t);
}
ATerm a_44 (ATerm c_43, ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm i_43 = NULL,k_43 = NULL,l_43 = NULL,r_43 = NULL,m_7 = NULL;
  t = SSLgetAnnotations(h_43);
  l_43 = t;
  t = SSL_is_string(c_43);
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_43, g_43);
  m_7 = t;
  t = SSLsetAnnotations(m_7, l_43);
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(i_43, k_43, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_43(t_43, t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            {
              ATerm a_17 = t;
              int d_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_43(u_43, v_43, t_43, t);
                  ;
                  LocalPopChoice(d_17);
                }
              else
                {
                  t = a_17;
                  t = a_44(u_43, v_43, t_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_43(t_43, t);
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_44 = NULL,i_44 = NULL,j_44 = NULL;
  ATerm f_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_44 = NULL;
      k_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_44, term_k_17);
      t = c_7(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = f_17;
      t = debug_1_0(t_4, t);
      _fail(t);
    }
  i_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(j_44, t);
  e_44 = t;
  t = i_44;
  t = fclose_0_0(t);
  t = e_44;
  return(t);
}
ATerm fetch_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm p_45 (ATerm t)
  {
    ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
    m_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_45 = ATgetFirst((ATermList) t);
        o_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_17 = t;
      int n_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_20 = NULL,u_20 = NULL,q_7 = NULL;
          t = SSLgetAnnotations(m_45);
          l_20 = t;
          t = n_45;
          t = r_99(t);
          u_20 = t;
          t = (ATerm) ATinsert(CheckATermList(o_45), u_20);
          q_7 = t;
          t = SSLsetAnnotations(q_7, l_20);
          ;
          LocalPopChoice(n_17);
        }
      else
        {
          t = l_17;
          {
            ATerm m_22 = NULL,a_23 = NULL,r_7 = NULL;
            t = SSLgetAnnotations(m_45);
            m_22 = t;
            t = o_45;
            t = p_45(t);
            a_23 = t;
            t = (ATerm) ATinsert(CheckATermList(a_23), n_45);
            r_7 = t;
            t = SSLsetAnnotations(r_7, m_22);
          }
        }
    }
    return(t);
  }
  t = p_45(t);
  return(t);
}
ATerm v_6 (ATerm b_44, ATerm c_44, ATerm t)
{
  t = SSL_strcat(b_44, c_44);
  return(t);
}
ATerm debug_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  s_45 = t;
  t = e_115(t);
  v_45 = t;
  t = term_o_8;
  w_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_45), v_45);
  x_45 = t;
  t = SSL_printnl(w_45, x_45);
  t = s_45;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_46 = NULL;
      e_46 = t;
      t = SSL_is_string(e_46);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = t_17;
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_4, t);
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            {
              ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
              x_46 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_46 = ATgetArgument(t, 0);
                  t = y_46;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_46 = ATgetArgument(t, 0);
                      t = y_46;
                      {
                        ATerm a_18 = t;
                        int b_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_18);
                          }
                        else
                          {
                            t = a_18;
                            t = debug_1_0(w_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_47 = NULL,g_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_46 = ATgetArgument(t, 0);
                          z_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_46;
                      t = eval_config_0_0(t);
                      e_47 = t;
                      t = z_46;
                      t = eval_config_0_0(t);
                      g_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_47, g_47);
                      t = v_6(e_47, g_47, t);
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
  ATerm m_47 = NULL,n_47 = NULL;
  m_47 = t;
  t = term_d_18;
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, m_47);
  t = f_7(n_47, m_47, t);
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_47 = NULL,p_47 = NULL;
        t = eval_config_0_0(t);
        o_47 = t;
        t = term_d_18;
        p_47 = t;
        t = SSL_table_put(p_47, m_47, o_47);
        t = o_47;
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm u_47 = NULL;
  u_47 = t;
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_47 = NULL;
        t = term_l_18;
        t = get_config_0_0(t);
        w_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_47, term_m_18);
        t = geq_0_0(t);
        t = u_47;
        t = r_116(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        t = u_47;
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_string(t, "-k"))
    {
      t = z_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_47;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  a_48 = t;
  t = SSL_string_to_int(a_48);
  b_48 = t;
  t = term_q_18;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, b_48);
  t = i_7(c_48, b_48, t);
  t = a_48;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, c_5, e_5, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm i_48 = NULL;
  i_48 = t;
  if(match_string(t, "-S"))
    {
      t = i_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_48;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL;
  t = term_l_18;
  j_48 = t;
  t = term_s_18;
  k_48 = t;
  t = term_u_18;
  t = i_7(j_48, k_48, t);
  t = term_w_18;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_x_18;
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
  ATerm l_48 = NULL,p_48 = NULL,s_48 = NULL;
  l_48 = t;
  t = SSL_string_to_int(l_48);
  p_48 = t;
  t = term_l_18;
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_18, p_48);
  t = i_7(s_48, p_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_48);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_e_19;
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
  ATerm v_48 = NULL,y_48 = NULL;
  t = term_f_19;
  v_48 = t;
  t = term_b_1;
  y_48 = t;
  t = term_g_19;
  t = i_7(v_48, y_48, t);
  t = term_h_19;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, g_5, h_5, t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_5, k_5, l_5, t);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = Option_3_0(m_5, n_5, o_5, t);
          }
      }
    }
  return(t);
}
ATerm i_7 (ATerm c_51, ATerm d_51, ATerm t)
{
  ATerm z_48 = NULL;
  t = term_d_18;
  z_48 = t;
  t = SSL_table_put(z_48, c_51, d_51);
  t = (ATerm) ATmakeAppl(sym__3, term_d_18, c_51, d_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_49 = NULL,k_49 = NULL,o_49 = NULL;
      t = term_b_1;
      t = i_0(t);
      g_49 = t;
      t = term_p_19;
      k_49 = t;
      t = term_q_19;
      o_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_19, term_q_19, g_49);
      t = g_7(k_49, o_49, g_49, t);
      _fail(t);
    }
  else
    {
      ATerm r_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_49 = ATgetFirst((ATermList) t);
          f_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_49;
      t = d_0(t);
      t = term_b_1;
      t = g_0(t);
      r_49 = t;
      t = (ATerm) ATinsert(CheckATermList(f_49), r_49);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm t_49 = NULL;
  t_49 = t;
  if(match_string(t, "-o"))
    {
      t = t_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_49;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm u_49 = NULL,x_49 = NULL;
  u_49 = t;
  t = term_r_19;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, u_49);
  t = i_7(x_49, u_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_49);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, s_5, t);
  return(t);
}
ATerm g_7 (ATerm r_35, ATerm s_35, ATerm q_35, ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_35, s_35);
  {
    ATerm x_19 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, r_35, s_35);
        t = f_7(r_35, s_35, t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATempty;
      }
    f_50 = t;
    t = (ATerm) ATinsert(CheckATermList(f_50), q_35);
    g_50 = t;
    t = SSL_table_put(r_35, s_35, g_50);
    t = e_50;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,r_50 = NULL,s_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_50 = NULL,w_50 = NULL,z_50 = NULL;
      t = term_b_1;
      t = p_0(t);
      v_50 = t;
      t = term_p_19;
      w_50 = t;
      t = term_q_19;
      z_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_19, term_q_19, v_50);
      t = g_7(w_50, z_50, v_50, t);
      _fail(t);
    }
  else
    {
      ATerm h_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_50 = ATgetFirst((ATermList) t);
          o_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_50 = ATgetFirst((ATermList) t);
          s_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_50;
      t = m_0(t);
      t = r_50;
      t = n_0(t);
      h_51 = t;
      t = (ATerm) ATinsert(CheckATermList(s_50), h_51);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm k_51 = NULL;
  k_51 = t;
  if(match_string(t, "-i"))
    {
      t = k_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_51;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  q_51 = t;
  t = term_d_20;
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_20, q_51);
  t = i_7(r_51, q_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_51);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_1;
  t = whoami_0_0(t);
  s_51 = t;
  t = term_o_8;
  u_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_20), s_51);
  v_51 = t;
  t = SSL_printnl(u_51, v_51);
  t = term_t_8;
  t_51 = t;
  t = SSL_exit(t_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm d_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_51;
      t = i_104(t);
    }
  else
    {
      ATerm c_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_51 = ATgetFirst((ATermList) t);
          z_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_51;
      t = foldr_2_0(i_104, j_104, t);
      c_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_51, c_52);
      t = j_104(t);
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
  t = term_s_18;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      f_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(f_24, g_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_52 = NULL,b_24 = NULL,c_24 = NULL;
  t = times_0_0(t);
  c_24 = t;
  t = SSL_explode_term(c_24);
  if(match_cons(t, sym__2))
    {
      ATerm j_20 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_24;
  t = foldr_2_0(d_6, f_6, t);
  f_52 = t;
  t = SSL_TicksToSeconds(f_52);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  if(match_cons(t, sym__2))
    {
      r_52 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_52;
        if((r_52 != t))
          {
            _fail(t);
          }
        t = q_52;
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = k_20;
        t = (ATerm) ATmakeAppl(sym__2, r_52, s_52);
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_52, s_52);
              ;
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
              t = SSL_gtr(r_52, s_52);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_52, s_52);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  ATerm a_53 = NULL;
  a_53 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_53 = NULL;
        t = term_l_18;
        t = get_config_0_0(t);
        c_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_53, term_t_8);
        t = geq_0_0(t);
        t = a_53;
        t = q_116(t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = a_53;
      }
  }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,h_53 = NULL,i_53 = NULL;
  t = run_time_0_0(t);
  e_53 = t;
  t = term_b_1;
  t = whoami_0_0(t);
  f_53 = t;
  t = term_o_8;
  h_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_20), e_53), term_r_20), f_53);
  i_53 = t;
  t = SSL_printnl(h_53, i_53);
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_20), e_53), term_r_20), f_53));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_18;
  j_53 = t;
  t = SSL_exit(j_53);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  s_53 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_53;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_53 = ATgetArgument(t, 0);
          {
            ATerm a_25 = NULL,u_7 = NULL;
            t = SSLgetAnnotations(s_53);
            a_25 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_53);
            u_7 = t;
            t = SSLsetAnnotations(u_7, a_25);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_53;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm t_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = t_20;
      t = fetch_1_0(i_6, t);
    }
  t = g_119(t);
  return(t);
}
ATerm map_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm i_54 (ATerm t)
  {
    ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
    f_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_54;
      }
    else
      {
        ATerm h_26 = NULL,k_26 = NULL,l_26 = NULL,z_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_54 = ATgetFirst((ATermList) t);
            h_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_54);
        h_26 = t;
        t = g_54;
        t = h_99(t);
        k_26 = t;
        t = h_54;
        t = i_54(t);
        l_26 = t;
        t = (ATerm) ATinsert(CheckATermList(l_26), k_26);
        z_7 = t;
        t = SSLsetAnnotations(z_7, h_26);
      }
    return(t);
  }
  t = i_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_54 = ATgetFirst((ATermList) t);
      m_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_54 = NULL,r_54 = NULL;
        ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_54)), not_null(r_54));
          return(t);
        }
        t = m_54;
        t = l_0(t);
        if(((q_54 != NULL) && (q_54 != t)))
          _fail(t);
        else
          q_54 = t;
        t = l_54;
        t = k_0(t);
        if(((r_54 != NULL) && (r_54 != t)))
          _fail(t);
        else
          r_54 = t;
        t = m_54;
        t = reverse_acc_2_0(k_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_1;
      t = l_0(t);
    }
  return(t);
}
ATerm f_7 (ATerm i_37, ATerm j_37, ATerm t)
{
  t = SSL_table_get(i_37, j_37);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,d_8 = NULL;
  x_54 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_54);
  v_54 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_54);
  d_8 = t;
  t = SSLsetAnnotations(d_8, v_54);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm z_54 = NULL;
  z_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_54), term_x_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL;
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      t = fetch_1_0(o_6, t);
    }
  t = term_a_21;
  t = echo_0_0(t);
  t = term_p_19;
  t_54 = t;
  t = term_q_19;
  u_54 = t;
  t = term_b_21;
  t = f_7(t_54, u_54, t);
  t = reverse_acc_2_0(_id, p_6, t);
  t = map_1_0(q_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  b_55 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_21 = ATgetFirst((ATermList) t);
                ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_55;
          }
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = (ATerm) ATinsert(ATempty, b_55);
      }
    c_55 = t;
    t = term_i_16;
    d_55 = t;
    t = SSL_printnl(d_55, c_55);
    t = b_55;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm h_55 = NULL,n_55 = NULL;
  t = term_i_21;
  h_55 = t;
  t = term_b_1;
  n_55 = t;
  t = term_j_21;
  t = i_7(h_55, n_55, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
  t = term_i_21;
  q_55 = t;
  t = term_b_1;
  r_55 = t;
  t = term_j_21;
  t = i_7(q_55, r_55, t);
  t = term_l_21;
  o_55 = t;
  t = term_b_1;
  p_55 = t;
  t = term_m_21;
  t = i_7(o_55, p_55, t);
  t = term_n_21;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, e_7, h_7, t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = Option_3_0(j_7, k_7, n_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,y_55 = NULL,f_8 = NULL;
  y_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_55 = ATgetFirst((ATermList) t);
      u_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_55);
  s_55 = t;
  t = t_55;
  t = d_77(t);
  v_55 = t;
  t = u_55;
  t = e_77(t);
  w_55 = t;
  t = (ATerm) ATinsert(CheckATermList(w_55), v_55);
  f_8 = t;
  t = SSLsetAnnotations(f_8, s_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_121 (ATerm), ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,i_56 = NULL,j_56 = NULL,h_8 = NULL;
  d_56 = t;
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_21;
        t = j_121(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
      }
    t = d_56;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_56 = ATgetFirst((ATermList) t);
        g_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_56);
    e_56 = t;
    t = term_g_20;
    j_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_20, f_56);
    t = i_7(j_56, f_56, t);
    t = g_56;
    {
      ATerm t_56 (ATerm t)
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_21 = t;
            int x_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_56 = NULL;
                m_56 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_56;
                ;
                LocalPopChoice(x_21);
              }
            else
              {
                t = w_21;
                t = j_121(t);
                t = Cons_2_0(_id, t_56, t);
              }
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm p_56 = NULL,q_56 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_56 = ATgetFirst((ATermList) t);
                  q_56 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_56), (ATerm) ATmakeAppl(sym_Undefined_1, p_56));
            }
          }
        return(t);
      }
      t = t_56(t);
      i_56 = t;
      t = (ATerm) ATinsert(CheckATermList(i_56), (ATerm) ATmakeAppl(sym_Program_1, f_56));
      h_8 = t;
      t = SSLsetAnnotations(h_8, e_56);
    }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm k_57 = NULL;
  k_57 = t;
  if(match_string(t, "--help"))
    {
      t = k_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_57;
        }
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  t = term_w_20;
  l_57 = t;
  t = term_b_1;
  m_57 = t;
  t = term_y_21;
  t = i_7(l_57, m_57, t);
  t = term_z_21;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm w_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_121 (ATerm), ATerm t)
{
  ATerm z_56 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  f_57 = t;
  t = term_p_19;
  h_57 = t;
  t = term_q_19;
  i_57 = t;
  t = (ATerm) ATempty;
  j_57 = t;
  t = SSL_table_put(h_57, i_57, j_57);
  t = f_57;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_121(t);
          ;
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          {
            ATerm i_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_7, t_7, v_7, t);
                ;
                LocalPopChoice(j_22);
              }
            else
              {
                t = i_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_7, t);
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_57 = NULL;
          t_57 = t;
          {
            ATerm n_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_26 = NULL;
                t = t_57;
                {
                  ATerm q_22 = t;
                  int v_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_22);
                    }
                  else
                    {
                      t = q_22;
                      t = fetch_1_0(w_7, t);
                    }
                  t = t_57;
                  t = default_system_usage_0_0(t);
                  t = term_s_18;
                  y_26 = t;
                  t = SSL_exit(y_26);
                }
                ;
                LocalPopChoice(o_22);
              }
            else
              {
                t = n_22;
                {
                  ATerm k_27 = NULL;
                  t = term_i_21;
                  t = get_config_0_0(t);
                  t = t_57;
                  t = default_system_about_0_0(t);
                  t = term_s_18;
                  k_27 = t;
                  t = SSL_exit(k_27);
                }
              }
          }
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
                ATerm x_7 (ATerm t)
                {
                  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,m_8 = NULL;
                  z_57 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_57 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_57);
                  x_57 = t;
                  t = y_57;
                  if(((z_56 != NULL) && (z_56 != t)))
                    _fail(t);
                  else
                    z_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_57);
                  m_8 = t;
                  t = SSLsetAnnotations(m_8, x_57);
                  return(t);
                }
                t = fetch_1_0(x_7, t);
                t = term_o_8;
                v_57 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_56)), term_y_22);
                w_57 = t;
                t = SSL_printnl(v_57, w_57);
                t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_56)), term_y_22));
                t = default_system_usage_0_0(t);
                t = term_t_8;
                u_57 = t;
                t = SSL_exit(u_57);
                ;
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
              }
          }
        }
      e_57 = t;
      t = term_p_19;
      g_57 = t;
      t = SSL_table_destroy(g_57);
      t = e_57;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_119 (ATerm), ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm l_119 (ATerm), ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  t = parse_options_1_0(i_119, t);
  e_58 = t;
  t = term_z_22;
  h_58 = t;
  t = SSL_table_create(h_58);
  t = term_z_22;
  f_58 = t;
  t = term_b_23;
  g_58 = t;
  t = SSL_table_put(f_58, g_58, e_58);
  t = e_58;
  t = k_119(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_119, t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_119(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = if_verbose2_1_0(k_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL;
  t = term_h_23;
  i_58 = t;
  t = term_b_1;
  j_58 = t;
  t = term_i_23;
  t = i_7(i_58, j_58, t);
  t = term_j_23;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL;
  k_58 = t;
  t = term_g_20;
  t = get_config_0_0(t);
  l_58 = t;
  t = term_o_8;
  m_58 = t;
  t = (ATerm) ATinsert(ATempty, l_58);
  n_58 = t;
  t = SSL_printnl(m_58, n_58);
  t = k_58;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_118(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              {
                ATerm p_23 = t;
                int q_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_23);
                  }
                else
                  {
                    t = p_23;
                    {
                      ATerm r_23 = t;
                      int s_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(g_8, i_8, j_8, t);
                          ;
                          LocalPopChoice(s_23);
                        }
                      else
                        {
                          t = r_23;
                          {
                            ATerm t_23 = t;
                            int v_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_23);
                              }
                            else
                              {
                                t = t_23;
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
    ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
    p_58 = t;
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_58 != NULL) && (o_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_8, t);
          ;
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          t = term_y_23;
          o_58 = t;
        }
      t = not_null(o_58);
      t = ReadFromFile_0_0(t);
      q_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
      t = apply_strategy_1_0(r_118, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_8, t_118, c_8, e_8, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,s_8 = NULL;
  v_58 = t;
  if(match_cons(t, sym__2))
    {
      s_58 = ATgetArgument(t, 0);
      t_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_58);
  r_58 = t;
  t = t_58;
  t = lift_definitions_0_0(t);
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_58, u_58);
  s_8 = t;
  t = SSLsetAnnotations(s_8, r_58);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(n_8, _fail, default_usage_0_0, t);
  return(t);
}

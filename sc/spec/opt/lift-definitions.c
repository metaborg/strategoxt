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
ATerm term_z_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
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
ATerm term_b_1;
void init_constant_terms (void)
{
  ATprotect(&(term_b_1));
  term_b_1 = (ATerm) ATmakeAppl(sym__0);
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
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_b_1);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_v_19);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_b_1);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_b_1);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_b_1);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_b_1);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm m_2 (ATerm z_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_5 (ATerm a_36, ATerm b_36, ATerm);
ATerm TopLevel_0_0 (ATerm);
ATerm filter_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm y_5 (ATerm c_21, ATerm b_21, ATerm);
ATerm foldr_3_0 (ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm);
ATerm e_6 (ATerm j_101 (ATerm), ATerm j_29, ATerm i_29, ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm i_6 (ATerm k_596, ATerm p_596, ATerm a_57, ATerm);
ATerm while_not_2_0 (ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm);
ATerm for_3_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
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
ATerm free_vars_3_0 (ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tboundin_3_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm);
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
ATerm partition_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_6 (ATerm y_19, ATerm x_19, ATerm);
ATerm l_6 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm p_29, ATerm o_29, ATerm);
ATerm m_6 (ATerm o_101 (ATerm), ATerm l_29, ATerm k_29, ATerm);
ATerm genzip_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm CollectSplit_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm p_6 (ATerm r_19, ATerm s_19, ATerm t_19, ATerm u_19, ATerm);
ATerm r_6 (ATerm o_105 (ATerm), ATerm e_35, ATerm c_35, ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm declare_standard_strategies_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm u_6 (ATerm i_46, ATerm j_46, ATerm);
ATerm v_6 (ATerm w_49, ATerm x_49, ATerm);
ATerm x_6 (ATerm a_115 (ATerm), ATerm m_469, ATerm a_50, ATerm);
ATerm w_6 (ATerm s_49, ATerm t_49, ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm p_41 (ATerm c_41, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_6 (ATerm y_49, ATerm);
ATerm z_6 (ATerm k_46, ATerm l_46, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_43 (ATerm g_42, ATerm);
ATerm b_44 (ATerm n_42, ATerm o_42, ATerm p_42, ATerm);
ATerm f_44 (ATerm e_43, ATerm f_43, ATerm h_43, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm t_6 (ATerm y_43, ATerm z_43, ATerm);
ATerm debug_1_0 (ATerm y_114 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_116 (ATerm), ATerm);
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
ATerm f_7 (ATerm z_50, ATerm a_51, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_7 (ATerm p_35, ATerm q_35, ATerm n_35, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_7 (ATerm n_33, ATerm p_33, ATerm);
ATerm foldr_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_116 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm need_help_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm c_7 (ATerm g_37, ATerm h_37, ATerm);
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
ATerm Cons_2_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_121 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm parse_options_1_0 (ATerm c_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm iowrap_3_0 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,j_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_b_1;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_n_8;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), b_0), term_o_8);
  o_0 = t;
  t = SSL_printnl(j_0, o_0);
  t = term_s_8;
  f_0 = t;
  t = SSL_exit(f_0);
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
          if(((v_0 != NULL) && (v_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
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
ATerm at_end_1_0 (ATerm r_99 (ATerm), ATerm t)
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
        t = r_99(t);
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
            ATerm q_0 (ATerm t)
            {
              t = f_2;
              return(t);
            }
            t = e_2;
            t = at_end_1_0(q_0, t);
            ;
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
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
ATerm t_5 (ATerm a_36, ATerm b_36, ATerm t)
{
  ATerm n_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_36, b_36);
  t = c_7(a_36, b_36, t);
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
        t = term_b_1;
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
          t = term_b_1;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm s_105 (ATerm), ATerm t)
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
            t = s_105(t);
            f_3 = t;
            t = k_4;
            t = filter_1_0(s_105, t);
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
            t = filter_1_0(s_105, t);
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t)
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
        t = f_92(t);
        w_3 = t;
        t = n_10;
        t = f_92(t);
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
            t = h_92(t);
            y_4 = t;
            t = n_10;
            t = h_92(t);
            a_5 = t;
            t = j_10;
            t = f_92(t);
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
                t = h_92(t);
                z_5 = t;
                t = n_10;
                t = h_92(t);
                a_6 = t;
                t = j_10;
                t = h_92(t);
                b_6 = t;
                t = k_10;
                t = f_92(t);
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
              t = h_92(t);
              x_7 = t;
              t = n_10;
              t = f_92(t);
              z_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, x_7, z_7);
              n_1 = t;
              t = SSLsetAnnotations(n_1, m_7);
            }
        }
    }
  return(t);
}
ATerm s_0 (ATerm t)
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
ATerm y_5 (ATerm c_21, ATerm b_21, ATerm t)
{
  t = c_21;
  t = map_1_0(s_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,n_11 = NULL,q_11 = NULL;
  j_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_11;
      t = e_104(t);
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
      t = g_104(t);
      z_11 = t;
      t = q_11;
      t = foldr_3_0(e_104, f_104, g_104, t);
      a_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_11, a_12);
      t = f_104(t);
    }
  return(t);
}
ATerm e_6 (ATerm j_101 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
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
                ATerm u_0 (ATerm t)
                {
                  t = i_29;
                  return(t);
                }
                t = l_6(j_101, u_0, e_13, f_13, t);
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
  t = j_29;
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
ATerm z_0 (ATerm t)
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
ATerm a_1 (ATerm t)
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
ATerm i_6 (ATerm k_596, ATerm p_596, ATerm a_57, ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  t = SSL_explode_term(p_596);
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_596);
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
  t = genzip_4_0(x_0, z_0, a_1, _id, t);
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_14, a_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm t)
{
  ATerm p_14 (ATerm t)
  {
    ATerm d_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_110(t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = d_10;
        t = t_110(t);
        t = p_14(t);
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm for_3_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm t)
{
  t = v_110(t);
  t = while_not_2_0(w_110, x_110, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_15);
  return(t);
}
ATerm d_1 (ATerm t)
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
      t = for_3_0(c_1, d_1, f_1, t);
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
ATerm free_vars_3_0 (ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_18 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_108(t);
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
              t_17 = t;
              t = i_108(t);
              u_17 = t;
              t = t_17;
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm w_17 = NULL;
                  t = s_18(t);
                  w_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_17, u_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_108(i_1, s_18, k_1, t);
                if(((g_9 != NULL) && (g_9 != t)))
                  _fail(t);
                else
                  g_9 = t;
                t = SSL_explode_term(g_9);
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
                t = e_9;
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
ATerm tboundin_3_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  d_22 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_22 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
      {
        ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(d_22);
        a_10 = t;
        t = e_22;
        t = d_92(t);
        e_10 = t;
        t = a_22;
        t = b_92(t);
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
          e_22 = ATgetArgument(t, 0);
          a_22 = ATgetArgument(t, 1);
          b_22 = ATgetArgument(t, 2);
          c_22 = ATgetArgument(t, 3);
          {
            ATerm i_11 = NULL,p_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(d_22);
            i_11 = t;
            t = e_22;
            t = d_92(t);
            p_11 = t;
            t = a_22;
            t = d_92(t);
            t_11 = t;
            t = b_22;
            t = d_92(t);
            u_11 = t;
            t = c_22;
            t = b_92(t);
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
              e_22 = ATgetArgument(t, 0);
              a_22 = ATgetArgument(t, 1);
              b_22 = ATgetArgument(t, 2);
              c_22 = ATgetArgument(t, 3);
              {
                ATerm l_12 = NULL,r_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,e_3 = NULL;
                t = SSLgetAnnotations(d_22);
                l_12 = t;
                t = e_22;
                t = d_92(t);
                r_12 = t;
                t = a_22;
                t = d_92(t);
                z_12 = t;
                t = b_22;
                t = d_92(t);
                a_13 = t;
                t = c_22;
                t = b_92(t);
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
                  e_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_22);
              p_13 = t;
              t = e_22;
              t = b_92(t);
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
  ATerm o_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_22);
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
        ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_22 = ATgetArgument(t, 0);
            t = q_22;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_22 = ATgetArgument(t, 0);
                r_22 = ATgetArgument(t, 1);
                s_22 = ATgetArgument(t, 2);
                t_22 = ATgetArgument(t, 3);
                t = s_22;
                t = map_1_0(g_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_22 = ATgetArgument(t, 0);
                    r_22 = ATgetArgument(t, 1);
                    s_22 = ATgetArgument(t, 2);
                    t_22 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_22;
                t = map_1_0(i_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm j_23 = NULL;
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_23 = ATgetArgument(t, 0);
          {
            ATerm d_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_11);
      t = j_23;
    }
  else
    {
      t = b_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_23;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm t_23 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_23 = ATgetArgument(t, 0);
          {
            ATerm g_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_11);
      t = t_23;
    }
  else
    {
      t = e_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_23;
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
  ATerm z_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_24);
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
        ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_25 = ATgetArgument(t, 0);
            t = b_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_25 = ATgetArgument(t, 0);
                c_25 = ATgetArgument(t, 1);
                d_25 = ATgetArgument(t, 2);
                e_25 = ATgetArgument(t, 3);
                t = d_25;
                t = map_1_0(p_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_25 = ATgetArgument(t, 0);
                    c_25 = ATgetArgument(t, 1);
                    d_25 = ATgetArgument(t, 2);
                    e_25 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_25;
                t = map_1_0(q_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm s_25 = NULL;
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_25 = ATgetArgument(t, 0);
          {
            ATerm o_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_11);
      t = s_25;
    }
  else
    {
      t = l_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_25;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm b_26 = NULL;
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_26 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_11);
      t = b_26;
    }
  else
    {
      t = r_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_26;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      s_24 = ATgetArgument(t, 0);
      t = s_24;
      if(match_cons(t, sym_Rule_3))
        {
          n_24 = ATgetArgument(t, 0);
          {
            ATerm x_11 = ATgetArgument(t, 1);
          }
          {
            ATerm y_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_24;
      t = free_vars_3_0(j_2, l_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          s_24 = ATgetArgument(t, 0);
          {
            ATerm b_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_24;
    }
  return(t);
}
ATerm r_2 (ATerm t)
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
        ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_26 = ATgetArgument(t, 0);
            t = y_26;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_26 = ATgetArgument(t, 0);
                z_26 = ATgetArgument(t, 1);
                a_27 = ATgetArgument(t, 2);
                b_27 = ATgetArgument(t, 3);
                t = a_27;
                t = map_1_0(t_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_26 = ATgetArgument(t, 0);
                    z_26 = ATgetArgument(t, 1);
                    a_27 = ATgetArgument(t, 2);
                    b_27 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_27;
                t = map_1_0(u_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm u_27 = NULL;
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_27 = ATgetArgument(t, 0);
          {
            ATerm g_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_12);
      t = u_27;
    }
  else
    {
      t = e_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_27;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm f_28 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_28 = ATgetArgument(t, 0);
          {
            ATerm j_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
      t = f_28;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_28;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm l_28 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_28);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  r_28 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_28 = ATgetArgument(t, 0);
      t_28 = ATgetArgument(t, 1);
      t = r_28;
      t = y_5(s_28, t_28, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_28 = ATgetArgument(t, 0);
          t_28 = ATgetArgument(t, 1);
          u_28 = ATgetArgument(t, 2);
          t = t_28;
          t = map_1_0(z_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              s_28 = ATgetArgument(t, 0);
              t_28 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, s_28);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  s_28 = ATgetArgument(t, 0);
                  t_28 = ATgetArgument(t, 1);
                  u_28 = ATgetArgument(t, 2);
                  v_28 = ATgetArgument(t, 3);
                  t = t_28;
                  t = map_1_0(b_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_28 = ATgetArgument(t, 0);
                      t_28 = ATgetArgument(t, 1);
                      u_28 = ATgetArgument(t, 2);
                      v_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_28;
                  t = map_1_0(c_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm u_29 = NULL;
  ATerm k_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_29 = ATgetArgument(t, 0);
          {
            ATerm n_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_12);
      t = u_29;
    }
  else
    {
      t = k_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_29;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm s_30 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_30 = ATgetArgument(t, 0);
          {
            ATerm q_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_12);
      t = s_30;
    }
  else
    {
      t = o_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_30;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm h_31 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_31 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_12);
      t = h_31;
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_31;
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
  ATerm q_26 = NULL,r_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      ATerm x_12 = ATgetArgument(t, 1);
      ATerm y_12 = ATgetArgument(t, 2);
      ATerm c_13 = ATgetArgument(t, 3);
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
ATerm partition_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm y_32 (ATerm t)
  {
    ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
    v_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_g_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_32 = ATgetFirst((ATermList) t);
            x_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,d_15 = NULL,z_3 = NULL;
              t = SSLgetAnnotations(v_32);
              w_14 = t;
              t = w_32;
              t = a_106(t);
              r_14 = t;
              t = (ATerm) ATinsert(CheckATermList(x_32), r_14);
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
              t = y_32(t);
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
                t = SSLgetAnnotations(v_32);
                x_15 = t;
                t = (ATerm) ATinsert(CheckATermList(x_32), w_32);
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
                t = y_32(t);
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
                t = (ATerm) ATmakeAppl(sym__2, w_15, (ATerm) ATinsert(CheckATermList(i_16), w_32));
              }
            }
        }
      }
    return(t);
  }
  t = y_32(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      d_33 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
      f_33 = ATgetArgument(t, 2);
      g_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = term_q_14;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_33, term_q_14);
  t = r_6(j_3, d_33, h_33, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_33, e_33, f_33, g_33);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm k_6 (ATerm y_19, ATerm x_19, ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  t = y_19;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      c_33 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_33;
  t = map_1_0(i_3, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, b_33, x_19), c_33);
  return(t);
}
ATerm l_6 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm p_29, ATerm o_29, ATerm t)
{
  t = s_101(t);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm i_33 = NULL;
      i_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_29, i_33);
      t = r_101(t);
      return(t);
    }
    t = fetch_1_0(k_3, t);
    t = o_29;
  }
  return(t);
}
ATerm m_6 (ATerm o_101 (ATerm), ATerm l_29, ATerm k_29, ATerm t)
{
  ATerm a_34 (ATerm t)
  {
    ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
    v_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_33 = ATgetFirst((ATermList) t);
            x_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_33;
              {
                ATerm l_3 (ATerm t)
                {
                  t = k_29;
                  return(t);
                }
                t = l_6(o_101, l_3, w_33, x_33, t);
                t = a_34(t);
              }
              ;
              LocalPopChoice(x_14);
            }
          else
            {
              t = s_14;
              {
                ATerm w_16 = NULL,j_17 = NULL,d_4 = NULL;
                t = SSLgetAnnotations(v_33);
                w_16 = t;
                t = x_33;
                t = a_34(t);
                j_17 = t;
                t = (ATerm) ATinsert(CheckATermList(j_17), w_33);
                d_4 = t;
                t = SSLsetAnnotations(d_4, w_16);
              }
            }
        }
      }
    return(t);
  }
  t = l_29;
  t = a_34(t);
  return(t);
}
ATerm genzip_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm i_34 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_97(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,g_4 = NULL;
          t = n_97(t);
          h_34 = t;
          if(match_cons(t, sym__2))
            {
              d_34 = ATgetArgument(t, 0);
              e_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_34);
          c_34 = t;
          t = d_34;
          t = p_97(t);
          f_34 = t;
          t = e_34;
          t = i_34(t);
          g_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_34, g_34);
          g_4 = t;
          t = SSLsetAnnotations(g_4, c_34);
          t = o_97(t);
        }
      }
    return(t);
  }
  t = i_34(t);
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
  ATerm i_35 = NULL,j_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_35 = ATgetFirst((ATermList) t);
      j_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_35, j_35);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,o_35 = NULL,r_35 = NULL;
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
            o_35 = ATgetArgument(b_15, 0);
            r_35 = ATgetArgument(b_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_35), k_35), (ATerm) ATinsert(CheckATermList(r_35), l_35));
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm u_35 = NULL,w_35 = NULL;
  if(match_cons(t, sym__2))
    {
      u_35 = ATgetArgument(t, 0);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(u_3, u_35, w_35, t);
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
  ATerm y_35 = NULL;
  if(match_cons(t, sym__2))
    {
      y_35 = ATgetArgument(t, 0);
      if((y_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,a_35 = NULL,b_35 = NULL;
  a_35 = t;
  b_35 = t;
  t = SSL_explode_term(b_35);
  if(match_cons(t, sym__2))
    {
      l_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_35);
  p_34 = t;
  t = j_34;
  t = genzip_4_0(m_3, n_3, p_3, l_102, t);
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(l_34, m_34);
  u_34 = t;
  t = SSLsetAnnotations(u_34, p_34);
  t = m_102(t);
  if(match_cons(t, sym__2))
    {
      q_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_34;
  t = foldr_2_0(s_3, t_3, t);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_34, t_34);
  t = m_6(v_3, r_34, t_34, t);
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_34, s_34);
  return(t);
}
ATerm collect_split_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm g_36 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm c_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_102(t);
          ;
          LocalPopChoice(e_15);
        }
      else
        {
          t = c_15;
          {
            ATerm e_36 = NULL;
            e_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_36, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(g_36, x_3, t);
    return(t);
  }
  t = g_36(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(k_36, l_36, t);
  return(t);
}
ATerm p_6 (ATerm r_19, ATerm s_19, ATerm t_19, ATerm u_19, ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL;
  t = u_19;
  t = collect_split_1_0(b_4, t);
  if(match_cons(t, sym__2))
    {
      h_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, r_19, s_19, t_19, h_36)));
  t = conc_0_0(t);
  return(t);
}
ATerm r_6 (ATerm o_105 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  t = o_105(t);
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_36, e_35, c_35);
  t = d_7(m_36, e_35, c_35, t);
  {
    ATerm g_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_36 = NULL;
        t = term_j_15;
        s_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_36, term_j_15);
        t = c_7(m_36, s_36, t);
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
        n_36 = ATgetFirst((ATermList) t);
        o_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_15;
    q_36 = t;
    t = (ATerm) ATinsert(CheckATermList(o_36), (ATerm) ATinsert(CheckATermList(n_36), e_35));
    r_36 = t;
    t = SSL_table_put(m_36, q_36, r_36);
    t = p_36;
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  u_36 = t;
  t = term_u_15;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_36, term_u_15);
  t = r_6(e_4, u_36, v_36, t);
  t = u_36;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_15), term_v_15);
  t = map_1_0(c_4, t);
  t = t_36;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm j_37 = NULL,l_37 = NULL,m_37 = NULL,o_37 = NULL,r_4 = NULL;
  o_37 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_37);
  j_37 = t;
  t = l_37;
  t = map_1_0(l_4, t);
  t = map_1_0(n_4, t);
  t = concat_0_0(t);
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_37);
  r_4 = t;
  t = SSLsetAnnotations(r_4, j_37);
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
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,w_37 = NULL,x_37 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
      r_37 = ATgetArgument(t, 2);
      w_37 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = term_q_14;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_37, term_q_14);
  t = r_6(m_4, p_37, x_37, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_37, q_37, r_37, w_37);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
      a_38 = ATgetArgument(t, 2);
      b_38 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_6(y_37, z_37, a_38, b_38, t);
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm w_36 = NULL,y_36 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,i_37 = NULL,b_5 = NULL,z_4 = NULL;
  t = declare_standard_strategies_0_0(t);
  i_37 = t;
  if(match_cons(t, sym_Specification_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_37);
  w_36 = t;
  t = y_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_37 = ATgetFirst((ATermList) t);
      d_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_36);
  b_37 = t;
  t = d_37;
  t = Cons_2_0(f_4, h_4, t);
  e_37 = t;
  t = (ATerm) ATinsert(CheckATermList(e_37), c_37);
  z_4 = t;
  t = SSLsetAnnotations(z_4, b_37);
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_37);
  b_5 = t;
  t = SSLsetAnnotations(b_5, w_36);
  return(t);
}
ATerm u_6 (ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm c_38 = NULL;
  t = SSL_fputc(i_46, j_46);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_38);
  return(t);
}
ATerm v_6 (ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm d_38 = NULL;
  t = SSL_write_term_to_stream_text(w_49, x_49);
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_38);
  return(t);
}
ATerm x_6 (ATerm a_115 (ATerm), ATerm m_469, ATerm a_50, ATerm t)
{
  ATerm e_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_469, term_a_16);
  t = open_stream_0_0(t);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_38, a_50);
  t = a_115(t);
  t = fclose_0_0(t);
  t = a_50;
  return(t);
}
ATerm w_6 (ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm f_38 = NULL;
  t = SSL_write_term_to_stream_baf(s_49, t_49);
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_38);
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
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,u_38 = NULL,v_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,c_39 = NULL,i_40 = NULL,j_40 = NULL,u_5 = NULL,i_5 = NULL;
  r_38 = t;
  if(match_cons(t, sym__2))
    {
      z_38 = ATgetArgument(t, 0);
      a_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_38);
  y_38 = t;
  t = z_38;
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_38 != NULL) && (q_38 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_38 = ATgetArgument(t, 0);
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
        q_38 = t;
      }
    if(((c_39 != NULL) && (c_39 != t)))
      _fail(t);
    else
      c_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_39, a_39);
    if(((i_5 != NULL) && (i_5 != t)))
      _fail(t);
    else
      i_5 = t;
    t = SSLsetAnnotations(i_5, y_38);
    t = r_38;
    if(match_cons(t, sym__2))
      {
        if(((u_38 != NULL) && (u_38 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_38 = ATgetArgument(t, 0);
        if(((v_38 != NULL) && (v_38 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          v_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_38);
    if(((s_38 != NULL) && (s_38 != t)))
      _fail(t);
    else
      s_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_38, (ATerm) ATmakeAppl(sym__2, not_null(q_38), v_38));
    if(((u_5 != NULL) && (u_5 != t)))
      _fail(t);
    else
      u_5 = t;
    t = SSLsetAnnotations(u_5, s_38);
    if(((x_38 != NULL) && (x_38 != t)))
      _fail(t);
    else
      x_38 = t;
    if(match_cons(t, sym__2))
      {
        if(((i_40 != NULL) && (i_40 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          i_40 = ATgetArgument(t, 0);
        if(((j_40 != NULL) && (j_40 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          j_40 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_17 = NULL,f_18 = NULL,g_18 = NULL,i_18 = NULL,m_18 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(x_38);
          z_17 = t;
          t = i_40;
          t = fetch_1_0(p_4, t);
          f_18 = t;
          t = j_40;
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
            t = SSLgetAnnotations(x_38);
            u_18 = t;
            t = j_40;
            if(match_cons(t, sym__2))
              {
                y_18 = ATgetArgument(t, 0);
                z_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_6(s_4, y_18, z_18, t);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_40, x_18);
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
ATerm apply_strategy_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  q_40 = t;
  t = dtime_0_0(t);
  t = q_40;
  t = c_118(t);
  p_40 = t;
  t = dtime_0_0(t);
  m_40 = t;
  t = p_40;
  if(match_cons(t, sym__2))
    {
      n_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_40), (ATerm) ATmakeAppl(sym_Runtime_1, m_40)), o_40);
  return(t);
}
ATerm p_41 (ATerm c_41, ATerm t)
{
  t = SSL_fclose(c_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  i_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_41 = ATgetArgument(t, 0);
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_41);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            t = p_41(i_41, t);
          }
      }
    }
  else
    {
      t = p_41(i_41, t);
    }
  return(t);
}
ATerm y_6 (ATerm y_49, ATerm t)
{
  t = SSL_read_term_from_stream(y_49);
  return(t);
}
ATerm z_6 (ATerm k_46, ATerm l_46, ATerm t)
{
  ATerm s_41 = NULL;
  t = SSL_fopen(k_46, l_46);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_41 = NULL;
  t = SSL_stdin_stream();
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_stdout_stream();
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_41 = NULL;
  t = SSL_stderr_stream();
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_41);
  return(t);
}
ATerm x_43 (ATerm g_42, ATerm t)
{
  ATerm h_42 = NULL;
  t = SSL_explode_term(g_42);
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_16 = ATgetArgument(t, 1);
        if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
          {
            h_42 = ATgetFirst((ATermList) r_16);
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
  t = h_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_44 (ATerm n_42, ATerm o_42, ATerm p_42, ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,z_42 = NULL,k_7 = NULL;
  t = SSLgetAnnotations(p_42);
  s_42 = t;
  t = n_42;
  if(match_cons(t, sym_Path_1))
    {
      z_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_42, o_42);
  k_7 = t;
  t = SSLsetAnnotations(k_7, s_42);
  if(match_cons(t, sym__2))
    {
      q_42 = ATgetArgument(t, 0);
      r_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(q_42, r_42, t);
  return(t);
}
ATerm f_44 (ATerm e_43, ATerm f_43, ATerm h_43, ATerm t)
{
  ATerm i_43 = NULL,l_43 = NULL,n_43 = NULL,q_43 = NULL,l_7 = NULL;
  t = SSLgetAnnotations(h_43);
  n_43 = t;
  t = SSL_is_string(e_43);
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_43, f_43);
  l_7 = t;
  t = SSLsetAnnotations(l_7, n_43);
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(i_43, l_43, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm s_43 = NULL,v_43 = NULL,w_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      ATerm v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  s_43 = t;
  if(match_cons(t, sym__2))
    {
      v_43 = ATgetArgument(t, 0);
      w_43 = ATgetArgument(t, 1);
      {
        ATerm x_16 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_43(s_43, t);
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
                  t = b_44(v_43, w_43, s_43, t);
                  ;
                  LocalPopChoice(e_17);
                }
              else
                {
                  t = d_17;
                  t = f_44(v_43, w_43, s_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_43(s_43, t);
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
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_44 = NULL;
      j_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_44, term_m_17);
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
  h_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(i_44, t);
  g_44 = t;
  t = h_44;
  t = fclose_0_0(t);
  t = g_44;
  return(t);
}
ATerm fetch_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm o_45 (ATerm t)
  {
    ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
    l_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_45 = ATgetFirst((ATermList) t);
        n_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_17 = t;
      int o_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_20 = NULL,r_20 = NULL,p_7 = NULL;
          t = SSLgetAnnotations(l_45);
          k_20 = t;
          t = m_45;
          t = l_99(t);
          r_20 = t;
          t = (ATerm) ATinsert(CheckATermList(n_45), r_20);
          p_7 = t;
          t = SSLsetAnnotations(p_7, k_20);
          ;
          LocalPopChoice(o_17);
        }
      else
        {
          t = n_17;
          {
            ATerm l_22 = NULL,x_22 = NULL,q_7 = NULL;
            t = SSLgetAnnotations(l_45);
            l_22 = t;
            t = n_45;
            t = o_45(t);
            x_22 = t;
            t = (ATerm) ATinsert(CheckATermList(x_22), m_45);
            q_7 = t;
            t = SSLsetAnnotations(q_7, l_22);
          }
        }
    }
    return(t);
  }
  t = o_45(t);
  return(t);
}
ATerm t_6 (ATerm y_43, ATerm z_43, ATerm t)
{
  t = SSL_strcat(y_43, z_43);
  return(t);
}
ATerm debug_1_0 (ATerm y_114 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  t_45 = t;
  t = y_114(t);
  u_45 = t;
  t = term_n_8;
  v_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_45), u_45);
  w_45 = t;
  t = SSL_printnl(v_45, w_45);
  t = t_45;
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
      ATerm e_46 = NULL;
      e_46 = t;
      t = SSL_is_string(e_46);
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
              ATerm w_46 = NULL,y_46 = NULL,z_46 = NULL;
              w_46 = t;
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
                      ATerm e_47 = NULL,h_47 = NULL;
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
                      h_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_47, h_47);
                      t = t_6(e_47, h_47, t);
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
  ATerm l_47 = NULL,m_47 = NULL;
  l_47 = t;
  t = term_e_18;
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_18, l_47);
  t = c_7(m_47, l_47, t);
  {
    ATerm h_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_47 = NULL,p_47 = NULL;
        t = eval_config_0_0(t);
        n_47 = t;
        t = term_e_18;
        p_47 = t;
        t = SSL_table_put(p_47, l_47, n_47);
        t = n_47;
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
ATerm if_verbose2_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_47 = NULL;
        t = term_p_18;
        t = get_config_0_0(t);
        v_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_47, term_q_18);
        t = geq_0_0(t);
        t = t_47;
        t = l_116(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = t_47;
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  if(match_string(t, "-k"))
    {
      t = y_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_47;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm z_47 = NULL,c_48 = NULL,f_48 = NULL;
  z_47 = t;
  t = SSL_string_to_int(z_47);
  c_48 = t;
  t = term_r_18;
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, c_48);
  t = f_7(f_48, c_48, t);
  t = z_47;
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
  ATerm h_48 = NULL;
  h_48 = t;
  if(match_string(t, "-S"))
    {
      t = h_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_48;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm i_48 = NULL,m_48 = NULL;
  t = term_p_18;
  i_48 = t;
  t = term_v_18;
  m_48 = t;
  t = term_w_18;
  t = f_7(i_48, m_48, t);
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
  ATerm p_48 = NULL,s_48 = NULL,v_48 = NULL;
  p_48 = t;
  t = SSL_string_to_int(p_48);
  s_48 = t;
  t = term_p_18;
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, s_48);
  t = f_7(v_48, s_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_48);
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
  ATerm w_48 = NULL,x_48 = NULL;
  t = term_g_19;
  w_48 = t;
  t = term_b_1;
  x_48 = t;
  t = term_j_19;
  t = f_7(w_48, x_48, t);
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
ATerm f_7 (ATerm z_50, ATerm a_51, ATerm t)
{
  ATerm y_48 = NULL;
  t = term_e_18;
  y_48 = t;
  t = SSL_table_put(y_48, z_50, a_51);
  t = (ATerm) ATmakeAppl(sym__3, term_e_18, z_50, a_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_49 = NULL,h_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
      t = term_b_1;
      t = i_0(t);
      l_49 = t;
      t = term_q_19;
      m_49 = t;
      t = term_v_19;
      n_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_19, term_v_19, l_49);
      t = d_7(m_49, n_49, l_49, t);
      _fail(t);
    }
  else
    {
      ATerm q_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_49 = ATgetFirst((ATermList) t);
          h_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_49;
      t = d_0(t);
      t = term_b_1;
      t = g_0(t);
      q_49 = t;
      t = (ATerm) ATinsert(CheckATermList(h_49), q_49);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  if(match_string(t, "-o"))
    {
      t = u_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_49;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm v_49 = NULL,b_50 = NULL;
  v_49 = t;
  t = term_w_19;
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, v_49);
  t = f_7(b_50, v_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_49);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, s_5, t);
  return(t);
}
ATerm d_7 (ATerm p_35, ATerm q_35, ATerm n_35, ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_35, q_35);
  {
    ATerm a_20 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, p_35, q_35);
        t = c_7(p_35, q_35, t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = (ATerm) ATempty;
      }
    e_50 = t;
    t = (ATerm) ATinsert(CheckATermList(e_50), n_35);
    f_50 = t;
    t = SSL_table_put(p_35, q_35, f_50);
    t = d_50;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,s_50 = NULL,t_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
      t = term_b_1;
      t = p_0(t);
      w_50 = t;
      t = term_q_19;
      x_50 = t;
      t = term_v_19;
      y_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_19, term_v_19, w_50);
      t = d_7(x_50, y_50, w_50, t);
      _fail(t);
    }
  else
    {
      ATerm h_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_50 = ATgetFirst((ATermList) t);
          p_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_50 = ATgetFirst((ATermList) t);
          t_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_50;
      t = m_0(t);
      t = s_50;
      t = n_0(t);
      h_51 = t;
      t = (ATerm) ATinsert(CheckATermList(t_50), h_51);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm o_51 = NULL;
  o_51 = t;
  if(match_string(t, "-i"))
    {
      t = o_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_51;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL;
  p_51 = t;
  t = term_e_20;
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, p_51);
  t = f_7(q_51, p_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_51);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_1;
  t = whoami_0_0(t);
  r_51 = t;
  t = term_n_8;
  t_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_20), r_51);
  u_51 = t;
  t = SSL_printnl(t_51, u_51);
  t = term_s_8;
  s_51 = t;
  t = SSL_exit(s_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_7 (ATerm n_33, ATerm p_33, ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_33, p_33);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      t = SSL_addr(n_33, p_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
  w_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_51;
      t = c_104(t);
    }
  else
    {
      ATerm b_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_51 = ATgetFirst((ATermList) t);
          y_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_51;
      t = foldr_2_0(c_104, d_104, t);
      b_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_51, b_52);
      t = d_104(t);
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
  ATerm e_24 = NULL,f_24 = NULL;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(e_24, f_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_52 = NULL,a_24 = NULL,b_24 = NULL;
  t = times_0_0(t);
  b_24 = t;
  t = SSL_explode_term(b_24);
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_24;
  t = foldr_2_0(d_6, f_6, t);
  e_52 = t;
  t = SSL_TicksToSeconds(e_52);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_52 = NULL,u_52 = NULL,v_52 = NULL;
  p_52 = t;
  if(match_cons(t, sym__2))
    {
      u_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_52;
        if((u_52 != t))
          {
            _fail(t);
          }
        t = p_52;
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_52, v_52);
              ;
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              t = SSL_gtr(u_52, v_52);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_116 (ATerm), ATerm t)
{
  ATerm z_52 = NULL;
  z_52 = t;
  {
    ATerm q_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_53 = NULL;
        t = term_p_18;
        t = get_config_0_0(t);
        b_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_53, term_s_8);
        t = geq_0_0(t);
        t = z_52;
        t = k_116(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = q_20;
        t = z_52;
      }
  }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,g_53 = NULL,h_53 = NULL;
  t = run_time_0_0(t);
  d_53 = t;
  t = term_b_1;
  t = whoami_0_0(t);
  e_53 = t;
  t = term_n_8;
  g_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), d_53), term_t_20), e_53);
  h_53 = t;
  t = SSL_printnl(g_53, h_53);
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), d_53), term_t_20), e_53));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_18;
  i_53 = t;
  t = SSL_exit(i_53);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  r_53 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_53;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_53 = ATgetArgument(t, 0);
          {
            ATerm x_24 = NULL,t_7 = NULL;
            t = SSLgetAnnotations(r_53);
            x_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_53);
            t_7 = t;
            t = SSLsetAnnotations(t_7, x_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_53;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = fetch_1_0(j_6, t);
    }
  t = a_119(t);
  return(t);
}
ATerm map_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm h_54 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
    e_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_54;
      }
    else
      {
        ATerm g_26 = NULL,j_26 = NULL,k_26 = NULL,y_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_54 = ATgetFirst((ATermList) t);
            g_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_54);
        g_26 = t;
        t = f_54;
        t = b_99(t);
        j_26 = t;
        t = g_54;
        t = h_54(t);
        k_26 = t;
        t = (ATerm) ATinsert(CheckATermList(k_26), j_26);
        y_7 = t;
        t = SSLsetAnnotations(y_7, g_26);
      }
    return(t);
  }
  t = h_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_54 = ATgetFirst((ATermList) t);
      l_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_54 = NULL,q_54 = NULL;
        ATerm n_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_54)), not_null(q_54));
          return(t);
        }
        t = l_54;
        t = l_0(t);
        if(((p_54 != NULL) && (p_54 != t)))
          _fail(t);
        else
          p_54 = t;
        t = k_54;
        t = k_0(t);
        if(((q_54 != NULL) && (q_54 != t)))
          _fail(t);
        else
          q_54 = t;
        t = l_54;
        t = reverse_acc_2_0(k_0, n_6, t);
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
ATerm c_7 (ATerm g_37, ATerm h_37, ATerm t)
{
  t = SSL_table_get(g_37, h_37);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,c_8 = NULL;
  w_54 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_54);
  u_54 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_54);
  c_8 = t;
  t = SSLsetAnnotations(c_8, u_54);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm y_54 = NULL;
  y_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_54), term_y_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = fetch_1_0(o_6, t);
    }
  t = term_d_21;
  t = echo_0_0(t);
  t = term_q_19;
  s_54 = t;
  t = term_v_19;
  t_54 = t;
  t = term_e_21;
  t = c_7(s_54, t_54, t);
  t = reverse_acc_2_0(_id, q_6, t);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  a_55 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_21 = ATgetFirst((ATermList) t);
                ATerm i_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_55;
          }
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATinsert(ATempty, a_55);
      }
    b_55 = t;
    t = term_h_16;
    c_55 = t;
    t = SSL_printnl(c_55, b_55);
    t = a_55;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_20;
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
  ATerm l_55 = NULL,m_55 = NULL;
  t = term_j_21;
  l_55 = t;
  t = term_b_1;
  m_55 = t;
  t = term_k_21;
  t = f_7(l_55, m_55, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_l_21;
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
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  t = term_j_21;
  p_55 = t;
  t = term_b_1;
  q_55 = t;
  t = term_k_21;
  t = f_7(p_55, q_55, t);
  t = term_m_21;
  n_55 = t;
  t = term_b_1;
  o_55 = t;
  t = term_n_21;
  t = f_7(n_55, o_55, t);
  t = term_o_21;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_7, g_7, h_7, t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      t = Option_3_0(i_7, j_7, n_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,e_8 = NULL;
  x_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_55 = ATgetFirst((ATermList) t);
      t_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_55);
  r_55 = t;
  t = s_55;
  t = y_76(t);
  v_55 = t;
  t = t_55;
  t = z_76(t);
  w_55 = t;
  t = (ATerm) ATinsert(CheckATermList(w_55), v_55);
  e_8 = t;
  t = SSLsetAnnotations(e_8, r_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,h_56 = NULL,i_56 = NULL,g_8 = NULL;
  c_56 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_21;
        t = d_121(t);
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
      }
    t = c_56;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_56 = ATgetFirst((ATermList) t);
        f_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_56);
    d_56 = t;
    t = term_h_20;
    i_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_20, e_56);
    t = f_7(i_56, e_56, t);
    t = f_56;
    {
      ATerm s_56 (ATerm t)
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_56 = NULL;
                l_56 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_56;
                ;
                LocalPopChoice(y_21);
              }
            else
              {
                t = x_21;
                t = d_121(t);
                t = Cons_2_0(_id, s_56, t);
              }
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            {
              ATerm o_56 = NULL,p_56 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_56 = ATgetFirst((ATermList) t);
                  p_56 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_56), (ATerm) ATmakeAppl(sym_Undefined_1, o_56));
            }
          }
        return(t);
      }
      t = s_56(t);
      if(((h_56 != NULL) && (h_56 != t)))
        _fail(t);
      else
        h_56 = t;
      t = (ATerm) ATinsert(CheckATermList(h_56), (ATerm) ATmakeAppl(sym_Program_1, e_56));
      if(((g_8 != NULL) && (g_8 != t)))
        _fail(t);
      else
        g_8 = t;
      t = SSLsetAnnotations(g_8, d_56);
    }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  if(match_string(t, "--help"))
    {
      t = j_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_57;
        }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL;
  t = term_x_20;
  k_57 = t;
  t = term_b_1;
  l_57 = t;
  t = term_z_21;
  t = f_7(k_57, l_57, t);
  t = term_f_22;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_121 (ATerm), ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  e_57 = t;
  t = term_q_19;
  g_57 = t;
  t = term_v_19;
  h_57 = t;
  t = (ATerm) ATempty;
  i_57 = t;
  t = SSL_table_put(g_57, h_57, i_57);
  t = e_57;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm h_22 = t;
      int i_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_121(t);
          ;
          LocalPopChoice(i_22);
        }
      else
        {
          t = h_22;
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_7, s_7, u_7, t);
                ;
                LocalPopChoice(k_22);
              }
            else
              {
                t = j_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_7, t);
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_57 = NULL;
          s_57 = t;
          {
            ATerm p_22 = t;
            int u_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_26 = NULL;
                t = s_57;
                {
                  ATerm v_22 = t;
                  int w_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_22);
                    }
                  else
                    {
                      t = v_22;
                      t = fetch_1_0(v_7, t);
                    }
                  t = s_57;
                  t = default_system_usage_0_0(t);
                  t = term_v_18;
                  v_26 = t;
                  t = SSL_exit(v_26);
                }
                ;
                LocalPopChoice(u_22);
              }
            else
              {
                t = p_22;
                {
                  ATerm j_27 = NULL;
                  t = term_j_21;
                  t = get_config_0_0(t);
                  t = s_57;
                  t = default_system_about_0_0(t);
                  t = term_v_18;
                  j_27 = t;
                  t = SSL_exit(j_27);
                }
              }
          }
          ;
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          {
            ATerm y_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
                ATerm w_7 (ATerm t)
                {
                  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,l_8 = NULL;
                  y_57 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      x_57 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_57);
                  w_57 = t;
                  t = x_57;
                  if(((c_57 != NULL) && (c_57 != t)))
                    _fail(t);
                  else
                    c_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_57);
                  l_8 = t;
                  t = SSLsetAnnotations(l_8, w_57);
                  return(t);
                }
                t = fetch_1_0(w_7, t);
                t = term_n_8;
                if(((u_57 != NULL) && (u_57 != t)))
                  _fail(t);
                else
                  u_57 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_57)), term_a_23);
                if(((v_57 != NULL) && (v_57 != t)))
                  _fail(t);
                else
                  v_57 = t;
                t = SSL_printnl(u_57, v_57);
                t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_57)), term_a_23));
                t = default_system_usage_0_0(t);
                t = term_s_8;
                if(((t_57 != NULL) && (t_57 != t)))
                  _fail(t);
                else
                  t_57 = t;
                t = SSL_exit(t_57);
                ;
                LocalPopChoice(z_22);
              }
            else
              {
                t = y_22;
              }
          }
        }
      if(((d_57 != NULL) && (d_57 != t)))
        _fail(t);
      else
        d_57 = t;
      t = term_q_19;
      if(((f_57 != NULL) && (f_57 != t)))
        _fail(t);
      else
        f_57 = t;
      t = SSL_table_destroy(f_57);
      t = d_57;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  t = parse_options_1_0(c_119, t);
  d_58 = t;
  t = term_b_23;
  g_58 = t;
  t = SSL_table_create(g_58);
  t = term_b_23;
  e_58 = t;
  t = term_c_23;
  f_58 = t;
  t = SSL_table_put(e_58, f_58, d_58);
  t = d_58;
  t = e_119(t);
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_119, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_119(t);
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
  ATerm h_58 = NULL,i_58 = NULL;
  t = term_h_23;
  h_58 = t;
  t = term_b_1;
  i_58 = t;
  t = term_i_23;
  t = f_7(h_58, i_58, t);
  t = term_k_23;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  j_58 = t;
  t = term_h_20;
  t = get_config_0_0(t);
  k_58 = t;
  t = term_n_8;
  l_58 = t;
  t = (ATerm) ATinsert(ATempty, k_58);
  m_58 = t;
  t = SSL_printnl(l_58, m_58);
  t = j_58;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              {
                ATerm q_23 = t;
                int r_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_23);
                  }
                else
                  {
                    t = q_23;
                    {
                      ATerm s_23 = t;
                      int u_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_8, h_8, i_8, t);
                          ;
                          LocalPopChoice(u_23);
                        }
                      else
                        {
                          t = s_23;
                          {
                            ATerm v_23 = t;
                            int w_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_23);
                              }
                            else
                              {
                                t = v_23;
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
    ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
    o_58 = t;
    {
      ATerm x_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_58 != NULL) && (n_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_8, t);
          ;
          LocalPopChoice(y_23);
        }
      else
        {
          t = x_23;
          t = term_z_23;
          n_58 = t;
        }
      t = not_null(n_58);
      t = ReadFromFile_0_0(t);
      if(((p_58 != NULL) && (p_58 != t)))
        _fail(t);
      else
        p_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
      t = apply_strategy_1_0(l_118, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_8, n_118, b_8, d_8, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,r_8 = NULL;
  u_58 = t;
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      s_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_58);
  q_58 = t;
  t = s_58;
  t = lift_definitions_0_0(t);
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_58, t_58);
  r_8 = t;
  t = SSLsetAnnotations(r_8, q_58);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_8, _fail, default_usage_0_0, t);
  return(t);
}

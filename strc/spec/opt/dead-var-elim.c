#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Signature_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Choice_2;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
ATerm term_p_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_v_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_m_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_c_11;
ATerm term_t_10;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_13);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_f_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_f_7);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_f_7);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_f_7);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_f_7);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__3, term_b_19, term_d_19, (ATerm) ATempty);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_a_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_g_21);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_z_22, term_f_7);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm map_1_0 (ATerm m_118 (ATerm), ATerm t);
ATerm all_rl_1_0 (ATerm a_101 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm v_100 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm n_10 (ATerm i_9, ATerm j_9, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm b_5 (ATerm t_42, ATerm s_42, ATerm t);
static ATerm c_5 (ATerm p_46, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm u_100 (ATerm), ATerm t);
static ATerm d_5 (ATerm d_42, ATerm e_42, ATerm f_42, ATerm t);
ATerm alltd_1_0 (ATerm z_104 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm p_118 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm f_5 (ATerm b_101 (ATerm), ATerm t);
static ATerm h_5 (ATerm b_42, ATerm c_42, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_125 (ATerm), ATerm t);
static ATerm i_5 (ATerm h_115 (ATerm), ATerm m_40, ATerm k_40, ATerm t);
static ATerm j_5 (ATerm v_41, ATerm w_41, ATerm t);
ATerm end_scope_1_0 (ATerm e_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_115 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm dead_var_elim_0_0 (ATerm t);
static ATerm m_5 (ATerm g_32, ATerm h_32, ATerm t);
static ATerm n_5 (ATerm m_30, ATerm n_30, ATerm t);
static ATerm p_5 (ATerm v_110 (ATerm), ATerm s_233, ATerm s_30, ATerm t);
static ATerm o_5 (ATerm i_30, ATerm j_30, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm n_132 (ATerm), ATerm t);
static ATerm f_35 (ATerm u_34, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_5 (ATerm o_30, ATerm t);
static ATerm r_5 (ATerm t_69, ATerm u_69, ATerm t);
static ATerm s_5 (ATerm i_32, ATerm j_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_37 (ATerm x_35, ATerm t);
static ATerm b_37 (ATerm b_36, ATerm e_36, ATerm f_36, ATerm t);
static ATerm c_37 (ATerm n_36, ATerm o_36, ATerm p_36, ATerm t);
static ATerm t_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_118 (ATerm), ATerm t);
static ATerm y_5 (ATerm j_43, ATerm k_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm n_112 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_6 (ATerm c_36, ATerm d_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_5 (ATerm q_41, ATerm r_41, ATerm p_41, ATerm t);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_5 (ATerm y_38, ATerm z_38, ATerm t);
ATerm foldr_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_112 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm d_6 (ATerm l_46, ATerm m_46, ATerm t);
ATerm lookup_table_0_1 (ATerm c_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_46, ATerm r_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_5 (ATerm n_46, ATerm o_46, ATerm t);
static ATerm x_5 (ATerm s_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_135 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm parse_options_3_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm iowrap_3_0 (ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm y_132 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_f_7;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_g_7;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_7), c_0), term_h_7);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_w_7;
  p_0 = t;
  t = SSL_exit(p_0);
  t = a_0;
  return(t);
}
ATerm map_1_0 (ATerm m_118 (ATerm), ATerm t)
{
  static ATerm w_1 (ATerm t);
  static ATerm w_1 (ATerm t)
  {
    ATerm q_1 = NULL,s_1 = NULL,u_1 = NULL;
    q_1 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_1;
      }
    else
      {
        ATerm n_0 = NULL,u_0 = NULL,v_0 = NULL,l_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_1 = ATgetFirst((ATermList) t);
            u_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_1);
        n_0 = t;
        t = s_1;
        t = m_118(t);
        u_0 = t;
        t = u_1;
        t = w_1(t);
        v_0 = t;
        t = (ATerm) ATinsert(CheckATermList(v_0), u_0);
        l_0 = t;
        t = SSLsetAnnotations(l_0, n_0);
      }
    return(t);
  }
  t = w_1(t);
  return(t);
}
ATerm all_rl_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,e_2 = NULL,s_2 = NULL,t_2 = NULL;
  t_2 = t;
  t = SSL_explode_term(t_2);
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  t = reverse_map_1_0(a_101, t);
  s_2 = t;
  t = SSL_mkterm(y_1, s_2);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm f_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,h_4 = NULL,k_4 = NULL;
  h_4 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_4;
        f_3 = t;
        t = SSLgetAnnotations(h_4);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_8) != AT_LIST) || !(ATisEmpty(g_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_4;
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm n_8 = t;
          int o_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_4;
              f_3 = t;
              t = SSLgetAnnotations(h_4);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_8 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_8 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = h_4;
              LocalPopChoice(o_8);
            }
          else
            {
              t = n_8;
              t = k_4;
              f_3 = t;
              t = SSLgetAnnotations(h_4);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_4;
            }
        }
      }
  }
  t = term_y_8;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_3);
  j_3 = t;
  t = term_z_8;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_8, (ATerm)ATmakeAppl(sym_Var_1, f_3), term_z_8);
  t = d_5(h_3, j_3, k_3, t);
  t = h_4;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm o_4 = NULL,q_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_9 = ATgetFirst((ATermList) t);
      ATerm b_9 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_4);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL,e_3 = NULL,c_1 = NULL;
  e_3 = t;
  if(match_cons(t, sym_Match_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  a_3 = t;
  t = b_3;
  t = alltd_1_0(i_0, t);
  t = alltd_1_0(j_0, t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, d_3);
  c_1 = t;
  t = SSLsetAnnotations(c_1, a_3);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm w_100 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,v_5 = NULL,q_6 = NULL,s_6 = NULL,t_6 = NULL,f_1 = NULL;
  static ATerm m_0 (ATerm t);
  static ATerm o_0 (ATerm t);
  static ATerm m_0 (ATerm t)
  {
    ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,j_7 = NULL,k_7 = NULL,j_1 = NULL,h_1 = NULL;
    k_7 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        a_7 = ATgetArgument(t, 0);
        b_7 = ATgetArgument(t, 1);
        c_7 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_7);
    z_6 = t;
    t = b_7;
    t = w_100(t);
    d_7 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_7, d_7, c_7);
    h_1 = t;
    t = SSLsetAnnotations(h_1, z_6);
    j_7 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        v_6 = ATgetArgument(t, 0);
        w_6 = ATgetArgument(t, 1);
        x_6 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_7);
    u_6 = t;
    t = v_6;
    t = w_100(t);
    y_6 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_6, w_6, x_6);
    j_1 = t;
    t = SSLsetAnnotations(j_1, u_6);
    return(t);
  }
  static ATerm o_0 (ATerm t)
  {
    ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,k_1 = NULL;
    q_7 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        m_7 = ATgetArgument(t, 0);
        n_7 = ATgetArgument(t, 1);
        o_7 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_7);
    l_7 = t;
    t = o_7;
    t = w_100(t);
    p_7 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, m_7, n_7, p_7);
    k_1 = t;
    t = SSLsetAnnotations(k_1, l_7);
    return(t);
  }
  t_6 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      v_5 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
      s_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_6);
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_5, q_6, s_6);
  f_1 = t;
  t = SSLsetAnnotations(f_1, l_5);
  t = elim_abstract_choice_2_0(m_0, o_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm v_100 (ATerm), ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,l_3 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm t_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm y_7 = NULL,z_7 = NULL,d_8 = NULL,f_8 = NULL,h_8 = NULL,n_3 = NULL;
    h_8 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        z_7 = ATgetArgument(t, 0);
        d_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_8);
    y_7 = t;
    t = z_7;
    t = v_100(t);
    f_8 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_8, d_8);
    n_3 = t;
    t = SSLsetAnnotations(n_3, y_7);
    return(t);
  }
  static ATerm t_0 (ATerm t)
  {
    ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,o_3 = NULL;
    m_8 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        j_8 = ATgetArgument(t, 0);
        k_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_8);
    i_8 = t;
    t = k_8;
    t = v_100(t);
    l_8 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, j_8, l_8);
    o_3 = t;
    t = SSLsetAnnotations(o_3, i_8);
    return(t);
  }
  u_7 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      s_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_7);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, s_7, t_7);
  l_3 = t;
  t = SSLsetAnnotations(l_3, r_7);
  t = elim_abstract_choice_2_0(s_0, t_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm s_9 = NULL,w_9 = NULL,z_9 = NULL,c_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
      t = w_9;
      {
        ATerm c_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_9 = ATgetFirst((ATermList) t);
                {
                  ATerm g_9 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_9);
            t = z_9;
            {
              ATerm k_9 = t;
              int l_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm m_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_9);
                  t = s_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = c_10;
                    }
                  else
                    {
                      ATerm n_9 = t;
                      int o_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_10(s_9, c_10, t);
                          LocalPopChoice(o_9);
                        }
                      else
                        {
                          t = n_9;
                          t = c_10;
                        }
                    }
                }
              else
                {
                  t = k_9;
                  t = s_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = c_10;
                    }
                  else
                    {
                      t = c_10;
                    }
                }
            }
          }
        else
          {
            t = c_9;
            t = s_9;
            if(match_cons(t, sym_Scopes_0))
              {
                t = c_10;
              }
            else
              {
                t = c_10;
              }
          }
      }
    }
  else
    {
      t = c_10;
    }
  return(t);
}
static ATerm n_10 (ATerm i_9, ATerm j_9, ATerm t)
{
  t = j_9;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL;
        t = term_y_8;
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, i_9);
        t = y_5(k_2, i_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_9 = ATgetFirst((ATermList) t);
            if(match_cons(u_9, sym_Defined_1))
              {
                ATerm b_10 = ATgetArgument(u_9, 0);
              }
            else
              _fail(t);
            {
              ATerm a_10 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = j_9;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = (ATerm) ATmakeAppl(sym__2, i_9, (ATerm) ATinsert(ATempty, term_z_8));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm f_9 = NULL,h_9 = NULL;
  t = map_1_0(w_0, t);
  f_9 = t;
  t = term_y_8;
  t = table_destroy_0_0(t);
  t = term_y_8;
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, f_9);
  t = b_5(h_9, f_9, t);
  t = f_9;
  return(t);
}
static ATerm b_5 (ATerm t_42, ATerm s_42, ATerm t)
{
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    ATerm u_10 = NULL,w_10 = NULL,a_11 = NULL;
    if(match_cons(t, sym__2))
      {
        u_10 = ATgetArgument(t, 0);
        w_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_42, u_10, w_10);
    t = lookup_table_0_1(t_42, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        a_11 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = c_6(u_10, w_10, a_11, t);
    t = (ATerm) ATmakeAppl(sym__3, t_42, u_10, w_10);
    return(t);
  }
  t = s_42;
  t = map_1_0(x_0, t);
  return(t);
}
static ATerm c_5 (ATerm p_46, ATerm t)
{
  t = SSL_hashtable_keys(p_46);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  static ATerm y_0 (ATerm t);
  static ATerm y_0 (ATerm t)
  {
    ATerm g_11 = NULL,h_11 = NULL;
    g_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_11), g_11);
    t = y_5(not_null(e_11), g_11, t);
    h_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
    return(t);
  }
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  t = lookup_table_0_1(e_11, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(f_11, t);
  t = map_1_0(y_0, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_y_8;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,n_11 = NULL,x_11 = NULL,y_11 = NULL,b_12 = NULL;
  y_11 = t;
  t = save_ElimVar_0_0(t);
  i_11 = t;
  t = y_11;
  t = x_100(t);
  x_11 = t;
  t = save_ElimVar_0_0(t);
  j_11 = t;
  t = term_y_8;
  t = table_destroy_0_0(t);
  t = term_y_8;
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, i_11);
  t = b_5(b_12, i_11, t);
  t = x_11;
  t = y_100(t);
  n_11 = t;
  t = j_11;
  t = isect_ElimVar_0_0(t);
  t = n_11;
  return(t);
}
ATerm elim_choice_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,t_3 = NULL;
  static ATerm z_0 (ATerm t);
  static ATerm a_1 (ATerm t);
  static ATerm z_0 (ATerm t)
  {
    ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,u_3 = NULL;
    l_12 = t;
    if(match_cons(t, sym_Choice_2))
      {
        i_12 = ATgetArgument(t, 0);
        j_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_12);
    h_12 = t;
    t = i_12;
    t = u_100(t);
    k_12 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, k_12, j_12);
    u_3 = t;
    t = SSLsetAnnotations(u_3, h_12);
    return(t);
  }
  static ATerm a_1 (ATerm t)
  {
    ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,r_12 = NULL,s_12 = NULL,v_3 = NULL;
    s_12 = t;
    if(match_cons(t, sym_Choice_2))
      {
        n_12 = ATgetArgument(t, 0);
        o_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_12);
    m_12 = t;
    t = o_12;
    t = u_100(t);
    r_12 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, n_12, r_12);
    v_3 = t;
    t = SSLsetAnnotations(v_3, m_12);
    return(t);
  }
  f_12 = t;
  if(match_cons(t, sym_Choice_2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_12);
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, d_12, e_12);
  t_3 = t;
  t = SSLsetAnnotations(t_3, c_12);
  t = elim_abstract_choice_2_0(z_0, a_1, t);
  return(t);
}
static ATerm d_5 (ATerm d_42, ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_42, e_42);
  t = y_5(d_42, e_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_10 = ATgetFirst((ATermList) t);
      t_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_42, e_42, (ATerm) ATinsert(CheckATermList(t_12), f_42));
  t = lookup_table_0_1(d_42, t);
  y_12 = t;
  t = (ATerm) ATinsert(CheckATermList(t_12), f_42);
  w_12 = t;
  t = y_12;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(e_42, w_12, x_12, t);
  t = u_12;
  return(t);
}
ATerm alltd_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  static ATerm z_12 (ATerm t);
  static ATerm z_12 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_104(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = SRTS_all(z_12, t);
      }
    return(t);
  }
  t = z_12(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm p_118 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,c_14 = NULL,e_14 = NULL;
  e_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_13 = ATgetFirst((ATermList) t);
      c_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,u_2 = NULL,v_2 = NULL,y_2 = NULL,z_2 = NULL,a_4 = NULL,z_3 = NULL;
        t = SSLgetAnnotations(e_14);
        v_2 = t;
        t = c_14;
        t = reverse_map_1_0(p_118, t);
        y_2 = t;
        t = (ATerm) ATinsert(CheckATermList(y_2), z_13);
        z_3 = t;
        t = SSLsetAnnotations(z_3, v_2);
        z_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_2 = ATgetFirst((ATermList) t);
            r_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_2);
        p_2 = t;
        t = q_2;
        t = p_118(t);
        u_2 = t;
        t = (ATerm) ATinsert(CheckATermList(r_2), u_2);
        a_4 = t;
        t = SSLsetAnnotations(a_4, p_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_14;
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,z_14 = NULL;
  s_14 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_14 = ATgetArgument(t, 0);
      {
        ATerm g_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, t_14);
  u_14 = t;
  t = term_z_8;
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_14), term_z_8);
  t = i_5(g_1, u_14, z_14, t);
  t = s_14;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm f_5 (ATerm b_101 (ATerm), ATerm t)
{
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm g_14 = NULL,h_14 = NULL,j_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,r_14 = NULL,d_4 = NULL;
    r_14 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        h_14 = ATgetArgument(t, 0);
        j_14 = ATgetArgument(t, 1);
        m_14 = ATgetArgument(t, 2);
        n_14 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_14);
    g_14 = t;
    t = m_14;
    t = map_1_0(e_1, t);
    o_14 = t;
    t = n_14;
    t = b_101(t);
    p_14 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_14, j_14, o_14, p_14);
    d_4 = t;
    t = SSLsetAnnotations(d_4, g_14);
    return(t);
  }
  t = scope_2_0(b_1, d_1, t);
  return(t);
}
static ATerm h_5 (ATerm b_42, ATerm c_42, ATerm t)
{
  ATerm c_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_42, c_42);
  t = y_5(b_42, c_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_15 = ATgetFirst((ATermList) t);
      {
        ATerm h_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_15;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 = NULL;
        t = term_y_8;
        v_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, s_16);
        t = h_5(v_4, s_16, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = s_16;
        _fail(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 = NULL;
              t = term_y_8;
              a_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_8, s_16);
              t = h_5(a_6, s_16, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = s_16;
              _fail(t);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
              {
                ATerm q_10 = t;
                int r_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_6 = NULL;
                    t = term_y_8;
                    k_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_y_8, s_16);
                    t = h_5(k_6, s_16, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = s_16;
                    _fail(t);
                    LocalPopChoice(r_10);
                  }
                else
                  {
                    t = q_10;
                    {
                      ATerm r_6 = NULL;
                      t = term_y_8;
                      r_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_y_8, s_16);
                      t = h_5(r_6, s_16, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm s_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) s_10) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_t_10;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_18 = ATgetFirst((ATermList) t);
          d_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 = NULL,x_7 = NULL,a_8 = NULL,f_4 = NULL;
            t = SSLgetAnnotations(b_18);
            i_7 = t;
            t = c_18;
            t = n_125(t);
            x_7 = t;
            t = d_18;
            t = filter_1_0(n_125, t);
            a_8 = t;
            t = (ATerm) ATinsert(CheckATermList(a_8), x_7);
            f_4 = t;
            t = SSLsetAnnotations(f_4, i_7);
            LocalPopChoice(x_10);
          }
        else
          {
            t = v_10;
            t = d_18;
            t = filter_1_0(n_125, t);
          }
      }
    }
  return(t);
}
static ATerm i_5 (ATerm h_115 (ATerm), ATerm m_40, ATerm k_40, ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,c_19 = NULL,g_19 = NULL;
  v_18 = t;
  t = h_115(t);
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_18, m_40, k_40);
  t = z_5(q_18, m_40, k_40, t);
  {
    ATerm z_10 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL;
        t = term_c_11;
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_18, term_c_11);
        t = y_5(q_18, j_19, t);
        {
          ATerm d_11 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_11;
            }
        }
        LocalPopChoice(b_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_18 = ATgetFirst((ATermList) t);
      s_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_18, term_c_11, (ATerm) ATinsert(CheckATermList(s_18), (ATerm) ATinsert(CheckATermList(r_18), m_40)));
  t = lookup_table_0_1(q_18, t);
  g_19 = t;
  t = term_c_11;
  w_18 = t;
  t = (ATerm) ATinsert(CheckATermList(s_18), (ATerm) ATinsert(CheckATermList(r_18), m_40));
  x_18 = t;
  t = g_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(w_18, x_18, c_19, t);
  t = v_18;
  return(t);
}
static ATerm j_5 (ATerm v_41, ATerm w_41, ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  l_19 = t;
  {
    ATerm m_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
        t = y_5(v_41, w_41, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_11 = ATgetFirst((ATermList) t);
            k_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_11);
        {
          ATerm v_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_41, w_41, k_19);
          t = lookup_table_0_1(v_41, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_6(w_41, k_19, v_19, t);
          t = (ATerm) ATmakeAppl(sym__3, v_41, w_41, k_19);
        }
      }
    else
      {
        t = m_11;
        {
          ATerm x_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
          t = lookup_table_0_1(v_41, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_5(w_41, x_19, t);
          t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
        }
      }
  }
  t = l_19;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,d_20 = NULL,e_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  e_20 = t;
  t = e_115(t);
  d_20 = t;
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL;
        t = term_c_11;
        k_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_20, term_c_11);
        t = y_5(d_20, k_20, t);
        {
          ATerm z_11 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_11;
            }
        }
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_20 = ATgetFirst((ATermList) t);
      z_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_20, term_c_11, z_19);
  t = lookup_table_0_1(d_20, t);
  j_20 = t;
  t = term_c_11;
  h_20 = t;
  t = j_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(h_20, z_19, i_20, t);
  t = a_20;
  {
    static ATerm i_1 (ATerm t);
    static ATerm i_1 (ATerm t)
    {
      ATerm o_20 = NULL;
      o_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_20, o_20);
      t = j_5(d_20, o_20, t);
      return(t);
    }
    t = map_1_0(i_1, t);
  }
  t = e_20;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  ATerm a_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_106(t);
      t = t_106(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = a_12;
      t = t_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_115 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,c_21 = NULL,f_21 = NULL,j_21 = NULL,p_21 = NULL,s_21 = NULL,t_21 = NULL;
  c_21 = t;
  t = d_115(t);
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_21, term_c_11);
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_13 = ATgetArgument(t, 0);
            ATerm h_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_11;
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_21, term_c_11);
        t = y_5(a_21, f_22, t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATempty;
      }
  }
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_21, term_c_11, (ATerm) ATinsert(CheckATermList(f_21), (ATerm) ATempty));
  t = lookup_table_0_1(a_21, t);
  t_21 = t;
  t = term_c_11;
  j_21 = t;
  t = (ATerm) ATinsert(CheckATermList(f_21), (ATerm) ATempty);
  p_21 = t;
  t = t_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(j_21, p_21, s_21, t);
  t = c_21;
  return(t);
}
ATerm scope_2_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm t)
{
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    t = end_scope_1_0(f_115, t);
    return(t);
  }
  t = begin_scope_1_0(f_115, t);
  t = restore_always_2_0(g_115, l_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm v_27 = NULL,x_27 = NULL,b_28 = NULL;
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_27);
  x_27 = t;
  t = term_j_13;
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_27), term_j_13);
  t = i_5(p_1, x_27, b_28, t);
  t = v_27;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm k_13 = t;
  if((PushChoice() == 0))
    {
      ATerm e_28 = NULL;
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_28);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_13;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_y_8;
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_8);
  w_8 = t;
  t = term_z_8;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_8, (ATerm)ATmakeAppl(sym_Var_1, u_8), term_z_8);
  t = d_5(v_8, w_8, x_8, t);
  t = t_8;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = alltd_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm v_9 = NULL,x_9 = NULL,y_9 = NULL,j_10 = NULL,k_10 = NULL;
  v_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_y_8;
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_9);
  j_10 = t;
  t = term_z_8;
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_8, (ATerm)ATmakeAppl(sym_Var_1, x_9), term_z_8);
  t = d_5(y_9, j_10, k_10, t);
  t = v_9;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = alltd_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_y_8;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_11);
  r_11 = t;
  t = term_z_8;
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_8, (ATerm)ATmakeAppl(sym_Var_1, p_11), term_z_8);
  t = d_5(q_11, r_11, s_11, t);
  t = o_11;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,f_15 = NULL,g_15 = NULL,e_6 = NULL;
  g_15 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_15);
  a_15 = t;
  t = b_15;
  t = map_1_0(dead_var_elim_0_0, t);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, f_15);
  e_6 = t;
  t = SSLsetAnnotations(e_6, a_15);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm g_29 (ATerm t);
      static ATerm g_29 (ATerm t)
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_26 = NULL,n_26 = NULL,p_26 = NULL,s_26 = NULL;
            n_26 = t;
            {
              ATerm p_13 = t;
              int q_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      ATerm t_13 = ATgetArgument(t, 0);
                      ATerm u_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_13);
                  {
                    static ATerm n_1 (ATerm t);
                    static ATerm n_1 (ATerm t)
                    {
                      ATerm u_26 = NULL,f_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,s_27 = NULL,u_27 = NULL,j_4 = NULL,i_4 = NULL;
                      u_27 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          l_27 = ATgetArgument(t, 0);
                          m_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_27);
                      k_27 = t;
                      t = l_27;
                      t = map_1_0(o_1, t);
                      n_27 = t;
                      t = m_27;
                      t = g_29(t);
                      o_27 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, n_27, o_27);
                      i_4 = t;
                      t = SSLsetAnnotations(i_4, k_27);
                      s_27 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          f_27 = ATgetArgument(t, 0);
                          i_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(s_27);
                      u_26 = t;
                      t = f_27;
                      t = filter_1_0(r_1, t);
                      j_27 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, j_27, i_27);
                      j_4 = t;
                      t = SSLsetAnnotations(j_4, u_26);
                      return(t);
                    }
                    t = n_26;
                    t = scope_2_0(m_1, n_1, t);
                  }
                }
              else
                {
                  t = p_13;
                  {
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm b_14 = ATgetArgument(t, 0);
                            ATerm f_14 = ATgetArgument(t, 1);
                            ATerm y_14 = ATgetArgument(t, 2);
                            ATerm d_15 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_13);
                        t = n_26;
                        t = f_5(g_29, t);
                      }
                    else
                      {
                        t = x_13;
                        if(match_cons(t, sym_Build_1))
                          {
                            p_26 = ATgetArgument(t, 0);
                            {
                              ATerm p_8 = NULL,r_8 = NULL,l_4 = NULL;
                              t = SSLgetAnnotations(n_26);
                              p_8 = t;
                              t = p_26;
                              t = alltd_1_0(t_1, t);
                              r_8 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, r_8);
                              l_4 = t;
                              t = SSLsetAnnotations(l_4, p_8);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                p_26 = ATgetArgument(t, 0);
                                s_26 = ATgetArgument(t, 1);
                                j_26 = ATgetArgument(t, 2);
                                {
                                  ATerm e_9 = NULL,r_9 = NULL,t_9 = NULL,m_4 = NULL;
                                  t = SSLgetAnnotations(n_26);
                                  e_9 = t;
                                  t = s_26;
                                  t = reverse_map_1_0(g_29, t);
                                  r_9 = t;
                                  t = j_26;
                                  t = reverse_map_1_0(v_1, t);
                                  t_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_26, r_9, t_9);
                                  m_4 = t;
                                  t = SSLsetAnnotations(m_4, e_9);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    p_26 = ATgetArgument(t, 0);
                                    s_26 = ATgetArgument(t, 1);
                                    j_26 = ATgetArgument(t, 2);
                                    {
                                      ATerm y_10 = NULL,k_11 = NULL,l_11 = NULL,r_4 = NULL;
                                      t = SSLgetAnnotations(n_26);
                                      y_10 = t;
                                      t = s_26;
                                      t = reverse_map_1_0(g_29, t);
                                      k_11 = t;
                                      t = j_26;
                                      t = reverse_map_1_0(z_1, t);
                                      l_11 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, p_26, k_11, l_11);
                                      r_4 = t;
                                      t = SSLsetAnnotations(r_4, y_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm p_12 = NULL,q_12 = NULL,v_12 = NULL,a_13 = NULL,b_13 = NULL,e_13 = NULL,f_13 = NULL,g_5 = NULL,w_4 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        p_26 = ATgetArgument(t, 0);
                                        s_26 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(n_26);
                                    b_13 = t;
                                    t = s_26;
                                    t = g_29(t);
                                    e_13 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_26, e_13);
                                    w_4 = t;
                                    t = SSLsetAnnotations(w_4, b_13);
                                    f_13 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        q_12 = ATgetArgument(t, 0);
                                        v_12 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(f_13);
                                    p_12 = t;
                                    t = q_12;
                                    t = g_29(t);
                                    a_13 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, v_12);
                                    g_5 = t;
                                    t = SSLsetAnnotations(g_5, p_12);
                                  }
                              }
                          }
                      }
                  }
                }
            }
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm h_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(g_29, t);
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = h_15;
                  {
                    ATerm j_15 = t;
                    int k_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = elim_lchoice_1_0(g_29, t);
                        LocalPopChoice(k_15);
                      }
                    else
                      {
                        t = j_15;
                        {
                          ATerm m_15 = t;
                          int n_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(g_29, t);
                              LocalPopChoice(n_15);
                            }
                          else
                            {
                              t = m_15;
                              {
                                ATerm u_15 = t;
                                int v_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EliminateFromMatch_0_0(t);
                                    LocalPopChoice(v_15);
                                  }
                                else
                                  {
                                    t = u_15;
                                    t = all_rl_1_0(g_29, t);
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
      t = g_29(t);
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm e_29 = NULL,f_29 = NULL,a_14 = NULL,d_14 = NULL,i_14 = NULL,k_14 = NULL,l_14 = NULL,q_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,e_7 = NULL,l_6 = NULL,k_5 = NULL;
        e_29 = t;
        if(match_cons(t, sym_Specification_1))
          {
            f_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_29);
        a_14 = t;
        t = f_29;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_14 = ATgetFirst((ATermList) t);
            k_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_29);
        d_14 = t;
        t = i_14;
        if(match_cons(t, sym_Signature_1))
          {
            w_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_14);
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, w_14);
        k_5 = t;
        t = SSLsetAnnotations(k_5, v_14);
        x_14 = t;
        t = k_14;
        t = Cons_2_0(b_2, c_2, t);
        l_14 = t;
        t = (ATerm) ATinsert(CheckATermList(l_14), x_14);
        l_6 = t;
        t = SSLsetAnnotations(l_6, d_14);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, q_14);
        e_7 = t;
        t = SSLsetAnnotations(e_7, a_14);
      }
    }
  return(t);
}
static ATerm m_5 (ATerm g_32, ATerm h_32, ATerm t)
{
  ATerm q_29 = NULL;
  t = SSL_fputc(g_32, h_32);
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_29);
  return(t);
}
static ATerm n_5 (ATerm m_30, ATerm n_30, ATerm t)
{
  ATerm r_29 = NULL;
  t = SSL_write_term_to_stream_text(m_30, n_30);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_29);
  return(t);
}
static ATerm p_5 (ATerm v_110 (ATerm), ATerm s_233, ATerm s_30, ATerm t)
{
  ATerm u_29 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_233, term_w_15);
  t = t_5(t);
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_29, s_30);
  t = v_110(t);
  t = fclose_0_0(t);
  t = s_30;
  return(t);
}
static ATerm o_5 (ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm w_29 = NULL;
  t = SSL_write_term_to_stream_baf(i_30, j_30);
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_29);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      if(match_cons(x_15, sym_Stream_1))
        {
          s_15 = ATgetArgument(x_15, 0);
        }
      else
        _fail(t);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(s_15, t_15, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm e_16 = NULL,g_16 = NULL,h_16 = NULL,t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(match_cons(z_15, sym_Stream_1))
        {
          t_16 = ATgetArgument(z_15, 0);
        }
      else
        _fail(t);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(t_16, u_16, t);
  e_16 = t;
  t = term_a_16;
  g_16 = t;
  t = e_16;
  if(match_cons(t, sym_Stream_1))
    {
      h_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, e_16);
  t = m_5(g_16, h_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,z_30 = NULL,a_31 = NULL,d_31 = NULL,f_31 = NULL,g_31 = NULL,p_33 = NULL,q_33 = NULL,s_13 = NULL,r_13 = NULL;
  b_30 = t;
  if(match_cons(t, sym__2))
    {
      d_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_30);
  a_31 = t;
  t = d_31;
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_2 (ATerm t);
        static ATerm d_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_30 != NULL) && (a_30 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(d_2, t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = term_m_16;
        a_30 = t;
      }
  }
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_31, f_31);
  r_13 = t;
  t = SSLsetAnnotations(r_13, a_31);
  t = b_30;
  if(match_cons(t, sym__2))
    {
      e_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_30);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_30, (ATerm) ATmakeAppl(sym__2, not_null(a_30), f_30));
  s_13 = t;
  t = SSLsetAnnotations(s_13, d_30);
  z_30 = t;
  if(match_cons(t, sym__2))
    {
      p_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,v_13 = NULL;
        t = SSLgetAnnotations(z_30);
        l_15 = t;
        t = p_33;
        t = fetch_1_0(f_2, t);
        o_15 = t;
        t = q_33;
        if(match_cons(t, sym__2))
          {
            q_15 = ATgetArgument(t, 0);
            r_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_5(g_2, q_15, r_15, t);
        p_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
        v_13 = t;
        t = SSLsetAnnotations(v_13, l_15);
        LocalPopChoice(p_16);
      }
    else
      {
        t = n_16;
        {
          ATerm y_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,w_13 = NULL;
          t = SSLgetAnnotations(z_30);
          y_15 = t;
          t = q_33;
          if(match_cons(t, sym__2))
            {
              c_16 = ATgetArgument(t, 0);
              d_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_5(h_2, c_16, d_16, t);
          b_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_33, b_16);
          w_13 = t;
          t = SSLsetAnnotations(w_13, y_15);
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
ATerm apply_strategy_1_0 (ATerm n_132 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  d_34 = t;
  t = dtime_0_0(t);
  t = d_34;
  t = n_132(t);
  c_34 = t;
  t = dtime_0_0(t);
  x_33 = t;
  t = c_34;
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_33), (ATerm) ATmakeAppl(sym_Runtime_1, x_33)), b_34);
  return(t);
}
static ATerm f_35 (ATerm u_34, ATerm t)
{
  t = SSL_fclose(u_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL;
  d_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_35 = ATgetArgument(t, 0);
      {
        ATerm r_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_35);
            LocalPopChoice(v_16);
          }
        else
          {
            t = r_16;
            t = f_35(d_35, t);
          }
      }
    }
  else
    {
      t = f_35(d_35, t);
    }
  return(t);
}
static ATerm q_5 (ATerm o_30, ATerm t)
{
  t = SSL_read_term_from_stream(o_30);
  return(t);
}
static ATerm r_5 (ATerm t_69, ATerm u_69, ATerm t)
{
  t = SSL_strcat(t_69, u_69);
  return(t);
}
static ATerm s_5 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_fopen(i_32, j_32);
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_35 = NULL;
  t = SSL_stdin_stream();
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_35 = NULL;
  t = SSL_stdout_stream();
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_35 = NULL;
  t = SSL_stderr_stream();
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_35);
  return(t);
}
static ATerm a_37 (ATerm x_35, ATerm t)
{
  ATerm y_35 = NULL;
  t = SSL_explode_term(x_35);
  if(match_cons(t, sym__2))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_16 = ATgetArgument(t, 1);
        if(((ATgetType(x_16) == AT_LIST) && !(ATisEmpty(x_16))))
          {
            y_35 = ATgetFirst((ATermList) x_16);
            {
              ATerm y_16 = (ATerm) ATgetNext((ATermList) x_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_37 (ATerm b_36, ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,l_36 = NULL,e_15 = NULL;
  t = SSLgetAnnotations(f_36);
  i_36 = t;
  t = b_36;
  if(match_cons(t, sym_Path_1))
    {
      l_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_36, e_36);
  e_15 = t;
  t = SSLsetAnnotations(e_15, i_36);
  if(match_cons(t, sym__2))
    {
      g_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(g_36, h_36, t);
  return(t);
}
static ATerm c_37 (ATerm n_36, ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,v_36 = NULL,f_16 = NULL;
  t = SSLgetAnnotations(p_36);
  s_36 = t;
  t = SSL_is_string(n_36);
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_36, o_36);
  f_16 = t;
  t = SSLsetAnnotations(f_16, s_36);
  if(match_cons(t, sym__2))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(q_36, r_36, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_37(x_36, t);
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              ATerm b_17 = t;
              int d_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_37(y_36, z_36, x_36, t);
                  LocalPopChoice(d_17);
                }
              else
                {
                  t = b_17;
                  t = c_37(y_36, z_36, x_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_37(x_36, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,l_37 = NULL;
  l_37 = t;
  {
    ATerm e_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_37, term_h_17);
        t = t_5(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = e_17;
        {
          ATerm n_17 = NULL,o_17 = NULL;
          t = term_i_17;
          o_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_17, l_37);
          t = r_5(o_17, l_37, t);
          n_17 = t;
          t = SSL_perror(n_17);
          _fail(t);
        }
      }
  }
  f_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(g_37, t);
  e_37 = t;
  t = f_37;
  t = fclose_0_0(t);
  t = e_37;
  return(t);
}
ATerm fetch_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  static ATerm k_38 (ATerm t);
  static ATerm k_38 (ATerm t)
  {
    ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
    h_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_38 = ATgetFirst((ATermList) t);
        j_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_17 = NULL,g_18 = NULL,k_16 = NULL;
          t = SSLgetAnnotations(h_38);
          t_17 = t;
          t = i_38;
          t = w_118(t);
          g_18 = t;
          t = (ATerm) ATinsert(CheckATermList(j_38), g_18);
          k_16 = t;
          t = SSLsetAnnotations(k_16, t_17);
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          {
            ATerm p_18 = NULL,y_18 = NULL,l_16 = NULL;
            t = SSLgetAnnotations(h_38);
            p_18 = t;
            t = j_38;
            t = k_38(t);
            y_18 = t;
            t = (ATerm) ATinsert(CheckATermList(y_18), i_38);
            l_16 = t;
            t = SSLsetAnnotations(l_16, p_18);
          }
        }
    }
    return(t);
  }
  t = k_38(t);
  return(t);
}
static ATerm y_5 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm n_38 = NULL;
  t = lookup_table_0_1(j_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(k_43, n_38, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_112 (ATerm), ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
        t = term_p_17;
        t_38 = t;
        t = term_q_17;
        u_38 = t;
        t = term_r_17;
        t = y_5(t_38, u_38, t);
        s_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_38, term_s_17);
        t = geq_0_0(t);
        t = q_38;
        t = n_112(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = q_38;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_38 = NULL,a_39 = NULL,b_39 = NULL;
  x_38 = t;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_17 = ATgetFirst((ATermList) t);
                ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_38;
          }
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATinsert(ATempty, x_38);
      }
  }
  a_39 = t;
  t = term_m_16;
  b_39 = t;
  t = SSL_printnl(b_39, a_39);
  t = x_38;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  t = term_p_17;
  f_39 = t;
  t = term_y_17;
  g_39 = t;
  t = term_z_17;
  t = y_5(f_39, g_39, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  if(match_string(t, "-k"))
    {
      t = i_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_39;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
  j_39 = t;
  t = SSL_string_to_int(j_39);
  k_39 = t;
  t = term_a_18;
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, k_39);
  t = b_6(l_39, k_39, t);
  t = j_39;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, l_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  if(match_string(t, "-S"))
    {
      t = n_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_39;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  t = term_q_17;
  o_39 = t;
  t = term_f_18;
  p_39 = t;
  t = term_h_18;
  t = b_6(o_39, p_39, t);
  t = term_i_18;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_j_18;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  t = SSL_string_to_int(q_39);
  r_39 = t;
  t = term_q_17;
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, r_39);
  t = b_6(s_39, r_39, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_39);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t = term_l_18;
  t_39 = t;
  t = term_f_7;
  u_39 = t;
  t = term_m_18;
  t = b_6(t_39, u_39, t);
  t = term_n_18;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_2, n_2, o_2, t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_2, x_2, c_3, t);
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            t = Option_3_0(g_3, i_3, m_3, t);
          }
      }
    }
  return(t);
}
static ATerm b_6 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  t = term_p_17;
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_17, c_36, d_36);
  t = lookup_table_0_1(v_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(c_36, d_36, w_39, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_17, c_36, d_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_40 = NULL,d_40 = NULL,p_40 = NULL;
      t = term_f_7;
      t = f_0(t);
      c_40 = t;
      t = term_b_19;
      d_40 = t;
      t = term_d_19;
      p_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_19, term_d_19, c_40);
      t = z_5(d_40, p_40, c_40, t);
      _fail(t);
    }
  else
    {
      ATerm t_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_40 = ATgetFirst((ATermList) t);
          b_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_40;
      t = d_0(t);
      t = term_f_7;
      t = e_0(t);
      t_40 = t;
      t = (ATerm) ATinsert(CheckATermList(b_40), t_40);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm v_40 = NULL;
  v_40 = t;
  if(match_string(t, "-o"))
    {
      t = v_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_40;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL;
  w_40 = t;
  t = term_h_19;
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, w_40);
  t = b_6(x_40, w_40, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_40);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
static ATerm z_5 (ATerm q_41, ATerm r_41, ATerm p_41, ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_19 = ATgetArgument(t, 0);
            ATerm r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
        t = y_5(q_41, r_41, t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = (ATerm) ATempty;
      }
  }
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_41, r_41, (ATerm) ATinsert(CheckATermList(a_41), p_41));
  t = lookup_table_0_1(q_41, t);
  d_41 = t;
  t = (ATerm) ATinsert(CheckATermList(a_41), p_41);
  b_41 = t;
  t = d_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(r_41, b_41, c_41, t);
  t = z_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_41 = NULL,s_41 = NULL,t_41 = NULL;
      t = term_f_7;
      t = k_0(t);
      o_41 = t;
      t = term_b_19;
      s_41 = t;
      t = term_d_19;
      t_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_19, term_d_19, o_41);
      t = z_5(s_41, t_41, o_41, t);
      _fail(t);
    }
  else
    {
      ATerm a_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_41 = ATgetFirst((ATermList) t);
          l_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_41 = ATgetFirst((ATermList) t);
          n_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_41;
      t = g_0(t);
      t = m_41;
      t = h_0(t);
      a_42 = t;
      t = (ATerm) ATinsert(CheckATermList(n_41), a_42);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  if(match_string(t, "-i"))
    {
      t = i_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_42;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  j_42 = t;
  t = term_s_19;
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, j_42);
  t = b_6(k_42, j_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_42);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, w_3, x_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_7;
  t = whoami_0_0(t);
  l_42 = t;
  t = term_g_7;
  n_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_19), l_42);
  o_42 = t;
  t = SSL_printnl(n_42, o_42);
  t = term_w_7;
  m_42 = t;
  t = SSL_exit(m_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_42 = NULL,w_42 = NULL;
  t = term_p_17;
  p_42 = t;
  t = term_y_17;
  w_42 = t;
  t = term_z_17;
  t = y_5(p_42, w_42, t);
  return(t);
}
static ATerm u_5 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm w_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_38, z_38);
      LocalPopChoice(y_19);
    }
  else
    {
      t = w_19;
      t = SSL_addr(y_38, z_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_42;
      t = j_124(t);
    }
  else
    {
      ATerm h_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_42 = ATgetFirst((ATermList) t);
          a_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_43;
      t = foldr_2_0(j_124, k_124, t);
      h_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_42, h_43);
      t = k_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_f_18;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(m_19, n_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_43 = NULL,e_19 = NULL,f_19 = NULL;
  t = times_0_0(t);
  f_19 = t;
  t = SSL_explode_term(f_19);
  if(match_cons(t, sym__2))
    {
      ATerm b_20 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_19;
  t = foldr_2_0(y_3, b_4, t);
  m_43 = t;
  t = SSL_TicksToSeconds(m_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  x_43 = t;
  if(match_cons(t, sym__2))
    {
      y_43 = ATgetArgument(t, 0);
      z_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_43;
        if((y_43 != t))
          {
            _fail(t);
          }
        t = x_43;
        LocalPopChoice(f_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
        {
          ATerm l_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_43, z_43);
              LocalPopChoice(m_20);
            }
          else
            {
              t = l_20;
              t = SSL_gtr(y_43, z_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL;
        t = term_p_17;
        g_44 = t;
        t = term_q_17;
        h_44 = t;
        t = term_r_17;
        t = y_5(g_44, h_44, t);
        f_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_44, term_w_7);
        t = geq_0_0(t);
        t = d_44;
        t = m_112(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
        t = d_44;
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,m_44 = NULL,n_44 = NULL;
  t = run_time_0_0(t);
  j_44 = t;
  t = term_f_7;
  t = whoami_0_0(t);
  k_44 = t;
  t = term_g_7;
  m_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_20), j_44), term_r_20), k_44);
  n_44 = t;
  t = SSL_printnl(m_44, n_44);
  t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_20), j_44), term_r_20), k_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_18;
  o_44 = t;
  t = SSL_exit(o_44);
  return(t);
}
static ATerm c_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm p_44 = NULL;
  t = SSL_hashtable_put(k_46, i_46, j_46);
  p_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_44);
  return(t);
}
static ATerm d_6 (ATerm l_46, ATerm m_46, ATerm t)
{
  t = SSL_hashtable_get(m_46, l_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_43, ATerm t)
{
  ATerm y_44 = NULL;
  t = table_hashtable_0_0(t);
  y_44 = t;
  {
    ATerm t_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL;
        t = y_44;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_6(c_43, g_20, t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = t_20;
        {
          ATerm q_20 = NULL;
          t = c_43;
          t = table_create_0_0(t);
          t = y_44;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_6(c_43, q_20, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_46, ATerm r_46, ATerm t)
{
  ATerm b_45 = NULL;
  t = SSL_hashtable_create(q_46, r_46);
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_45);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,g_45 = NULL,h_45 = NULL;
  c_45 = t;
  t = term_y_20;
  g_45 = t;
  t = term_z_20;
  h_45 = t;
  t = c_45;
  t = new_hashtable_0_2(g_45, h_45, t);
  d_45 = t;
  t = c_45;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(c_45, d_45, e_45, t);
  t = c_45;
  return(t);
}
static ATerm w_5 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm i_45 = NULL;
  t = SSL_hashtable_remove(o_46, n_46);
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_45);
  return(t);
}
static ATerm x_5 (ATerm s_46, ATerm t)
{
  ATerm j_45 = NULL;
  t = SSL_hashtable_destroy(s_46);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_45);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm k_45 = NULL;
  t = SSL_table_hashtable();
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_45);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
  l_45 = t;
  t = table_hashtable_0_0(t);
  m_45 = t;
  t = lookup_table_0_1(l_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(o_45, t);
  t = m_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(l_45, n_45, t);
  t = l_45;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  t = term_g_21;
  p_45 = t;
  t = term_f_7;
  q_45 = t;
  t = term_h_21;
  t = b_6(p_45, q_45, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  t = term_g_21;
  t_45 = t;
  t = term_f_7;
  u_45 = t;
  t = term_h_21;
  t = b_6(t_45, u_45, t);
  t = term_k_21;
  r_45 = t;
  t = term_f_7;
  s_45 = t;
  t = term_l_21;
  t = b_6(r_45, s_45, t);
  t = term_m_21;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, g_4, n_4, t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = o_21;
      t = Option_3_0(p_4, s_4, t_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,o_16 = NULL;
  a_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_45 = ATgetFirst((ATermList) t);
      x_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_46);
  v_45 = t;
  t = w_45;
  t = e_88(t);
  y_45 = t;
  t = x_45;
  t = f_88(t);
  z_45 = t;
  t = (ATerm) ATinsert(CheckATermList(z_45), y_45);
  o_16 = t;
  t = SSLsetAnnotations(o_16, v_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_135 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,t_46 = NULL,v_46 = NULL,w_46 = NULL,q_16 = NULL;
  f_46 = t;
  {
    ATerm r_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_21;
        t = t_135(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = r_21;
      }
  }
  t = f_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_46 = ATgetFirst((ATermList) t);
      t_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_46);
  g_46 = t;
  t = term_y_17;
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, h_46);
  t = b_6(w_46, h_46, t);
  t = t_46;
  {
    static ATerm g_47 (ATerm t);
    static ATerm g_47 (ATerm t)
    {
      ATerm w_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_46 = NULL;
              z_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_46;
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              t = t_135(t);
              t = Cons_2_0(_id, g_47, t);
            }
          LocalPopChoice(x_21);
        }
      else
        {
          t = w_21;
          {
            ATerm c_47 = NULL,d_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_47 = ATgetFirst((ATermList) t);
                d_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_47), (ATerm) ATmakeAppl(sym_Undefined_1, c_47));
          }
        }
      return(t);
    }
    t = g_47(t);
  }
  v_46 = t;
  t = (ATerm) ATinsert(CheckATermList(v_46), (ATerm) ATmakeAppl(sym_Program_1, h_46));
  q_16 = t;
  t = SSLsetAnnotations(q_16, g_46);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  if(match_string(t, "--help"))
    {
      t = t_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_47;
        }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  t = term_a_22;
  u_47 = t;
  t = term_f_7;
  v_47 = t;
  t = term_b_22;
  t = b_6(u_47, v_47, t);
  t = term_c_22;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  n_47 = t;
  t = term_b_19;
  o_47 = t;
  t = term_e_22;
  t = lookup_table_0_1(o_47, t);
  s_47 = t;
  t = term_d_19;
  p_47 = t;
  t = (ATerm) ATempty;
  q_47 = t;
  t = s_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(p_47, q_47, r_47, t);
  t = n_47;
  {
    static ATerm u_4 (ATerm t);
    static ATerm u_4 (ATerm t)
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_135(t);
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
                t = Option_3_0(x_4, y_4, z_4, t);
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
    t = parse_options_p__1_0(u_4, t);
  }
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_48 = NULL;
        g_48 = t;
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_20 = NULL;
              t = g_48;
              {
                ATerm o_22 = t;
                int p_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_20 = NULL,w_20 = NULL;
                    t = term_p_17;
                    v_20 = t;
                    t = term_a_22;
                    w_20 = t;
                    t = term_q_22;
                    t = y_5(v_20, w_20, t);
                    LocalPopChoice(p_22);
                  }
                else
                  {
                    t = o_22;
                    t = fetch_1_0(a_5, t);
                  }
              }
              t = g_48;
              t = r_135(t);
              t = term_f_18;
              u_20 = t;
              t = SSL_exit(u_20);
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
              {
                ATerm b_21 = NULL,d_21 = NULL,e_21 = NULL;
                t = term_p_17;
                d_21 = t;
                t = term_g_21;
                e_21 = t;
                t = term_r_22;
                t = y_5(d_21, e_21, t);
                t = g_48;
                t = s_135(t);
                t = term_f_18;
                b_21 = t;
                t = SSL_exit(b_21);
              }
            }
        }
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
              static ATerm e_5 (ATerm t);
              static ATerm e_5 (ATerm t)
              {
                ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,c_17 = NULL;
                m_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_48);
                k_48 = t;
                t = l_48;
                if(((l_47 != NULL) && (l_47 != t)))
                  _fail(t);
                else
                  l_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_48);
                c_17 = t;
                t = SSLsetAnnotations(c_17, k_48);
                return(t);
              }
              t = fetch_1_0(e_5, t);
              t = term_g_7;
              i_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_47)), term_u_22);
              j_48 = t;
              t = SSL_printnl(i_48, j_48);
              t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_47)), term_u_22));
              t = r_135(t);
              t = term_w_7;
              h_48 = t;
              t = SSL_exit(h_48);
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
            }
        }
      }
  }
  m_47 = t;
  t = term_b_19;
  t = table_destroy_0_0(t);
  t = m_47;
  return(t);
}
ATerm option_wrap_5_0 (ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t = parse_options_3_0(t_133, u_133, v_133, t);
  r_48 = t;
  t = term_v_22;
  t = table_create_0_0(t);
  t = term_v_22;
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_22, term_w_22, r_48);
  t = lookup_table_0_1(s_48, t);
  v_48 = t;
  t = term_w_22;
  t_48 = t;
  t = v_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(t_48, r_48, u_48, t);
  t = r_48;
  t = w_133(t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_133(t);
        t = report_success_0_0(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = if_verbose2_1_0(n_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL;
  t = term_z_22;
  w_48 = t;
  t = term_f_7;
  x_48 = t;
  t = term_a_23;
  t = b_6(w_48, x_48, t);
  t = term_b_23;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_c_23;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  y_48 = t;
  t = term_p_17;
  c_49 = t;
  t = term_y_17;
  d_49 = t;
  t = term_z_17;
  t = y_5(c_49, d_49, t);
  z_48 = t;
  t = term_g_7;
  a_49 = t;
  t = (ATerm) ATinsert(ATempty, z_48);
  b_49 = t;
  t = SSL_printnl(a_49, b_49);
  t = y_48;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm y_132 (ATerm), ATerm t)
{
  static ATerm f_6 (ATerm t);
  static ATerm h_6 (ATerm t);
  static ATerm f_6 (ATerm t)
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_132(t);
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
              t = input_option_0_0(t);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              {
                ATerm h_23 = t;
                int i_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          t = Option_3_0(i_6, j_6, m_6, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(m_23);
                              }
                            else
                              {
                                t = l_23;
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
  static ATerm h_6 (ATerm t)
  {
    ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
    f_49 = t;
    {
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_6 (ATerm t);
          static ATerm o_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_6, t);
          LocalPopChoice(o_23);
        }
      else
        {
          t = n_23;
          t = term_p_23;
          e_49 = t;
        }
    }
    t = not_null(e_49);
    t = ReadFromFile_0_0(t);
    g_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_49, g_49);
    t = apply_strategy_1_0(w_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(f_6, y_132, default_system_about_0_0, g_6, h_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,f_17 = NULL;
  l_49 = t;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  h_49 = t;
  t = j_49;
  t = dead_var_elim_0_0(t);
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_49, k_49);
  f_17 = t;
  t = SSLsetAnnotations(f_17, h_49);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_6, _fail, default_usage_0_0, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Wld_0;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_Choice_2;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_VarDec_2;
static Symbol sym_SDefT_4;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
static ATerm term_d_23;
static ATerm term_c_23;
static ATerm term_b_23;
static ATerm term_q_22;
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_l_22;
static ATerm term_k_22;
static ATerm term_z_21;
static ATerm term_y_21;
static ATerm term_x_21;
static ATerm term_w_21;
static ATerm term_v_21;
static ATerm term_q_21;
static ATerm term_l_21;
static ATerm term_k_21;
static ATerm term_j_21;
static ATerm term_i_21;
static ATerm term_h_21;
static ATerm term_g_21;
static ATerm term_f_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_m_20;
static ATerm term_l_20;
static ATerm term_k_20;
static ATerm term_j_20;
static ATerm term_e_20;
static ATerm term_z_19;
static ATerm term_y_19;
static ATerm term_x_19;
static ATerm term_w_19;
static ATerm term_v_19;
static ATerm term_r_19;
static ATerm term_q_19;
static ATerm term_p_19;
static ATerm term_l_19;
static ATerm term_k_19;
static ATerm term_j_19;
static ATerm term_i_19;
static ATerm term_u_18;
static ATerm term_q_18;
static ATerm term_p_18;
static ATerm term_o_18;
static ATerm term_n_18;
static ATerm term_g_18;
static ATerm term_c_18;
static ATerm term_p_17;
static ATerm term_o_17;
static ATerm term_n_17;
static ATerm term_m_17;
static ATerm term_l_17;
static ATerm term_z_16;
static ATerm term_x_16;
static ATerm term_y_15;
static ATerm term_w_15;
static ATerm term_t_15;
static ATerm term_q_15;
static ATerm term_p_15;
static ATerm term_n_15;
static ATerm term_i_15;
static ATerm term_d_15;
static ATerm term_b_13;
static ATerm term_a_13;
static ATerm term_t_11;
static ATerm term_o_11;
static ATerm term_m_8;
static ATerm term_k_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_13);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_p_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_w_15);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_o_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_p_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_l_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_c_18);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_k_19);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_c_18);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_c_18);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_c_18);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, (ATerm) ATempty);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_v_21);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_f_21);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_c_18);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm all_rl_1_0 (ATerm z_112 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm v_112 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm u_112 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm z_8 (ATerm q_7, ATerm r_7, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm d_5 (ATerm z_43, ATerm y_43, ATerm t);
static ATerm e_5 (ATerm s_47, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm t_112 (ATerm), ATerm t);
static ATerm f_5 (ATerm j_43, ATerm k_43, ATerm l_43, ATerm t);
ATerm alltd_1_0 (ATerm x_116 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm t_132 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_5 (ATerm a_113 (ATerm), ATerm t);
static ATerm j_5 (ATerm h_43, ATerm i_43, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_139 (ATerm), ATerm t);
static ATerm k_5 (ATerm h_127 (ATerm), ATerm s_41, ATerm q_41, ATerm t);
static ATerm l_5 (ATerm b_43, ATerm c_43, ATerm t);
ATerm end_scope_1_0 (ATerm e_127 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_127 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm dead_var_elim_0_0 (ATerm t);
static ATerm n_5 (ATerm e_33, ATerm f_33, ATerm t);
static ATerm o_5 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm q_5 (ATerm u_122 (ATerm), ATerm b_249, ATerm q_31, ATerm t);
static ATerm p_5 (ATerm g_31, ATerm h_31, ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm output_1_0 (ATerm w_148 (ATerm), ATerm t);
static ATerm x_29 (ATerm n_29, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_5 (ATerm m_31, ATerm t);
static ATerm s_5 (ATerm i_76, ATerm j_76, ATerm t);
static ATerm t_5 (ATerm g_33, ATerm h_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_33 (ATerm t_30, ATerm t);
static ATerm d_33 (ATerm e_31, ATerm i_31, ATerm j_31, ATerm t);
static ATerm k_33 (ATerm c_32, ATerm d_32, ATerm e_32, ATerm t);
static ATerm u_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm x_148 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_132 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_6 (ATerm f_37, ATerm g_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_6 (ATerm w_42, ATerm x_42, ATerm v_42, ATerm t);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_5 (ATerm e_40, ATerm f_40, ATerm t);
ATerm foldr_2_0 (ATerm l_138 (ATerm), ATerm m_138 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_124 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_6 (ATerm l_47, ATerm m_47, ATerm n_47, ATerm t);
ATerm lookup_table_0_1 (ATerm i_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_47, ATerm u_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm x_5 (ATerm q_47, ATerm r_47, ATerm t);
static ATerm y_5 (ATerm v_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_132 (ATerm), ATerm t);
static ATerm f_6 (ATerm o_47, ATerm p_47, ATerm t);
static ATerm a_6 (ATerm p_44, ATerm q_44, ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_150 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm parse_options_3_0 (ATerm n_150 (ATerm), ATerm o_150 (ATerm), ATerm p_150 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm q_148 (ATerm), ATerm r_148 (ATerm), ATerm s_148 (ATerm), ATerm t_148 (ATerm), ATerm u_148 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm all_rl_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,p_0 = NULL,q_0 = NULL;
  q_0 = t;
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      a_0 = ATgetArgument(t, 0);
      c_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_0;
  t = reverse_map_1_0(z_112, t);
  p_0 = t;
  t = SSL_mkterm(a_0, p_0);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm h_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL,m_2 = NULL,p_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_2;
        h_1 = t;
        t = SSLgetAnnotations(m_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) s_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(u_7) != AT_LIST) || !(ATisEmpty(u_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_2;
        LocalPopChoice(n_7);
      }
    else
      {
        t = l_7;
        {
          ATerm d_8 = t;
          int e_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_2;
              h_1 = t;
              t = SSLgetAnnotations(m_2);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_8 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) g_8) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_8 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(j_8) != AT_LIST) || !(ATisEmpty(j_8))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = m_2;
              LocalPopChoice(e_8);
            }
          else
            {
              t = d_8;
              t = p_2;
              h_1 = t;
              t = SSLgetAnnotations(m_2);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_2;
            }
        }
      }
  }
  t = term_k_8;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_1);
  m_1 = t;
  t = term_m_8;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, (ATerm)ATmakeAppl(sym_Var_1, h_1), term_m_8);
  t = f_5(l_1, m_1, p_1, t);
  t = m_2;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm q_2 = NULL,z_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_2);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_8 = ATgetFirst((ATermList) t);
      ATerm o_8 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(o_8) != AT_LIST) || !(ATisEmpty(o_8))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, z_2);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm z_0 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,l_0 = NULL;
  f_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      d_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_1);
  z_0 = t;
  t = d_1;
  t = alltd_1_0(i_0, t);
  t = alltd_1_0(j_0, t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, e_1);
  l_0 = t;
  t = SSLsetAnnotations(l_0, z_0);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,q_1 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm r_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,w_3 = NULL,y_3 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,u_1 = NULL,s_1 = NULL;
    g_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        t_3 = ATgetArgument(t, 0);
        w_3 = ATgetArgument(t, 1);
        y_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_4);
    s_3 = t;
    t = w_3;
    t = v_112(t);
    d_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, t_3, d_4, y_3);
    s_1 = t;
    t = SSLsetAnnotations(s_1, s_3);
    e_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        o_3 = ATgetArgument(t, 0);
        p_3 = ATgetArgument(t, 1);
        q_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_4);
    m_3 = t;
    t = o_3;
    t = v_112(t);
    r_3 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_3, p_3, q_3);
    u_1 = t;
    t = SSLsetAnnotations(u_1, m_3);
    return(t);
  }
  static ATerm r_0 (ATerm t)
  {
    ATerm h_4 = NULL,k_4 = NULL,l_4 = NULL,u_4 = NULL,v_4 = NULL,y_4 = NULL,w_1 = NULL;
    y_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        k_4 = ATgetArgument(t, 0);
        l_4 = ATgetArgument(t, 1);
        u_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_4);
    h_4 = t;
    t = u_4;
    t = v_112(t);
    v_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_4, l_4, v_4);
    w_1 = t;
    t = SSLsetAnnotations(w_1, h_4);
    return(t);
  }
  l_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      g_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
      k_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, g_3, i_3, k_3);
  q_1 = t;
  t = SSLsetAnnotations(q_1, f_3);
  t = elim_abstract_choice_2_0(n_0, r_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,g_5 = NULL,c_6 = NULL,c_2 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm t_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm g_6 = NULL,q_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,d_2 = NULL;
    u_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        q_6 = ATgetArgument(t, 0);
        s_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_6);
    g_6 = t;
    t = q_6;
    t = u_112(t);
    t_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_6, s_6);
    d_2 = t;
    t = SSLsetAnnotations(d_2, g_6);
    return(t);
  }
  static ATerm t_0 (ATerm t)
  {
    ATerm v_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,f_2 = NULL;
    a_7 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        x_6 = ATgetArgument(t, 0);
        y_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_7);
    v_6 = t;
    t = y_6;
    t = u_112(t);
    z_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, x_6, z_6);
    f_2 = t;
    t = SSLsetAnnotations(f_2, v_6);
    return(t);
  }
  c_6 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      b_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_6);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, b_5, g_5);
  c_2 = t;
  t = SSLsetAnnotations(c_2, a_5);
  t = elim_abstract_choice_2_0(s_0, t_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm f_8 = NULL,h_8 = NULL,i_8 = NULL,l_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
      t = h_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_8 = ATgetFirst((ATermList) t);
                {
                  ATerm r_8 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_8);
            t = i_8;
            {
              ATerm s_8 = t;
              int u_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm v_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_8);
                  t = f_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = l_8;
                    }
                  else
                    {
                      ATerm w_8 = t;
                      int x_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_8(f_8, l_8, t);
                          LocalPopChoice(x_8);
                        }
                      else
                        {
                          t = w_8;
                          t = l_8;
                        }
                    }
                }
              else
                {
                  t = s_8;
                  t = f_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = l_8;
                    }
                  else
                    {
                      t = l_8;
                    }
                }
            }
          }
        else
          {
            t = p_8;
            t = f_8;
            if(match_cons(t, sym_Scopes_0))
              {
                t = l_8;
              }
            else
              {
                t = l_8;
              }
          }
      }
    }
  else
    {
      t = l_8;
    }
  return(t);
}
static ATerm z_8 (ATerm q_7, ATerm r_7, ATerm t)
{
  t = r_7;
  {
    ATerm y_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        t = term_k_8;
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, q_7);
        t = a_6(v_1, q_7, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_9 = ATgetFirst((ATermList) t);
            if(match_cons(c_9, sym_Defined_1))
              {
                ATerm j_9 = ATgetArgument(c_9, 0);
              }
            else
              _fail(t);
            {
              ATerm h_9 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = r_7;
        LocalPopChoice(a_9);
      }
    else
      {
        t = y_8;
        t = (ATerm) ATmakeAppl(sym__2, q_7, (ATerm) ATinsert(ATempty, term_m_8));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  t = map_1_0(u_0, t);
  o_7 = t;
  t = term_k_8;
  t = table_destroy_0_0(t);
  t = term_k_8;
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, o_7);
  t = d_5(p_7, o_7, t);
  t = o_7;
  return(t);
}
static ATerm d_5 (ATerm z_43, ATerm y_43, ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    ATerm d_9 = NULL,f_9 = NULL,i_9 = NULL;
    if(match_cons(t, sym__2))
      {
        d_9 = ATgetArgument(t, 0);
        f_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, z_43, d_9, f_9);
    t = lookup_table_0_1(z_43, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        i_9 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_6(d_9, f_9, i_9, t);
    t = (ATerm) ATmakeAppl(sym__3, z_43, d_9, f_9);
    return(t);
  }
  t = y_43;
  t = map_1_0(v_0, t);
  return(t);
}
static ATerm e_5 (ATerm s_47, ATerm t)
{
  t = SSL_hashtable_keys(s_47);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  static ATerm w_0 (ATerm t);
  static ATerm w_0 (ATerm t)
  {
    ATerm m_9 = NULL,n_9 = NULL;
    m_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), m_9);
    t = a_6(not_null(k_9), m_9, t);
    n_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_9, n_9);
    return(t);
  }
  if(((k_9 != NULL) && (k_9 != t)))
    _fail(t);
  else
    k_9 = t;
  t = lookup_table_0_1(k_9, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(l_9, t);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_k_8;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,s_9 = NULL,u_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  y_9 = t;
  t = save_ElimVar_0_0(t);
  o_9 = t;
  t = y_9;
  t = w_112(t);
  x_9 = t;
  t = save_ElimVar_0_0(t);
  s_9 = t;
  t = term_k_8;
  t = table_destroy_0_0(t);
  t = term_k_8;
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, o_9);
  t = d_5(z_9, o_9, t);
  t = x_9;
  t = x_112(t);
  u_9 = t;
  t = s_9;
  t = isect_ElimVar_0_0(t);
  t = u_9;
  return(t);
}
ATerm elim_choice_1_0 (ATerm t_112 (ATerm), ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,c_3 = NULL;
  static ATerm x_0 (ATerm t);
  static ATerm y_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,k_10 = NULL,l_10 = NULL,d_3 = NULL;
    l_10 = t;
    if(match_cons(t, sym_Choice_2))
      {
        f_10 = ATgetArgument(t, 0);
        g_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_10);
    e_10 = t;
    t = f_10;
    t = t_112(t);
    k_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, k_10, g_10);
    d_3 = t;
    t = SSLsetAnnotations(d_3, e_10);
    return(t);
  }
  static ATerm y_0 (ATerm t)
  {
    ATerm n_10 = NULL,s_10 = NULL,u_10 = NULL,y_10 = NULL,b_11 = NULL,e_3 = NULL;
    b_11 = t;
    if(match_cons(t, sym_Choice_2))
      {
        s_10 = ATgetArgument(t, 0);
        u_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_11);
    n_10 = t;
    t = u_10;
    t = t_112(t);
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, s_10, y_10);
    e_3 = t;
    t = SSLsetAnnotations(e_3, n_10);
    return(t);
  }
  d_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_10);
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, b_10, c_10);
  c_3 = t;
  t = SSLsetAnnotations(c_3, a_10);
  t = elim_abstract_choice_2_0(x_0, y_0, t);
  return(t);
}
static ATerm f_5 (ATerm j_43, ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
  t = a_6(j_43, k_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_9 = ATgetFirst((ATermList) t);
      c_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_43, k_43, (ATerm) ATinsert(CheckATermList(c_11), l_43));
  t = lookup_table_0_1(j_43, t);
  g_11 = t;
  t = (ATerm) ATinsert(CheckATermList(c_11), l_43);
  e_11 = t;
  t = g_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(k_43, e_11, f_11, t);
  t = d_11;
  return(t);
}
ATerm alltd_1_0 (ATerm x_116 (ATerm), ATerm t)
{
  static ATerm h_11 (ATerm t);
  static ATerm h_11 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_116(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = SRTS_all(h_11, t);
      }
    return(t);
  }
  t = h_11(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm t_132 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,r_12 = NULL,s_12 = NULL;
  s_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_12 = ATgetFirst((ATermList) t);
      r_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL,n_2 = NULL,o_2 = NULL,t_2 = NULL,u_2 = NULL,v_3 = NULL,u_3 = NULL;
        t = SSLgetAnnotations(s_12);
        o_2 = t;
        t = r_12;
        t = reverse_map_1_0(t_132, t);
        t_2 = t;
        t = (ATerm) ATinsert(CheckATermList(t_2), m_12);
        u_3 = t;
        t = SSLsetAnnotations(u_3, o_2);
        u_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_2 = ATgetFirst((ATermList) t);
            l_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_2);
        i_2 = t;
        t = j_2;
        t = t_132(t);
        n_2 = t;
        t = (ATerm) ATinsert(CheckATermList(l_2), n_2);
        v_3 = t;
        t = SSLsetAnnotations(v_3, i_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_12;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_k_8;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  l_13 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_13 = ATgetArgument(t, 0);
      {
        ATerm j_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, m_13);
  n_13 = t;
  t = term_m_8;
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_13), term_m_8);
  t = k_5(g_1, n_13, o_13, t);
  t = l_13;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_k_8;
  return(t);
}
static ATerm h_5 (ATerm a_113 (ATerm), ATerm t)
{
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    ATerm u_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,e_13 = NULL,g_13 = NULL,h_13 = NULL,a_4 = NULL;
    h_13 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        w_12 = ATgetArgument(t, 0);
        x_12 = ATgetArgument(t, 1);
        y_12 = ATgetArgument(t, 2);
        z_12 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_13);
    u_12 = t;
    t = y_12;
    t = map_1_0(c_1, t);
    e_13 = t;
    t = z_12;
    t = a_113(t);
    g_13 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, w_12, x_12, e_13, g_13);
    a_4 = t;
    t = SSLsetAnnotations(a_4, u_12);
    return(t);
  }
  t = scope_2_0(a_1, b_1, t);
  return(t);
}
static ATerm j_5 (ATerm h_43, ATerm i_43, ATerm t)
{
  ATerm p_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
  t = a_6(h_43, i_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_13 = ATgetFirst((ATermList) t);
      {
        ATerm m_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_13;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm o_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL;
        t = term_k_8;
        o_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, r_14);
        t = j_5(o_4, r_14, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = r_14;
        _fail(t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm t_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 = NULL;
              t = term_k_8;
              x_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_k_8, r_14);
              t = j_5(x_4, r_14, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = r_14;
              _fail(t);
              LocalPopChoice(v_10);
            }
          else
            {
              t = t_10;
              {
                ATerm w_10 = t;
                int a_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_6 = NULL;
                    t = term_k_8;
                    h_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_k_8, r_14);
                    t = j_5(h_6, r_14, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = r_14;
                    _fail(t);
                    LocalPopChoice(a_11);
                  }
                else
                  {
                    t = w_10;
                    {
                      ATerm n_6 = NULL;
                      t = term_k_8;
                      n_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_k_8, r_14);
                      t = j_5(n_6, r_14, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm n_11 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) n_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_o_11;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_139 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,m_16 = NULL;
  j_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_16 = ATgetFirst((ATermList) t);
          m_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 = NULL,e_7 = NULL,f_7 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(j_16);
            b_7 = t;
            t = k_16;
            t = p_139(t);
            e_7 = t;
            t = m_16;
            t = filter_1_0(p_139, t);
            f_7 = t;
            t = (ATerm) ATinsert(CheckATermList(f_7), e_7);
            c_4 = t;
            t = SSLsetAnnotations(c_4, b_7);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = m_16;
            t = filter_1_0(p_139, t);
          }
      }
    }
  return(t);
}
static ATerm k_5 (ATerm h_127 (ATerm), ATerm s_41, ATerm q_41, ATerm t)
{
  ATerm p_16 = NULL,r_16 = NULL,s_16 = NULL,y_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,f_17 = NULL;
  y_16 = t;
  t = h_127(t);
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_16, s_41, q_41);
  t = b_6(p_16, s_41, q_41, t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_17 = NULL;
        t = term_t_11;
        g_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_16, term_t_11);
        t = a_6(p_16, g_17, t);
        {
          ATerm c_12 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_12;
            }
        }
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_16 = ATgetFirst((ATermList) t);
      s_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_16, term_t_11, (ATerm) ATinsert(CheckATermList(s_16), (ATerm) ATinsert(CheckATermList(r_16), s_41)));
  t = lookup_table_0_1(p_16, t);
  f_17 = t;
  t = term_t_11;
  b_17 = t;
  t = (ATerm) ATinsert(CheckATermList(s_16), (ATerm) ATinsert(CheckATermList(r_16), s_41));
  c_17 = t;
  t = f_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(b_17, c_17, d_17, t);
  t = y_16;
  return(t);
}
static ATerm l_5 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  i_17 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
        t = a_6(b_43, c_43, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_12 = ATgetFirst((ATermList) t);
            h_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_12);
        {
          ATerm k_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_43, c_43, h_17);
          t = lookup_table_0_1(b_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_6(c_43, h_17, k_17, t);
          t = (ATerm) ATmakeAppl(sym__3, b_43, c_43, h_17);
        }
      }
    else
      {
        t = d_12;
        {
          ATerm r_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
          t = lookup_table_0_1(b_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_5(c_43, r_17, t);
          t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
        }
      }
  }
  t = i_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL;
  z_17 = t;
  t = e_127(t);
  y_17 = t;
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL;
        t = term_t_11;
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_17, term_t_11);
        t = a_6(y_17, e_18, t);
        {
          ATerm j_12 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_12;
            }
        }
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_17 = ATgetFirst((ATermList) t);
      v_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_17, term_t_11, v_17);
  t = lookup_table_0_1(y_17, t);
  d_18 = t;
  t = term_t_11;
  a_18 = t;
  t = d_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(a_18, v_17, b_18, t);
  t = w_17;
  {
    static ATerm i_1 (ATerm t);
    static ATerm i_1 (ATerm t)
    {
      ATerm j_18 = NULL;
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_17, j_18);
      t = l_5(y_17, j_18, t);
      return(t);
    }
    t = map_1_0(i_1, t);
  }
  t = z_17;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_118(t);
      t = r_118(t);
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      t = r_118(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_127 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,v_18 = NULL,w_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  s_18 = t;
  t = d_127(t);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_18, term_t_11);
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_12 = ATgetArgument(t, 0);
            ATerm v_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_11;
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_18, term_t_11);
        t = a_6(r_18, f_19, t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = (ATerm) ATempty;
      }
  }
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_18, term_t_11, (ATerm) ATinsert(CheckATermList(v_18), (ATerm) ATempty));
  t = lookup_table_0_1(r_18, t);
  a_19 = t;
  t = term_t_11;
  w_18 = t;
  t = (ATerm) ATinsert(CheckATermList(v_18), (ATerm) ATempty);
  y_18 = t;
  t = a_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(w_18, y_18, z_18, t);
  t = s_18;
  return(t);
}
ATerm scope_2_0 (ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    t = end_scope_1_0(f_127, t);
    return(t);
  }
  t = begin_scope_1_0(f_127, t);
  t = restore_always_2_0(g_127, j_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_k_8;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_25);
  y_25 = t;
  t = term_b_13;
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_25), term_b_13);
  t = k_5(r_1, y_25, z_25, t);
  t = x_25;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_k_8;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm c_13 = t;
  if((PushChoice() == 0))
    {
      ATerm a_26 = NULL;
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_26);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_13;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm v_7 = NULL,y_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  v_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_k_8;
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_7);
  b_8 = t;
  t = term_m_8;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, (ATerm)ATmakeAppl(sym_Var_1, y_7), term_m_8);
  t = f_5(a_8, b_8, c_8, t);
  t = v_7;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = alltd_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,t_9 = NULL,v_9 = NULL;
  p_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_k_8;
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_9);
  t_9 = t;
  t = term_m_8;
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, (ATerm)ATmakeAppl(sym_Var_1, q_9), term_m_8);
  t = f_5(r_9, t_9, v_9, t);
  t = p_9;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = alltd_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_k_8;
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_11);
  l_11 = t;
  t = term_m_8;
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, (ATerm)ATmakeAppl(sym_Var_1, j_11), term_m_8);
  t = f_5(k_11, l_11, m_11, t);
  t = i_11;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_14 = NULL,d_14 = NULL,i_14 = NULL,k_14 = NULL,x_11 = NULL;
  k_14 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_14);
  b_14 = t;
  t = d_14;
  t = map_1_0(dead_var_elim_0_0, t);
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_14);
  x_11 = t;
  t = SSLsetAnnotations(x_11, b_14);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm d_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm l_27 (ATerm t);
      static ATerm l_27 (ATerm t)
      {
        ATerm j_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
            c_25 = t;
            {
              ATerm a_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      ATerm e_14 = ATgetArgument(t, 0);
                      ATerm g_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_14);
                  {
                    static ATerm n_1 (ATerm t);
                    static ATerm n_1 (ATerm t)
                    {
                      ATerm f_25 = NULL,g_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,o_25 = NULL,p_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,w_25 = NULL,i_6 = NULL,z_4 = NULL;
                      w_25 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          o_25 = ATgetArgument(t, 0);
                          p_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(w_25);
                      l_25 = t;
                      t = o_25;
                      t = map_1_0(o_1, t);
                      s_25 = t;
                      t = p_25;
                      t = l_27(t);
                      t_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, s_25, t_25);
                      z_4 = t;
                      t = SSLsetAnnotations(z_4, l_25);
                      u_25 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          g_25 = ATgetArgument(t, 0);
                          j_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_25);
                      f_25 = t;
                      t = g_25;
                      t = filter_1_0(t_1, t);
                      k_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_25, j_25);
                      i_6 = t;
                      t = SSLsetAnnotations(i_6, f_25);
                      return(t);
                    }
                    t = c_25;
                    t = scope_2_0(k_1, n_1, t);
                  }
                }
              else
                {
                  t = a_14;
                  {
                    ATerm j_14 = t;
                    int l_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm n_14 = ATgetArgument(t, 0);
                            ATerm q_14 = ATgetArgument(t, 1);
                            ATerm s_14 = ATgetArgument(t, 2);
                            ATerm t_14 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_14);
                        t = c_25;
                        t = h_5(l_27, t);
                      }
                    else
                      {
                        t = j_14;
                        if(match_cons(t, sym_Build_1))
                          {
                            d_25 = ATgetArgument(t, 0);
                            {
                              ATerm m_7 = NULL,t_7 = NULL,o_6 = NULL;
                              t = SSLgetAnnotations(c_25);
                              m_7 = t;
                              t = d_25;
                              t = alltd_1_0(x_1, t);
                              t_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, t_7);
                              o_6 = t;
                              t = SSLsetAnnotations(o_6, m_7);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                d_25 = ATgetArgument(t, 0);
                                e_25 = ATgetArgument(t, 1);
                                b_25 = ATgetArgument(t, 2);
                                {
                                  ATerm t_8 = NULL,e_9 = NULL,g_9 = NULL,w_7 = NULL;
                                  t = SSLgetAnnotations(c_25);
                                  t_8 = t;
                                  t = e_25;
                                  t = reverse_map_1_0(l_27, t);
                                  e_9 = t;
                                  t = b_25;
                                  t = reverse_map_1_0(y_1, t);
                                  g_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_25, e_9, g_9);
                                  w_7 = t;
                                  t = SSLsetAnnotations(w_7, t_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    d_25 = ATgetArgument(t, 0);
                                    e_25 = ATgetArgument(t, 1);
                                    b_25 = ATgetArgument(t, 2);
                                    {
                                      ATerm r_10 = NULL,x_10 = NULL,z_10 = NULL,x_7 = NULL;
                                      t = SSLgetAnnotations(c_25);
                                      r_10 = t;
                                      t = e_25;
                                      t = reverse_map_1_0(l_27, t);
                                      x_10 = t;
                                      t = b_25;
                                      t = reverse_map_1_0(a_2, t);
                                      z_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, d_25, x_10, z_10);
                                      x_7 = t;
                                      t = SSLsetAnnotations(x_7, r_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm v_11 = NULL,w_11 = NULL,z_11 = NULL,a_12 = NULL,g_12 = NULL,p_12 = NULL,q_12 = NULL,b_9 = NULL,z_7 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        d_25 = ATgetArgument(t, 0);
                                        e_25 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(c_25);
                                    g_12 = t;
                                    t = e_25;
                                    t = l_27(t);
                                    p_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, d_25, p_12);
                                    z_7 = t;
                                    t = SSLsetAnnotations(z_7, g_12);
                                    q_12 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        w_11 = ATgetArgument(t, 0);
                                        z_11 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(q_12);
                                    v_11 = t;
                                    t = w_11;
                                    t = l_27(t);
                                    a_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_12, z_11);
                                    b_9 = t;
                                    t = SSLsetAnnotations(b_9, v_11);
                                  }
                              }
                          }
                      }
                  }
                }
            }
            LocalPopChoice(q_13);
          }
        else
          {
            t = j_13;
            {
              ATerm u_14 = t;
              int v_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(l_27, t);
                  LocalPopChoice(v_14);
                }
              else
                {
                  t = u_14;
                  {
                    ATerm w_14 = t;
                    int x_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = elim_lchoice_1_0(l_27, t);
                        LocalPopChoice(x_14);
                      }
                    else
                      {
                        t = w_14;
                        {
                          ATerm y_14 = t;
                          int a_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(l_27, t);
                              LocalPopChoice(a_15);
                            }
                          else
                            {
                              t = y_14;
                              {
                                ATerm b_15 = t;
                                int c_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EliminateFromMatch_0_0(t);
                                    LocalPopChoice(c_15);
                                  }
                                else
                                  {
                                    t = b_15;
                                    t = all_rl_1_0(l_27, t);
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
      t = l_27(t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = d_13;
      {
        ATerm h_27 = NULL,i_27 = NULL,i_13 = NULL,k_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,b_12 = NULL,y_11 = NULL,u_11 = NULL;
        h_27 = t;
        if(match_cons(t, sym_Specification_1))
          {
            i_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_27);
        i_13 = t;
        t = i_27;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_13 = ATgetFirst((ATermList) t);
            t_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_27);
        k_13 = t;
        t = s_13;
        if(match_cons(t, sym_Signature_1))
          {
            x_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_13);
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, x_13);
        u_11 = t;
        t = SSLsetAnnotations(u_11, w_13);
        y_13 = t;
        t = t_13;
        t = Cons_2_0(e_2, g_2, t);
        u_13 = t;
        t = (ATerm) ATinsert(CheckATermList(u_13), y_13);
        y_11 = t;
        t = SSLsetAnnotations(y_11, k_13);
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, v_13);
        b_12 = t;
        t = SSLsetAnnotations(b_12, i_13);
      }
    }
  return(t);
}
static ATerm n_5 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm z_27 = NULL;
  t = SSL_fputc(e_33, f_33);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_27);
  return(t);
}
static ATerm o_5 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm a_28 = NULL;
  t = SSL_write_term_to_stream_text(k_31, l_31);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_28);
  return(t);
}
static ATerm q_5 (ATerm u_122 (ATerm), ATerm b_249, ATerm q_31, ATerm t)
{
  ATerm b_28 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_249, term_d_15);
  t = u_5(t);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, q_31);
  t = u_122(t);
  t = fclose_0_0(t);
  t = q_31;
  return(t);
}
static ATerm p_5 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm c_28 = NULL;
  t = SSL_write_term_to_stream_baf(g_31, h_31);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_28);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      if(match_cons(e_15, sym_Stream_1))
        {
          r_28 = ATgetArgument(e_15, 0);
        }
      else
        _fail(t);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(r_28, s_28, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,y_28 = NULL,b_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if(match_cons(h_15, sym_Stream_1))
        {
          y_28 = ATgetArgument(h_15, 0);
        }
      else
        _fail(t);
      b_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(y_28, b_29, t);
  t_28 = t;
  t = term_i_15;
  u_28 = t;
  t = t_28;
  if(match_cons(t, sym_Stream_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_15, t_28);
  t = n_5(u_28, v_28, t);
  return(t);
}
ATerm output_1_0 (ATerm w_148 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  t = w_148(t);
  h_28 = t;
  {
    ATerm k_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_28 = NULL,j_28 = NULL;
        t = term_n_15;
        i_28 = t;
        t = term_p_15;
        j_28 = t;
        t = term_q_15;
        t = a_6(i_28, j_28, t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = k_15;
        t = term_t_15;
      }
  }
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL,n_28 = NULL;
        t = term_n_15;
        k_28 = t;
        t = term_w_15;
        n_28 = t;
        t = term_y_15;
        t = a_6(k_28, n_28, t);
        t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
        LocalPopChoice(v_15);
        if(match_cons(t, sym__2))
          {
            ATerm a_16 = ATgetArgument(t, 0);
            ATerm b_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_5(h_2, g_28, h_28, t);
      }
    else
      {
        t = u_15;
        if(match_cons(t, sym__2))
          {
            ATerm c_16 = ATgetArgument(t, 0);
            ATerm d_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_5(k_2, g_28, h_28, t);
      }
  }
  return(t);
}
static ATerm x_29 (ATerm n_29, ATerm t)
{
  t = SSL_fclose(n_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_29 = NULL,v_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_29 = ATgetArgument(t, 0);
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_29);
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            t = x_29(v_29, t);
          }
      }
    }
  else
    {
      t = x_29(v_29, t);
    }
  return(t);
}
static ATerm r_5 (ATerm m_31, ATerm t)
{
  t = SSL_read_term_from_stream(m_31);
  return(t);
}
static ATerm s_5 (ATerm i_76, ATerm j_76, ATerm t)
{
  t = SSL_strcat(i_76, j_76);
  return(t);
}
static ATerm t_5 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm y_29 = NULL;
  t = SSL_fopen(g_33, h_33);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_30 = NULL;
  t = SSL_stdin_stream();
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_30 = NULL;
  t = SSL_stdout_stream();
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_30 = NULL;
  t = SSL_stderr_stream();
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_30);
  return(t);
}
static ATerm c_33 (ATerm t_30, ATerm t)
{
  ATerm u_30 = NULL;
  t = SSL_explode_term(t_30);
  if(match_cons(t, sym__2))
    {
      ATerm i_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_16 = ATgetArgument(t, 1);
        if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
          {
            u_30 = ATgetFirst((ATermList) l_16);
            {
              ATerm n_16 = (ATerm) ATgetNext((ATermList) l_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_30;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_30;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_30;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_30;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_33 (ATerm e_31, ATerm i_31, ATerm j_31, ATerm t)
{
  ATerm n_31 = NULL,s_31 = NULL,u_31 = NULL,y_31 = NULL,r_13 = NULL;
  t = SSLgetAnnotations(j_31);
  u_31 = t;
  t = e_31;
  if(match_cons(t, sym_Path_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_31, i_31);
  r_13 = t;
  t = SSLsetAnnotations(r_13, u_31);
  if(match_cons(t, sym__2))
    {
      n_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(n_31, s_31, t);
  return(t);
}
static ATerm k_33 (ATerm c_32, ATerm d_32, ATerm e_32, ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,n_32 = NULL,z_13 = NULL;
  t = SSLgetAnnotations(e_32);
  h_32 = t;
  t = SSL_is_string(c_32);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_32, d_32);
  z_13 = t;
  t = SSLsetAnnotations(z_13, h_32);
  if(match_cons(t, sym__2))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(f_32, g_32, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm t_32 = NULL,v_32 = NULL,z_32 = NULL;
  t_32 = t;
  if(match_cons(t, sym__2))
    {
      v_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
      {
        ATerm o_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_33(t_32, t);
            LocalPopChoice(q_16);
          }
        else
          {
            t = o_16;
            {
              ATerm t_16 = t;
              int u_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_33(v_32, z_32, t_32, t);
                  LocalPopChoice(u_16);
                }
              else
                {
                  t = t_16;
                  t = k_33(v_32, z_32, t_32, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_33(t_32, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_33 = NULL,t_33 = NULL,u_33 = NULL,g_34 = NULL;
  g_34 = t;
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_34, term_x_16);
        t = u_5(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
          ATerm f_15 = NULL,g_15 = NULL;
          t = term_z_16;
          g_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_16, g_34);
          t = s_5(g_15, g_34, t);
          f_15 = t;
          t = SSL_perror(f_15);
          _fail(t);
        }
      }
  }
  t_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(u_33, t);
  m_33 = t;
  t = t_33;
  t = fclose_0_0(t);
  t = m_33;
  return(t);
}
ATerm input_1_0 (ATerm x_148 (ATerm), ATerm t)
{
  ATerm a_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_34 = NULL,k_34 = NULL;
      t = term_n_15;
      j_34 = t;
      t = term_l_17;
      k_34 = t;
      t = term_m_17;
      t = a_6(j_34, k_34, t);
      LocalPopChoice(e_17);
    }
  else
    {
      t = a_17;
      t = term_n_17;
    }
  t = ReadFromFile_0_0(t);
  t = x_148(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_34 = NULL,p_34 = NULL;
  t = term_n_15;
  n_34 = t;
  t = term_o_17;
  p_34 = t;
  t = term_p_17;
  t = a_6(n_34, p_34, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_17 = ATgetFirst((ATermList) t);
                ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_34;
          }
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        t = (ATerm) ATinsert(ATempty, r_34);
      }
  }
  s_34 = t;
  t = term_t_15;
  t_34 = t;
  t = SSL_printnl(t_34, s_34);
  t = r_34;
  return(t);
}
ATerm map_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  static ATerm l_35 (ATerm t);
  static ATerm l_35 (ATerm t)
  {
    ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
    i_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_35;
      }
    else
      {
        ATerm o_15 = NULL,r_15 = NULL,s_15 = NULL,f_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_35 = ATgetFirst((ATermList) t);
            k_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_35);
        o_15 = t;
        t = j_35;
        t = q_132(t);
        r_15 = t;
        t = k_35;
        t = l_35(t);
        s_15 = t;
        t = (ATerm) ATinsert(CheckATermList(s_15), r_15);
        f_14 = t;
        t = SSLsetAnnotations(f_14, o_15);
      }
    return(t);
  }
  t = l_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_35 = ATgetFirst((ATermList) t);
      p_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_35 = NULL,u_35 = NULL;
        static ATerm r_2 (ATerm t);
        static ATerm r_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_35)), not_null(u_35));
          return(t);
        }
        t = p_35;
        t = o_0(t);
        if(((t_35 != NULL) && (t_35 != t)))
          _fail(t);
        else
          t_35 = t;
        t = o_35;
        t = m_0(t);
        if(((u_35 != NULL) && (u_35 != t)))
          _fail(t);
        else
          u_35 = t;
        t = p_35;
        t = reverse_acc_2_0(m_0, r_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_18;
      t = o_0(t);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,h_14 = NULL;
  f_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_36);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_36);
  h_14 = t;
  t = SSLsetAnnotations(h_14, d_36);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_36), term_g_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  ATerm h_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_36 = NULL,c_36 = NULL;
      t = term_n_15;
      b_36 = t;
      t = term_o_17;
      c_36 = t;
      t = term_p_17;
      t = a_6(b_36, c_36, t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = h_18;
      t = fetch_1_0(s_2, t);
    }
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_150(t);
        t = echo_0_0(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
      }
  }
  t = term_n_18;
  t = echo_0_0(t);
  t = term_o_18;
  z_35 = t;
  t = term_p_18;
  a_36 = t;
  t = term_q_18;
  t = a_6(z_35, a_36, t);
  t = reverse_acc_2_0(_id, v_2, t);
  t = map_1_0(w_2, t);
  t = term_u_18;
  t = echo_0_0(t);
  {
    ATerm x_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_150(t);
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_36 = NULL;
              k_36 = t;
              t = SSL_is_string(k_36);
              t = k_36;
              LocalPopChoice(e_19);
              {
                ATerm l_36 = NULL;
                l_36 = t;
                t = (ATerm) ATinsert(ATempty, l_36);
              }
            }
          else
            {
              t = d_19;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = x_18;
      }
  }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,m_14 = NULL;
  u_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_36);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_36);
  m_14 = t;
  t = SSLsetAnnotations(m_14, s_36);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_36 = NULL,r_36 = NULL;
        t = term_n_15;
        q_36 = t;
        t = term_o_17;
        r_36 = t;
        t = term_p_17;
        t = a_6(q_36, r_36, t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = fetch_1_0(x_2, t);
      }
  }
  t = p_36;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  if(match_string(t, "-k"))
    {
      t = w_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_36;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  t = SSL_string_to_int(x_36);
  y_36 = t;
  t = term_i_19;
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, y_36);
  t = d_6(z_36, y_36, t);
  t = x_36;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, a_3, b_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  if(match_string(t, "-S"))
    {
      t = b_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_37;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  t = term_k_19;
  c_37 = t;
  t = term_l_19;
  d_37 = t;
  t = term_p_19;
  t = d_6(c_37, d_37, t);
  t = term_q_19;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_r_19;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm e_37 = NULL,h_37 = NULL,i_37 = NULL;
  e_37 = t;
  t = SSL_string_to_int(e_37);
  h_37 = t;
  t = term_k_19;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, h_37);
  t = d_6(i_37, h_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_37);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL;
  t = term_w_19;
  j_37 = t;
  t = term_c_18;
  k_37 = t;
  t = term_x_19;
  t = d_6(j_37, k_37, t);
  t = term_y_19;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, j_3, n_3, t);
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_3, z_3, b_4, t);
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            t = Option_3_0(f_4, i_4, j_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_6 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL;
  t = term_n_15;
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_15, f_37, g_37);
  t = lookup_table_0_1(l_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(f_37, g_37, m_37, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_15, f_37, g_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
      t = term_c_18;
      t = f_0(t);
      s_37 = t;
      t = term_o_18;
      t_37 = t;
      t = term_p_18;
      u_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, s_37);
      t = b_6(t_37, u_37, s_37, t);
      _fail(t);
    }
  else
    {
      ATerm x_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_37 = ATgetFirst((ATermList) t);
          r_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_37;
      t = d_0(t);
      t = term_c_18;
      t = e_0(t);
      x_37 = t;
      t = (ATerm) ATinsert(CheckATermList(r_37), x_37);
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  if(match_string(t, "-o"))
    {
      t = z_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_37;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  a_38 = t;
  t = term_p_15;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, a_38);
  t = d_6(b_38, a_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_38);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, n_4, p_4, t);
  return(t);
}
static ATerm b_6 (ATerm w_42, ATerm x_42, ATerm v_42, ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_20 = ATgetArgument(t, 0);
            ATerm i_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
        t = a_6(w_42, x_42, t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = (ATerm) ATempty;
      }
  }
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_42, x_42, (ATerm) ATinsert(CheckATermList(e_38), v_42));
  t = lookup_table_0_1(w_42, t);
  h_38 = t;
  t = (ATerm) ATinsert(CheckATermList(e_38), v_42);
  f_38 = t;
  t = h_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(x_42, f_38, g_38, t);
  t = d_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
      t = term_c_18;
      t = k_0(t);
      s_38 = t;
      t = term_o_18;
      t_38 = t;
      t = term_p_18;
      u_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, s_38);
      t = b_6(t_38, u_38, s_38, t);
      _fail(t);
    }
  else
    {
      ATerm y_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_38 = ATgetFirst((ATermList) t);
          p_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_38 = ATgetFirst((ATermList) t);
          r_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_38;
      t = g_0(t);
      t = q_38;
      t = h_0(t);
      y_38 = t;
      t = (ATerm) ATinsert(CheckATermList(r_38), y_38);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm a_39 = NULL;
  a_39 = t;
  if(match_string(t, "-i"))
    {
      t = a_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_39;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL;
  b_39 = t;
  t = term_l_17;
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, b_39);
  t = d_6(c_39, b_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_39);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_18;
  t = whoami_0_0(t);
  d_39 = t;
  t = term_k_20;
  f_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_20), d_39);
  g_39 = t;
  t = SSL_printnl(f_39, g_39);
  t = term_m_20;
  e_39 = t;
  t = SSL_exit(e_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL;
  t = term_n_15;
  h_39 = t;
  t = term_o_17;
  i_39 = t;
  t = term_p_17;
  t = a_6(h_39, i_39, t);
  return(t);
}
static ATerm v_5 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_40, f_40);
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = SSL_addr(e_40, f_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_138 (ATerm), ATerm m_138 (ATerm), ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_39;
      t = l_138(t);
    }
  else
    {
      ATerm p_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_39 = ATgetFirst((ATermList) t);
          m_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_39;
      t = foldr_2_0(l_138, m_138, t);
      p_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_39, p_39);
      t = m_138(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_l_19;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(g_16, h_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_39 = NULL,x_15 = NULL,z_15 = NULL;
  t = times_0_0(t);
  z_15 = t;
  t = SSL_explode_term(z_15);
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_15;
  t = foldr_2_0(t_4, w_4, t);
  s_39 = t;
  t = SSL_TicksToSeconds(s_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_40 = NULL,g_40 = NULL,h_40 = NULL;
  d_40 = t;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_40;
        if((g_40 != t))
          {
            _fail(t);
          }
        t = d_40;
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = (ATerm) ATmakeAppl(sym__2, g_40, h_40);
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_40, h_40);
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              t = SSL_gtr(g_40, h_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_40, h_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_124 (ATerm), ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
        t = term_n_15;
        o_40 = t;
        t = term_k_19;
        p_40 = t;
        t = term_w_20;
        t = a_6(o_40, p_40, t);
        n_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_40, term_m_20);
        t = geq_0_0(t);
        t = l_40;
        t = l_124(t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = l_40;
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,u_40 = NULL,v_40 = NULL;
  t = run_time_0_0(t);
  r_40 = t;
  t = term_c_18;
  t = whoami_0_0(t);
  s_40 = t;
  t = term_k_20;
  u_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_20), r_40), term_x_20), s_40);
  v_40 = t;
  t = SSL_printnl(u_40, v_40);
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_20), r_40), term_x_20), s_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_19;
  w_40 = t;
  t = SSL_exit(w_40);
  return(t);
}
static ATerm e_6 (ATerm l_47, ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_hashtable_put(n_47, l_47, m_47);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_44, ATerm t)
{
  ATerm g_41 = NULL;
  t = table_hashtable_0_0(t);
  g_41 = t;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL;
        t = g_41;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_6(i_44, j_17, t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          ATerm q_17 = NULL;
          t = i_44;
          t = table_create_0_0(t);
          t = g_41;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_6(i_44, q_17, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_47, ATerm u_47, ATerm t)
{
  ATerm j_41 = NULL;
  t = SSL_hashtable_create(t_47, u_47);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,a_42 = NULL,b_42 = NULL;
  v_41 = t;
  t = term_b_21;
  a_42 = t;
  t = term_c_21;
  b_42 = t;
  t = v_41;
  t = new_hashtable_0_2(a_42, b_42, t);
  w_41 = t;
  t = v_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(v_41, w_41, x_41, t);
  t = v_41;
  return(t);
}
static ATerm x_5 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm c_42 = NULL;
  t = SSL_hashtable_remove(r_47, q_47);
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_42);
  return(t);
}
static ATerm y_5 (ATerm v_47, ATerm t)
{
  ATerm d_42 = NULL;
  t = SSL_hashtable_destroy(v_47);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_42);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_42 = NULL;
  t = SSL_table_hashtable();
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_42);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  f_42 = t;
  t = table_hashtable_0_0(t);
  g_42 = t;
  t = lookup_table_0_1(f_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(i_42, t);
  t = g_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(f_42, h_42, t);
  t = f_42;
  return(t);
}
ATerm fetch_1_0 (ATerm y_132 (ATerm), ATerm t)
{
  static ATerm r_43 (ATerm t);
  static ATerm r_43 (ATerm t)
  {
    ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
    o_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_43 = ATgetFirst((ATermList) t);
        q_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_21 = t;
      int e_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_18 = NULL,i_18 = NULL,o_14 = NULL;
          t = SSLgetAnnotations(o_43);
          f_18 = t;
          t = p_43;
          t = y_132(t);
          i_18 = t;
          t = (ATerm) ATinsert(CheckATermList(q_43), i_18);
          o_14 = t;
          t = SSLsetAnnotations(o_14, f_18);
          LocalPopChoice(e_21);
        }
      else
        {
          t = d_21;
          {
            ATerm t_18 = NULL,c_19 = NULL,p_14 = NULL;
            t = SSLgetAnnotations(o_43);
            t_18 = t;
            t = q_43;
            t = r_43(t);
            c_19 = t;
            t = (ATerm) ATinsert(CheckATermList(c_19), p_43);
            p_14 = t;
            t = SSLsetAnnotations(p_14, t_18);
          }
        }
    }
    return(t);
  }
  t = r_43(t);
  return(t);
}
static ATerm f_6 (ATerm o_47, ATerm p_47, ATerm t)
{
  t = SSL_hashtable_get(p_47, o_47);
  return(t);
}
static ATerm a_6 (ATerm p_44, ATerm q_44, ATerm t)
{
  ATerm u_43 = NULL;
  t = lookup_table_0_1(p_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(q_44, u_43, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  t = term_f_21;
  c_44 = t;
  t = term_c_18;
  d_44 = t;
  t = term_g_21;
  t = d_6(c_44, d_44, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_h_21;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  t = term_f_21;
  g_44 = t;
  t = term_c_18;
  h_44 = t;
  t = term_g_21;
  t = d_6(g_44, h_44, t);
  t = term_i_21;
  e_44 = t;
  t = term_c_18;
  f_44 = t;
  t = term_j_21;
  t = d_6(e_44, f_44, t);
  t = term_k_21;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_5, m_5, w_5, t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = Option_3_0(z_5, j_6, k_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,z_14 = NULL;
  t_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_44 = ATgetFirst((ATermList) t);
      o_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_44);
  m_44 = t;
  t = n_44;
  t = e_90(t);
  r_44 = t;
  t = o_44;
  t = f_90(t);
  s_44 = t;
  t = (ATerm) ATinsert(CheckATermList(s_44), r_44);
  z_14 = t;
  t = SSLsetAnnotations(z_14, m_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_150 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,d_45 = NULL,e_45 = NULL,j_15 = NULL;
  y_44 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_21;
        t = q_150(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
      }
  }
  t = y_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_45 = ATgetFirst((ATermList) t);
      b_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_44);
  z_44 = t;
  t = term_o_17;
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_17, a_45);
  t = d_6(e_45, a_45, t);
  t = b_45;
  {
    static ATerm o_45 (ATerm t);
    static ATerm o_45 (ATerm t)
    {
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_21 = t;
          int u_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_45 = NULL;
              h_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_45;
              LocalPopChoice(u_21);
            }
          else
            {
              t = t_21;
              t = q_150(t);
              t = Cons_2_0(_id, o_45, t);
            }
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          {
            ATerm k_45 = NULL,l_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_45 = ATgetFirst((ATermList) t);
                l_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_45), (ATerm) ATmakeAppl(sym_Undefined_1, k_45));
          }
        }
      return(t);
    }
    t = o_45(t);
  }
  d_45 = t;
  t = (ATerm) ATinsert(CheckATermList(d_45), (ATerm) ATmakeAppl(sym_Program_1, a_45));
  j_15 = t;
  t = SSLsetAnnotations(j_15, z_44);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  if(match_string(t, "--help"))
    {
      t = b_46;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_46;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_46;
        }
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  t = term_v_21;
  c_46 = t;
  t = term_c_18;
  d_46 = t;
  t = term_w_21;
  t = d_6(c_46, d_46, t);
  t = term_x_21;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm n_150 (ATerm), ATerm o_150 (ATerm), ATerm p_150 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  v_45 = t;
  t = term_o_18;
  w_45 = t;
  t = term_z_21;
  t = lookup_table_0_1(w_45, t);
  a_46 = t;
  t = term_p_18;
  x_45 = t;
  t = (ATerm) ATempty;
  y_45 = t;
  t = a_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(x_45, y_45, z_45, t);
  t = v_45;
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_150(t);
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_6, p_6, r_6, t);
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_6, t);
  }
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_46 = NULL;
        o_46 = t;
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_19 = NULL;
              t = o_46;
              {
                ATerm i_22 = t;
                int j_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_19 = NULL,o_19 = NULL;
                    t = term_n_15;
                    n_19 = t;
                    t = term_v_21;
                    o_19 = t;
                    t = term_k_22;
                    t = a_6(n_19, o_19, t);
                    LocalPopChoice(j_22);
                  }
                else
                  {
                    t = i_22;
                    t = fetch_1_0(w_6, t);
                  }
              }
              t = o_46;
              t = o_150(t);
              t = term_l_19;
              m_19 = t;
              t = SSL_exit(m_19);
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
              {
                ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
                t = term_n_15;
                t_19 = t;
                t = term_f_21;
                u_19 = t;
                t = term_l_22;
                t = a_6(t_19, u_19, t);
                t = o_46;
                t = p_150(t);
                t = term_l_19;
                s_19 = t;
                t = SSL_exit(s_19);
              }
            }
        }
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
              static ATerm c_7 (ATerm t);
              static ATerm c_7 (ATerm t)
              {
                ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,l_15 = NULL;
                u_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_46);
                s_46 = t;
                t = t_46;
                if(((t_45 != NULL) && (t_45 != t)))
                  _fail(t);
                else
                  t_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_46);
                l_15 = t;
                t = SSLsetAnnotations(l_15, s_46);
                return(t);
              }
              t = fetch_1_0(c_7, t);
              t = term_k_20;
              q_46 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_45)), term_o_22);
              r_46 = t;
              t = SSL_printnl(q_46, r_46);
              t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_45)), term_o_22));
              t = o_150(t);
              t = term_m_20;
              p_46 = t;
              t = SSL_exit(p_46);
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
            }
        }
      }
  }
  u_45 = t;
  t = term_o_18;
  t = table_destroy_0_0(t);
  t = u_45;
  return(t);
}
ATerm option_wrap_5_0 (ATerm q_148 (ATerm), ATerm r_148 (ATerm), ATerm s_148 (ATerm), ATerm t_148 (ATerm), ATerm u_148 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  t = parse_options_3_0(q_148, r_148, s_148, t);
  z_46 = t;
  t = term_p_22;
  t = table_create_0_0(t);
  t = term_p_22;
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, z_46);
  t = lookup_table_0_1(a_47, t);
  d_47 = t;
  t = term_q_22;
  b_47 = t;
  t = d_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(b_47, z_46, c_47, t);
  t = z_46;
  t = t_148(t);
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_148(t);
        t = report_success_0_0(t);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_7, i_7, j_7, t);
                  LocalPopChoice(y_22);
                }
              else
                {
                  t = x_22;
                  {
                    ATerm z_22 = t;
                    int a_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_23);
                      }
                    else
                      {
                        t = z_22;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = input_1_0(k_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL;
  t = term_w_15;
  f_47 = t;
  t = term_c_18;
  g_47 = t;
  t = term_b_23;
  t = d_6(f_47, g_47, t);
  t = term_c_23;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_d_23;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = output_1_0(dead_var_elim_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(d_7, default_system_usage_0_0, default_system_about_0_0, _id, g_7, t);
  return(t);
}

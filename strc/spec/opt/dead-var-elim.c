#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_w_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_x_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_n_13;
ATerm term_k_12;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_e_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_s_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_v_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_l_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym__2, term_v_7, term_w_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_14);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_b_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_m_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_v_6);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_v_6);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_v_6);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_v_6);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, (ATerm) ATempty);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_x_22);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_d_22);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_g_24, term_v_6);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm l_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm p_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm b_142 (ATerm), ATerm c_142 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_124 (ATerm), ATerm t);
ATerm all_rl_1_0 (ATerm q_105 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm m_105 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm l_105 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm n_12 (ATerm a_11, ATerm b_11, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm j_5 (ATerm h_43, ATerm g_43, ATerm t);
static ATerm k_5 (ATerm w_46, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm k_105 (ATerm), ATerm t);
static ATerm l_5 (ATerm r_42, ATerm s_42, ATerm t_42, ATerm t);
ATerm alltd_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm r_124 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm n_5 (ATerm r_105 (ATerm), ATerm t);
static ATerm p_5 (ATerm p_42, ATerm q_42, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_131 (ATerm), ATerm t);
static ATerm q_5 (ATerm y_119 (ATerm), ATerm a_41, ATerm y_40, ATerm t);
static ATerm r_5 (ATerm j_42, ATerm k_42, ATerm t);
ATerm end_scope_1_0 (ATerm v_119 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_119 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm dead_var_elim_0_0 (ATerm t);
static ATerm u_5 (ATerm r_32, ATerm s_32, ATerm t);
static ATerm v_5 (ATerm x_30, ATerm y_30, ATerm t);
static ATerm x_5 (ATerm l_115 (ATerm), ATerm p_240, ATerm d_31, ATerm t);
static ATerm w_5 (ATerm t_30, ATerm u_30, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm q_138 (ATerm), ATerm t);
static ATerm d_37 (ATerm s_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_5 (ATerm z_30, ATerm t);
static ATerm z_5 (ATerm e_71, ATerm f_71, ATerm t);
static ATerm a_6 (ATerm t_32, ATerm u_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_38 (ATerm n_37, ATerm t);
static ATerm p_38 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t);
static ATerm q_38 (ATerm b_38, ATerm c_38, ATerm d_38, ATerm t);
static ATerm b_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_124 (ATerm), ATerm t);
static ATerm g_6 (ATerm x_43, ATerm y_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm d_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_6 (ATerm n_36, ATerm o_36, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_6 (ATerm e_42, ATerm f_42, ATerm d_42, ATerm t);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_6 (ATerm m_39, ATerm n_39, ATerm t);
ATerm foldr_2_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_117 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_6 (ATerm p_46, ATerm q_46, ATerm r_46, ATerm t);
static ATerm l_6 (ATerm s_46, ATerm t_46, ATerm t);
ATerm lookup_table_0_1 (ATerm q_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_46, ATerm y_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm e_6 (ATerm u_46, ATerm v_46, ATerm t);
static ATerm f_6 (ATerm z_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_141 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm parse_options_3_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm a_140 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm iowrap_3_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,j_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_0 = ATgetFirst((ATermList) t);
      j_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_0 = NULL,y_0 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_0)), not_null(y_0));
          return(t);
        }
        t = j_0;
        t = m_0(t);
        if(((t_0 != NULL) && (t_0 != t)))
          _fail(t);
        else
          t_0 = t;
        t = e_0;
        t = k_0(t);
        if(((y_0 != NULL) && (y_0 != t)))
          _fail(t);
        else
          y_0 = t;
        t = j_0;
        t = reverse_acc_2_0(k_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_6;
      t = m_0(t);
    }
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL,l_1 = NULL,o_0 = NULL;
  l_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_1);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_1);
  o_0 = t;
  t = SSLsetAnnotations(o_0, h_1);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm u_1 = NULL;
  u_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_x_6);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm b_142 (ATerm), ATerm c_142 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  ATerm y_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 = NULL,f_1 = NULL;
      t = term_c_7;
      e_1 = t;
      t = term_l_7;
      f_1 = t;
      t = term_m_7;
      t = g_6(e_1, f_1, t);
      LocalPopChoice(a_7);
    }
  else
    {
      t = y_6;
      t = fetch_1_0(l_0, t);
    }
  {
    ATerm n_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_142(t);
        t = echo_0_0(t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = n_7;
      }
  }
  t = term_s_7;
  t = echo_0_0(t);
  t = term_v_7;
  c_1 = t;
  t = term_w_7;
  d_1 = t;
  t = term_x_7;
  t = g_6(c_1, d_1, t);
  t = reverse_acc_2_0(_id, n_0, t);
  t = map_1_0(p_0, t);
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = c_142(t);
        w_1 = t;
        t = (ATerm) ATinsert(CheckATermList(w_1), term_e_8);
        t = echo_0_0(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
      }
  }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,m_2 = NULL,h_3 = NULL;
  m_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_2);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_2);
  h_3 = t;
  t = SSLsetAnnotations(h_3, f_2);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  {
    ATerm g_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL,e_2 = NULL;
        t = term_c_7;
        a_2 = t;
        t = term_l_7;
        e_2 = t;
        t = term_m_7;
        t = g_6(a_2, e_2, t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = g_8;
        t = fetch_1_0(q_0, t);
      }
  }
  t = z_1;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm map_1_0 (ATerm o_124 (ATerm), ATerm t)
{
  static ATerm v_3 (ATerm t);
  static ATerm v_3 (ATerm t)
  {
    ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
    r_3 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_3;
      }
    else
      {
        ATerm r_0 = NULL,w_0 = NULL,x_0 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_3 = ATgetFirst((ATermList) t);
            t_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_3);
        r_0 = t;
        t = s_3;
        t = o_124(t);
        w_0 = t;
        t = t_3;
        t = v_3(t);
        x_0 = t;
        t = (ATerm) ATinsert(CheckATermList(x_0), w_0);
        j_3 = t;
        t = SSLsetAnnotations(j_3, r_0);
      }
    return(t);
  }
  t = v_3(t);
  return(t);
}
ATerm all_rl_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  a_4 = t;
  t = SSL_explode_term(a_4);
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  t = reverse_map_1_0(q_105, t);
  z_3 = t;
  t = SSL_mkterm(x_3, z_3);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm t_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,e_7 = NULL,f_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_7;
        t_4 = t;
        t = SSLgetAnnotations(e_7);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_9 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) i_9) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_9 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(v_9) != AT_LIST) || !(ATisEmpty(v_9))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_7;
        LocalPopChoice(g_9);
      }
    else
      {
        t = b_9;
        {
          ATerm w_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_7;
              t_4 = t;
              t = SSLgetAnnotations(e_7);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_10 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm d_10 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(d_10) != AT_LIST) || !(ATisEmpty(d_10))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = e_7;
              LocalPopChoice(x_9);
            }
          else
            {
              t = w_9;
              t = f_7;
              t_4 = t;
              t = SSLgetAnnotations(e_7);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_7;
            }
        }
      }
  }
  t = term_e_10;
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_4);
  y_4 = t;
  t = term_h_10;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, (ATerm)ATmakeAppl(sym_Var_1, t_4), term_h_10);
  t = l_5(x_4, y_4, z_4, t);
  t = e_7;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm g_7 = NULL,i_7 = NULL;
  g_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_7);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_10 = ATgetFirst((ATermList) t);
      ATerm o_10 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, i_7);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm l_4 = NULL,o_4 = NULL,p_4 = NULL,s_4 = NULL,m_3 = NULL;
  s_4 = t;
  if(match_cons(t, sym_Match_1))
    {
      o_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_4);
  l_4 = t;
  t = o_4;
  t = alltd_1_0(s_0, t);
  t = alltd_1_0(u_0, t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, p_4);
  m_3 = t;
  t = SSLsetAnnotations(m_3, l_4);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,j_8 = NULL,o_3 = NULL;
  static ATerm v_0 (ATerm t);
  static ATerm z_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    ATerm l_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,a_9 = NULL,w_3 = NULL,p_3 = NULL;
    a_9 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        s_8 = ATgetArgument(t, 0);
        t_8 = ATgetArgument(t, 1);
        w_8 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_9);
    r_8 = t;
    t = t_8;
    t = m_105(t);
    x_8 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_8, x_8, w_8);
    p_3 = t;
    t = SSLsetAnnotations(p_3, r_8);
    y_8 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        n_8 = ATgetArgument(t, 0);
        o_8 = ATgetArgument(t, 1);
        p_8 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_8);
    l_8 = t;
    t = n_8;
    t = m_105(t);
    q_8 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, q_8, o_8, p_8);
    w_3 = t;
    t = SSLsetAnnotations(w_3, l_8);
    return(t);
  }
  static ATerm z_0 (ATerm t)
  {
    ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,h_9 = NULL,j_9 = NULL,b_4 = NULL;
    j_9 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        d_9 = ATgetArgument(t, 0);
        e_9 = ATgetArgument(t, 1);
        f_9 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_9);
    c_9 = t;
    t = f_9;
    t = m_105(t);
    h_9 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, d_9, e_9, h_9);
    b_4 = t;
    t = SSLsetAnnotations(b_4, c_9);
    return(t);
  }
  j_8 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      b_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_8);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_7, a_8, b_8);
  o_3 = t;
  t = SSLsetAnnotations(o_3, y_7);
  t = elim_abstract_choice_2_0(v_0, z_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,g_4 = NULL;
  static ATerm a_1 (ATerm t);
  static ATerm b_1 (ATerm t);
  static ATerm a_1 (ATerm t)
  {
    ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,h_4 = NULL;
    s_9 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        p_9 = ATgetArgument(t, 0);
        q_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_9);
    o_9 = t;
    t = p_9;
    t = l_105(t);
    r_9 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_9, q_9);
    h_4 = t;
    t = SSLsetAnnotations(h_4, o_9);
    return(t);
  }
  static ATerm b_1 (ATerm t)
  {
    ATerm t_9 = NULL,u_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,i_4 = NULL;
    a_10 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        u_9 = ATgetArgument(t, 0);
        y_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_10);
    t_9 = t;
    t = y_9;
    t = l_105(t);
    z_9 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, u_9, z_9);
    i_4 = t;
    t = SSLsetAnnotations(i_4, t_9);
    return(t);
  }
  n_9 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      l_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_9);
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, l_9, m_9);
  g_4 = t;
  t = SSLsetAnnotations(g_4, k_9);
  t = elim_abstract_choice_2_0(a_1, b_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,q_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
      t = i_11;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_11 = ATgetFirst((ATermList) t);
                {
                  ATerm r_10 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_10);
            t = j_11;
            {
              ATerm s_10 = t;
              int u_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm v_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_10);
                  t = h_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = q_11;
                    }
                  else
                    {
                      ATerm y_10 = t;
                      int z_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_12(h_11, q_11, t);
                          LocalPopChoice(z_10);
                        }
                      else
                        {
                          t = y_10;
                          t = q_11;
                        }
                    }
                }
              else
                {
                  t = s_10;
                  t = h_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = q_11;
                    }
                  else
                    {
                      t = q_11;
                    }
                }
            }
          }
        else
          {
            t = p_10;
            t = h_11;
            if(match_cons(t, sym_Scopes_0))
              {
                t = q_11;
              }
            else
              {
                t = q_11;
              }
          }
      }
    }
  else
    {
      t = q_11;
    }
  return(t);
}
static ATerm n_12 (ATerm a_11, ATerm b_11, ATerm t)
{
  t = b_11;
  {
    ATerm c_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL;
        t = term_e_10;
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_10, a_11);
        t = g_6(r_2, a_11, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_11 = ATgetFirst((ATermList) t);
            if(match_cons(k_11, sym_Defined_1))
              {
                ATerm o_11 = ATgetArgument(k_11, 0);
              }
            else
              _fail(t);
            {
              ATerm n_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_11;
        LocalPopChoice(g_11);
      }
    else
      {
        t = c_11;
        t = (ATerm) ATmakeAppl(sym__2, a_11, (ATerm) ATinsert(ATempty, term_h_10));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm t_10 = NULL,x_10 = NULL;
  t = map_1_0(g_1, t);
  t_10 = t;
  t = term_e_10;
  t = table_destroy_0_0(t);
  t = term_e_10;
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, t_10);
  t = j_5(x_10, t_10, t);
  t = t_10;
  return(t);
}
static ATerm j_5 (ATerm h_43, ATerm g_43, ATerm t)
{
  static ATerm i_1 (ATerm t);
  static ATerm i_1 (ATerm t)
  {
    ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
    if(match_cons(t, sym__2))
      {
        p_12 = ATgetArgument(t, 0);
        q_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, h_43, p_12, q_12);
    t = lookup_table_0_1(h_43, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        r_12 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = k_6(p_12, q_12, r_12, t);
    t = (ATerm) ATmakeAppl(sym__3, h_43, p_12, q_12);
    return(t);
  }
  t = g_43;
  t = map_1_0(i_1, t);
  return(t);
}
static ATerm k_5 (ATerm w_46, ATerm t)
{
  t = SSL_hashtable_keys(w_46);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  static ATerm k_1 (ATerm t);
  static ATerm k_1 (ATerm t)
  {
    ATerm v_12 = NULL,w_12 = NULL;
    v_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), v_12);
    t = g_6(not_null(t_12), v_12, t);
    w_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_12, w_12);
    return(t);
  }
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  t = lookup_table_0_1(t_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(u_12, t);
  t = map_1_0(k_1, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_e_10;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL,d_13 = NULL;
  c_13 = t;
  t = save_ElimVar_0_0(t);
  x_12 = t;
  t = c_13;
  t = n_105(t);
  a_13 = t;
  t = save_ElimVar_0_0(t);
  y_12 = t;
  t = term_e_10;
  t = table_destroy_0_0(t);
  t = term_e_10;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, x_12);
  t = j_5(d_13, x_12, t);
  t = a_13;
  t = o_105(t);
  z_12 = t;
  t = y_12;
  t = isect_ElimVar_0_0(t);
  t = z_12;
  return(t);
}
ATerm elim_choice_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,k_13 = NULL,l_13 = NULL,n_4 = NULL;
  static ATerm m_1 (ATerm t);
  static ATerm n_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    ATerm p_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,c_5 = NULL;
    u_13 = t;
    if(match_cons(t, sym_Choice_2))
      {
        r_13 = ATgetArgument(t, 0);
        s_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_13);
    p_13 = t;
    t = r_13;
    t = k_105(t);
    t_13 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, t_13, s_13);
    c_5 = t;
    t = SSLsetAnnotations(c_5, p_13);
    return(t);
  }
  static ATerm n_1 (ATerm t)
  {
    ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,b_14 = NULL,d_5 = NULL;
    b_14 = t;
    if(match_cons(t, sym_Choice_2))
      {
        w_13 = ATgetArgument(t, 0);
        x_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_14);
    v_13 = t;
    t = x_13;
    t = k_105(t);
    y_13 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, w_13, y_13);
    d_5 = t;
    t = SSLsetAnnotations(d_5, v_13);
    return(t);
  }
  l_13 = t;
  if(match_cons(t, sym_Choice_2))
    {
      f_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_13);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, f_13, k_13);
  n_4 = t;
  t = SSLsetAnnotations(n_4, e_13);
  t = elim_abstract_choice_2_0(m_1, n_1, t);
  return(t);
}
static ATerm l_5 (ATerm r_42, ATerm s_42, ATerm t_42, ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,i_14 = NULL;
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_42, s_42);
  t = g_6(r_42, s_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_11 = ATgetFirst((ATermList) t);
      c_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_42, s_42, (ATerm) ATinsert(CheckATermList(c_14), t_42));
  t = lookup_table_0_1(r_42, t);
  i_14 = t;
  t = (ATerm) ATinsert(CheckATermList(c_14), t_42);
  e_14 = t;
  t = i_14;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(s_42, e_14, f_14, t);
  t = d_14;
  return(t);
}
ATerm alltd_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  static ATerm k_14 (ATerm t);
  static ATerm k_14 (ATerm t)
  {
    ATerm v_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_109(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = v_11;
        t = SRTS_all(k_14, t);
      }
    return(t);
  }
  t = k_14(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
  q_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_15 = ATgetFirst((ATermList) t);
      p_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,d_3 = NULL,e_3 = NULL,i_6 = NULL,t_5 = NULL;
        t = SSLgetAnnotations(q_15);
        a_3 = t;
        t = p_15;
        t = reverse_map_1_0(r_124, t);
        d_3 = t;
        t = (ATerm) ATinsert(CheckATermList(d_3), o_15);
        t_5 = t;
        t = SSLsetAnnotations(t_5, a_3);
        e_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_2 = ATgetFirst((ATermList) t);
            y_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_3);
        w_2 = t;
        t = x_2;
        t = r_124(t);
        z_2 = t;
        t = (ATerm) ATinsert(CheckATermList(y_2), z_2);
        i_6 = t;
        t = SSLsetAnnotations(i_6, w_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_15;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_e_10;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,s_16 = NULL;
  o_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_16 = ATgetArgument(t, 0);
      {
        ATerm y_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, p_16);
  q_16 = t;
  t = term_h_10;
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_16), term_h_10);
  t = q_5(r_1, q_16, s_16, t);
  t = o_16;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_e_10;
  return(t);
}
static ATerm n_5 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm p_1 (ATerm t);
  static ATerm p_1 (ATerm t)
  {
    ATerm s_15 = NULL,y_15 = NULL,z_15 = NULL,e_16 = NULL,h_16 = NULL,i_16 = NULL,k_16 = NULL,l_16 = NULL,w_6 = NULL;
    l_16 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        y_15 = ATgetArgument(t, 0);
        z_15 = ATgetArgument(t, 1);
        e_16 = ATgetArgument(t, 2);
        h_16 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_16);
    s_15 = t;
    t = e_16;
    t = map_1_0(q_1, t);
    i_16 = t;
    t = h_16;
    t = r_105(t);
    k_16 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, y_15, z_15, i_16, k_16);
    w_6 = t;
    t = SSLsetAnnotations(w_6, s_15);
    return(t);
  }
  t = scope_2_0(o_1, p_1, t);
  return(t);
}
static ATerm p_5 (ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm t_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_42, q_42);
  t = g_6(p_42, q_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_16 = ATgetFirst((ATermList) t);
      {
        ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_16;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm a_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL;
        t = term_e_10;
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_10, c_18);
        t = p_5(b_5, c_18, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = c_18;
        _fail(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        {
          ATerm d_12 = t;
          int e_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_6 = NULL;
              t = term_e_10;
              d_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_10, c_18);
              t = p_5(d_6, c_18, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = c_18;
              _fail(t);
              LocalPopChoice(e_12);
            }
          else
            {
              t = d_12;
              {
                ATerm f_12 = t;
                int g_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_6 = NULL;
                    t = term_e_10;
                    s_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_10, c_18);
                    t = p_5(s_6, c_18, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = c_18;
                    _fail(t);
                    LocalPopChoice(g_12);
                  }
                else
                  {
                    t = f_12;
                    {
                      ATerm h_7 = NULL;
                      t = term_e_10;
                      h_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_e_10, c_18);
                      t = p_5(h_7, c_18, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm h_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) h_12) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_k_12;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_131 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,d_20 = NULL,e_20 = NULL;
  y_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_20 = ATgetFirst((ATermList) t);
          e_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL,t_7 = NULL,u_7 = NULL,z_6 = NULL;
            t = SSLgetAnnotations(y_19);
            p_7 = t;
            t = d_20;
            t = p_131(t);
            t_7 = t;
            t = e_20;
            t = filter_1_0(p_131, t);
            u_7 = t;
            t = (ATerm) ATinsert(CheckATermList(u_7), t_7);
            z_6 = t;
            t = SSLsetAnnotations(z_6, p_7);
            LocalPopChoice(s_12);
          }
        else
          {
            t = l_12;
            t = e_20;
            t = filter_1_0(p_131, t);
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm y_119 (ATerm), ATerm a_41, ATerm y_40, ATerm t)
{
  ATerm o_20 = NULL,s_20 = NULL,a_21 = NULL,c_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,j_21 = NULL;
  c_21 = t;
  t = y_119(t);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_20, a_41, y_40);
  t = h_6(o_20, a_41, y_40, t);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL;
        t = term_n_13;
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_20, term_n_13);
        t = g_6(o_20, k_21, t);
        {
          ATerm o_13 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_13;
            }
        }
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_20 = ATgetFirst((ATermList) t);
      a_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_20, term_n_13, (ATerm) ATinsert(CheckATermList(a_21), (ATerm) ATinsert(CheckATermList(s_20), a_41)));
  t = lookup_table_0_1(o_20, t);
  j_21 = t;
  t = term_n_13;
  f_21 = t;
  t = (ATerm) ATinsert(CheckATermList(a_21), (ATerm) ATinsert(CheckATermList(s_20), a_41));
  g_21 = t;
  t = j_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(f_21, g_21, h_21, t);
  t = c_21;
  return(t);
}
static ATerm r_5 (ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  m_21 = t;
  {
    ATerm q_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
        t = g_6(j_42, k_42, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_14 = ATgetFirst((ATermList) t);
            l_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_13);
        {
          ATerm n_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_42, k_42, l_21);
          t = lookup_table_0_1(j_42, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_6(k_42, l_21, n_21, t);
          t = (ATerm) ATmakeAppl(sym__3, j_42, k_42, l_21);
        }
      }
    else
      {
        t = q_13;
        {
          ATerm p_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
          t = lookup_table_0_1(j_42, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_6(k_42, p_21, t);
          t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
        }
      }
  }
  t = m_21;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,b_22 = NULL,j_22 = NULL,m_22 = NULL,n_22 = NULL,s_22 = NULL,y_22 = NULL;
  m_22 = t;
  t = v_119(t);
  j_22 = t;
  {
    ATerm g_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        t = term_n_13;
        b_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_22, term_n_13);
        t = g_6(j_22, b_23, t);
        {
          ATerm p_14 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_14;
            }
        }
        LocalPopChoice(j_14);
      }
    else
      {
        t = g_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_22 = ATgetFirst((ATermList) t);
      x_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_22, term_n_13, x_21);
  t = lookup_table_0_1(j_22, t);
  y_22 = t;
  t = term_n_13;
  n_22 = t;
  t = y_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(n_22, x_21, s_22, t);
  t = b_22;
  {
    static ATerm s_1 (ATerm t);
    static ATerm s_1 (ATerm t)
    {
      ATerm d_23 = NULL;
      d_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_22, d_23);
      t = r_5(j_22, d_23, t);
      return(t);
    }
    t = map_1_0(s_1, t);
  }
  t = m_22;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_111(t);
      t = i_111(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = i_111(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,j_23 = NULL,l_23 = NULL,p_23 = NULL,u_23 = NULL,w_23 = NULL,x_23 = NULL;
  j_23 = t;
  t = u_119(t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_23, term_n_13);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_14 = ATgetArgument(t, 0);
            ATerm y_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_13;
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_23, term_n_13);
        t = g_6(h_23, e_24, t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = (ATerm) ATempty;
      }
  }
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_23, term_n_13, (ATerm) ATinsert(CheckATermList(l_23), (ATerm) ATempty));
  t = lookup_table_0_1(h_23, t);
  x_23 = t;
  t = term_n_13;
  p_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), (ATerm) ATempty);
  u_23 = t;
  t = x_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(p_23, u_23, w_23, t);
  t = j_23;
  return(t);
}
ATerm scope_2_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    t = end_scope_1_0(w_119, t);
    return(t);
  }
  t = begin_scope_1_0(w_119, t);
  t = restore_always_2_0(x_119, t_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_e_10;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_29);
  q_29 = t;
  t = term_a_15;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_29), term_a_15);
  t = q_5(b_2, q_29, r_29, t);
  t = p_29;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_e_10;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm d_15 = t;
  if((PushChoice() == 0))
    {
      ATerm s_29 = NULL;
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_29);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_15;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm k_8 = NULL,m_8 = NULL,u_8 = NULL,v_8 = NULL,z_8 = NULL;
  k_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_e_10;
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
  v_8 = t;
  t = term_h_10;
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, (ATerm)ATmakeAppl(sym_Var_1, m_8), term_h_10);
  t = l_5(u_8, v_8, z_8, t);
  t = k_8;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = alltd_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  i_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_e_10;
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_10);
  l_10 = t;
  t = term_h_10;
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, (ATerm)ATmakeAppl(sym_Var_1, j_10), term_h_10);
  t = l_5(k_10, l_10, m_10, t);
  t = i_10;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = alltd_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,w_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_e_10;
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_11);
  u_11 = t;
  t = term_h_10;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, (ATerm)ATmakeAppl(sym_Var_1, s_11), term_h_10);
  t = l_5(t_11, u_11, w_11, t);
  t = r_11;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm e_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,f_11 = NULL;
  i_15 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  e_15 = t;
  t = g_15;
  t = map_1_0(dead_var_elim_0_0, t);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_15);
  f_11 = t;
  t = SSLsetAnnotations(f_11, e_15);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm f_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm n_31 (ATerm t);
      static ATerm n_31 (ATerm t)
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_28 = NULL,i_28 = NULL,m_28 = NULL,r_28 = NULL;
            i_28 = t;
            {
              ATerm m_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      ATerm v_15 = ATgetArgument(t, 0);
                      ATerm w_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_15);
                  {
                    static ATerm x_1 (ATerm t);
                    static ATerm x_1 (ATerm t)
                    {
                      ATerm s_28 = NULL,v_28 = NULL,x_28 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,k_29 = NULL,n_29 = NULL,o_29 = NULL,d_7 = NULL,b_7 = NULL;
                      o_29 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          f_29 = ATgetArgument(t, 0);
                          g_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(o_29);
                      e_29 = t;
                      t = f_29;
                      t = map_1_0(y_1, t);
                      h_29 = t;
                      t = g_29;
                      t = n_31(t);
                      k_29 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_29, k_29);
                      b_7 = t;
                      t = SSLsetAnnotations(b_7, e_29);
                      n_29 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          v_28 = ATgetArgument(t, 0);
                          x_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(n_29);
                      s_28 = t;
                      t = v_28;
                      t = filter_1_0(c_2, t);
                      d_29 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, d_29, x_28);
                      d_7 = t;
                      t = SSLsetAnnotations(d_7, s_28);
                      return(t);
                    }
                    t = i_28;
                    t = scope_2_0(v_1, x_1, t);
                  }
                }
              else
                {
                  t = m_15;
                  {
                    ATerm g_16 = t;
                    int j_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm m_16 = ATgetArgument(t, 0);
                            ATerm n_16 = ATgetArgument(t, 1);
                            ATerm w_16 = ATgetArgument(t, 2);
                            ATerm x_16 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_16);
                        t = i_28;
                        t = n_5(n_31, t);
                      }
                    else
                      {
                        t = g_16;
                        if(match_cons(t, sym_Build_1))
                          {
                            m_28 = ATgetArgument(t, 0);
                            {
                              ATerm f_8 = NULL,h_8 = NULL,j_7 = NULL;
                              t = SSLgetAnnotations(i_28);
                              f_8 = t;
                              t = m_28;
                              t = alltd_1_0(d_2, t);
                              h_8 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, h_8);
                              j_7 = t;
                              t = SSLsetAnnotations(j_7, f_8);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                m_28 = ATgetArgument(t, 0);
                                r_28 = ATgetArgument(t, 1);
                                h_28 = ATgetArgument(t, 2);
                                {
                                  ATerm b_10 = NULL,f_10 = NULL,g_10 = NULL,k_7 = NULL;
                                  t = SSLgetAnnotations(i_28);
                                  b_10 = t;
                                  t = r_28;
                                  t = reverse_map_1_0(n_31, t);
                                  f_10 = t;
                                  t = h_28;
                                  t = reverse_map_1_0(h_2, t);
                                  g_10 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, m_28, f_10, g_10);
                                  k_7 = t;
                                  t = SSLsetAnnotations(k_7, b_10);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    m_28 = ATgetArgument(t, 0);
                                    r_28 = ATgetArgument(t, 1);
                                    h_28 = ATgetArgument(t, 2);
                                    {
                                      ATerm w_10 = NULL,l_11 = NULL,m_11 = NULL,o_7 = NULL;
                                      t = SSLgetAnnotations(i_28);
                                      w_10 = t;
                                      t = r_28;
                                      t = reverse_map_1_0(n_31, t);
                                      l_11 = t;
                                      t = h_28;
                                      t = reverse_map_1_0(j_2, t);
                                      m_11 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, m_28, l_11, m_11);
                                      o_7 = t;
                                      t = SSLsetAnnotations(o_7, w_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm i_12 = NULL,j_12 = NULL,m_12 = NULL,b_13 = NULL,g_13 = NULL,j_13 = NULL,m_13 = NULL,d_11 = NULL,q_7 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        m_28 = ATgetArgument(t, 0);
                                        r_28 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(i_28);
                                    g_13 = t;
                                    t = r_28;
                                    t = n_31(t);
                                    j_13 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, m_28, j_13);
                                    q_7 = t;
                                    t = SSLsetAnnotations(q_7, g_13);
                                    m_13 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        j_12 = ATgetArgument(t, 0);
                                        m_12 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(m_13);
                                    i_12 = t;
                                    t = j_12;
                                    t = n_31(t);
                                    b_13 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, b_13, m_12);
                                    d_11 = t;
                                    t = SSLsetAnnotations(d_11, i_12);
                                  }
                              }
                          }
                      }
                  }
                }
            }
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            {
              ATerm g_17 = t;
              int h_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(n_31, t);
                  LocalPopChoice(h_17);
                }
              else
                {
                  t = g_17;
                  {
                    ATerm i_17 = t;
                    int j_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = elim_lchoice_1_0(n_31, t);
                        LocalPopChoice(j_17);
                      }
                    else
                      {
                        t = i_17;
                        {
                          ATerm k_17 = t;
                          int l_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(n_31, t);
                              LocalPopChoice(l_17);
                            }
                          else
                            {
                              t = k_17;
                              {
                                ATerm m_17 = t;
                                int n_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EliminateFromMatch_0_0(t);
                                    LocalPopChoice(n_17);
                                  }
                                else
                                  {
                                    t = m_17;
                                    t = all_rl_1_0(n_31, t);
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
      t = n_31(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = f_15;
      {
        ATerm h_31 = NULL,i_31 = NULL,h_14 = NULL,l_14 = NULL,m_14 = NULL,o_14 = NULL,q_14 = NULL,r_14 = NULL,w_14 = NULL,b_15 = NULL,c_15 = NULL,n_14 = NULL,o_12 = NULL,e_11 = NULL;
        h_31 = t;
        if(match_cons(t, sym_Specification_1))
          {
            i_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_31);
        h_14 = t;
        t = i_31;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_14 = ATgetFirst((ATermList) t);
            o_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_31);
        l_14 = t;
        t = m_14;
        if(match_cons(t, sym_Signature_1))
          {
            b_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_14);
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, b_15);
        e_11 = t;
        t = SSLsetAnnotations(e_11, w_14);
        c_15 = t;
        t = o_14;
        t = Cons_2_0(l_2, n_2, t);
        q_14 = t;
        t = (ATerm) ATinsert(CheckATermList(q_14), c_15);
        o_12 = t;
        t = SSLsetAnnotations(o_12, l_14);
        r_14 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, r_14);
        n_14 = t;
        t = SSLsetAnnotations(n_14, h_14);
      }
    }
  return(t);
}
static ATerm u_5 (ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm a_32 = NULL;
  t = SSL_fputc(r_32, s_32);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_32);
  return(t);
}
static ATerm v_5 (ATerm x_30, ATerm y_30, ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_write_term_to_stream_text(x_30, y_30);
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_32);
  return(t);
}
static ATerm x_5 (ATerm l_115 (ATerm), ATerm p_240, ATerm d_31, ATerm t)
{
  ATerm f_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_240, term_o_17);
  t = b_6(t);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_32, d_31);
  t = l_115(t);
  t = fclose_0_0(t);
  t = d_31;
  return(t);
}
static ATerm w_5 (ATerm t_30, ATerm u_30, ATerm t)
{
  ATerm g_32 = NULL;
  t = SSL_write_term_to_stream_baf(t_30, u_30);
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_32);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm d_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(match_cons(r_17, sym_Stream_1))
        {
          d_16 = ATgetArgument(r_17, 0);
        }
      else
        _fail(t);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(d_16, f_16, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(match_cons(s_17, sym_Stream_1))
        {
          e_17 = ATgetArgument(s_17, 0);
        }
      else
        _fail(t);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(e_17, f_17, t);
  b_17 = t;
  t = term_t_17;
  c_17 = t;
  t = b_17;
  if(match_cons(t, sym_Stream_1))
    {
      d_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, b_17);
  t = u_5(c_17, d_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_32 = NULL,p_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,m_35 = NULL,n_35 = NULL,r_15 = NULL,n_15 = NULL;
  p_32 = t;
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_32);
  f_33 = t;
  t = g_33;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_2 (ATerm t);
        static ATerm o_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((m_32 != NULL) && (m_32 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_2, t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = term_x_17;
        m_32 = t;
      }
  }
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_33, h_33);
  n_15 = t;
  t = SSLsetAnnotations(n_15, f_33);
  t = p_32;
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_32);
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_32, (ATerm) ATmakeAppl(sym__2, not_null(m_32), z_32));
  r_15 = t;
  t = SSLsetAnnotations(r_15, x_32);
  e_33 = t;
  if(match_cons(t, sym__2))
    {
      m_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_17 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 = NULL,x_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,u_16 = NULL;
        t = SSLgetAnnotations(e_33);
        u_15 = t;
        t = m_35;
        t = fetch_1_0(p_2, t);
        x_15 = t;
        t = n_35;
        if(match_cons(t, sym__2))
          {
            b_16 = ATgetArgument(t, 0);
            c_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(q_2, b_16, c_16, t);
        a_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_15, a_16);
        u_16 = t;
        t = SSLsetAnnotations(u_16, u_15);
        LocalPopChoice(b_18);
      }
    else
      {
        t = y_17;
        {
          ATerm r_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,v_16 = NULL;
          t = SSLgetAnnotations(e_33);
          r_16 = t;
          t = n_35;
          if(match_cons(t, sym__2))
            {
              z_16 = ATgetArgument(t, 0);
              a_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_5(s_2, z_16, a_17, t);
          y_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_35, y_16);
          v_16 = t;
          t = SSLsetAnnotations(v_16, r_16);
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
ATerm apply_strategy_1_0 (ATerm q_138 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,f_36 = NULL;
  f_36 = t;
  t = dtime_0_0(t);
  t = f_36;
  t = q_138(t);
  z_35 = t;
  t = dtime_0_0(t);
  q_35 = t;
  t = z_35;
  if(match_cons(t, sym__2))
    {
      x_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_35), (ATerm) ATmakeAppl(sym_Runtime_1, q_35)), y_35);
  return(t);
}
static ATerm d_37 (ATerm s_36, ATerm t)
{
  t = SSL_fclose(s_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_36 = NULL,b_37 = NULL;
  b_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_36 = ATgetArgument(t, 0);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_36);
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            t = d_37(b_37, t);
          }
      }
    }
  else
    {
      t = d_37(b_37, t);
    }
  return(t);
}
static ATerm y_5 (ATerm z_30, ATerm t)
{
  t = SSL_read_term_from_stream(z_30);
  return(t);
}
static ATerm z_5 (ATerm e_71, ATerm f_71, ATerm t)
{
  t = SSL_strcat(e_71, f_71);
  return(t);
}
static ATerm a_6 (ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm e_37 = NULL;
  t = SSL_fopen(t_32, u_32);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_37);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_37 = NULL;
  t = SSL_stdin_stream();
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_37 = NULL;
  t = SSL_stdout_stream();
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_37 = NULL;
  t = SSL_stderr_stream();
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_37);
  return(t);
}
static ATerm o_38 (ATerm n_37, ATerm t)
{
  ATerm o_37 = NULL;
  t = SSL_explode_term(n_37);
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_18 = ATgetArgument(t, 1);
        if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
          {
            o_37 = ATgetFirst((ATermList) i_18);
            {
              ATerm k_18 = (ATerm) ATgetNext((ATermList) i_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_38 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,z_37 = NULL,p_17 = NULL;
  t = SSLgetAnnotations(t_37);
  w_37 = t;
  t = r_37;
  if(match_cons(t, sym_Path_1))
    {
      z_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_37, s_37);
  p_17 = t;
  t = SSLsetAnnotations(p_17, w_37);
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(u_37, v_37, t);
  return(t);
}
static ATerm q_38 (ATerm b_38, ATerm c_38, ATerm d_38, ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,j_38 = NULL,q_17 = NULL;
  t = SSLgetAnnotations(d_38);
  g_38 = t;
  t = SSL_is_string(b_38);
  j_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_38, c_38);
  q_17 = t;
  t = SSLsetAnnotations(q_17, g_38);
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(e_38, f_38, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  if(match_cons(t, sym__2))
    {
      m_38 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_38(l_38, t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm o_18 = t;
              int p_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_38(m_38, n_38, l_38, t);
                  LocalPopChoice(p_18);
                }
              else
                {
                  t = o_18;
                  t = q_38(m_38, n_38, l_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_38(l_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,z_38 = NULL;
  z_38 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_38, term_t_18);
        t = b_6(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm z_17 = NULL,d_18 = NULL;
          t = term_u_18;
          d_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_18, z_38);
          t = z_5(d_18, z_38, t);
          z_17 = t;
          t = SSL_perror(z_17);
          _fail(t);
        }
      }
  }
  t_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(u_38, t);
  s_38 = t;
  t = t_38;
  t = fclose_0_0(t);
  t = s_38;
  return(t);
}
ATerm fetch_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  static ATerm a_40 (ATerm t);
  static ATerm a_40 (ATerm t)
  {
    ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
    x_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_39 = ATgetFirst((ATermList) t);
        z_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_18 = t;
      int w_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_18 = NULL,q_18 = NULL,w_17 = NULL;
          t = SSLgetAnnotations(x_39);
          n_18 = t;
          t = y_39;
          t = y_124(t);
          q_18 = t;
          t = (ATerm) ATinsert(CheckATermList(z_39), q_18);
          w_17 = t;
          t = SSLsetAnnotations(w_17, n_18);
          LocalPopChoice(w_18);
        }
      else
        {
          t = v_18;
          {
            ATerm c_19 = NULL,f_19 = NULL,a_18 = NULL;
            t = SSLgetAnnotations(x_39);
            c_19 = t;
            t = z_39;
            t = a_40(t);
            f_19 = t;
            t = (ATerm) ATinsert(CheckATermList(f_19), y_39);
            a_18 = t;
            t = SSLsetAnnotations(a_18, c_19);
          }
        }
    }
    return(t);
  }
  t = a_40(t);
  return(t);
}
static ATerm g_6 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm d_40 = NULL;
  t = lookup_table_0_1(x_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(y_43, d_40, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  {
    ATerm x_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
        t = term_c_7;
        j_40 = t;
        t = term_b_19;
        k_40 = t;
        t = term_d_19;
        t = g_6(j_40, k_40, t);
        i_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_40, term_e_19);
        t = geq_0_0(t);
        t = g_40;
        t = d_117(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = x_18;
        t = g_40;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
  n_40 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_19 = ATgetFirst((ATermList) t);
                ATerm j_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_40;
          }
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATinsert(ATempty, n_40);
      }
  }
  o_40 = t;
  t = term_x_17;
  p_40 = t;
  t = SSL_printnl(p_40, o_40);
  t = n_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  t = term_c_7;
  e_41 = t;
  t = term_l_7;
  f_41 = t;
  t = term_m_7;
  t = g_6(e_41, f_41, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  if(match_string(t, "-k"))
    {
      t = i_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_41;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  t = SSL_string_to_int(j_41);
  k_41 = t;
  t = term_k_19;
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, k_41);
  t = j_6(l_41, k_41, t);
  t = j_41;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, v_2, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm n_41 = NULL;
  n_41 = t;
  if(match_string(t, "-S"))
    {
      t = n_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_41;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL;
  t = term_b_19;
  o_41 = t;
  t = term_m_19;
  p_41 = t;
  t = term_p_19;
  t = j_6(o_41, p_41, t);
  t = term_q_19;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_r_19;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  t = SSL_string_to_int(q_41);
  r_41 = t;
  t = term_b_19;
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_19, r_41);
  t = j_6(s_41, r_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_41);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  t = term_v_19;
  t_41 = t;
  t = term_v_6;
  u_41 = t;
  t = term_w_19;
  t = j_6(t_41, u_41, t);
  t = term_x_19;
  return(t);
}
static ATerm q_3 (ATerm t)
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
      t = Option_3_0(b_3, c_3, f_3, t);
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm c_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_3, i_3, k_3, t);
            LocalPopChoice(f_20);
          }
        else
          {
            t = c_20;
            t = Option_3_0(l_3, n_3, q_3, t);
          }
      }
    }
  return(t);
}
static ATerm j_6 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  t = term_c_7;
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_7, n_36, o_36);
  t = lookup_table_0_1(v_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(n_36, o_36, w_41, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_7, n_36, o_36);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_42 = NULL,g_42 = NULL,h_42 = NULL;
      t = term_v_6;
      t = f_0(t);
      c_42 = t;
      t = term_v_7;
      g_42 = t;
      t = term_w_7;
      h_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, c_42);
      t = h_6(g_42, h_42, c_42, t);
      _fail(t);
    }
  else
    {
      ATerm n_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_42 = ATgetFirst((ATermList) t);
          b_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_42;
      t = b_0(t);
      t = term_v_6;
      t = d_0(t);
      n_42 = t;
      t = (ATerm) ATinsert(CheckATermList(b_42), n_42);
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  if(match_string(t, "-o"))
    {
      t = v_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_42;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  w_42 = t;
  t = term_g_20;
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, w_42);
  t = j_6(x_42, w_42, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_42);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, c_4, d_4, t);
  return(t);
}
static ATerm h_6 (ATerm e_42, ATerm f_42, ATerm d_42, ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_42, f_42);
  {
    ATerm i_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_20 = ATgetArgument(t, 0);
            ATerm m_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_42, f_42);
        t = g_6(e_42, f_42, t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATempty;
      }
  }
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_42, f_42, (ATerm) ATinsert(CheckATermList(a_43), d_42));
  t = lookup_table_0_1(e_42, t);
  d_43 = t;
  t = (ATerm) ATinsert(CheckATermList(a_43), d_42);
  b_43 = t;
  t = d_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(f_42, b_43, c_43, t);
  t = z_42;
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,z_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
      t = term_v_6;
      t = i_0(t);
      a_44 = t;
      t = term_v_7;
      b_44 = t;
      t = term_w_7;
      c_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, a_44);
      t = h_6(b_44, c_44, a_44, t);
      _fail(t);
    }
  else
    {
      ATerm g_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_43 = ATgetFirst((ATermList) t);
          v_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_43;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_43 = ATgetFirst((ATermList) t);
          z_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_43;
      t = g_0(t);
      t = w_43;
      t = h_0(t);
      g_44 = t;
      t = (ATerm) ATinsert(CheckATermList(z_43), g_44);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm i_44 = NULL;
  i_44 = t;
  if(match_string(t, "-i"))
    {
      t = i_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_44;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  j_44 = t;
  t = term_n_20;
  k_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, j_44);
  t = j_6(k_44, j_44, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_44);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, f_4, j_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_6;
  t = whoami_0_0(t);
  l_44 = t;
  t = term_r_20;
  n_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_20), l_44);
  o_44 = t;
  t = SSL_printnl(n_44, o_44);
  t = term_u_20;
  m_44 = t;
  t = SSL_exit(m_44);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  t = term_c_7;
  p_44 = t;
  t = term_l_7;
  q_44 = t;
  t = term_m_7;
  t = g_6(p_44, q_44, t);
  return(t);
}
static ATerm c_6 (ATerm m_39, ATerm n_39, ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_39, n_39);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      t = SSL_addr(m_39, n_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_44;
      t = l_130(t);
    }
  else
    {
      ATerm x_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_44 = ATgetFirst((ATermList) t);
          u_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_44;
      t = foldr_2_0(l_130, m_130, t);
      x_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_44, x_44);
      t = m_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(s_19, t_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_45 = NULL,n_19 = NULL,o_19 = NULL;
  t = times_0_0(t);
  o_19 = t;
  t = SSL_explode_term(o_19);
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_19;
  t = foldr_2_0(k_4, m_4, t);
  a_45 = t;
  t = SSL_TicksToSeconds(a_45);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  if(match_cons(t, sym__2))
    {
      m_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_45;
        if((m_45 != t))
          {
            _fail(t);
          }
        t = l_45;
        LocalPopChoice(q_21);
      }
    else
      {
        t = o_21;
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_45, n_45);
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = SSL_gtr(m_45, n_45);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm r_45 = NULL;
  r_45 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
        t = term_c_7;
        u_45 = t;
        t = term_b_19;
        v_45 = t;
        t = term_d_19;
        t = g_6(u_45, v_45, t);
        t_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_45, term_u_20);
        t = geq_0_0(t);
        t = r_45;
        t = c_117(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = r_45;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,a_46 = NULL,b_46 = NULL;
  t = run_time_0_0(t);
  x_45 = t;
  t = term_v_6;
  t = whoami_0_0(t);
  y_45 = t;
  t = term_r_20;
  a_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_21), x_45), term_v_21), y_45);
  b_46 = t;
  t = SSL_printnl(a_46, b_46);
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_21), x_45), term_v_21), y_45));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_19;
  c_46 = t;
  t = SSL_exit(c_46);
  return(t);
}
static ATerm k_6 (ATerm p_46, ATerm q_46, ATerm r_46, ATerm t)
{
  ATerm d_46 = NULL;
  t = SSL_hashtable_put(r_46, p_46, q_46);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_46);
  return(t);
}
static ATerm l_6 (ATerm s_46, ATerm t_46, ATerm t)
{
  t = SSL_hashtable_get(t_46, s_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_43, ATerm t)
{
  ATerm m_46 = NULL;
  t = table_hashtable_0_0(t);
  m_46 = t;
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL;
        t = m_46;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_6(q_43, j_20, t);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          ATerm q_20 = NULL;
          t = q_43;
          t = table_create_0_0(t);
          t = m_46;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_6(q_43, q_20, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm a_47 = NULL;
  t = SSL_hashtable_create(x_46, y_46);
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_47);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,f_47 = NULL,g_47 = NULL;
  b_47 = t;
  t = term_a_22;
  f_47 = t;
  t = term_c_22;
  g_47 = t;
  t = b_47;
  t = new_hashtable_0_2(f_47, g_47, t);
  c_47 = t;
  t = b_47;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(b_47, c_47, d_47, t);
  t = b_47;
  return(t);
}
static ATerm e_6 (ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm h_47 = NULL;
  t = SSL_hashtable_remove(v_46, u_46);
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_47);
  return(t);
}
static ATerm f_6 (ATerm z_46, ATerm t)
{
  ATerm i_47 = NULL;
  t = SSL_hashtable_destroy(z_46);
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_47);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_47 = NULL;
  t = SSL_table_hashtable();
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_47);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  k_47 = t;
  t = table_hashtable_0_0(t);
  l_47 = t;
  t = lookup_table_0_1(k_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(n_47, t);
  t = l_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(k_47, m_47, t);
  t = k_47;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL;
  t = term_d_22;
  o_47 = t;
  t = term_v_6;
  p_47 = t;
  t = term_e_22;
  t = j_6(o_47, p_47, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
  t = term_d_22;
  s_47 = t;
  t = term_v_6;
  t_47 = t;
  t = term_e_22;
  t = j_6(s_47, t_47, t);
  t = term_g_22;
  q_47 = t;
  t = term_v_6;
  r_47 = t;
  t = term_h_22;
  t = j_6(q_47, r_47, t);
  t = term_i_22;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, u_4, v_4, t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = l_22;
      t = Option_3_0(w_4, a_5, e_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,g_18 = NULL;
  z_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_47 = ATgetFirst((ATermList) t);
      w_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_47);
  u_47 = t;
  t = v_47;
  t = w_92(t);
  x_47 = t;
  t = w_47;
  t = x_92(t);
  y_47 = t;
  t = (ATerm) ATinsert(CheckATermList(y_47), x_47);
  g_18 = t;
  t = SSLsetAnnotations(g_18, u_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,j_48 = NULL,k_48 = NULL,j_18 = NULL;
  e_48 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_22;
        t = w_141(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
      }
  }
  t = e_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_48 = ATgetFirst((ATermList) t);
      h_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_48);
  f_48 = t;
  t = term_l_7;
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, g_48);
  t = j_6(k_48, g_48, t);
  t = h_48;
  {
    static ATerm u_48 (ATerm t);
    static ATerm u_48 (ATerm t)
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_48 = NULL;
              n_48 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_48;
              LocalPopChoice(w_22);
            }
          else
            {
              t = v_22;
              t = w_141(t);
              t = Cons_2_0(_id, u_48, t);
            }
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm q_48 = NULL,r_48 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_48 = ATgetFirst((ATermList) t);
                r_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_48), (ATerm) ATmakeAppl(sym_Undefined_1, q_48));
          }
        }
      return(t);
    }
    t = u_48(t);
  }
  j_48 = t;
  t = (ATerm) ATinsert(CheckATermList(j_48), (ATerm) ATmakeAppl(sym_Program_1, g_48));
  j_18 = t;
  t = SSLsetAnnotations(j_18, f_48);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm h_49 = NULL;
  h_49 = t;
  if(match_string(t, "--help"))
    {
      t = h_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_49;
        }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  t = term_x_22;
  i_49 = t;
  t = term_v_6;
  j_49 = t;
  t = term_z_22;
  t = j_6(i_49, j_49, t);
  t = term_a_23;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_c_23;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
  b_49 = t;
  t = term_v_7;
  c_49 = t;
  t = term_e_23;
  t = lookup_table_0_1(c_49, t);
  g_49 = t;
  t = term_w_7;
  d_49 = t;
  t = (ATerm) ATempty;
  e_49 = t;
  t = g_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(d_49, e_49, f_49, t);
  t = b_49;
  {
    static ATerm f_5 (ATerm t);
    static ATerm f_5 (ATerm t)
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_141(t);
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          {
            ATerm i_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_5, h_5, i_5, t);
                LocalPopChoice(k_23);
              }
            else
              {
                t = i_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_5, t);
  }
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_49 = NULL;
        u_49 = t;
        {
          ATerm o_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_20 = NULL;
              t = u_49;
              {
                ATerm r_23 = t;
                int s_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_20 = NULL,x_20 = NULL;
                    t = term_c_7;
                    w_20 = t;
                    t = term_x_22;
                    x_20 = t;
                    t = term_t_23;
                    t = g_6(w_20, x_20, t);
                    LocalPopChoice(s_23);
                  }
                else
                  {
                    t = r_23;
                    t = fetch_1_0(m_5, t);
                  }
              }
              t = u_49;
              t = u_141(t);
              t = term_m_19;
              v_20 = t;
              t = SSL_exit(v_20);
              LocalPopChoice(q_23);
            }
          else
            {
              t = o_23;
              {
                ATerm d_21 = NULL,e_21 = NULL,i_21 = NULL;
                t = term_c_7;
                e_21 = t;
                t = term_d_22;
                i_21 = t;
                t = term_v_23;
                t = g_6(e_21, i_21, t);
                t = u_49;
                t = v_141(t);
                t = term_m_19;
                d_21 = t;
                t = SSL_exit(d_21);
              }
            }
        }
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
              static ATerm o_5 (ATerm t);
              static ATerm o_5 (ATerm t)
              {
                ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,y_18 = NULL;
                a_50 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_49 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_50);
                y_49 = t;
                t = z_49;
                if(((z_48 != NULL) && (z_48 != t)))
                  _fail(t);
                else
                  z_48 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_49);
                y_18 = t;
                t = SSLsetAnnotations(y_18, y_49);
                return(t);
              }
              t = fetch_1_0(o_5, t);
              t = term_r_20;
              w_49 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_48)), term_a_24);
              x_49 = t;
              t = SSL_printnl(w_49, x_49);
              t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_48)), term_a_24));
              t = u_141(t);
              t = term_u_20;
              v_49 = t;
              t = SSL_exit(v_49);
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
            }
        }
      }
  }
  a_49 = t;
  t = term_v_7;
  t = table_destroy_0_0(t);
  t = a_49;
  return(t);
}
ATerm option_wrap_5_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm a_140 (ATerm), ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  t = parse_options_3_0(w_139, x_139, y_139, t);
  f_50 = t;
  t = term_b_24;
  t = table_create_0_0(t);
  t = term_b_24;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_24, term_c_24, f_50);
  t = lookup_table_0_1(g_50, t);
  j_50 = t;
  t = term_c_24;
  h_50 = t;
  t = j_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(h_50, f_50, i_50, t);
  t = f_50;
  t = z_139(t);
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_140(t);
        t = report_success_0_0(t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = d_24;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = if_verbose2_1_0(r_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL;
  t = term_g_24;
  k_50 = t;
  t = term_v_6;
  l_50 = t;
  t = term_h_24;
  t = j_6(k_50, l_50, t);
  t = term_i_24;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  m_50 = t;
  t = term_c_7;
  q_50 = t;
  t = term_l_7;
  r_50 = t;
  t = term_m_7;
  t = g_6(q_50, r_50, t);
  n_50 = t;
  t = term_r_20;
  o_50 = t;
  t = (ATerm) ATinsert(ATempty, n_50);
  p_50 = t;
  t = SSL_printnl(o_50, p_50);
  t = m_50;
  return(t);
}
ATerm iowrap_3_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t)
{
  static ATerm s_5 (ATerm t);
  static ATerm n_6 (ATerm t);
  static ATerm s_5 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_139(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              {
                ATerm o_24 = t;
                int p_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(p_24);
                  }
                else
                  {
                    t = o_24;
                    {
                      ATerm q_24 = t;
                      int r_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_6, p_6, q_6, t);
                          LocalPopChoice(r_24);
                        }
                      else
                        {
                          t = q_24;
                          {
                            ATerm s_24 = t;
                            int t_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(t_24);
                              }
                            else
                              {
                                t = s_24;
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
  static ATerm n_6 (ATerm t)
  {
    ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
    t_50 = t;
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm t_6 (ATerm t);
          static ATerm t_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_50 != NULL) && (s_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_6, t);
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
          t = term_w_24;
          s_50 = t;
        }
    }
    t = not_null(s_50);
    t = ReadFromFile_0_0(t);
    u_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
    t = apply_strategy_1_0(z_138, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(s_5, b_139, default_system_about_0_0, m_6, n_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_19 = NULL;
  z_50 = t;
  if(match_cons(t, sym__2))
    {
      w_50 = ATgetArgument(t, 0);
      x_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_50);
  v_50 = t;
  t = x_50;
  t = dead_var_elim_0_0(t);
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_50, y_50);
  a_19 = t;
  t = SSLsetAnnotations(a_19, v_50);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_6, _fail, default_system_usage_0_0, t);
  return(t);
}

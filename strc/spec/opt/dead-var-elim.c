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
ATerm term_w_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_t_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_x_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_n_13;
ATerm term_h_12;
ATerm term_g_10;
ATerm term_d_10;
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
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_14);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
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
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_v_6);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_v_6);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_v_6);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_v_6);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, (ATerm) ATempty);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_a_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_e_22);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
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
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm t_137 (ATerm), ATerm u_137 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_120 (ATerm), ATerm t);
ATerm all_rl_1_0 (ATerm u_101 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm q_101 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm p_101 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm l_12 (ATerm x_10, ATerm a_11, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm j_5 (ATerm v_42, ATerm u_42, ATerm t);
static ATerm k_5 (ATerm k_46, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm o_101 (ATerm), ATerm t);
static ATerm l_5 (ATerm f_42, ATerm g_42, ATerm h_42, ATerm t);
ATerm alltd_1_0 (ATerm t_105 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm j_120 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm n_5 (ATerm v_101 (ATerm), ATerm t);
static ATerm p_5 (ATerm d_42, ATerm e_42, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_127 (ATerm), ATerm t);
static ATerm q_5 (ATerm b_116 (ATerm), ATerm o_40, ATerm m_40, ATerm t);
static ATerm r_5 (ATerm x_41, ATerm y_41, ATerm t);
ATerm end_scope_1_0 (ATerm y_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm x_115 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm dead_var_elim_0_0 (ATerm t);
static ATerm u_5 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm v_5 (ATerm o_30, ATerm p_30, ATerm t);
static ATerm x_5 (ATerm p_111 (ATerm), ATerm i_236, ATerm u_30, ATerm t);
static ATerm w_5 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm i_134 (ATerm), ATerm t);
static ATerm c_37 (ATerm q_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_5 (ATerm q_30, ATerm t);
static ATerm z_5 (ATerm z_68, ATerm a_69, ATerm t);
static ATerm a_6 (ATerm k_32, ATerm l_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_38 (ATerm m_37, ATerm t);
static ATerm o_38 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t);
static ATerm p_38 (ATerm a_38, ATerm b_38, ATerm c_38, ATerm t);
static ATerm b_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_120 (ATerm), ATerm t);
static ATerm g_6 (ATerm l_43, ATerm m_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm h_113 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_6 (ATerm e_36, ATerm f_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_6 (ATerm s_41, ATerm t_41, ATerm r_41, ATerm t);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_6 (ATerm a_39, ATerm b_39, ATerm t);
ATerm foldr_2_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_113 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_6 (ATerm d_46, ATerm e_46, ATerm f_46, ATerm t);
static ATerm l_6 (ATerm g_46, ATerm h_46, ATerm t);
ATerm lookup_table_0_1 (ATerm e_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_46, ATerm m_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm e_6 (ATerm i_46, ATerm j_46, ATerm t);
static ATerm f_6 (ATerm n_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_137 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm parse_options_3_0 (ATerm l_137 (ATerm), ATerm m_137 (ATerm), ATerm n_137 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm o_135 (ATerm), ATerm p_135 (ATerm), ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm iowrap_3_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,i_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_0 = ATgetFirst((ATermList) t);
      i_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_0)), not_null(t_0));
          return(t);
        }
        t = i_0;
        t = o_0(t);
        if(((s_0 != NULL) && (s_0 != t)))
          _fail(t);
        else
          s_0 = t;
        t = c_0;
        t = m_0(t);
        if(((t_0 != NULL) && (t_0 != t)))
          _fail(t);
        else
          t_0 = t;
        t = i_0;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_6;
      t = o_0(t);
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm f_1 = NULL,h_1 = NULL,j_1 = NULL,e_3 = NULL;
  j_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_1);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_1);
  e_3 = t;
  t = SSLsetAnnotations(e_3, f_1);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm s_1 = NULL;
  s_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_1), term_x_6);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm t_137 (ATerm), ATerm u_137 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  ATerm y_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,e_1 = NULL;
      t = term_c_7;
      d_1 = t;
      t = term_l_7;
      e_1 = t;
      t = term_m_7;
      t = g_6(d_1, e_1, t);
      LocalPopChoice(a_7);
    }
  else
    {
      t = y_6;
      t = fetch_1_0(j_0, t);
    }
  {
    ATerm n_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_137(t);
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
  b_1 = t;
  t = term_w_7;
  c_1 = t;
  t = term_x_7;
  t = g_6(b_1, c_1, t);
  t = reverse_acc_2_0(_id, l_0, t);
  t = map_1_0(n_0, t);
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = u_137(t);
        u_1 = t;
        t = (ATerm) ATinsert(CheckATermList(u_1), term_e_8);
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
static ATerm p_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_3 = NULL;
  g_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_2);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_2);
  h_3 = t;
  t = SSLsetAnnotations(h_3, e_2);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_1 = NULL;
  y_1 = t;
  {
    ATerm g_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,a_2 = NULL;
        t = term_c_7;
        z_1 = t;
        t = term_l_7;
        a_2 = t;
        t = term_m_7;
        t = g_6(z_1, a_2, t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = g_8;
        t = fetch_1_0(p_0, t);
      }
  }
  t = y_1;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm map_1_0 (ATerm g_120 (ATerm), ATerm t)
{
  static ATerm t_3 (ATerm t);
  static ATerm t_3 (ATerm t)
  {
    ATerm p_3 = NULL,r_3 = NULL,s_3 = NULL;
    p_3 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_3;
      }
    else
      {
        ATerm r_0 = NULL,w_0 = NULL,x_0 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_3 = ATgetFirst((ATermList) t);
            s_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_3);
        r_0 = t;
        t = r_3;
        t = g_120(t);
        w_0 = t;
        t = s_3;
        t = t_3(t);
        x_0 = t;
        t = (ATerm) ATinsert(CheckATermList(x_0), w_0);
        j_3 = t;
        t = SSLsetAnnotations(j_3, r_0);
      }
    return(t);
  }
  t = t_3(t);
  return(t);
}
ATerm all_rl_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  z_3 = t;
  t = SSL_explode_term(z_3);
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  t = reverse_map_1_0(u_101, t);
  y_3 = t;
  t = SSL_mkterm(w_3, y_3);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm s_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,d_7 = NULL,e_7 = NULL;
  d_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_7;
        s_4 = t;
        t = SSLgetAnnotations(d_7);
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
        t = d_7;
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
              t = e_7;
              s_4 = t;
              t = SSLgetAnnotations(d_7);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_10 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) b_10) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(c_10) != AT_LIST) || !(ATisEmpty(c_10))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = d_7;
              LocalPopChoice(x_9);
            }
          else
            {
              t = w_9;
              t = e_7;
              s_4 = t;
              t = SSLgetAnnotations(d_7);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_7;
            }
        }
      }
  }
  t = term_d_10;
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_4);
  x_4 = t;
  t = term_g_10;
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Var_1, s_4), term_g_10);
  t = l_5(w_4, x_4, y_4, t);
  t = d_7;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_7);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_10 = ATgetFirst((ATermList) t);
      ATerm n_10 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(n_10) != AT_LIST) || !(ATisEmpty(n_10))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, g_7);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,o_4 = NULL,p_4 = NULL,m_3 = NULL;
  p_4 = t;
  if(match_cons(t, sym_Match_1))
    {
      l_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_4);
  k_4 = t;
  t = l_4;
  t = alltd_1_0(q_0, t);
  t = alltd_1_0(u_0, t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, o_4);
  m_3 = t;
  t = SSLsetAnnotations(m_3, k_4);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm q_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,o_3 = NULL;
  static ATerm v_0 (ATerm t);
  static ATerm y_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    ATerm j_8 = NULL,l_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,a_4 = NULL,v_3 = NULL;
    y_8 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        r_8 = ATgetArgument(t, 0);
        s_8 = ATgetArgument(t, 1);
        t_8 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_8);
    q_8 = t;
    t = s_8;
    t = q_101(t);
    w_8 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_8, w_8, t_8);
    v_3 = t;
    t = SSLsetAnnotations(v_3, q_8);
    x_8 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        l_8 = ATgetArgument(t, 0);
        n_8 = ATgetArgument(t, 1);
        o_8 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_8);
    j_8 = t;
    t = l_8;
    t = q_101(t);
    p_8 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_8, n_8, o_8);
    a_4 = t;
    t = SSLsetAnnotations(a_4, j_8);
    return(t);
  }
  static ATerm y_0 (ATerm t)
  {
    ATerm a_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,h_9 = NULL,b_4 = NULL;
    h_9 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        c_9 = ATgetArgument(t, 0);
        d_9 = ATgetArgument(t, 1);
        e_9 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_9);
    a_9 = t;
    t = e_9;
    t = q_101(t);
    f_9 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_9, d_9, f_9);
    b_4 = t;
    t = SSLsetAnnotations(b_4, a_9);
    return(t);
  }
  b_8 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
      a_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_8);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_7, z_7, a_8);
  o_3 = t;
  t = SSLsetAnnotations(o_3, q_7);
  t = elim_abstract_choice_2_0(v_0, y_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,g_4 = NULL;
  static ATerm z_0 (ATerm t);
  static ATerm a_1 (ATerm t);
  static ATerm z_0 (ATerm t)
  {
    ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,h_4 = NULL;
    r_9 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        o_9 = ATgetArgument(t, 0);
        p_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_9);
    n_9 = t;
    t = o_9;
    t = p_101(t);
    q_9 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_9, p_9);
    h_4 = t;
    t = SSLsetAnnotations(h_4, n_9);
    return(t);
  }
  static ATerm a_1 (ATerm t)
  {
    ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,y_9 = NULL,z_9 = NULL,i_4 = NULL;
    z_9 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        t_9 = ATgetArgument(t, 0);
        u_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_9);
    s_9 = t;
    t = u_9;
    t = p_101(t);
    y_9 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_9, y_9);
    i_4 = t;
    t = SSLsetAnnotations(i_4, s_9);
    return(t);
  }
  m_9 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_9);
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, k_9, l_9);
  g_4 = t;
  t = SSLsetAnnotations(g_4, j_9);
  t = elim_abstract_choice_2_0(z_0, a_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,o_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      t = h_11;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_11 = ATgetFirst((ATermList) t);
                {
                  ATerm q_10 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_10);
            t = i_11;
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
                  t = g_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_11;
                    }
                  else
                    {
                      ATerm y_10 = t;
                      int z_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = l_12(g_11, o_11, t);
                          LocalPopChoice(z_10);
                        }
                      else
                        {
                          t = y_10;
                          t = o_11;
                        }
                    }
                }
              else
                {
                  t = s_10;
                  t = g_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_11;
                    }
                  else
                    {
                      t = o_11;
                    }
                }
            }
          }
        else
          {
            t = o_10;
            t = g_11;
            if(match_cons(t, sym_Scopes_0))
              {
                t = o_11;
              }
            else
              {
                t = o_11;
              }
          }
      }
    }
  else
    {
      t = o_11;
    }
  return(t);
}
static ATerm l_12 (ATerm x_10, ATerm a_11, ATerm t)
{
  t = a_11;
  {
    ATerm b_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 = NULL;
        t = term_d_10;
        q_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_10, x_10);
        t = g_6(q_2, x_10, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_11 = ATgetFirst((ATermList) t);
            if(match_cons(j_11, sym_Defined_1))
              {
                ATerm n_11 = ATgetArgument(j_11, 0);
              }
            else
              _fail(t);
            {
              ATerm k_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = a_11;
        LocalPopChoice(f_11);
      }
    else
      {
        t = b_11;
        t = (ATerm) ATmakeAppl(sym__2, x_10, (ATerm) ATinsert(ATempty, term_g_10));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm r_10 = NULL,t_10 = NULL;
  t = map_1_0(g_1, t);
  r_10 = t;
  t = term_d_10;
  t = table_destroy_0_0(t);
  t = term_d_10;
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, r_10);
  t = j_5(t_10, r_10, t);
  t = r_10;
  return(t);
}
static ATerm j_5 (ATerm v_42, ATerm u_42, ATerm t)
{
  static ATerm i_1 (ATerm t);
  static ATerm i_1 (ATerm t)
  {
    ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
    if(match_cons(t, sym__2))
      {
        o_12 = ATgetArgument(t, 0);
        p_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_42, o_12, p_12);
    t = lookup_table_0_1(v_42, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        q_12 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = k_6(o_12, p_12, q_12, t);
    t = (ATerm) ATmakeAppl(sym__3, v_42, o_12, p_12);
    return(t);
  }
  t = u_42;
  t = map_1_0(i_1, t);
  return(t);
}
static ATerm k_5 (ATerm k_46, ATerm t)
{
  t = SSL_hashtable_keys(k_46);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  static ATerm k_1 (ATerm t);
  static ATerm k_1 (ATerm t)
  {
    ATerm u_12 = NULL,v_12 = NULL;
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_12), u_12);
    t = g_6(not_null(s_12), u_12, t);
    v_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_12, v_12);
    return(t);
  }
  if(((s_12 != NULL) && (s_12 != t)))
    _fail(t);
  else
    s_12 = t;
  t = lookup_table_0_1(s_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(t_12, t);
  t = map_1_0(k_1, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_d_10;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL;
  a_13 = t;
  t = save_ElimVar_0_0(t);
  w_12 = t;
  t = a_13;
  t = r_101(t);
  z_12 = t;
  t = save_ElimVar_0_0(t);
  x_12 = t;
  t = term_d_10;
  t = table_destroy_0_0(t);
  t = term_d_10;
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, w_12);
  t = j_5(c_13, w_12, t);
  t = z_12;
  t = s_101(t);
  y_12 = t;
  t = x_12;
  t = isect_ElimVar_0_0(t);
  t = y_12;
  return(t);
}
ATerm elim_choice_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,k_13 = NULL,z_4 = NULL;
  static ATerm l_1 (ATerm t);
  static ATerm m_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    ATerm l_13 = NULL,p_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,c_5 = NULL;
    t_13 = t;
    if(match_cons(t, sym_Choice_2))
      {
        p_13 = ATgetArgument(t, 0);
        r_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_13);
    l_13 = t;
    t = p_13;
    t = o_101(t);
    s_13 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, s_13, r_13);
    c_5 = t;
    t = SSLsetAnnotations(c_5, l_13);
    return(t);
  }
  static ATerm m_1 (ATerm t)
  {
    ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,d_5 = NULL;
    y_13 = t;
    if(match_cons(t, sym_Choice_2))
      {
        v_13 = ATgetArgument(t, 0);
        w_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_13);
    u_13 = t;
    t = w_13;
    t = o_101(t);
    x_13 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, v_13, x_13);
    d_5 = t;
    t = SSLsetAnnotations(d_5, u_13);
    return(t);
  }
  k_13 = t;
  if(match_cons(t, sym_Choice_2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_13);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, e_13, f_13);
  z_4 = t;
  t = SSLsetAnnotations(z_4, d_13);
  t = elim_abstract_choice_2_0(l_1, m_1, t);
  return(t);
}
static ATerm l_5 (ATerm f_42, ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_42, g_42);
  t = g_6(f_42, g_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_11 = ATgetFirst((ATermList) t);
      b_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_42, g_42, (ATerm) ATinsert(CheckATermList(b_14), h_42));
  t = lookup_table_0_1(f_42, t);
  f_14 = t;
  t = (ATerm) ATinsert(CheckATermList(b_14), h_42);
  d_14 = t;
  t = f_14;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(g_42, d_14, e_14, t);
  t = c_14;
  return(t);
}
ATerm alltd_1_0 (ATerm t_105 (ATerm), ATerm t)
{
  static ATerm i_14 (ATerm t);
  static ATerm i_14 (ATerm t)
  {
    ATerm q_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_105(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = q_11;
        t = SRTS_all(i_14, t);
      }
    return(t);
  }
  t = i_14(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm j_120 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  p_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_15 = ATgetFirst((ATermList) t);
      o_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,c_3 = NULL,d_3 = NULL,i_6 = NULL,t_5 = NULL;
        t = SSLgetAnnotations(p_15);
        z_2 = t;
        t = o_15;
        t = reverse_map_1_0(j_120, t);
        c_3 = t;
        t = (ATerm) ATinsert(CheckATermList(c_3), n_15);
        t_5 = t;
        t = SSLsetAnnotations(t_5, z_2);
        d_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_2 = ATgetFirst((ATermList) t);
            x_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_3);
        v_2 = t;
        t = w_2;
        t = j_120(t);
        y_2 = t;
        t = (ATerm) ATinsert(CheckATermList(x_2), y_2);
        i_6 = t;
        t = SSLsetAnnotations(i_6, v_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_15;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm l_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_16 = ATgetArgument(t, 0);
      {
        ATerm x_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, o_16);
  p_16 = t;
  t = term_g_10;
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_16), term_g_10);
  t = q_5(q_1, p_16, q_16, t);
  t = l_16;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm n_5 (ATerm v_101 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t);
  static ATerm o_1 (ATerm t)
  {
    ATerm r_15 = NULL,s_15 = NULL,y_15 = NULL,z_15 = NULL,e_16 = NULL,h_16 = NULL,i_16 = NULL,k_16 = NULL,w_6 = NULL;
    k_16 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        s_15 = ATgetArgument(t, 0);
        y_15 = ATgetArgument(t, 1);
        z_15 = ATgetArgument(t, 2);
        e_16 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_16);
    r_15 = t;
    t = z_15;
    t = map_1_0(p_1, t);
    h_16 = t;
    t = e_16;
    t = v_101(t);
    i_16 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, s_15, y_15, h_16, i_16);
    w_6 = t;
    t = SSLsetAnnotations(w_6, r_15);
    return(t);
  }
  t = scope_2_0(n_1, o_1, t);
  return(t);
}
static ATerm p_5 (ATerm d_42, ATerm e_42, ATerm t)
{
  ATerm s_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_42, e_42);
  t = g_6(d_42, e_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_16 = ATgetFirst((ATermList) t);
      {
        ATerm y_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_16;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm b_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm z_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL;
        t = term_d_10;
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_10, b_18);
        t = p_5(b_5, b_18, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = b_18;
        _fail(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_6 = NULL;
              t = term_d_10;
              d_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_d_10, b_18);
              t = p_5(d_6, b_18, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = b_18;
              _fail(t);
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              {
                ATerm e_12 = t;
                int f_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_6 = NULL;
                    t = term_d_10;
                    s_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_d_10, b_18);
                    t = p_5(s_6, b_18, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = b_18;
                    _fail(t);
                    LocalPopChoice(f_12);
                  }
                else
                  {
                    t = e_12;
                    {
                      ATerm h_7 = NULL;
                      t = term_d_10;
                      h_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_d_10, b_18);
                      t = p_5(h_7, b_18, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm g_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) g_12) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_h_12;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm h_127 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,y_19 = NULL,d_20 = NULL;
  u_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_19 = ATgetFirst((ATermList) t);
          d_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL,t_7 = NULL,u_7 = NULL,z_6 = NULL;
            t = SSLgetAnnotations(u_19);
            p_7 = t;
            t = y_19;
            t = h_127(t);
            t_7 = t;
            t = d_20;
            t = filter_1_0(h_127, t);
            u_7 = t;
            t = (ATerm) ATinsert(CheckATermList(u_7), t_7);
            z_6 = t;
            t = SSLsetAnnotations(z_6, p_7);
            LocalPopChoice(r_12);
          }
        else
          {
            t = k_12;
            t = d_20;
            t = filter_1_0(h_127, t);
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm b_116 (ATerm), ATerm o_40, ATerm m_40, ATerm t)
{
  ATerm k_20 = NULL,o_20 = NULL,s_20 = NULL,b_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,i_21 = NULL;
  b_21 = t;
  t = b_116(t);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_20, o_40, m_40);
  t = h_6(k_20, o_40, m_40, t);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_21 = NULL;
        t = term_n_13;
        j_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_20, term_n_13);
        t = g_6(k_20, j_21, t);
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
      o_20 = ATgetFirst((ATermList) t);
      s_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_20, term_n_13, (ATerm) ATinsert(CheckATermList(s_20), (ATerm) ATinsert(CheckATermList(o_20), o_40)));
  t = lookup_table_0_1(k_20, t);
  i_21 = t;
  t = term_n_13;
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), (ATerm) ATinsert(CheckATermList(o_20), o_40));
  f_21 = t;
  t = i_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(e_21, f_21, g_21, t);
  t = b_21;
  return(t);
}
static ATerm r_5 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  l_21 = t;
  {
    ATerm q_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_41, y_41);
        t = g_6(x_41, y_41, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_14 = ATgetFirst((ATermList) t);
            k_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_13);
        {
          ATerm m_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, x_41, y_41, k_21);
          t = lookup_table_0_1(x_41, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_6(y_41, k_21, m_21, t);
          t = (ATerm) ATmakeAppl(sym__3, x_41, y_41, k_21);
        }
      }
    else
      {
        t = q_13;
        {
          ATerm o_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, x_41, y_41);
          t = lookup_table_0_1(x_41, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_6(y_41, o_21, t);
          t = (ATerm) ATmakeAppl(sym__2, x_41, y_41);
        }
      }
  }
  t = l_21;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,b_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,s_22 = NULL;
  n_22 = t;
  t = y_115(t);
  b_22 = t;
  {
    ATerm g_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_22 = NULL;
        t = term_n_13;
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_22, term_n_13);
        t = g_6(b_22, v_22, t);
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
      x_21 = ATgetFirst((ATermList) t);
      w_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_22, term_n_13, w_21);
  t = lookup_table_0_1(b_22, t);
  s_22 = t;
  t = term_n_13;
  o_22 = t;
  t = s_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(o_22, w_21, p_22, t);
  t = x_21;
  {
    static ATerm r_1 (ATerm t);
    static ATerm r_1 (ATerm t)
    {
      ATerm y_22 = NULL;
      y_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_22, y_22);
      t = r_5(b_22, y_22, t);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  t = n_22;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_107(t);
      t = n_107(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = n_107(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,j_23 = NULL,l_23 = NULL,p_23 = NULL,u_23 = NULL,w_23 = NULL;
  e_23 = t;
  t = x_115(t);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_23, term_n_13);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_14 = ATgetArgument(t, 0);
            ATerm y_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_13;
        b_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_23, term_n_13);
        t = g_6(d_23, b_24, t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = (ATerm) ATempty;
      }
  }
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_23, term_n_13, (ATerm) ATinsert(CheckATermList(j_23), (ATerm) ATempty));
  t = lookup_table_0_1(d_23, t);
  w_23 = t;
  t = term_n_13;
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), (ATerm) ATempty);
  p_23 = t;
  t = w_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(l_23, p_23, u_23, t);
  t = e_23;
  return(t);
}
ATerm scope_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    t = end_scope_1_0(z_115, t);
    return(t);
  }
  t = begin_scope_1_0(z_115, t);
  t = restore_always_2_0(a_116, t_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_29);
  p_29 = t;
  t = term_a_15;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_29), term_a_15);
  t = q_5(b_2, p_29, q_29, t);
  t = o_29;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm d_15 = t;
  if((PushChoice() == 0))
    {
      ATerm r_29 = NULL;
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_29);
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
  t = term_d_10;
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
  v_8 = t;
  t = term_g_10;
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Var_1, m_8), term_g_10);
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
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  h_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_d_10;
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_10);
  k_10 = t;
  t = term_g_10;
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Var_1, i_10), term_g_10);
  t = l_5(j_10, k_10, l_10, t);
  t = h_10;
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
  t = term_d_10;
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_11);
  u_11 = t;
  t = term_g_10;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, (ATerm)ATmakeAppl(sym_Var_1, s_11), term_g_10);
  t = l_5(t_11, u_11, w_11, t);
  t = r_11;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm e_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,n_12 = NULL;
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
  n_12 = t;
  t = SSLsetAnnotations(n_12, e_15);
  return(t);
}
static ATerm m_2 (ATerm t)
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
      static ATerm i_31 (ATerm t);
      static ATerm i_31 (ATerm t)
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,m_28 = NULL;
            h_28 = t;
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
                    static ATerm w_1 (ATerm t);
                    static ATerm w_1 (ATerm t)
                    {
                      ATerm r_28 = NULL,s_28 = NULL,v_28 = NULL,x_28 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,k_29 = NULL,n_29 = NULL,i_7 = NULL,b_7 = NULL;
                      n_29 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          e_29 = ATgetArgument(t, 0);
                          f_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(n_29);
                      d_29 = t;
                      t = e_29;
                      t = map_1_0(x_1, t);
                      g_29 = t;
                      t = f_29;
                      t = i_31(t);
                      h_29 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, g_29, h_29);
                      b_7 = t;
                      t = SSLsetAnnotations(b_7, d_29);
                      k_29 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          s_28 = ATgetArgument(t, 0);
                          v_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(k_29);
                      r_28 = t;
                      t = s_28;
                      t = filter_1_0(c_2, t);
                      x_28 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, x_28, v_28);
                      i_7 = t;
                      t = SSLsetAnnotations(i_7, r_28);
                      return(t);
                    }
                    t = h_28;
                    t = scope_2_0(v_1, w_1, t);
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
                            ATerm v_16 = ATgetArgument(t, 2);
                            ATerm w_16 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_16);
                        t = h_28;
                        t = n_5(i_31, t);
                      }
                    else
                      {
                        t = g_16;
                        if(match_cons(t, sym_Build_1))
                          {
                            i_28 = ATgetArgument(t, 0);
                            {
                              ATerm f_8 = NULL,h_8 = NULL,j_7 = NULL;
                              t = SSLgetAnnotations(h_28);
                              f_8 = t;
                              t = i_28;
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
                                i_28 = ATgetArgument(t, 0);
                                m_28 = ATgetArgument(t, 1);
                                g_28 = ATgetArgument(t, 2);
                                {
                                  ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,k_7 = NULL;
                                  t = SSLgetAnnotations(h_28);
                                  a_10 = t;
                                  t = m_28;
                                  t = reverse_map_1_0(i_31, t);
                                  e_10 = t;
                                  t = g_28;
                                  t = reverse_map_1_0(h_2, t);
                                  f_10 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_28, e_10, f_10);
                                  k_7 = t;
                                  t = SSLsetAnnotations(k_7, a_10);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    i_28 = ATgetArgument(t, 0);
                                    m_28 = ATgetArgument(t, 1);
                                    g_28 = ATgetArgument(t, 2);
                                    {
                                      ATerm w_10 = NULL,l_11 = NULL,m_11 = NULL,o_7 = NULL;
                                      t = SSLgetAnnotations(h_28);
                                      w_10 = t;
                                      t = m_28;
                                      t = reverse_map_1_0(i_31, t);
                                      l_11 = t;
                                      t = g_28;
                                      t = reverse_map_1_0(j_2, t);
                                      m_11 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, i_28, l_11, m_11);
                                      o_7 = t;
                                      t = SSLsetAnnotations(o_7, w_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm i_12 = NULL,j_12 = NULL,m_12 = NULL,b_13 = NULL,g_13 = NULL,j_13 = NULL,m_13 = NULL,d_11 = NULL,c_11 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        i_28 = ATgetArgument(t, 0);
                                        m_28 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(h_28);
                                    g_13 = t;
                                    t = m_28;
                                    t = i_31(t);
                                    j_13 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_28, j_13);
                                    c_11 = t;
                                    t = SSLsetAnnotations(c_11, g_13);
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
                                    t = i_31(t);
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
              ATerm f_17 = t;
              int g_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(i_31, t);
                  LocalPopChoice(g_17);
                }
              else
                {
                  t = f_17;
                  {
                    ATerm h_17 = t;
                    int i_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = elim_lchoice_1_0(i_31, t);
                        LocalPopChoice(i_17);
                      }
                    else
                      {
                        t = h_17;
                        {
                          ATerm k_17 = t;
                          int l_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(i_31, t);
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
                                    t = all_rl_1_0(i_31, t);
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
      t = i_31(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = f_15;
      {
        ATerm g_31 = NULL,h_31 = NULL,h_14 = NULL,k_14 = NULL,l_14 = NULL,o_14 = NULL,q_14 = NULL,r_14 = NULL,w_14 = NULL,b_15 = NULL,c_15 = NULL,n_14 = NULL,m_14 = NULL,e_11 = NULL;
        g_31 = t;
        if(match_cons(t, sym_Specification_1))
          {
            h_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_31);
        h_14 = t;
        t = h_31;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_14 = ATgetFirst((ATermList) t);
            o_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_31);
        k_14 = t;
        t = l_14;
        if(match_cons(t, sym_Signature_1))
          {
            b_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_14);
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, b_15);
        e_11 = t;
        t = SSLsetAnnotations(e_11, w_14);
        c_15 = t;
        t = o_14;
        t = Cons_2_0(l_2, m_2, t);
        q_14 = t;
        t = (ATerm) ATinsert(CheckATermList(q_14), c_15);
        m_14 = t;
        t = SSLsetAnnotations(m_14, k_14);
        r_14 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, r_14);
        n_14 = t;
        t = SSLsetAnnotations(n_14, h_14);
      }
    }
  return(t);
}
static ATerm u_5 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm z_31 = NULL;
  t = SSL_fputc(i_32, j_32);
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_31);
  return(t);
}
static ATerm v_5 (ATerm o_30, ATerm p_30, ATerm t)
{
  ATerm a_32 = NULL;
  t = SSL_write_term_to_stream_text(o_30, p_30);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_32);
  return(t);
}
static ATerm x_5 (ATerm p_111 (ATerm), ATerm i_236, ATerm u_30, ATerm t)
{
  ATerm e_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_236, term_o_17);
  t = b_6(t);
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_32, u_30);
  t = p_111(t);
  t = fclose_0_0(t);
  t = u_30;
  return(t);
}
static ATerm w_5 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_write_term_to_stream_baf(k_30, l_30);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_32);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
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
static ATerm r_2 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(match_cons(s_17, sym_Stream_1))
        {
          d_17 = ATgetArgument(s_17, 0);
        }
      else
        _fail(t);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(d_17, e_17, t);
  a_17 = t;
  t = term_t_17;
  b_17 = t;
  t = a_17;
  if(match_cons(t, sym_Stream_1))
    {
      c_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, a_17);
  t = u_5(b_17, c_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,v_32 = NULL,x_32 = NULL,y_32 = NULL,b_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,j_35 = NULL,m_35 = NULL,t_16 = NULL,q_15 = NULL;
  s_32 = t;
  if(match_cons(t, sym__2))
    {
      f_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_32);
  e_33 = t;
  t = f_33;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_2 (ATerm t);
        static ATerm n_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_32 != NULL) && (r_32 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(n_2, t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = term_x_17;
        r_32 = t;
      }
  }
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_33, g_33);
  q_15 = t;
  t = SSLsetAnnotations(q_15, e_33);
  t = s_32;
  if(match_cons(t, sym__2))
    {
      x_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_32);
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_32, (ATerm) ATmakeAppl(sym__2, not_null(r_32), y_32));
  t_16 = t;
  t = SSLsetAnnotations(t_16, v_32);
  b_33 = t;
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_17 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 = NULL,x_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,u_16 = NULL;
        t = SSLgetAnnotations(b_33);
        u_15 = t;
        t = j_35;
        t = fetch_1_0(o_2, t);
        x_15 = t;
        t = m_35;
        if(match_cons(t, sym__2))
          {
            b_16 = ATgetArgument(t, 0);
            c_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(p_2, b_16, c_16, t);
        a_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_15, a_16);
        u_16 = t;
        t = SSLsetAnnotations(u_16, u_15);
        LocalPopChoice(c_18);
      }
    else
      {
        t = y_17;
        {
          ATerm r_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,j_17 = NULL;
          t = SSLgetAnnotations(b_33);
          r_16 = t;
          t = m_35;
          if(match_cons(t, sym__2))
            {
              y_16 = ATgetArgument(t, 0);
              z_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_5(r_2, y_16, z_16, t);
          x_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_35, x_16);
          j_17 = t;
          t = SSLsetAnnotations(j_17, r_16);
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
ATerm apply_strategy_1_0 (ATerm i_134 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  z_35 = t;
  t = dtime_0_0(t);
  t = z_35;
  t = i_134(t);
  y_35 = t;
  t = dtime_0_0(t);
  p_35 = t;
  t = y_35;
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_35), (ATerm) ATmakeAppl(sym_Runtime_1, p_35)), x_35);
  return(t);
}
static ATerm c_37 (ATerm q_36, ATerm t)
{
  t = SSL_fclose(q_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_36 = NULL,y_36 = NULL;
  y_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_36 = ATgetArgument(t, 0);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_36);
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            t = c_37(y_36, t);
          }
      }
    }
  else
    {
      t = c_37(y_36, t);
    }
  return(t);
}
static ATerm y_5 (ATerm q_30, ATerm t)
{
  t = SSL_read_term_from_stream(q_30);
  return(t);
}
static ATerm z_5 (ATerm z_68, ATerm a_69, ATerm t)
{
  t = SSL_strcat(z_68, a_69);
  return(t);
}
static ATerm a_6 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm d_37 = NULL;
  t = SSL_fopen(k_32, l_32);
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_37);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_37 = NULL;
  t = SSL_stdin_stream();
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_37 = NULL;
  t = SSL_stdout_stream();
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_37 = NULL;
  t = SSL_stderr_stream();
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_37);
  return(t);
}
static ATerm n_38 (ATerm m_37, ATerm t)
{
  ATerm n_37 = NULL;
  t = SSL_explode_term(m_37);
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_18 = ATgetArgument(t, 1);
        if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
          {
            n_37 = ATgetFirst((ATermList) i_18);
            {
              ATerm j_18 = (ATerm) ATgetNext((ATermList) i_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_38 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,y_37 = NULL,p_17 = NULL;
  t = SSLgetAnnotations(s_37);
  v_37 = t;
  t = q_37;
  if(match_cons(t, sym_Path_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_37, r_37);
  p_17 = t;
  t = SSLsetAnnotations(p_17, v_37);
  if(match_cons(t, sym__2))
    {
      t_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(t_37, u_37, t);
  return(t);
}
static ATerm p_38 (ATerm a_38, ATerm b_38, ATerm c_38, ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,i_38 = NULL,q_17 = NULL;
  t = SSLgetAnnotations(c_38);
  f_38 = t;
  t = SSL_is_string(a_38);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_38, b_38);
  q_17 = t;
  t = SSLsetAnnotations(q_17, f_38);
  if(match_cons(t, sym__2))
    {
      d_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(d_38, e_38, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_38(k_38, t);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm n_18 = t;
              int o_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_38(l_38, m_38, k_38, t);
                  LocalPopChoice(o_18);
                }
              else
                {
                  t = n_18;
                  t = p_38(l_38, m_38, k_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_38(k_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,y_38 = NULL;
  y_38 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_38, term_s_18);
        t = b_6(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm z_17 = NULL,d_18 = NULL;
          t = term_t_18;
          d_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_18, y_38);
          t = z_5(d_18, y_38, t);
          z_17 = t;
          t = SSL_perror(z_17);
          _fail(t);
        }
      }
  }
  s_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(t_38, t);
  r_38 = t;
  t = s_38;
  t = fclose_0_0(t);
  t = r_38;
  return(t);
}
ATerm fetch_1_0 (ATerm q_120 (ATerm), ATerm t)
{
  static ATerm z_39 (ATerm t);
  static ATerm z_39 (ATerm t)
  {
    ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
    w_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_39 = ATgetFirst((ATermList) t);
        y_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_18 = NULL,p_18 = NULL,w_17 = NULL;
          t = SSLgetAnnotations(w_39);
          m_18 = t;
          t = x_39;
          t = q_120(t);
          p_18 = t;
          t = (ATerm) ATinsert(CheckATermList(y_39), p_18);
          w_17 = t;
          t = SSLsetAnnotations(w_17, m_18);
          LocalPopChoice(v_18);
        }
      else
        {
          t = u_18;
          {
            ATerm c_19 = NULL,f_19 = NULL,a_18 = NULL;
            t = SSLgetAnnotations(w_39);
            c_19 = t;
            t = y_39;
            t = z_39(t);
            f_19 = t;
            t = (ATerm) ATinsert(CheckATermList(f_19), x_39);
            a_18 = t;
            t = SSLsetAnnotations(a_18, c_19);
          }
        }
    }
    return(t);
  }
  t = z_39(t);
  return(t);
}
static ATerm g_6 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm c_40 = NULL;
  t = lookup_table_0_1(l_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(m_43, c_40, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_113 (ATerm), ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  {
    ATerm x_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_40 = NULL,t_40 = NULL,v_40 = NULL;
        t = term_c_7;
        t_40 = t;
        t = term_b_19;
        v_40 = t;
        t = term_d_19;
        t = g_6(t_40, v_40, t);
        s_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_40, term_e_19);
        t = geq_0_0(t);
        t = f_40;
        t = h_113(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = x_18;
        t = f_40;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_40;
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
            t = y_40;
          }
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATinsert(ATempty, y_40);
      }
  }
  z_40 = t;
  t = term_x_17;
  a_41 = t;
  t = SSL_printnl(a_41, z_40);
  t = y_40;
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
static ATerm s_2 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  if(match_string(t, "-k"))
    {
      t = h_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_41;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  t = SSL_string_to_int(i_41);
  j_41 = t;
  t = term_k_19;
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, j_41);
  t = j_6(k_41, j_41, t);
  t = i_41;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  if(match_string(t, "-S"))
    {
      t = m_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_41;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  t = term_b_19;
  n_41 = t;
  t = term_m_19;
  o_41 = t;
  t = term_p_19;
  t = j_6(n_41, o_41, t);
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
  ATerm p_41 = NULL,q_41 = NULL,u_41 = NULL;
  p_41 = t;
  t = SSL_string_to_int(p_41);
  q_41 = t;
  t = term_b_19;
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_19, q_41);
  t = j_6(u_41, q_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_41);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_v_19;
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
  ATerm v_41 = NULL,z_41 = NULL;
  t = term_w_19;
  v_41 = t;
  t = term_v_6;
  z_41 = t;
  t = term_x_19;
  t = j_6(v_41, z_41, t);
  t = term_z_19;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_3, b_3, f_3, t);
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_3, i_3, k_3, t);
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            t = Option_3_0(l_3, n_3, q_3, t);
          }
      }
    }
  return(t);
}
static ATerm j_6 (ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  t = term_c_7;
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_7, e_36, f_36);
  t = lookup_table_0_1(a_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(e_36, f_36, b_42, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_7, e_36, f_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
      t = term_v_6;
      t = f_0(t);
      n_42 = t;
      t = term_v_7;
      o_42 = t;
      t = term_w_7;
      p_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, n_42);
      t = h_6(o_42, p_42, n_42, t);
      _fail(t);
    }
  else
    {
      ATerm y_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_42 = ATgetFirst((ATermList) t);
          m_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_42;
      t = d_0(t);
      t = term_v_6;
      t = e_0(t);
      y_42 = t;
      t = (ATerm) ATinsert(CheckATermList(m_42), y_42);
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm a_43 = NULL;
  a_43 = t;
  if(match_string(t, "-o"))
    {
      t = a_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_43;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  b_43 = t;
  t = term_g_20;
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, b_43);
  t = j_6(c_43, b_43, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_43);
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
static ATerm h_6 (ATerm s_41, ATerm t_41, ATerm r_41, ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,n_43 = NULL,o_43 = NULL;
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_41, t_41);
  {
    ATerm i_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_20 = ATgetArgument(t, 0);
            ATerm n_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_41, t_41);
        t = g_6(s_41, t_41, t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATempty;
      }
  }
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_41, t_41, (ATerm) ATinsert(CheckATermList(j_43), r_41));
  t = lookup_table_0_1(s_41, t);
  o_43 = t;
  t = (ATerm) ATinsert(CheckATermList(j_43), r_41);
  k_43 = t;
  t = o_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(t_41, k_43, n_43, t);
  t = i_43;
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
      t = term_v_6;
      t = k_0(t);
      z_43 = t;
      t = term_v_7;
      a_44 = t;
      t = term_w_7;
      b_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, z_43);
      t = h_6(a_44, b_44, z_43, t);
      _fail(t);
    }
  else
    {
      ATerm f_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_43 = ATgetFirst((ATermList) t);
          w_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_43;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_43 = ATgetFirst((ATermList) t);
          y_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_43;
      t = g_0(t);
      t = x_43;
      t = h_0(t);
      f_44 = t;
      t = (ATerm) ATinsert(CheckATermList(y_43), f_44);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  if(match_string(t, "-i"))
    {
      t = h_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_44;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  i_44 = t;
  t = term_p_20;
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, i_44);
  t = j_6(j_44, i_44, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_44);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, f_4, j_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_6;
  t = whoami_0_0(t);
  k_44 = t;
  t = term_t_20;
  m_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_20), k_44);
  n_44 = t;
  t = SSL_printnl(m_44, n_44);
  t = term_y_20;
  l_44 = t;
  t = SSL_exit(l_44);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  t = term_c_7;
  o_44 = t;
  t = term_l_7;
  p_44 = t;
  t = term_m_7;
  t = g_6(o_44, p_44, t);
  return(t);
}
static ATerm c_6 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_39, b_39);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = SSL_addr(a_39, b_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
  r_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_44;
      t = d_126(t);
    }
  else
    {
      ATerm w_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_44 = ATgetFirst((ATermList) t);
          t_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_44;
      t = foldr_2_0(d_126, e_126, t);
      w_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_44, w_44);
      t = e_126(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm n_4 (ATerm t)
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
  ATerm z_44 = NULL,n_19 = NULL,o_19 = NULL;
  t = times_0_0(t);
  o_19 = t;
  t = SSL_explode_term(o_19);
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_19;
  t = foldr_2_0(m_4, n_4, t);
  z_44 = t;
  t = SSL_TicksToSeconds(z_44);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_45;
        if((l_45 != t))
          {
            _fail(t);
          }
        t = k_45;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_45, m_45);
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = SSL_gtr(l_45, m_45);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
        t = term_c_7;
        t_45 = t;
        t = term_b_19;
        u_45 = t;
        t = term_d_19;
        t = g_6(t_45, u_45, t);
        s_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_45, term_y_20);
        t = geq_0_0(t);
        t = q_45;
        t = g_113(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = q_45;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,z_45 = NULL,a_46 = NULL;
  t = run_time_0_0(t);
  w_45 = t;
  t = term_v_6;
  t = whoami_0_0(t);
  x_45 = t;
  t = term_t_20;
  z_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_21), w_45), term_v_21), x_45);
  a_46 = t;
  t = SSL_printnl(z_45, a_46);
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_21), w_45), term_v_21), x_45));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_19;
  b_46 = t;
  t = SSL_exit(b_46);
  return(t);
}
static ATerm k_6 (ATerm d_46, ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm c_46 = NULL;
  t = SSL_hashtable_put(f_46, d_46, e_46);
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_46);
  return(t);
}
static ATerm l_6 (ATerm g_46, ATerm h_46, ATerm t)
{
  t = SSL_hashtable_get(h_46, g_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_43, ATerm t)
{
  ATerm w_46 = NULL;
  t = table_hashtable_0_0(t);
  w_46 = t;
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL;
        t = w_46;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_6(e_43, j_20, t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        {
          ATerm q_20 = NULL;
          t = e_43;
          t = table_create_0_0(t);
          t = w_46;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_6(e_43, q_20, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm z_46 = NULL;
  t = SSL_hashtable_create(l_46, m_46);
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_46);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,e_47 = NULL,f_47 = NULL;
  a_47 = t;
  t = term_c_22;
  e_47 = t;
  t = term_d_22;
  f_47 = t;
  t = a_47;
  t = new_hashtable_0_2(e_47, f_47, t);
  b_47 = t;
  t = a_47;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(a_47, b_47, c_47, t);
  t = a_47;
  return(t);
}
static ATerm e_6 (ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm g_47 = NULL;
  t = SSL_hashtable_remove(j_46, i_46);
  g_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_47);
  return(t);
}
static ATerm f_6 (ATerm n_46, ATerm t)
{
  ATerm h_47 = NULL;
  t = SSL_hashtable_destroy(n_46);
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_47);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_47 = NULL;
  t = SSL_table_hashtable();
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_47);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  j_47 = t;
  t = table_hashtable_0_0(t);
  k_47 = t;
  t = lookup_table_0_1(j_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(m_47, t);
  t = k_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(j_47, l_47, t);
  t = j_47;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  t = term_e_22;
  n_47 = t;
  t = term_v_6;
  o_47 = t;
  t = term_f_22;
  t = j_6(n_47, o_47, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  t = term_e_22;
  r_47 = t;
  t = term_v_6;
  s_47 = t;
  t = term_f_22;
  t = j_6(r_47, s_47, t);
  t = term_h_22;
  p_47 = t;
  t = term_v_6;
  q_47 = t;
  t = term_i_22;
  t = j_6(p_47, q_47, t);
  t = term_j_22;
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
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, t_4, u_4, t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      t = Option_3_0(v_4, a_5, e_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,g_18 = NULL;
  y_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_47 = ATgetFirst((ATermList) t);
      v_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_47);
  t_47 = t;
  t = u_47;
  t = y_88(t);
  w_47 = t;
  t = v_47;
  t = z_88(t);
  x_47 = t;
  t = (ATerm) ATinsert(CheckATermList(x_47), w_47);
  g_18 = t;
  t = SSLsetAnnotations(g_18, t_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,i_48 = NULL,j_48 = NULL,w_18 = NULL;
  d_48 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_22;
        t = o_137(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
      }
  }
  t = d_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_48 = ATgetFirst((ATermList) t);
      g_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_48);
  e_48 = t;
  t = term_l_7;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, f_48);
  t = j_6(j_48, f_48, t);
  t = g_48;
  {
    static ATerm t_48 (ATerm t);
    static ATerm t_48 (ATerm t)
    {
      ATerm u_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_48 = NULL;
              m_48 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_48;
              LocalPopChoice(z_22);
            }
          else
            {
              t = x_22;
              t = o_137(t);
              t = Cons_2_0(_id, t_48, t);
            }
          LocalPopChoice(w_22);
        }
      else
        {
          t = u_22;
          {
            ATerm p_48 = NULL,q_48 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_48 = ATgetFirst((ATermList) t);
                q_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_48), (ATerm) ATmakeAppl(sym_Undefined_1, p_48));
          }
        }
      return(t);
    }
    t = t_48(t);
  }
  i_48 = t;
  t = (ATerm) ATinsert(CheckATermList(i_48), (ATerm) ATmakeAppl(sym_Program_1, f_48));
  w_18 = t;
  t = SSLsetAnnotations(w_18, e_48);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  if(match_string(t, "--help"))
    {
      t = g_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_49;
        }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  t = term_a_23;
  h_49 = t;
  t = term_v_6;
  i_49 = t;
  t = term_b_23;
  t = j_6(h_49, i_49, t);
  t = term_c_23;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm l_137 (ATerm), ATerm m_137 (ATerm), ATerm n_137 (ATerm), ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  a_49 = t;
  t = term_v_7;
  b_49 = t;
  t = term_g_23;
  t = lookup_table_0_1(b_49, t);
  f_49 = t;
  t = term_w_7;
  c_49 = t;
  t = (ATerm) ATempty;
  d_49 = t;
  t = f_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(c_49, d_49, e_49, t);
  t = a_49;
  {
    static ATerm f_5 (ATerm t);
    static ATerm f_5 (ATerm t)
    {
      ATerm h_23 = t;
      int i_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_137(t);
          LocalPopChoice(i_23);
        }
      else
        {
          t = h_23;
          {
            ATerm k_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_5, h_5, i_5, t);
                LocalPopChoice(m_23);
              }
            else
              {
                t = k_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_5, t);
  }
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_49 = NULL;
        t_49 = t;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_20 = NULL;
              t = t_49;
              {
                ATerm s_23 = t;
                int t_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_20 = NULL,x_20 = NULL;
                    t = term_c_7;
                    w_20 = t;
                    t = term_a_23;
                    x_20 = t;
                    t = term_v_23;
                    t = g_6(w_20, x_20, t);
                    LocalPopChoice(t_23);
                  }
                else
                  {
                    t = s_23;
                    t = fetch_1_0(m_5, t);
                  }
              }
              t = t_49;
              t = m_137(t);
              t = term_m_19;
              v_20 = t;
              t = SSL_exit(v_20);
              LocalPopChoice(r_23);
            }
          else
            {
              t = q_23;
              {
                ATerm c_21 = NULL,d_21 = NULL,h_21 = NULL;
                t = term_c_7;
                d_21 = t;
                t = term_e_22;
                h_21 = t;
                t = term_x_23;
                t = g_6(d_21, h_21, t);
                t = t_49;
                t = n_137(t);
                t = term_m_19;
                c_21 = t;
                t = SSL_exit(c_21);
              }
            }
        }
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
              static ATerm o_5 (ATerm t);
              static ATerm o_5 (ATerm t)
              {
                ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,y_18 = NULL;
                z_49 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_49 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_49);
                x_49 = t;
                t = y_49;
                if(((y_48 != NULL) && (y_48 != t)))
                  _fail(t);
                else
                  y_48 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_49);
                y_18 = t;
                t = SSLsetAnnotations(y_18, x_49);
                return(t);
              }
              t = fetch_1_0(o_5, t);
              t = term_t_20;
              v_49 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_48)), term_a_24);
              w_49 = t;
              t = SSL_printnl(v_49, w_49);
              t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_48)), term_a_24));
              t = m_137(t);
              t = term_y_20;
              u_49 = t;
              t = SSL_exit(u_49);
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
            }
        }
      }
  }
  z_48 = t;
  t = term_v_7;
  t = table_destroy_0_0(t);
  t = z_48;
  return(t);
}
ATerm option_wrap_5_0 (ATerm o_135 (ATerm), ATerm p_135 (ATerm), ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  t = parse_options_3_0(o_135, p_135, q_135, t);
  e_50 = t;
  t = term_c_24;
  t = table_create_0_0(t);
  t = term_c_24;
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_24, term_d_24, e_50);
  t = lookup_table_0_1(f_50, t);
  i_50 = t;
  t = term_d_24;
  g_50 = t;
  t = i_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(g_50, e_50, h_50, t);
  t = e_50;
  t = r_135(t);
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_135(t);
        t = report_success_0_0(t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
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
  ATerm j_50 = NULL,k_50 = NULL;
  t = term_g_24;
  j_50 = t;
  t = term_v_6;
  k_50 = t;
  t = term_h_24;
  t = j_6(j_50, k_50, t);
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
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  l_50 = t;
  t = term_c_7;
  p_50 = t;
  t = term_l_7;
  q_50 = t;
  t = term_m_7;
  t = g_6(p_50, q_50, t);
  m_50 = t;
  t = term_t_20;
  n_50 = t;
  t = (ATerm) ATinsert(ATempty, m_50);
  o_50 = t;
  t = SSL_printnl(n_50, o_50);
  t = l_50;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm t)
{
  static ATerm s_5 (ATerm t);
  static ATerm n_6 (ATerm t);
  static ATerm s_5 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_134(t);
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
    ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL;
    s_50 = t;
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
                if(((r_50 != NULL) && (r_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_50 = ATgetArgument(t, 0);
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
          r_50 = t;
        }
    }
    t = not_null(r_50);
    t = ReadFromFile_0_0(t);
    t_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_50, t_50);
    t = apply_strategy_1_0(r_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(s_5, t_134, default_system_about_0_0, m_6, n_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,a_19 = NULL;
  y_50 = t;
  if(match_cons(t, sym__2))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_50);
  u_50 = t;
  t = w_50;
  t = dead_var_elim_0_0(t);
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_50, x_50);
  a_19 = t;
  t = SSLsetAnnotations(a_19, u_50);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_6, _fail, default_system_usage_0_0, t);
  return(t);
}

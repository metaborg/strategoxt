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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_t_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_s_11;
ATerm term_n_11;
ATerm term_k_8;
ATerm term_j_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_13);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_o_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_v_15);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_o_17);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_p_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_j_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_f_18);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_i_19);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_f_18);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_f_18);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_f_18);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, (ATerm) ATempty);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_t_21);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_d_21);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_f_18);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm all_rl_1_0 (ATerm w_110 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm s_110 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm r_110 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_8 (ATerm q_7, ATerm r_7, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm c_5 (ATerm u_43, ATerm t_43, ATerm t);
static ATerm d_5 (ATerm j_47, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm q_110 (ATerm), ATerm t);
static ATerm e_5 (ATerm e_43, ATerm f_43, ATerm g_43, ATerm t);
ATerm alltd_1_0 (ATerm u_114 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm p_130 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm g_5 (ATerm x_110 (ATerm), ATerm t);
static ATerm i_5 (ATerm c_43, ATerm d_43, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_137 (ATerm), ATerm t);
static ATerm j_5 (ATerm e_125 (ATerm), ATerm n_41, ATerm l_41, ATerm t);
static ATerm k_5 (ATerm w_42, ATerm x_42, ATerm t);
ATerm end_scope_1_0 (ATerm b_125 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_125 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm dead_var_elim_0_0 (ATerm t);
static ATerm m_5 (ATerm e_33, ATerm f_33, ATerm t);
static ATerm n_5 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm p_5 (ATerm r_120 (ATerm), ATerm a_246, ATerm q_31, ATerm t);
static ATerm o_5 (ATerm g_31, ATerm h_31, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm output_1_0 (ATerm a_146 (ATerm), ATerm t);
static ATerm x_29 (ATerm l_29, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_5 (ATerm m_31, ATerm t);
static ATerm r_5 (ATerm x_75, ATerm y_75, ATerm t);
static ATerm s_5 (ATerm g_33, ATerm h_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_33 (ATerm v_30, ATerm t);
static ATerm c_33 (ATerm c_31, ATerm d_31, ATerm f_31, ATerm t);
static ATerm d_33 (ATerm b_32, ATerm c_32, ATerm d_32, ATerm t);
static ATerm t_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_146 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm m_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm z_147 (ATerm), ATerm a_148 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_6 (ATerm a_37, ATerm b_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_6 (ATerm r_42, ATerm s_42, ATerm q_42, ATerm t);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_5 (ATerm z_39, ATerm a_40, ATerm t);
ATerm foldr_2_0 (ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_122 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_6 (ATerm c_47, ATerm d_47, ATerm e_47, ATerm t);
ATerm lookup_table_0_1 (ATerm d_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm k_47, ATerm l_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_5 (ATerm h_47, ATerm i_47, ATerm t);
static ATerm x_5 (ATerm m_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_130 (ATerm), ATerm t);
static ATerm e_6 (ATerm f_47, ATerm g_47, ATerm t);
static ATerm z_5 (ATerm k_44, ATerm l_44, ATerm t);
static ATerm b_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_147 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm parse_options_3_0 (ATerm r_147 (ATerm), ATerm s_147 (ATerm), ATerm t_147 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_145 (ATerm), ATerm v_145 (ATerm), ATerm w_145 (ATerm), ATerm x_145 (ATerm), ATerm y_145 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm all_rl_1_0 (ATerm w_110 (ATerm), ATerm t)
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
  t = reverse_map_1_0(w_110, t);
  p_0 = t;
  t = SSL_mkterm(a_0, p_0);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm h_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL,o_2 = NULL,p_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_2;
        h_1 = t;
        t = SSLgetAnnotations(o_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) s_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(t_7) != AT_LIST) || !(ATisEmpty(t_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_2;
        LocalPopChoice(m_7);
      }
    else
      {
        t = k_7;
        {
          ATerm b_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_2;
              h_1 = t;
              t = SSLgetAnnotations(o_2);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_8 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) e_8) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm f_8 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(f_8) != AT_LIST) || !(ATisEmpty(f_8))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = o_2;
              LocalPopChoice(d_8);
            }
          else
            {
              t = b_8;
              t = p_2;
              h_1 = t;
              t = SSLgetAnnotations(o_2);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_2;
            }
        }
      }
  }
  t = term_j_8;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_1);
  m_1 = t;
  t = term_k_8;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, (ATerm)ATmakeAppl(sym_Var_1, h_1), term_k_8);
  t = e_5(l_1, m_1, p_1, t);
  t = o_2;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm u_2 = NULL,y_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_2);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_8 = ATgetFirst((ATermList) t);
      ATerm n_8 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(n_8) != AT_LIST) || !(ATisEmpty(n_8))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, y_2);
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
ATerm elim_guardedlchoice_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,s_1 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm r_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    ATerm l_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,x_3 = NULL,y_3 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL,w_1 = NULL,u_1 = NULL;
    f_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        s_3 = ATgetArgument(t, 0);
        x_3 = ATgetArgument(t, 1);
        y_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_4);
    r_3 = t;
    t = x_3;
    t = s_110(t);
    c_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_3, c_4, y_3);
    u_1 = t;
    t = SSLsetAnnotations(u_1, r_3);
    e_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        n_3 = ATgetArgument(t, 0);
        o_3 = ATgetArgument(t, 1);
        p_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_4);
    l_3 = t;
    t = n_3;
    t = s_110(t);
    q_3 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, q_3, o_3, p_3);
    w_1 = t;
    t = SSLsetAnnotations(w_1, l_3);
    return(t);
  }
  static ATerm r_0 (ATerm t)
  {
    ATerm g_4 = NULL,j_4 = NULL,k_4 = NULL,t_4 = NULL,u_4 = NULL,z_4 = NULL,x_1 = NULL;
    z_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        j_4 = ATgetArgument(t, 0);
        k_4 = ATgetArgument(t, 1);
        t_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_4);
    g_4 = t;
    t = t_4;
    t = s_110(t);
    u_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_4, k_4, u_4);
    x_1 = t;
    t = SSLsetAnnotations(x_1, g_4);
    return(t);
  }
  k_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      f_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
      j_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_3, h_3, j_3);
  s_1 = t;
  t = SSLsetAnnotations(s_1, e_3);
  t = elim_abstract_choice_2_0(n_0, r_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  ATerm a_5 = NULL,f_5 = NULL,h_5 = NULL,f_6 = NULL,d_2 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm t_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm p_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,f_2 = NULL;
    u_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        r_6 = ATgetArgument(t, 0);
        s_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_6);
    p_6 = t;
    t = r_6;
    t = r_110(t);
    t_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_6, s_6);
    f_2 = t;
    t = SSLsetAnnotations(f_2, p_6);
    return(t);
  }
  static ATerm t_0 (ATerm t)
  {
    ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,l_2 = NULL;
    z_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        w_6 = ATgetArgument(t, 0);
        x_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_6);
    v_6 = t;
    t = x_6;
    t = r_110(t);
    y_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, w_6, y_6);
    l_2 = t;
    t = SSLsetAnnotations(l_2, v_6);
    return(t);
  }
  f_6 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      f_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_6);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, f_5, h_5);
  d_2 = t;
  t = SSLsetAnnotations(d_2, a_5);
  t = elim_abstract_choice_2_0(s_0, t_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,l_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
      t = h_8;
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_8 = ATgetFirst((ATermList) t);
                {
                  ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_8);
            t = i_8;
            {
              ATerm r_8 = t;
              int t_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm u_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_8);
                  t = g_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = l_8;
                    }
                  else
                    {
                      ATerm v_8 = t;
                      int w_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_8(g_8, l_8, t);
                          LocalPopChoice(w_8);
                        }
                      else
                        {
                          t = v_8;
                          t = l_8;
                        }
                    }
                }
              else
                {
                  t = r_8;
                  t = g_8;
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
            t = o_8;
            t = g_8;
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
static ATerm y_8 (ATerm q_7, ATerm r_7, ATerm t)
{
  t = r_7;
  {
    ATerm x_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = term_j_8;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_8, q_7);
        t = z_5(t_1, q_7, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_9 = ATgetFirst((ATermList) t);
            if(match_cons(b_9, sym_Defined_1))
              {
                ATerm i_9 = ATgetArgument(b_9, 0);
              }
            else
              _fail(t);
            {
              ATerm g_9 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = r_7;
        LocalPopChoice(z_8);
      }
    else
      {
        t = x_8;
        t = (ATerm) ATmakeAppl(sym__2, q_7, (ATerm) ATinsert(ATempty, term_k_8));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  t = map_1_0(u_0, t);
  o_7 = t;
  t = term_j_8;
  t = table_destroy_0_0(t);
  t = term_j_8;
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_8, o_7);
  t = c_5(p_7, o_7, t);
  t = o_7;
  return(t);
}
static ATerm c_5 (ATerm u_43, ATerm t_43, ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    ATerm d_9 = NULL,f_9 = NULL,h_9 = NULL;
    if(match_cons(t, sym__2))
      {
        d_9 = ATgetArgument(t, 0);
        f_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_43, d_9, f_9);
    t = lookup_table_0_1(u_43, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        h_9 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = d_6(d_9, f_9, h_9, t);
    t = (ATerm) ATmakeAppl(sym__3, u_43, d_9, f_9);
    return(t);
  }
  t = t_43;
  t = map_1_0(v_0, t);
  return(t);
}
static ATerm d_5 (ATerm j_47, ATerm t)
{
  t = SSL_hashtable_keys(j_47);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  static ATerm w_0 (ATerm t);
  static ATerm w_0 (ATerm t)
  {
    ATerm l_9 = NULL,m_9 = NULL;
    l_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_9), l_9);
    t = z_5(not_null(j_9), l_9, t);
    m_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_9, m_9);
    return(t);
  }
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  t = lookup_table_0_1(j_9, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(k_9, t);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_j_8;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,r_9 = NULL,u_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  y_9 = t;
  t = save_ElimVar_0_0(t);
  n_9 = t;
  t = y_9;
  t = t_110(t);
  x_9 = t;
  t = save_ElimVar_0_0(t);
  r_9 = t;
  t = term_j_8;
  t = table_destroy_0_0(t);
  t = term_j_8;
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_8, n_9);
  t = c_5(z_9, n_9, t);
  t = x_9;
  t = u_110(t);
  u_9 = t;
  t = r_9;
  t = isect_ElimVar_0_0(t);
  t = u_9;
  return(t);
}
ATerm elim_choice_1_0 (ATerm q_110 (ATerm), ATerm t)
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
    t = q_110(t);
    k_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, k_10, g_10);
    d_3 = t;
    t = SSLsetAnnotations(d_3, e_10);
    return(t);
  }
  static ATerm y_0 (ATerm t)
  {
    ATerm n_10 = NULL,s_10 = NULL,u_10 = NULL,y_10 = NULL,b_11 = NULL,g_3 = NULL;
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
    t = q_110(t);
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, s_10, y_10);
    g_3 = t;
    t = SSLsetAnnotations(g_3, n_10);
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
static ATerm e_5 (ATerm e_43, ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_43, f_43);
  t = z_5(e_43, f_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_9 = ATgetFirst((ATermList) t);
      c_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_43, f_43, (ATerm) ATinsert(CheckATermList(c_11), g_43));
  t = lookup_table_0_1(e_43, t);
  g_11 = t;
  t = (ATerm) ATinsert(CheckATermList(c_11), g_43);
  e_11 = t;
  t = g_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(f_43, e_11, f_11, t);
  t = d_11;
  return(t);
}
ATerm alltd_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  static ATerm h_11 (ATerm t);
  static ATerm h_11 (ATerm t)
  {
    ATerm w_9 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_114(t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = w_9;
        t = SRTS_all(h_11, t);
      }
    return(t);
  }
  t = h_11(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,q_12 = NULL,r_12 = NULL;
  r_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_12 = ATgetFirst((ATermList) t);
      q_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,m_2 = NULL,r_2 = NULL,s_2 = NULL,v_3 = NULL,u_3 = NULL;
        t = SSLgetAnnotations(r_12);
        m_2 = t;
        t = q_12;
        t = reverse_map_1_0(p_130, t);
        r_2 = t;
        t = (ATerm) ATinsert(CheckATermList(r_2), m_12);
        u_3 = t;
        t = SSLsetAnnotations(u_3, m_2);
        s_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_2 = ATgetFirst((ATermList) t);
            j_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_2);
        h_2 = t;
        t = i_2;
        t = p_130(t);
        k_2 = t;
        t = (ATerm) ATinsert(CheckATermList(j_2), k_2);
        v_3 = t;
        t = SSLsetAnnotations(v_3, h_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_12;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_13 = ATgetArgument(t, 0);
      {
        ATerm i_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, l_13);
  m_13 = t;
  t = term_k_8;
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, l_13), term_k_8);
  t = j_5(g_1, m_13, n_13, t);
  t = k_13;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm g_5 (ATerm x_110 (ATerm), ATerm t)
{
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    ATerm t_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,d_13 = NULL,g_13 = NULL,h_13 = NULL,a_4 = NULL;
    h_13 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        v_12 = ATgetArgument(t, 0);
        w_12 = ATgetArgument(t, 1);
        x_12 = ATgetArgument(t, 2);
        y_12 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_13);
    t_12 = t;
    t = x_12;
    t = map_1_0(c_1, t);
    d_13 = t;
    t = y_12;
    t = x_110(t);
    g_13 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, v_12, w_12, d_13, g_13);
    a_4 = t;
    t = SSLsetAnnotations(a_4, t_12);
    return(t);
  }
  t = scope_2_0(a_1, b_1, t);
  return(t);
}
static ATerm i_5 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm o_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_43, d_43);
  t = z_5(c_43, d_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_13 = ATgetFirst((ATermList) t);
      {
        ATerm j_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_13;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm m_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL;
        t = term_j_8;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_8, q_14);
        t = i_5(n_4, q_14, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = q_14;
        _fail(t);
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        {
          ATerm r_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL;
              t = term_j_8;
              w_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_8, q_14);
              t = i_5(w_4, q_14, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = q_14;
              _fail(t);
              LocalPopChoice(t_10);
            }
          else
            {
              t = r_10;
              {
                ATerm v_10 = t;
                int z_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_6 = NULL;
                    t = term_j_8;
                    b_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_j_8, q_14);
                    t = i_5(b_6, q_14, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = q_14;
                    _fail(t);
                    LocalPopChoice(z_10);
                  }
                else
                  {
                    t = v_10;
                    {
                      ATerm l_6 = NULL;
                      t = term_j_8;
                      l_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_j_8, q_14);
                      t = i_5(l_6, q_14, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm m_11 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) m_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_n_11;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm l_137 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
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
          l_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_7 = NULL,d_7 = NULL,e_7 = NULL,o_4 = NULL;
            t = SSLgetAnnotations(j_16);
            a_7 = t;
            t = k_16;
            t = l_137(t);
            d_7 = t;
            t = l_16;
            t = filter_1_0(l_137, t);
            e_7 = t;
            t = (ATerm) ATinsert(CheckATermList(e_7), d_7);
            o_4 = t;
            t = SSLsetAnnotations(o_4, a_7);
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            t = l_16;
            t = filter_1_0(l_137, t);
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm e_125 (ATerm), ATerm n_41, ATerm l_41, ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL,r_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  a_17 = t;
  t = e_125(t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_16, n_41, l_41);
  t = a_6(o_16, n_41, l_41, t);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL;
        t = term_s_11;
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, term_s_11);
        t = z_5(o_16, f_17, t);
        {
          ATerm d_12 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_12;
            }
        }
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_16 = ATgetFirst((ATermList) t);
      r_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_16, term_s_11, (ATerm) ATinsert(CheckATermList(r_16), (ATerm) ATinsert(CheckATermList(q_16), n_41)));
  t = lookup_table_0_1(o_16, t);
  e_17 = t;
  t = term_s_11;
  b_17 = t;
  t = (ATerm) ATinsert(CheckATermList(r_16), (ATerm) ATinsert(CheckATermList(q_16), n_41));
  c_17 = t;
  t = e_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(b_17, c_17, d_17, t);
  t = a_17;
  return(t);
}
static ATerm k_5 (ATerm w_42, ATerm x_42, ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  h_17 = t;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
        t = z_5(w_42, x_42, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_12 = ATgetFirst((ATermList) t);
            g_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_12);
        {
          ATerm j_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_42, x_42, g_17);
          t = lookup_table_0_1(w_42, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_6(x_42, g_17, j_17, t);
          t = (ATerm) ATmakeAppl(sym__3, w_42, x_42, g_17);
        }
      }
    else
      {
        t = e_12;
        {
          ATerm t_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
          t = lookup_table_0_1(w_42, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_5(x_42, t_17, t);
          t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
        }
      }
  }
  t = h_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,c_18 = NULL;
  y_17 = t;
  t = b_125(t);
  x_17 = t;
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        t = term_s_11;
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_17, term_s_11);
        t = z_5(x_17, d_18, t);
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
  t = (ATerm) ATmakeAppl(sym__3, x_17, term_s_11, v_17);
  t = lookup_table_0_1(x_17, t);
  c_18 = t;
  t = term_s_11;
  z_17 = t;
  t = c_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(z_17, v_17, a_18, t);
  t = w_17;
  {
    static ATerm i_1 (ATerm t);
    static ATerm i_1 (ATerm t)
    {
      ATerm j_18 = NULL;
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, j_18);
      t = k_5(x_17, j_18, t);
      return(t);
    }
    t = map_1_0(i_1, t);
  }
  t = y_17;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_116(t);
      t = o_116(t);
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      t = o_116(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,u_18 = NULL,v_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  r_18 = t;
  t = a_125(t);
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_18, term_s_11);
  {
    ATerm n_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_12 = ATgetArgument(t, 0);
            ATerm z_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_11;
        h_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_18, term_s_11);
        t = z_5(q_18, h_19, t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = n_12;
        t = (ATerm) ATempty;
      }
  }
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_18, term_s_11, (ATerm) ATinsert(CheckATermList(u_18), (ATerm) ATempty));
  t = lookup_table_0_1(q_18, t);
  z_18 = t;
  t = term_s_11;
  v_18 = t;
  t = (ATerm) ATinsert(CheckATermList(u_18), (ATerm) ATempty);
  x_18 = t;
  t = z_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(v_18, x_18, y_18, t);
  t = r_18;
  return(t);
}
ATerm scope_2_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    t = end_scope_1_0(c_125, t);
    return(t);
  }
  t = begin_scope_1_0(c_125, t);
  t = restore_always_2_0(d_125, j_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_25);
  x_25 = t;
  t = term_b_13;
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_25), term_b_13);
  t = j_5(q_1, x_25, y_25, t);
  t = w_25;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm c_13 = t;
  if((PushChoice() == 0))
    {
      ATerm z_25 = NULL;
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_25);
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
static ATerm v_1 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  u_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_j_8;
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_7);
  z_7 = t;
  t = term_k_8;
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, (ATerm)ATmakeAppl(sym_Var_1, v_7), term_k_8);
  t = e_5(y_7, z_7, a_8, t);
  t = u_7;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = alltd_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,s_9 = NULL,t_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_j_8;
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_9);
  s_9 = t;
  t = term_k_8;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, (ATerm)ATmakeAppl(sym_Var_1, p_9), term_k_8);
  t = e_5(q_9, s_9, t_9, t);
  t = o_9;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = alltd_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm a_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_j_8;
  j_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_11);
  k_11 = t;
  t = term_k_8;
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, (ATerm)ATmakeAppl(sym_Var_1, i_11), term_k_8);
  t = e_5(j_11, k_11, l_11, t);
  t = a_11;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm a_14 = NULL,c_14 = NULL,h_14 = NULL,j_14 = NULL,a_12 = NULL;
  j_14 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_14);
  a_14 = t;
  t = c_14;
  t = map_1_0(dead_var_elim_0_0, t);
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_14);
  a_12 = t;
  t = SSLsetAnnotations(a_12, a_14);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm e_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm m_27 (ATerm t);
      static ATerm m_27 (ATerm t)
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
            b_25 = t;
            {
              ATerm z_13 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      ATerm e_14 = ATgetArgument(t, 0);
                      ATerm g_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_14);
                  {
                    static ATerm n_1 (ATerm t);
                    static ATerm n_1 (ATerm t)
                    {
                      ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,l_25 = NULL,m_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,m_6 = NULL,g_6 = NULL;
                      v_25 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          p_25 = ATgetArgument(t, 0);
                          q_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(v_25);
                      m_25 = t;
                      t = p_25;
                      t = map_1_0(o_1, t);
                      r_25 = t;
                      t = q_25;
                      t = m_27(t);
                      t_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, r_25, t_25);
                      g_6 = t;
                      t = SSLsetAnnotations(g_6, m_25);
                      u_25 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          h_25 = ATgetArgument(t, 0);
                          i_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_25);
                      g_25 = t;
                      t = h_25;
                      t = filter_1_0(r_1, t);
                      l_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, l_25, i_25);
                      m_6 = t;
                      t = SSLsetAnnotations(m_6, g_25);
                      return(t);
                    }
                    t = b_25;
                    t = scope_2_0(k_1, n_1, t);
                  }
                }
              else
                {
                  t = z_13;
                  {
                    ATerm k_14 = t;
                    int l_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm n_14 = ATgetArgument(t, 0);
                            ATerm p_14 = ATgetArgument(t, 1);
                            ATerm r_14 = ATgetArgument(t, 2);
                            ATerm t_14 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_14);
                        t = b_25;
                        t = g_5(m_27, t);
                      }
                    else
                      {
                        t = k_14;
                        if(match_cons(t, sym_Build_1))
                          {
                            c_25 = ATgetArgument(t, 0);
                            {
                              ATerm l_7 = NULL,n_7 = NULL,w_7 = NULL;
                              t = SSLgetAnnotations(b_25);
                              l_7 = t;
                              t = c_25;
                              t = alltd_1_0(v_1, t);
                              n_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, n_7);
                              w_7 = t;
                              t = SSLsetAnnotations(w_7, l_7);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                c_25 = ATgetArgument(t, 0);
                                d_25 = ATgetArgument(t, 1);
                                a_25 = ATgetArgument(t, 2);
                                {
                                  ATerm s_8 = NULL,c_9 = NULL,e_9 = NULL,x_7 = NULL;
                                  t = SSLgetAnnotations(b_25);
                                  s_8 = t;
                                  t = d_25;
                                  t = reverse_map_1_0(m_27, t);
                                  c_9 = t;
                                  t = a_25;
                                  t = reverse_map_1_0(y_1, t);
                                  e_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_25, c_9, e_9);
                                  x_7 = t;
                                  t = SSLsetAnnotations(x_7, s_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    c_25 = ATgetArgument(t, 0);
                                    d_25 = ATgetArgument(t, 1);
                                    a_25 = ATgetArgument(t, 2);
                                    {
                                      ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL,c_8 = NULL;
                                      t = SSLgetAnnotations(b_25);
                                      q_10 = t;
                                      t = d_25;
                                      t = reverse_map_1_0(m_27, t);
                                      w_10 = t;
                                      t = a_25;
                                      t = reverse_map_1_0(a_2, t);
                                      x_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, c_25, w_10, x_10);
                                      c_8 = t;
                                      t = SSLsetAnnotations(c_8, q_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,y_11 = NULL,z_11 = NULL,o_12 = NULL,p_12 = NULL,w_11 = NULL,a_9 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        c_25 = ATgetArgument(t, 0);
                                        d_25 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(b_25);
                                    z_11 = t;
                                    t = d_25;
                                    t = m_27(t);
                                    o_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_25, o_12);
                                    a_9 = t;
                                    t = SSLsetAnnotations(a_9, z_11);
                                    p_12 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        u_11 = ATgetArgument(t, 0);
                                        v_11 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(p_12);
                                    t_11 = t;
                                    t = u_11;
                                    t = m_27(t);
                                    y_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, v_11);
                                    w_11 = t;
                                    t = SSLsetAnnotations(w_11, t_11);
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
            t = p_13;
            {
              ATerm u_14 = t;
              int v_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(m_27, t);
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
                        t = elim_lchoice_1_0(m_27, t);
                        LocalPopChoice(x_14);
                      }
                    else
                      {
                        t = w_14;
                        {
                          ATerm y_14 = t;
                          int z_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(m_27, t);
                              LocalPopChoice(z_14);
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
                                    t = all_rl_1_0(m_27, t);
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
      t = m_27(t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = e_13;
      {
        ATerm f_27 = NULL,g_27 = NULL,f_13 = NULL,j_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,c_12 = NULL,b_12 = NULL,x_11 = NULL;
        f_27 = t;
        if(match_cons(t, sym_Specification_1))
          {
            g_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_27);
        f_13 = t;
        t = g_27;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_13 = ATgetFirst((ATermList) t);
            s_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_27);
        j_13 = t;
        t = r_13;
        if(match_cons(t, sym_Signature_1))
          {
            w_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_13);
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, w_13);
        x_11 = t;
        t = SSLsetAnnotations(x_11, v_13);
        x_13 = t;
        t = s_13;
        t = Cons_2_0(c_2, e_2, t);
        t_13 = t;
        t = (ATerm) ATinsert(CheckATermList(t_13), x_13);
        b_12 = t;
        t = SSLsetAnnotations(b_12, j_13);
        u_13 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, u_13);
        c_12 = t;
        t = SSLsetAnnotations(c_12, f_13);
      }
    }
  return(t);
}
static ATerm m_5 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm y_27 = NULL;
  t = SSL_fputc(e_33, f_33);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_27);
  return(t);
}
static ATerm n_5 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm z_27 = NULL;
  t = SSL_write_term_to_stream_text(k_31, l_31);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_27);
  return(t);
}
static ATerm p_5 (ATerm r_120 (ATerm), ATerm a_246, ATerm q_31, ATerm t)
{
  ATerm a_28 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_246, term_d_15);
  t = t_5(t);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_28, q_31);
  t = r_120(t);
  t = fclose_0_0(t);
  t = q_31;
  return(t);
}
static ATerm o_5 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm d_28 = NULL;
  t = SSL_write_term_to_stream_baf(g_31, h_31);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_28);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      if(match_cons(g_15, sym_Stream_1))
        {
          p_28 = ATgetArgument(g_15, 0);
        }
      else
        _fail(t);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(p_28, q_28, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,v_28 = NULL,y_28 = NULL,z_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if(match_cons(h_15, sym_Stream_1))
        {
          y_28 = ATgetArgument(h_15, 0);
        }
      else
        _fail(t);
      z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(y_28, z_28, t);
  r_28 = t;
  t = term_i_15;
  s_28 = t;
  t = r_28;
  if(match_cons(t, sym_Stream_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_15, r_28);
  t = m_5(s_28, v_28, t);
  return(t);
}
ATerm output_1_0 (ATerm a_146 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  t = a_146(t);
  f_28 = t;
  {
    ATerm j_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_28 = NULL,h_28 = NULL;
        t = term_m_15;
        g_28 = t;
        t = term_o_15;
        h_28 = t;
        t = term_p_15;
        t = z_5(g_28, h_28, t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = j_15;
        t = term_s_15;
      }
  }
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, f_28);
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL,o_28 = NULL;
        t = term_m_15;
        k_28 = t;
        t = term_v_15;
        o_28 = t;
        t = term_z_15;
        t = z_5(k_28, o_28, t);
        t = (ATerm) ATmakeAppl(sym__2, e_28, f_28);
        LocalPopChoice(u_15);
        if(match_cons(t, sym__2))
          {
            ATerm a_16 = ATgetArgument(t, 0);
            ATerm b_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_5(g_2, e_28, f_28, t);
      }
    else
      {
        t = t_15;
        if(match_cons(t, sym__2))
          {
            ATerm d_16 = ATgetArgument(t, 0);
            ATerm e_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_5(n_2, e_28, f_28, t);
      }
  }
  return(t);
}
static ATerm x_29 (ATerm l_29, ATerm t)
{
  t = SSL_fclose(l_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_29 = ATgetArgument(t, 0);
      {
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_29);
            LocalPopChoice(h_16);
          }
        else
          {
            t = g_16;
            t = x_29(u_29, t);
          }
      }
    }
  else
    {
      t = x_29(u_29, t);
    }
  return(t);
}
static ATerm q_5 (ATerm m_31, ATerm t)
{
  t = SSL_read_term_from_stream(m_31);
  return(t);
}
static ATerm r_5 (ATerm x_75, ATerm y_75, ATerm t)
{
  t = SSL_strcat(x_75, y_75);
  return(t);
}
static ATerm s_5 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm y_29 = NULL;
  t = SSL_fopen(g_33, h_33);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_29 = NULL;
  t = SSL_stdin_stream();
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_30 = NULL;
  t = SSL_stdout_stream();
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_30 = NULL;
  t = SSL_stderr_stream();
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_30);
  return(t);
}
static ATerm b_33 (ATerm v_30, ATerm t)
{
  ATerm x_30 = NULL;
  t = SSL_explode_term(v_30);
  if(match_cons(t, sym__2))
    {
      ATerm i_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_16 = ATgetArgument(t, 1);
        if(((ATgetType(m_16) == AT_LIST) && !(ATisEmpty(m_16))))
          {
            x_30 = ATgetFirst((ATermList) m_16);
            {
              ATerm n_16 = (ATerm) ATgetNext((ATermList) m_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_30;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_30;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_30;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_30;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_33 (ATerm c_31, ATerm d_31, ATerm f_31, ATerm t)
{
  ATerm n_31 = NULL,r_31 = NULL,s_31 = NULL,y_31 = NULL,y_13 = NULL;
  t = SSLgetAnnotations(f_31);
  s_31 = t;
  t = c_31;
  if(match_cons(t, sym_Path_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_31, d_31);
  y_13 = t;
  t = SSLsetAnnotations(y_13, s_31);
  if(match_cons(t, sym__2))
    {
      n_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(n_31, r_31, t);
  return(t);
}
static ATerm d_33 (ATerm b_32, ATerm c_32, ATerm d_32, ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,i_32 = NULL,m_32 = NULL,b_14 = NULL;
  t = SSLgetAnnotations(d_32);
  i_32 = t;
  t = SSL_is_string(b_32);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_32, c_32);
  b_14 = t;
  t = SSLsetAnnotations(b_14, i_32);
  if(match_cons(t, sym__2))
    {
      e_32 = ATgetArgument(t, 0);
      f_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(e_32, f_32, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm t_32 = NULL,x_32 = NULL,a_33 = NULL;
  t_32 = t;
  if(match_cons(t, sym__2))
    {
      x_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
      {
        ATerm p_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_33(t_32, t);
            LocalPopChoice(s_16);
          }
        else
          {
            t = p_16;
            {
              ATerm t_16 = t;
              int u_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_33(x_32, a_33, t_32, t);
                  LocalPopChoice(u_16);
                }
              else
                {
                  t = t_16;
                  t = d_33(x_32, a_33, t_32, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_33(t_32, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,f_34 = NULL;
  f_34 = t;
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_34, term_x_16);
        t = t_5(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
          ATerm e_15 = NULL,f_15 = NULL;
          t = term_y_16;
          f_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_16, f_34);
          t = r_5(f_15, f_34, t);
          e_15 = t;
          t = SSL_perror(e_15);
          _fail(t);
        }
      }
  }
  s_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(t_33, t);
  r_33 = t;
  t = s_33;
  t = fclose_0_0(t);
  t = r_33;
  return(t);
}
ATerm input_1_0 (ATerm b_146 (ATerm), ATerm t)
{
  ATerm z_16 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_34 = NULL,l_34 = NULL;
      t = term_m_15;
      i_34 = t;
      t = term_l_17;
      l_34 = t;
      t = term_m_17;
      t = z_5(i_34, l_34, t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = z_16;
      t = term_n_17;
    }
  t = ReadFromFile_0_0(t);
  t = b_146(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  t = term_m_15;
  n_34 = t;
  t = term_o_17;
  o_34 = t;
  t = term_q_17;
  t = z_5(n_34, o_34, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_17 = ATgetFirst((ATermList) t);
                ATerm b_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_34;
          }
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = (ATerm) ATinsert(ATempty, q_34);
      }
  }
  r_34 = t;
  t = term_s_15;
  s_34 = t;
  t = SSL_printnl(s_34, r_34);
  t = q_34;
  return(t);
}
ATerm map_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  static ATerm k_35 (ATerm t);
  static ATerm k_35 (ATerm t)
  {
    ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
    h_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_35;
      }
    else
      {
        ATerm n_15 = NULL,q_15 = NULL,r_15 = NULL,f_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_35 = ATgetFirst((ATermList) t);
            j_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_35);
        n_15 = t;
        t = i_35;
        t = m_130(t);
        q_15 = t;
        t = j_35;
        t = k_35(t);
        r_15 = t;
        t = (ATerm) ATinsert(CheckATermList(r_15), q_15);
        f_14 = t;
        t = SSLsetAnnotations(f_14, n_15);
      }
    return(t);
  }
  t = k_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_35 = ATgetFirst((ATermList) t);
      o_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_35 = NULL,t_35 = NULL;
        static ATerm q_2 (ATerm t);
        static ATerm q_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_35)), not_null(t_35));
          return(t);
        }
        t = o_35;
        t = o_0(t);
        if(((s_35 != NULL) && (s_35 != t)))
          _fail(t);
        else
          s_35 = t;
        t = n_35;
        t = m_0(t);
        if(((t_35 != NULL) && (t_35 != t)))
          _fail(t);
        else
          t_35 = t;
        t = o_35;
        t = reverse_acc_2_0(m_0, q_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_18;
      t = o_0(t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,i_14 = NULL;
  d_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_36);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_36);
  i_14 = t;
  t = SSLsetAnnotations(i_14, b_36);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_36), term_g_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm z_147 (ATerm), ATerm a_148 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  ATerm i_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_35 = NULL,a_36 = NULL;
      t = term_m_15;
      z_35 = t;
      t = term_o_17;
      a_36 = t;
      t = term_q_17;
      t = z_5(z_35, a_36, t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = i_18;
      t = fetch_1_0(t_2, t);
    }
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_147(t);
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
  x_35 = t;
  t = term_p_18;
  y_35 = t;
  t = term_t_18;
  t = z_5(x_35, y_35, t);
  t = reverse_acc_2_0(_id, v_2, t);
  t = map_1_0(w_2, t);
  {
    ATerm w_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_36 = NULL;
        t = a_148(t);
        i_36 = t;
        t = (ATerm) ATinsert(CheckATermList(i_36), term_c_19);
        t = echo_0_0(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = w_18;
      }
  }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,m_14 = NULL;
  q_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_36);
  m_14 = t;
  t = SSLsetAnnotations(m_14, o_36);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL,n_36 = NULL;
        t = term_m_15;
        m_36 = t;
        t = term_o_17;
        n_36 = t;
        t = term_q_17;
        t = z_5(m_36, n_36, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = fetch_1_0(x_2, t);
      }
  }
  t = l_36;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  if(match_string(t, "-k"))
    {
      t = s_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_36;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  t = SSL_string_to_int(t_36);
  u_36 = t;
  t = term_f_19;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, u_36);
  t = c_6(v_36, u_36, t);
  t = t_36;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  if(match_string(t, "-S"))
    {
      t = x_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_36;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  t = term_i_19;
  y_36 = t;
  t = term_j_19;
  z_36 = t;
  t = term_k_19;
  t = c_6(y_36, z_36, t);
  t = term_o_19;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_p_19;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  t = SSL_string_to_int(c_37);
  d_37 = t;
  t = term_i_19;
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, d_37);
  t = c_6(e_37, d_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_37);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_q_19;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL;
  t = term_u_19;
  f_37 = t;
  t = term_f_18;
  g_37 = t;
  t = term_v_19;
  t = c_6(f_37, g_37, t);
  t = term_w_19;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, m_3, t_3, t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, z_3, b_4, t);
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            t = Option_3_0(d_4, h_4, i_4, t);
          }
      }
    }
  return(t);
}
static ATerm c_6 (ATerm a_37, ATerm b_37, ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL;
  t = term_m_15;
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_15, a_37, b_37);
  t = lookup_table_0_1(h_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(a_37, b_37, i_37, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_15, a_37, b_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
      t = term_f_18;
      t = f_0(t);
      o_37 = t;
      t = term_o_18;
      p_37 = t;
      t = term_p_18;
      q_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, o_37);
      t = a_6(p_37, q_37, o_37, t);
      _fail(t);
    }
  else
    {
      ATerm t_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          n_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_37;
      t = d_0(t);
      t = term_f_18;
      t = e_0(t);
      t_37 = t;
      t = (ATerm) ATinsert(CheckATermList(n_37), t_37);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  if(match_string(t, "-o"))
    {
      t = v_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_37;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  w_37 = t;
  t = term_o_15;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_15, w_37);
  t = c_6(x_37, w_37, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_37);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, p_4, t);
  return(t);
}
static ATerm a_6 (ATerm r_42, ATerm s_42, ATerm q_42, ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_42, s_42);
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            ATerm g_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_42, s_42);
        t = z_5(r_42, s_42, t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = (ATerm) ATempty;
      }
  }
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_42, s_42, (ATerm) ATinsert(CheckATermList(a_38), q_42));
  t = lookup_table_0_1(r_42, t);
  d_38 = t;
  t = (ATerm) ATinsert(CheckATermList(a_38), q_42);
  b_38 = t;
  t = d_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(s_42, b_38, c_38, t);
  t = z_37;
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
      t = term_f_18;
      t = k_0(t);
      o_38 = t;
      t = term_o_18;
      p_38 = t;
      t = term_p_18;
      q_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, o_38);
      t = a_6(p_38, q_38, o_38, t);
      _fail(t);
    }
  else
    {
      ATerm u_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_38 = ATgetFirst((ATermList) t);
          l_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_38 = ATgetFirst((ATermList) t);
          n_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_38;
      t = g_0(t);
      t = m_38;
      t = h_0(t);
      u_38 = t;
      t = (ATerm) ATinsert(CheckATermList(n_38), u_38);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  if(match_string(t, "-i"))
    {
      t = w_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_38;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  x_38 = t;
  t = term_l_17;
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, x_38);
  t = c_6(y_38, x_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_38);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_18;
  t = whoami_0_0(t);
  z_38 = t;
  t = term_i_20;
  b_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_20), z_38);
  c_39 = t;
  t = SSL_printnl(b_39, c_39);
  t = term_k_20;
  a_39 = t;
  t = SSL_exit(a_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  t = term_m_15;
  d_39 = t;
  t = term_o_17;
  e_39 = t;
  t = term_q_17;
  t = z_5(d_39, e_39, t);
  return(t);
}
static ATerm u_5 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_39, a_40);
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      t = SSL_addr(z_39, a_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_39;
      t = h_136(t);
    }
  else
    {
      ATerm l_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_39 = ATgetFirst((ATermList) t);
          i_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_39;
      t = foldr_2_0(h_136, i_136, t);
      l_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_39, l_39);
      t = i_136(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_j_19;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm c_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(c_16, f_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_39 = NULL,w_15 = NULL,y_15 = NULL;
  t = times_0_0(t);
  y_15 = t;
  t = SSL_explode_term(y_15);
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15;
  t = foldr_2_0(v_4, x_4, t);
  o_39 = t;
  t = SSL_TicksToSeconds(o_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
  b_40 = t;
  if(match_cons(t, sym__2))
    {
      c_40 = ATgetArgument(t, 0);
      d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_40;
        if((c_40 != t))
          {
            _fail(t);
          }
        t = b_40;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
        {
          ATerm q_20 = t;
          int r_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_40, d_40);
              LocalPopChoice(r_20);
            }
          else
            {
              t = q_20;
              t = SSL_gtr(c_40, d_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
        t = term_m_15;
        k_40 = t;
        t = term_i_19;
        l_40 = t;
        t = term_u_20;
        t = z_5(k_40, l_40, t);
        j_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_40, term_k_20);
        t = geq_0_0(t);
        t = h_40;
        t = i_122(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = h_40;
      }
  }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,q_40 = NULL,r_40 = NULL;
  t = run_time_0_0(t);
  n_40 = t;
  t = term_f_18;
  t = whoami_0_0(t);
  o_40 = t;
  t = term_i_20;
  q_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_20), n_40), term_v_20), o_40);
  r_40 = t;
  t = SSL_printnl(q_40, r_40);
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_20), n_40), term_v_20), o_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_19;
  s_40 = t;
  t = SSL_exit(s_40);
  return(t);
}
static ATerm d_6 (ATerm c_47, ATerm d_47, ATerm e_47, ATerm t)
{
  ATerm t_40 = NULL;
  t = SSL_hashtable_put(e_47, c_47, d_47);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_44, ATerm t)
{
  ATerm c_41 = NULL;
  t = table_hashtable_0_0(t);
  c_41 = t;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL;
        t = c_41;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_6(d_44, i_17, t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        {
          ATerm p_17 = NULL;
          t = d_44;
          t = table_create_0_0(t);
          t = c_41;
          if(match_cons(t, sym_Hashtable_1))
            {
              p_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_6(d_44, p_17, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm q_41 = NULL;
  t = SSL_hashtable_create(k_47, l_47);
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,u_41 = NULL,w_41 = NULL,x_41 = NULL;
  r_41 = t;
  t = term_z_20;
  w_41 = t;
  t = term_a_21;
  x_41 = t;
  t = r_41;
  t = new_hashtable_0_2(w_41, x_41, t);
  s_41 = t;
  t = r_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(r_41, s_41, u_41, t);
  t = r_41;
  return(t);
}
static ATerm w_5 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm y_41 = NULL;
  t = SSL_hashtable_remove(i_47, h_47);
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_41);
  return(t);
}
static ATerm x_5 (ATerm m_47, ATerm t)
{
  ATerm z_41 = NULL;
  t = SSL_hashtable_destroy(m_47);
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_42 = NULL;
  t = SSL_table_hashtable();
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_42);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  b_42 = t;
  t = table_hashtable_0_0(t);
  c_42 = t;
  t = lookup_table_0_1(b_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(e_42, t);
  t = c_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(b_42, d_42, t);
  t = b_42;
  return(t);
}
ATerm fetch_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  static ATerm n_43 (ATerm t);
  static ATerm n_43 (ATerm t)
  {
    ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
    k_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_43 = ATgetFirst((ATermList) t);
        m_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_21 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_18 = NULL,h_18 = NULL,o_14 = NULL;
          t = SSLgetAnnotations(k_43);
          e_18 = t;
          t = l_43;
          t = u_130(t);
          h_18 = t;
          t = (ATerm) ATinsert(CheckATermList(m_43), h_18);
          o_14 = t;
          t = SSLsetAnnotations(o_14, e_18);
          LocalPopChoice(c_21);
        }
      else
        {
          t = b_21;
          {
            ATerm s_18 = NULL,b_19 = NULL,s_14 = NULL;
            t = SSLgetAnnotations(k_43);
            s_18 = t;
            t = m_43;
            t = n_43(t);
            b_19 = t;
            t = (ATerm) ATinsert(CheckATermList(b_19), l_43);
            s_14 = t;
            t = SSLsetAnnotations(s_14, s_18);
          }
        }
    }
    return(t);
  }
  t = n_43(t);
  return(t);
}
static ATerm e_6 (ATerm f_47, ATerm g_47, ATerm t)
{
  t = SSL_hashtable_get(g_47, f_47);
  return(t);
}
static ATerm z_5 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm q_43 = NULL;
  t = lookup_table_0_1(k_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(l_44, q_43, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  t = term_d_21;
  y_43 = t;
  t = term_f_18;
  z_43 = t;
  t = term_e_21;
  t = c_6(y_43, z_43, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_f_21;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,h_44 = NULL;
  t = term_d_21;
  c_44 = t;
  t = term_f_18;
  h_44 = t;
  t = term_e_21;
  t = c_6(c_44, h_44, t);
  t = term_g_21;
  a_44 = t;
  t = term_f_18;
  b_44 = t;
  t = term_h_21;
  t = c_6(a_44, b_44, t);
  t = term_i_21;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_5, l_5, v_5, t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      t = Option_3_0(y_5, h_6, i_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,a_15 = NULL;
  p_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_44 = ATgetFirst((ATermList) t);
      m_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_44);
  i_44 = t;
  t = j_44;
  t = b_98(t);
  n_44 = t;
  t = m_44;
  t = c_98(t);
  o_44 = t;
  t = (ATerm) ATinsert(CheckATermList(o_44), n_44);
  a_15 = t;
  t = SSLsetAnnotations(a_15, i_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_147 (ATerm), ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,z_44 = NULL,a_45 = NULL,k_15 = NULL;
  u_44 = t;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_21;
        t = u_147(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
      }
  }
  t = u_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_44 = ATgetFirst((ATermList) t);
      x_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_44);
  v_44 = t;
  t = term_o_17;
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_17, w_44);
  t = c_6(a_45, w_44, t);
  t = x_44;
  {
    static ATerm k_45 (ATerm t);
    static ATerm k_45 (ATerm t)
    {
      ATerm p_21 = t;
      int q_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_45 = NULL;
              d_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_45;
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = u_147(t);
              t = Cons_2_0(_id, k_45, t);
            }
          LocalPopChoice(q_21);
        }
      else
        {
          t = p_21;
          {
            ATerm g_45 = NULL,h_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_45 = ATgetFirst((ATermList) t);
                h_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_45), (ATerm) ATmakeAppl(sym_Undefined_1, g_45));
          }
        }
      return(t);
    }
    t = k_45(t);
  }
  z_44 = t;
  t = (ATerm) ATinsert(CheckATermList(z_44), (ATerm) ATmakeAppl(sym_Program_1, w_44));
  k_15 = t;
  t = SSLsetAnnotations(k_15, v_44);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  if(match_string(t, "--help"))
    {
      t = x_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_45;
        }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  t = term_t_21;
  y_45 = t;
  t = term_f_18;
  z_45 = t;
  t = term_u_21;
  t = c_6(y_45, z_45, t);
  t = term_v_21;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_w_21;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm r_147 (ATerm), ATerm s_147 (ATerm), ATerm t_147 (ATerm), ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  r_45 = t;
  t = term_o_18;
  s_45 = t;
  t = term_x_21;
  t = lookup_table_0_1(s_45, t);
  w_45 = t;
  t = term_p_18;
  t_45 = t;
  t = (ATerm) ATempty;
  u_45 = t;
  t = w_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(t_45, u_45, v_45, t);
  t = r_45;
  {
    static ATerm j_6 (ATerm t);
    static ATerm j_6 (ATerm t)
    {
      ATerm y_21 = t;
      int z_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_147(t);
          LocalPopChoice(z_21);
        }
      else
        {
          t = y_21;
          {
            ATerm a_22 = t;
            int b_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_6, n_6, o_6, t);
                LocalPopChoice(b_22);
              }
            else
              {
                t = a_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_6, t);
  }
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL;
        k_46 = t;
        {
          ATerm e_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_19 = NULL;
              t = k_46;
              {
                ATerm g_22 = t;
                int h_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_19 = NULL,n_19 = NULL;
                    t = term_m_15;
                    m_19 = t;
                    t = term_t_21;
                    n_19 = t;
                    t = term_i_22;
                    t = z_5(m_19, n_19, t);
                    LocalPopChoice(h_22);
                  }
                else
                  {
                    t = g_22;
                    t = fetch_1_0(q_6, t);
                  }
              }
              t = k_46;
              t = s_147(t);
              t = term_j_19;
              l_19 = t;
              t = SSL_exit(l_19);
              LocalPopChoice(f_22);
            }
          else
            {
              t = e_22;
              {
                ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
                t = term_m_15;
                s_19 = t;
                t = term_d_21;
                t_19 = t;
                t = term_j_22;
                t = z_5(s_19, t_19, t);
                t = k_46;
                t = t_147(t);
                t = term_j_19;
                r_19 = t;
                t = SSL_exit(r_19);
              }
            }
        }
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
              static ATerm b_7 (ATerm t);
              static ATerm b_7 (ATerm t)
              {
                ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,x_15 = NULL;
                q_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_46);
                o_46 = t;
                t = p_46;
                if(((p_45 != NULL) && (p_45 != t)))
                  _fail(t);
                else
                  p_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_46);
                x_15 = t;
                t = SSLsetAnnotations(x_15, o_46);
                return(t);
              }
              t = fetch_1_0(b_7, t);
              t = term_i_20;
              m_46 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_45)), term_m_22);
              n_46 = t;
              t = SSL_printnl(m_46, n_46);
              t = (ATerm) ATmakeAppl(sym__2, term_i_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_45)), term_m_22));
              t = s_147(t);
              t = term_k_20;
              l_46 = t;
              t = SSL_exit(l_46);
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
            }
        }
      }
  }
  q_45 = t;
  t = term_o_18;
  t = table_destroy_0_0(t);
  t = q_45;
  return(t);
}
ATerm option_wrap_5_0 (ATerm u_145 (ATerm), ATerm v_145 (ATerm), ATerm w_145 (ATerm), ATerm x_145 (ATerm), ATerm y_145 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  t = parse_options_3_0(u_145, v_145, w_145, t);
  v_46 = t;
  t = term_n_22;
  t = table_create_0_0(t);
  t = term_n_22;
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_22, term_o_22, v_46);
  t = lookup_table_0_1(w_46, t);
  z_46 = t;
  t = term_o_22;
  x_46 = t;
  t = z_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(x_46, v_46, y_46, t);
  t = v_46;
  t = x_145(t);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_145(t);
        t = report_success_0_0(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(g_7, h_7, i_7, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_22);
                      }
                    else
                      {
                        t = x_22;
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
static ATerm f_7 (ATerm t)
{
  t = input_1_0(j_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm b_47 = NULL,n_47 = NULL;
  t = term_v_15;
  b_47 = t;
  t = term_f_18;
  n_47 = t;
  t = term_z_22;
  t = c_6(b_47, n_47, t);
  t = term_a_23;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_b_23;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = output_1_0(dead_var_elim_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(c_7, default_system_usage_0_0, default_system_about_0_0, _id, f_7, t);
  return(t);
}

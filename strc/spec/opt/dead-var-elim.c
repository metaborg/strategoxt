#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Choice_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
ATerm term_c_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_14);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_h_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_r_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_h_19, term_e_8);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_j_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_g_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_x_19);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_e_8);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_e_8);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_e_8);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__3, term_u_19, term_x_19, (ATerm) ATempty);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_y_21);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_e_8);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm all_rl_1_0 (ATerm f_84 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm b_84 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm a_84 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm o_9 (ATerm f_8, ATerm k_8, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm k_5 (ATerm a_41, ATerm z_40, ATerm t);
static ATerm l_5 (ATerm w_43, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm z_83 (ATerm), ATerm t);
static ATerm m_5 (ATerm k_40, ATerm l_40, ATerm m_40, ATerm t);
ATerm alltd_1_0 (ATerm s_87 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm m_98 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm o_5 (ATerm g_84 (ATerm), ATerm t);
static ATerm q_5 (ATerm i_40, ATerm j_40, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_105 (ATerm), ATerm t);
static ATerm r_5 (ATerm t_97 (ATerm), ATerm t_38, ATerm r_38, ATerm t);
static ATerm s_5 (ATerm c_40, ATerm d_40, ATerm t);
ATerm end_scope_1_0 (ATerm q_97 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_97 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm dead_var_elim_0_0 (ATerm t);
static ATerm v_5 (ATerm s_30, ATerm t_30, ATerm t);
static ATerm w_5 (ATerm k_29, ATerm l_29, ATerm t);
static ATerm y_5 (ATerm k_93 (ATerm), ATerm i_211, ATerm q_29, ATerm t);
static ATerm x_5 (ATerm g_29, ATerm h_29, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm g_113 (ATerm), ATerm t);
static ATerm v_33 (ATerm h_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_5 (ATerm m_29, ATerm t);
static ATerm a_6 (ATerm w_55, ATerm x_55, ATerm t);
static ATerm b_6 (ATerm u_30, ATerm v_30, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_36 (ATerm l_34, ATerm t);
static ATerm r_36 (ATerm v_34, ATerm w_34, ATerm a_35, ATerm t);
static ATerm s_36 (ATerm p_35, ATerm q_35, ATerm r_35, ATerm t);
static ATerm c_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_98 (ATerm), ATerm t);
static ATerm h_6 (ATerm q_41, ATerm r_41, ATerm t);
ATerm if_verbose2_1_0 (ATerm b_95 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_6 (ATerm n_34, ATerm o_34, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_6 (ATerm x_39, ATerm y_39, ATerm w_39, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_6 (ATerm f_37, ATerm g_37, ATerm t);
ATerm foldr_2_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_95 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm need_help_1_0 (ATerm e_114 (ATerm), ATerm t);
static ATerm l_6 (ATerm p_43, ATerm q_43, ATerm r_43, ATerm t);
static ATerm m_6 (ATerm s_43, ATerm t_43, ATerm t);
ATerm lookup_table_0_1 (ATerm j_41, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_43, ATerm y_43, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm f_6 (ATerm u_43, ATerm v_43, ATerm t);
static ATerm g_6 (ATerm z_43, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_98 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_116 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm parse_options_1_0 (ATerm g_116 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm iowrap_3_0 (ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,i_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_e_8;
  t = whoami_0_0(t);
  i_0 = t;
  t = term_g_8;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), i_0), term_h_8);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_l_8;
  p_0 = t;
  t = SSL_exit(p_0);
  t = a_0;
  return(t);
}
ATerm all_rl_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,y_0 = NULL,z_0 = NULL;
  z_0 = t;
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_0;
  t = reverse_map_1_0(f_84, t);
  y_0 = t;
  t = SSL_mkterm(s_0, y_0);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm q_1 = NULL,u_1 = NULL,w_1 = NULL,y_1 = NULL,i_3 = NULL,j_3 = NULL;
  i_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_3;
        q_1 = t;
        t = SSLgetAnnotations(i_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(v_8) != AT_LIST) || !(ATisEmpty(v_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_3;
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        {
          ATerm x_8 = t;
          int y_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_3;
              q_1 = t;
              t = SSLgetAnnotations(i_3);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_9 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm d_9 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(d_9) != AT_LIST) || !(ATisEmpty(d_9))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = i_3;
              LocalPopChoice(y_8);
            }
          else
            {
              t = x_8;
              t = j_3;
              q_1 = t;
              t = SSLgetAnnotations(i_3);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_3;
            }
        }
      }
  }
  t = term_e_9;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_1);
  w_1 = t;
  t = term_f_9;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_9, (ATerm)ATmakeAppl(sym_Var_1, q_1), term_f_9);
  t = m_5(u_1, w_1, y_1, t);
  t = i_3;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  l_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_9 = ATgetFirst((ATermList) t);
      ATerm i_9 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(i_9) != AT_LIST) || !(ATisEmpty(i_9))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, m_3);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL,k_0 = NULL;
  p_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_1);
  j_1 = t;
  t = l_1;
  t = alltd_1_0(m_0, t);
  t = alltd_1_0(n_0, t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, m_1);
  k_0 = t;
  t = SSLsetAnnotations(k_0, j_1);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,v_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,a_2 = NULL;
  static ATerm o_0 (ATerm t)
  {
    ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL,m_4 = NULL,p_4 = NULL,q_4 = NULL,t_4 = NULL,u_4 = NULL,x_4 = NULL,r_2 = NULL,g_2 = NULL;
    x_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        m_4 = ATgetArgument(t, 0);
        p_4 = ATgetArgument(t, 1);
        q_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_4);
    l_4 = t;
    t = p_4;
    t = b_84(t);
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, m_4, t_4, q_4);
    g_2 = t;
    t = SSLsetAnnotations(g_2, l_4);
    u_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        e_4 = ATgetArgument(t, 0);
        f_4 = ATgetArgument(t, 1);
        i_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_4);
    d_4 = t;
    t = e_4;
    t = b_84(t);
    j_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_4, f_4, i_4);
    r_2 = t;
    t = SSLsetAnnotations(r_2, d_4);
    return(t);
  }
  static ATerm u_0 (ATerm t)
  {
    ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,j_5 = NULL,n_5 = NULL,u_5 = NULL,s_2 = NULL;
    u_5 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        z_4 = ATgetArgument(t, 0);
        a_5 = ATgetArgument(t, 1);
        j_5 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_5);
    y_4 = t;
    t = j_5;
    t = b_84(t);
    n_5 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_4, a_5, n_5);
    s_2 = t;
    t = SSLsetAnnotations(s_2, y_4);
    return(t);
  }
  c_4 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      v_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
      b_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_3, a_4, b_4);
  a_2 = t;
  t = SSLsetAnnotations(a_2, q_3);
  t = elim_abstract_choice_2_0(o_0, u_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,j_6 = NULL,n_6 = NULL,x_6 = NULL,x_2 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,y_2 = NULL;
    d_7 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        a_7 = ATgetArgument(t, 0);
        b_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_7);
    z_6 = t;
    t = a_7;
    t = a_84(t);
    c_7 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, c_7, b_7);
    y_2 = t;
    t = SSLsetAnnotations(y_2, z_6);
    return(t);
  }
  static ATerm w_0 (ATerm t)
  {
    ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,z_2 = NULL;
    i_7 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        f_7 = ATgetArgument(t, 0);
        g_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_7);
    e_7 = t;
    t = g_7;
    t = a_84(t);
    h_7 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_7, h_7);
    z_2 = t;
    t = SSLsetAnnotations(z_2, e_7);
    return(t);
  }
  x_6 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      j_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_6);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, j_6, n_6);
  x_2 = t;
  t = SSLsetAnnotations(x_2, e_6);
  t = elim_abstract_choice_2_0(v_0, w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,b_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
      t = t_8;
      {
        ATerm k_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_8 = ATgetFirst((ATermList) t);
                {
                  ATerm t_9 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_9);
            t = u_8;
            {
              ATerm w_9 = t;
              int x_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm y_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_9);
                  t = s_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = b_9;
                    }
                  else
                    {
                      ATerm i_10 = t;
                      int j_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_9(s_8, b_9, t);
                          LocalPopChoice(j_10);
                        }
                      else
                        {
                          t = i_10;
                          t = b_9;
                        }
                    }
                }
              else
                {
                  t = w_9;
                  t = s_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = b_9;
                    }
                  else
                    {
                      t = b_9;
                    }
                }
            }
          }
        else
          {
            t = k_9;
            t = s_8;
            if(match_cons(t, sym_Scopes_0))
              {
                t = b_9;
              }
            else
              {
                t = b_9;
              }
          }
      }
    }
  else
    {
      t = b_9;
    }
  return(t);
}
static ATerm o_9 (ATerm f_8, ATerm k_8, ATerm t)
{
  t = k_8;
  {
    ATerm k_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        t = term_e_9;
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, f_8);
        t = h_6(v_1, f_8, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_10 = ATgetFirst((ATermList) t);
            if(match_cons(p_10, sym_Defined_1))
              {
                ATerm s_10 = ATgetArgument(p_10, 0);
              }
            else
              _fail(t);
            {
              ATerm r_10 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = k_8;
        LocalPopChoice(n_10);
      }
    else
      {
        t = k_10;
        t = (ATerm) ATmakeAppl(sym__2, f_8, (ATerm) ATinsert(ATempty, term_f_9));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm y_7 = NULL,a_8 = NULL;
  t = map_1_0(x_0, t);
  y_7 = t;
  t = term_e_9;
  t = table_destroy_0_0(t);
  t = term_e_9;
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, y_7);
  t = k_5(a_8, y_7, t);
  t = y_7;
  return(t);
}
static ATerm k_5 (ATerm a_41, ATerm z_40, ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
    if(match_cons(t, sym__2))
      {
        q_9 = ATgetArgument(t, 0);
        r_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, a_41, q_9, r_9);
    t = lookup_table_0_1(a_41, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        s_9 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = l_6(q_9, r_9, s_9, t);
    t = (ATerm) ATmakeAppl(sym__3, a_41, q_9, r_9);
    return(t);
  }
  t = z_40;
  t = map_1_0(a_1, t);
  return(t);
}
static ATerm l_5 (ATerm w_43, ATerm t)
{
  t = SSL_hashtable_keys(w_43);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  static ATerm b_1 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL;
    z_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), z_9);
    t = h_6(not_null(u_9), z_9, t);
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_9, a_10);
    return(t);
  }
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  t = lookup_table_0_1(u_9, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(v_9, t);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_e_9;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  f_10 = t;
  t = save_ElimVar_0_0(t);
  b_10 = t;
  t = f_10;
  t = c_84(t);
  e_10 = t;
  t = save_ElimVar_0_0(t);
  c_10 = t;
  t = term_e_9;
  t = table_destroy_0_0(t);
  t = term_e_9;
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, b_10);
  t = k_5(g_10, b_10, t);
  t = e_10;
  t = d_84(t);
  d_10 = t;
  t = c_10;
  t = isect_ElimVar_0_0(t);
  t = d_10;
  return(t);
}
ATerm elim_choice_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,l_10 = NULL,m_10 = NULL,o_10 = NULL,d_3 = NULL;
  static ATerm c_1 (ATerm t)
  {
    ATerm t_10 = NULL,v_10 = NULL,z_10 = NULL,c_11 = NULL,d_11 = NULL,e_3 = NULL;
    d_11 = t;
    if(match_cons(t, sym_Choice_2))
      {
        v_10 = ATgetArgument(t, 0);
        z_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_11);
    t_10 = t;
    t = v_10;
    t = z_83(t);
    c_11 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, c_11, z_10);
    e_3 = t;
    t = SSLsetAnnotations(e_3, t_10);
    return(t);
  }
  static ATerm d_1 (ATerm t)
  {
    ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,f_3 = NULL;
    i_11 = t;
    if(match_cons(t, sym_Choice_2))
      {
        f_11 = ATgetArgument(t, 0);
        g_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_11);
    e_11 = t;
    t = g_11;
    t = z_83(t);
    h_11 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, f_11, h_11);
    f_3 = t;
    t = SSLsetAnnotations(f_3, e_11);
    return(t);
  }
  o_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_10);
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, l_10, m_10);
  d_3 = t;
  t = SSLsetAnnotations(d_3, h_10);
  t = elim_abstract_choice_2_0(c_1, d_1, t);
  return(t);
}
static ATerm m_5 (ATerm k_40, ATerm l_40, ATerm m_40, ATerm t)
{
  ATerm m_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_40, l_40);
  t = h_6(k_40, l_40, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_10 = ATgetFirst((ATermList) t);
      m_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_40, l_40, (ATerm) ATinsert(CheckATermList(m_11), m_40));
  t = lookup_table_0_1(k_40, t);
  x_11 = t;
  t = (ATerm) ATinsert(CheckATermList(m_11), m_40);
  v_11 = t;
  t = x_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(l_40, v_11, w_11, t);
  t = u_11;
  return(t);
}
ATerm alltd_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  static ATerm y_11 (ATerm t)
  {
    ATerm y_10 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_87(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = y_10;
        t = SRTS_all(y_11, t);
      }
    return(t);
  }
  t = y_11(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,d_13 = NULL,e_13 = NULL;
  e_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_13 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL,l_2 = NULL,m_2 = NULL,o_3 = NULL,n_3 = NULL;
        t = SSLgetAnnotations(e_13);
        i_2 = t;
        t = d_13;
        t = reverse_map_1_0(m_98, t);
        l_2 = t;
        t = (ATerm) ATinsert(CheckATermList(l_2), b_13);
        n_3 = t;
        t = SSLsetAnnotations(n_3, i_2);
        m_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_2 = ATgetFirst((ATermList) t);
            f_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_2);
        d_2 = t;
        t = e_2;
        t = m_98(t);
        h_2 = t;
        t = (ATerm) ATinsert(CheckATermList(f_2), h_2);
        o_3 = t;
        t = SSLsetAnnotations(o_3, d_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_13;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_13 = ATgetArgument(t, 0);
      {
        ATerm o_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, w_13);
  x_13 = t;
  t = term_f_9;
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_13), term_f_9);
  t = r_5(h_1, x_13, y_13, t);
  t = v_13;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm o_5 (ATerm g_84 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t)
  {
    ATerm g_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,s_3 = NULL;
    u_13 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        l_13 = ATgetArgument(t, 0);
        m_13 = ATgetArgument(t, 1);
        n_13 = ATgetArgument(t, 2);
        o_13 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_13);
    g_13 = t;
    t = n_13;
    t = map_1_0(g_1, t);
    s_13 = t;
    t = o_13;
    t = g_84(t);
    t_13 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_13, m_13, s_13, t_13);
    s_3 = t;
    t = SSLsetAnnotations(s_3, g_13);
    return(t);
  }
  t = scope_2_0(e_1, f_1, t);
  return(t);
}
static ATerm q_5 (ATerm i_40, ATerm j_40, ATerm t)
{
  ATerm z_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_40, j_40);
  t = h_6(i_40, j_40, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_13 = ATgetFirst((ATermList) t);
      {
        ATerm p_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_13;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL;
        t = term_e_9;
        h_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, b_15);
        t = q_5(h_4, b_15, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = b_15;
        _fail(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm t_11 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL;
              t = term_e_9;
              w_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_9, b_15);
              t = q_5(w_4, b_15, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = b_15;
              _fail(t);
              LocalPopChoice(g_12);
            }
          else
            {
              t = t_11;
              {
                ATerm h_12 = t;
                int k_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_5 = NULL;
                    t = term_e_9;
                    h_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_9, b_15);
                    t = q_5(h_5, b_15, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = b_15;
                    _fail(t);
                    LocalPopChoice(k_12);
                  }
                else
                  {
                    t = h_12;
                    {
                      ATerm q_6 = NULL;
                      t = term_e_9;
                      q_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_e_9, b_15);
                      t = q_5(q_6, b_15, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm n_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) n_12) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_o_12;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,y_16 = NULL,z_16 = NULL;
  w_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_16 = ATgetFirst((ATermList) t);
          z_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 = NULL,j_7 = NULL,k_7 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(w_16);
            v_6 = t;
            t = y_16;
            t = k_105(t);
            j_7 = t;
            t = z_16;
            t = filter_1_0(k_105, t);
            k_7 = t;
            t = (ATerm) ATinsert(CheckATermList(k_7), j_7);
            u_3 = t;
            t = SSLsetAnnotations(u_3, v_6);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = z_16;
            t = filter_1_0(k_105, t);
          }
      }
    }
  return(t);
}
static ATerm r_5 (ATerm t_97 (ATerm), ATerm t_38, ATerm r_38, ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,r_17 = NULL,s_17 = NULL;
  n_17 = t;
  t = t_97(t);
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_17, t_38, r_38);
  t = i_6(j_17, t_38, r_38, t);
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_17 = NULL;
        t = term_t_12;
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_17, term_t_12);
        t = h_6(j_17, w_17, t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_17 = ATgetFirst((ATermList) t);
      m_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_17, term_t_12, (ATerm) ATinsert(CheckATermList(m_17), (ATerm) ATinsert(CheckATermList(k_17), t_38)));
  t = lookup_table_0_1(j_17, t);
  s_17 = t;
  t = term_t_12;
  o_17 = t;
  t = (ATerm) ATinsert(CheckATermList(m_17), (ATerm) ATinsert(CheckATermList(k_17), t_38));
  p_17 = t;
  t = s_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(o_17, p_17, r_17, t);
  t = n_17;
  return(t);
}
static ATerm s_5 (ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  c_18 = t;
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
        t = h_6(c_40, d_40, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_12 = ATgetFirst((ATermList) t);
            b_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_12);
        {
          ATerm d_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, c_40, d_40, b_18);
          t = lookup_table_0_1(c_40, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_6(d_40, b_18, d_18, t);
          t = (ATerm) ATmakeAppl(sym__3, c_40, d_40, b_18);
        }
      }
    else
      {
        t = u_12;
        {
          ATerm g_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
          t = lookup_table_0_1(c_40, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_6(d_40, g_18, t);
          t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
        }
      }
  }
  t = c_18;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,k_18 = NULL,l_18 = NULL,p_18 = NULL,t_18 = NULL,x_18 = NULL,y_18 = NULL;
  p_18 = t;
  t = q_97(t);
  l_18 = t;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        t = term_t_12;
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_18, term_t_12);
        t = h_6(l_18, z_18, t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_18 = ATgetFirst((ATermList) t);
      i_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_18, term_t_12, i_18);
  t = lookup_table_0_1(l_18, t);
  y_18 = t;
  t = term_t_12;
  t_18 = t;
  t = y_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(t_18, i_18, x_18, t);
  t = k_18;
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm c_19 = NULL;
      c_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_18, c_19);
      t = s_5(l_18, c_19, t);
      return(t);
    }
    t = map_1_0(i_1, t);
  }
  t = p_18;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_89(t);
      t = i_89(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      t = i_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,n_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,v_19 = NULL,w_19 = NULL;
  n_19 = t;
  t = p_97(t);
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_19, term_t_12);
  {
    ATerm f_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_20 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_14 = ATgetArgument(t, 0);
            ATerm e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_12;
        c_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_19, term_t_12);
        t = h_6(e_19, c_20, t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATempty;
      }
  }
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_19, term_t_12, (ATerm) ATinsert(CheckATermList(q_19), (ATerm) ATempty));
  t = lookup_table_0_1(e_19, t);
  w_19 = t;
  t = term_t_12;
  r_19 = t;
  t = (ATerm) ATinsert(CheckATermList(q_19), (ATerm) ATempty);
  s_19 = t;
  t = w_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(r_19, s_19, v_19, t);
  t = n_19;
  return(t);
}
ATerm scope_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    t = end_scope_1_0(r_97, t);
    return(t);
  }
  t = begin_scope_1_0(r_97, t);
  t = restore_always_2_0(s_97, k_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm n_26 = NULL,s_26 = NULL,u_26 = NULL;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_26);
  s_26 = t;
  t = term_k_14;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_26), term_k_14);
  t = r_5(s_1, s_26, u_26, t);
  t = n_26;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm l_14 = t;
  if((PushChoice() == 0))
    {
      ATerm v_26 = NULL;
      v_26 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_26);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_14;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL,b_8 = NULL;
  v_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_e_9;
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_7);
  z_7 = t;
  t = term_f_9;
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_9, (ATerm)ATmakeAppl(sym_Var_1, w_7), term_f_9);
  t = m_5(x_7, z_7, b_8, t);
  t = v_7;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = alltd_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm c_9 = NULL,h_9 = NULL,j_9 = NULL,l_9 = NULL,m_9 = NULL;
  c_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_e_9;
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_9);
  l_9 = t;
  t = term_f_9;
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_9, (ATerm)ATmakeAppl(sym_Var_1, h_9), term_f_9);
  t = m_5(j_9, l_9, m_9, t);
  t = c_9;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = alltd_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_e_9;
  j_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_11);
  k_11 = t;
  t = term_f_9;
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_9, (ATerm)ATmakeAppl(sym_Var_1, b_11), term_f_9);
  t = m_5(j_11, k_11, l_11, t);
  t = a_11;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,f_12 = NULL;
  i_14 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_14);
  f_14 = t;
  t = g_14;
  t = map_1_0(dead_var_elim_0_0, t);
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_14);
  f_12 = t;
  t = SSLsetAnnotations(f_12, f_14);
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
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm v_27 (ATerm t)
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_25 = NULL,j_25 = NULL,l_25 = NULL,m_25 = NULL;
            j_25 = t;
            {
              ATerm u_14 = t;
              int v_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      ATerm x_14 = ATgetArgument(t, 0);
                      ATerm z_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_14);
                  {
                    static ATerm o_1 (ATerm t)
                    {
                      ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,u_25 = NULL,v_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,c_26 = NULL,d_26 = NULL,m_26 = NULL,i_5 = NULL,b_5 = NULL;
                      m_26 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          y_25 = ATgetArgument(t, 0);
                          z_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(m_26);
                      v_25 = t;
                      t = y_25;
                      t = map_1_0(r_1, t);
                      a_26 = t;
                      t = z_25;
                      t = v_27(t);
                      c_26 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, a_26, c_26);
                      b_5 = t;
                      t = SSLsetAnnotations(b_5, v_25);
                      d_26 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          q_25 = ATgetArgument(t, 0);
                          r_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(d_26);
                      p_25 = t;
                      t = q_25;
                      t = filter_1_0(t_1, t);
                      u_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, u_25, r_25);
                      i_5 = t;
                      t = SSLsetAnnotations(i_5, p_25);
                      return(t);
                    }
                    t = j_25;
                    t = scope_2_0(n_1, o_1, t);
                  }
                }
              else
                {
                  t = u_14;
                  {
                    ATerm a_15 = t;
                    int g_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm j_15 = ATgetArgument(t, 0);
                            ATerm m_15 = ATgetArgument(t, 1);
                            ATerm n_15 = ATgetArgument(t, 2);
                            ATerm o_15 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_15);
                        t = j_25;
                        t = o_5(v_27, t);
                      }
                    else
                      {
                        t = a_15;
                        if(match_cons(t, sym_Build_1))
                          {
                            l_25 = ATgetArgument(t, 0);
                            {
                              ATerm r_7 = NULL,t_7 = NULL,r_6 = NULL;
                              t = SSLgetAnnotations(j_25);
                              r_7 = t;
                              t = l_25;
                              t = alltd_1_0(x_1, t);
                              t_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, t_7);
                              r_6 = t;
                              t = SSLsetAnnotations(r_6, r_7);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                l_25 = ATgetArgument(t, 0);
                                m_25 = ATgetArgument(t, 1);
                                i_25 = ATgetArgument(t, 2);
                                {
                                  ATerm j_8 = NULL,w_8 = NULL,z_8 = NULL,o_8 = NULL;
                                  t = SSLgetAnnotations(j_25);
                                  j_8 = t;
                                  t = m_25;
                                  t = reverse_map_1_0(v_27, t);
                                  w_8 = t;
                                  t = i_25;
                                  t = reverse_map_1_0(z_1, t);
                                  z_8 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, l_25, w_8, z_8);
                                  o_8 = t;
                                  t = SSLsetAnnotations(o_8, j_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    l_25 = ATgetArgument(t, 0);
                                    m_25 = ATgetArgument(t, 1);
                                    i_25 = ATgetArgument(t, 2);
                                    {
                                      ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL,p_8 = NULL;
                                      t = SSLgetAnnotations(j_25);
                                      q_10 = t;
                                      t = m_25;
                                      t = reverse_map_1_0(v_27, t);
                                      w_10 = t;
                                      t = i_25;
                                      t = reverse_map_1_0(c_2, t);
                                      x_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, l_25, w_10, x_10);
                                      p_8 = t;
                                      t = SSLsetAnnotations(p_8, q_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,i_12 = NULL,j_12 = NULL,p_9 = NULL,q_8 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        l_25 = ATgetArgument(t, 0);
                                        m_25 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(j_25);
                                    d_12 = t;
                                    t = m_25;
                                    t = v_27(t);
                                    i_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, l_25, i_12);
                                    q_8 = t;
                                    t = SSLsetAnnotations(q_8, d_12);
                                    j_12 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        a_12 = ATgetArgument(t, 0);
                                        b_12 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(j_12);
                                    z_11 = t;
                                    t = a_12;
                                    t = v_27(t);
                                    c_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, b_12);
                                    p_9 = t;
                                    t = SSLsetAnnotations(p_9, z_11);
                                  }
                              }
                          }
                      }
                  }
                }
            }
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            {
              ATerm p_15 = t;
              int r_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(v_27, t);
                  LocalPopChoice(r_15);
                }
              else
                {
                  t = p_15;
                  {
                    ATerm s_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = elim_lchoice_1_0(v_27, t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = s_15;
                        {
                          ATerm c_16 = t;
                          int d_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(v_27, t);
                              LocalPopChoice(d_16);
                            }
                          else
                            {
                              t = c_16;
                              {
                                ATerm e_16 = t;
                                int g_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EliminateFromMatch_0_0(t);
                                    LocalPopChoice(g_16);
                                  }
                                else
                                  {
                                    t = e_16;
                                    t = all_rl_1_0(v_27, t);
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
      t = v_27(t);
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm t_27 = NULL,u_27 = NULL,c_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,a_14 = NULL,b_14 = NULL,m_12 = NULL,l_12 = NULL,e_12 = NULL;
        t_27 = t;
        if(match_cons(t, sym_Specification_1))
          {
            u_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_27);
        c_13 = t;
        t = u_27;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_13 = ATgetFirst((ATermList) t);
            k_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_27);
        i_13 = t;
        t = j_13;
        if(match_cons(t, sym_Signature_1))
          {
            a_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_13);
        r_13 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, a_14);
        e_12 = t;
        t = SSLsetAnnotations(e_12, r_13);
        b_14 = t;
        t = k_13;
        t = Cons_2_0(k_2, n_2, t);
        p_13 = t;
        t = (ATerm) ATinsert(CheckATermList(p_13), b_14);
        l_12 = t;
        t = SSLsetAnnotations(l_12, i_13);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, q_13);
        m_12 = t;
        t = SSLsetAnnotations(m_12, c_13);
      }
    }
  return(t);
}
static ATerm v_5 (ATerm s_30, ATerm t_30, ATerm t)
{
  ATerm l_28 = NULL;
  t = SSL_fputc(s_30, t_30);
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_28);
  return(t);
}
static ATerm w_5 (ATerm k_29, ATerm l_29, ATerm t)
{
  ATerm m_28 = NULL;
  t = SSL_write_term_to_stream_text(k_29, l_29);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_28);
  return(t);
}
static ATerm y_5 (ATerm k_93 (ATerm), ATerm i_211, ATerm q_29, ATerm t)
{
  ATerm n_28 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_211, term_h_16);
  t = c_6(t);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, q_29);
  t = k_93(t);
  t = fclose_0_0(t);
  t = q_29;
  return(t);
}
static ATerm x_5 (ATerm g_29, ATerm h_29, ATerm t)
{
  ATerm o_28 = NULL;
  t = SSL_write_term_to_stream_baf(g_29, h_29);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_28);
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
  ATerm h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_16 = ATgetArgument(t, 0);
      if(match_cons(i_16, sym_Stream_1))
        {
          h_15 = ATgetArgument(i_16, 0);
        }
      else
        _fail(t);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(h_15, i_15, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_16 = ATgetArgument(t, 0);
      if(match_cons(j_16, sym_Stream_1))
        {
          a_16 = ATgetArgument(j_16, 0);
        }
      else
        _fail(t);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(a_16, b_16, t);
  w_15 = t;
  t = term_k_16;
  x_15 = t;
  t = w_15;
  if(match_cons(t, sym_Stream_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, w_15);
  t = v_5(x_15, z_15, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_28 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL,r_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,a_30 = NULL,w_31 = NULL,b_32 = NULL,m_14 = NULL,d_14 = NULL;
  c_29 = t;
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_29);
  v_29 = t;
  t = w_29;
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_28 != NULL) && (z_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_2, t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        t = term_o_16;
        z_28 = t;
      }
  }
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, x_29);
  d_14 = t;
  t = SSLsetAnnotations(d_14, v_29);
  t = c_29;
  if(match_cons(t, sym__2))
    {
      f_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_29);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_29, (ATerm) ATmakeAppl(sym__2, not_null(z_28), r_29));
  m_14 = t;
  t = SSLsetAnnotations(m_14, d_29);
  u_29 = t;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,n_14 = NULL;
        t = SSLgetAnnotations(u_29);
        r_14 = t;
        t = w_31;
        t = fetch_1_0(p_2, t);
        c_15 = t;
        t = b_32;
        if(match_cons(t, sym__2))
          {
            e_15 = ATgetArgument(t, 0);
            f_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_5(q_2, e_15, f_15, t);
        d_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_15, d_15);
        n_14 = t;
        t = SSLsetAnnotations(n_14, r_14);
        LocalPopChoice(r_16);
      }
    else
      {
        t = p_16;
        {
          ATerm q_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,o_14 = NULL;
          t = SSLgetAnnotations(u_29);
          q_15 = t;
          t = b_32;
          if(match_cons(t, sym__2))
            {
              u_15 = ATgetArgument(t, 0);
              v_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_5(t_2, u_15, v_15, t);
          t_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_31, t_15);
          o_14 = t;
          t = SSLsetAnnotations(o_14, q_15);
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
ATerm apply_strategy_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm l_32 = NULL,n_32 = NULL,o_32 = NULL,t_32 = NULL,u_32 = NULL;
  u_32 = t;
  t = dtime_0_0(t);
  t = u_32;
  t = g_113(t);
  t_32 = t;
  t = dtime_0_0(t);
  l_32 = t;
  t = t_32;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_32), (ATerm) ATmakeAppl(sym_Runtime_1, l_32)), o_32);
  return(t);
}
static ATerm v_33 (ATerm h_33, ATerm t)
{
  t = SSL_fclose(h_33);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_33 = NULL,t_33 = NULL;
  t_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_33 = ATgetArgument(t, 0);
      {
        ATerm u_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_33);
            LocalPopChoice(a_17);
          }
        else
          {
            t = u_16;
            t = v_33(t_33, t);
          }
      }
    }
  else
    {
      t = v_33(t_33, t);
    }
  return(t);
}
static ATerm z_5 (ATerm m_29, ATerm t)
{
  t = SSL_read_term_from_stream(m_29);
  return(t);
}
static ATerm a_6 (ATerm w_55, ATerm x_55, ATerm t)
{
  t = SSL_strcat(w_55, x_55);
  return(t);
}
static ATerm b_6 (ATerm u_30, ATerm v_30, ATerm t)
{
  ATerm w_33 = NULL;
  t = SSL_fopen(u_30, v_30);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_33);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_33 = NULL;
  t = SSL_stdin_stream();
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_33);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_33 = NULL;
  t = SSL_stdout_stream();
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_33);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_33 = NULL;
  t = SSL_stderr_stream();
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_33);
  return(t);
}
static ATerm q_36 (ATerm l_34, ATerm t)
{
  ATerm q_34 = NULL;
  t = SSL_explode_term(l_34);
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_17 = ATgetArgument(t, 1);
        if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
          {
            q_34 = ATgetFirst((ATermList) c_17);
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
  t = q_34;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_34;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_34;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_34;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_36 (ATerm v_34, ATerm w_34, ATerm a_35, ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,n_35 = NULL,w_14 = NULL;
  t = SSLgetAnnotations(a_35);
  e_35 = t;
  t = v_34;
  if(match_cons(t, sym_Path_1))
    {
      n_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_35, w_34);
  w_14 = t;
  t = SSLsetAnnotations(w_14, e_35);
  if(match_cons(t, sym__2))
    {
      c_35 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(c_35, d_35, t);
  return(t);
}
static ATerm s_36 (ATerm p_35, ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm s_35 = NULL,v_35 = NULL,x_35 = NULL,g_36 = NULL,y_14 = NULL;
  t = SSLgetAnnotations(r_35);
  x_35 = t;
  t = SSL_is_string(p_35);
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_36, q_35);
  y_14 = t;
  t = SSLsetAnnotations(y_14, x_35);
  if(match_cons(t, sym__2))
    {
      s_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(s_35, v_35, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm i_36 = NULL,o_36 = NULL,p_36 = NULL;
  i_36 = t;
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
      {
        ATerm e_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_36(i_36, t);
            LocalPopChoice(g_17);
          }
        else
          {
            t = e_17;
            {
              ATerm h_17 = t;
              int i_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_36(o_36, p_36, i_36, t);
                  LocalPopChoice(i_17);
                }
              else
                {
                  t = h_17;
                  t = s_36(o_36, p_36, i_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_36(i_36, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_36 = NULL,x_36 = NULL,z_36 = NULL,l_37 = NULL;
  l_37 = t;
  {
    ATerm q_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_37, term_u_17);
        t = c_6(t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = q_17;
        {
          ATerm s_16 = NULL,x_16 = NULL;
          t = term_v_17;
          x_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_17, l_37);
          t = a_6(x_16, l_37, t);
          s_16 = t;
          t = SSL_perror(s_16);
          _fail(t);
        }
      }
  }
  x_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(z_36, t);
  u_36 = t;
  t = x_36;
  t = fclose_0_0(t);
  t = u_36;
  return(t);
}
ATerm fetch_1_0 (ATerm t_98 (ATerm), ATerm t)
{
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
      ATerm x_17 = t;
      int y_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_17 = NULL,l_17 = NULL,k_15 = NULL;
          t = SSLgetAnnotations(h_38);
          f_17 = t;
          t = i_38;
          t = t_98(t);
          l_17 = t;
          t = (ATerm) ATinsert(CheckATermList(j_38), l_17);
          k_15 = t;
          t = SSLsetAnnotations(k_15, f_17);
          LocalPopChoice(y_17);
        }
      else
        {
          t = x_17;
          {
            ATerm a_18 = NULL,m_18 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(h_38);
            a_18 = t;
            t = j_38;
            t = k_38(t);
            m_18 = t;
            t = (ATerm) ATinsert(CheckATermList(m_18), i_38);
            l_15 = t;
            t = SSLsetAnnotations(l_15, a_18);
          }
        }
    }
    return(t);
  }
  t = k_38(t);
  return(t);
}
static ATerm h_6 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm y_38 = NULL;
  t = lookup_table_0_1(q_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(r_41, y_38, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  {
    ATerm z_17 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
        t = term_f_18;
        f_39 = t;
        t = term_h_18;
        g_39 = t;
        t = term_j_18;
        t = h_6(f_39, g_39, t);
        e_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_39, term_n_18);
        t = geq_0_0(t);
        t = c_39;
        t = b_95(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = z_17;
        t = c_39;
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  if(match_string(t, "-k"))
    {
      t = j_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_39;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  t = SSL_string_to_int(k_39);
  l_39 = t;
  t = term_o_18;
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, l_39);
  t = k_6(m_39, l_39, t);
  t = k_39;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  if(match_string(t, "-S"))
    {
      t = o_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_39;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  t = term_h_18;
  p_39 = t;
  t = term_r_18;
  q_39 = t;
  t = term_w_18;
  t = k_6(p_39, q_39, t);
  t = term_d_19;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_f_19;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  t = SSL_string_to_int(r_39);
  s_39 = t;
  t = term_h_18;
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, s_39);
  t = k_6(t_39, s_39, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_39);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_g_19;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  t = term_h_19;
  u_39 = t;
  t = term_e_8;
  v_39 = t;
  t = term_i_19;
  t = k_6(u_39, v_39, t);
  t = term_j_19;
  return(t);
}
static ATerm t_3 (ATerm t)
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
      t = Option_3_0(a_3, b_3, c_3, t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_3, h_3, k_3, t);
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            t = Option_3_0(p_3, r_3, t_3, t);
          }
      }
    }
  return(t);
}
static ATerm k_6 (ATerm n_34, ATerm o_34, ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  t = term_f_18;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_18, n_34, o_34);
  t = lookup_table_0_1(z_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(n_34, o_34, a_40, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_18, n_34, o_34);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,o_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
      t = term_e_8;
      t = e_0(t);
      p_40 = t;
      t = term_u_19;
      q_40 = t;
      t = term_x_19;
      r_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_x_19, p_40);
      t = i_6(q_40, r_40, p_40, t);
      _fail(t);
    }
  else
    {
      ATerm u_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_40 = ATgetFirst((ATermList) t);
          o_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_40;
      t = c_0(t);
      t = term_e_8;
      t = d_0(t);
      u_40 = t;
      t = (ATerm) ATinsert(CheckATermList(o_40), u_40);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  if(match_string(t, "-o"))
    {
      t = w_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_40;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  d_41 = t;
  t = term_y_19;
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, d_41);
  t = k_6(e_41, d_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_41);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
static ATerm i_6 (ATerm x_39, ATerm y_39, ATerm w_39, ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,n_41 = NULL,o_41 = NULL;
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_39, y_39);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            ATerm e_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_39, y_39);
        t = h_6(x_39, y_39, t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = (ATerm) ATempty;
      }
  }
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_39, y_39, (ATerm) ATinsert(CheckATermList(h_41), w_39));
  t = lookup_table_0_1(x_39, t);
  o_41 = t;
  t = (ATerm) ATinsert(CheckATermList(h_41), w_39);
  i_41 = t;
  t = o_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(y_39, i_41, n_41, t);
  t = g_41;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
      t = term_e_8;
      t = l_0(t);
      b_42 = t;
      t = term_u_19;
      c_42 = t;
      t = term_x_19;
      d_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_x_19, b_42);
      t = i_6(c_42, d_42, b_42, t);
      _fail(t);
    }
  else
    {
      ATerm h_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_41 = ATgetFirst((ATermList) t);
          y_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_41 = ATgetFirst((ATermList) t);
          a_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_41;
      t = h_0(t);
      t = z_41;
      t = j_0(t);
      h_42 = t;
      t = (ATerm) ATinsert(CheckATermList(a_42), h_42);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  if(match_string(t, "-i"))
    {
      t = j_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_42;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  k_42 = t;
  t = term_g_20;
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, k_42);
  t = k_6(l_42, k_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_42);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, g_4, k_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_8;
  t = whoami_0_0(t);
  m_42 = t;
  t = term_g_8;
  o_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_20), m_42);
  p_42 = t;
  t = SSL_printnl(o_42, p_42);
  t = term_l_8;
  n_42 = t;
  t = SSL_exit(n_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  t = term_f_18;
  q_42 = t;
  t = term_j_20;
  r_42 = t;
  t = term_l_20;
  t = h_6(q_42, r_42, t);
  return(t);
}
static ATerm d_6 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_37, g_37);
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      t = SSL_addr(f_37, g_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_42;
      t = g_104(t);
    }
  else
    {
      ATerm y_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_42 = ATgetFirst((ATermList) t);
          v_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_42;
      t = foldr_2_0(g_104, h_104, t);
      y_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_42, y_42);
      t = h_104(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_r_18;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(a_19, b_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_43 = NULL,s_18 = NULL,u_18 = NULL;
  t = times_0_0(t);
  u_18 = t;
  t = SSL_explode_term(u_18);
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_18;
  t = foldr_2_0(n_4, o_4, t);
  b_43 = t;
  t = SSL_TicksToSeconds(b_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  if(match_cons(t, sym__2))
    {
      n_43 = ATgetArgument(t, 0);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_43;
        if((n_43 != t))
          {
            _fail(t);
          }
        t = m_43;
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = (ATerm) ATmakeAppl(sym__2, n_43, o_43);
        {
          ATerm v_20 = t;
          int w_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_43, o_43);
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
              t = SSL_gtr(n_43, o_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_43, o_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL;
        t = term_f_18;
        g_44 = t;
        t = term_h_18;
        h_44 = t;
        t = term_j_18;
        t = h_6(g_44, h_44, t);
        f_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_44, term_l_8);
        t = geq_0_0(t);
        t = d_44;
        t = a_95(t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = d_44;
      }
  }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,m_44 = NULL,n_44 = NULL;
  t = run_time_0_0(t);
  j_44 = t;
  t = term_e_8;
  t = whoami_0_0(t);
  k_44 = t;
  t = term_g_8;
  m_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_21), j_44), term_z_20), k_44);
  n_44 = t;
  t = SSL_printnl(m_44, n_44);
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_21), j_44), term_z_20), k_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_18;
  o_44 = t;
  t = SSL_exit(o_44);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  z_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_44 = ATgetArgument(t, 0);
          {
            ATerm t_19 = NULL,f_16 = NULL;
            t = SSLgetAnnotations(z_44);
            t_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_44);
            f_16 = t;
            t = SSLsetAnnotations(f_16, t_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  ATerm b_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_44 = NULL,s_44 = NULL;
      t = term_f_18;
      r_44 = t;
      t = term_g_21;
      s_44 = t;
      t = term_h_21;
      t = h_6(r_44, s_44, t);
      LocalPopChoice(f_21);
    }
  else
    {
      t = b_21;
      t = fetch_1_0(s_4, t);
    }
  t = e_114(t);
  return(t);
}
static ATerm l_6 (ATerm p_43, ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm b_45 = NULL;
  t = SSL_hashtable_put(r_43, p_43, q_43);
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_45);
  return(t);
}
static ATerm m_6 (ATerm s_43, ATerm t_43, ATerm t)
{
  t = SSL_hashtable_get(t_43, s_43);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_41, ATerm t)
{
  ATerm m_45 = NULL;
  t = table_hashtable_0_0(t);
  m_45 = t;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL;
        t = m_45;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_6(j_41, f_20, t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          ATerm k_20 = NULL;
          t = j_41;
          t = table_create_0_0(t);
          t = m_45;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_6(j_41, k_20, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm p_45 = NULL;
  t = SSL_hashtable_create(x_43, y_43);
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_45);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,u_45 = NULL,v_45 = NULL;
  q_45 = t;
  t = term_k_21;
  u_45 = t;
  t = term_l_21;
  v_45 = t;
  t = q_45;
  t = new_hashtable_0_2(u_45, v_45, t);
  r_45 = t;
  t = q_45;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(q_45, r_45, s_45, t);
  t = q_45;
  return(t);
}
static ATerm f_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm w_45 = NULL;
  t = SSL_hashtable_remove(v_43, u_43);
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_45);
  return(t);
}
static ATerm g_6 (ATerm z_43, ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_hashtable_destroy(z_43);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_45);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_45 = NULL;
  t = SSL_table_hashtable();
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_45);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  z_45 = t;
  t = table_hashtable_0_0(t);
  a_46 = t;
  t = lookup_table_0_1(z_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(c_46, t);
  t = a_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(z_45, b_46, t);
  t = z_45;
  return(t);
}
ATerm map_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  static ATerm r_46 (ATerm t)
  {
    ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
    o_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_46;
      }
    else
      {
        ATerm p_20 = NULL,s_20 = NULL,u_20 = NULL,l_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_46 = ATgetFirst((ATermList) t);
            q_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_46);
        p_20 = t;
        t = p_46;
        t = j_98(t);
        s_20 = t;
        t = q_46;
        t = r_46(t);
        u_20 = t;
        t = (ATerm) ATinsert(CheckATermList(u_20), s_20);
        l_16 = t;
        t = SSLsetAnnotations(l_16, p_20);
      }
    return(t);
  }
  t = r_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_46 = ATgetFirst((ATermList) t);
      v_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_46 = NULL,b_47 = NULL;
        static ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_46)), not_null(b_47));
          return(t);
        }
        t = v_46;
        t = g_0(t);
        if(((z_46 != NULL) && (z_46 != t)))
          _fail(t);
        else
          z_46 = t;
        t = u_46;
        t = f_0(t);
        if(((b_47 != NULL) && (b_47 != t)))
          _fail(t);
        else
          b_47 = t;
        t = v_46;
        t = reverse_acc_2_0(f_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_8;
      t = g_0(t);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,q_16 = NULL;
  j_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_47);
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_47);
  q_16 = t;
  t = SSLsetAnnotations(q_16, h_47);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_47), term_n_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  ATerm o_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_47 = NULL,g_47 = NULL;
      t = term_f_18;
      f_47 = t;
      t = term_j_20;
      g_47 = t;
      t = term_l_20;
      t = h_6(f_47, g_47, t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = o_21;
      t = fetch_1_0(c_5, t);
    }
  t = term_r_21;
  t = echo_0_0(t);
  t = term_u_19;
  d_47 = t;
  t = term_x_19;
  e_47 = t;
  t = term_t_21;
  t = h_6(d_47, e_47, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(e_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_21 = ATgetFirst((ATermList) t);
                ATerm x_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_47;
          }
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = (ATerm) ATinsert(ATempty, n_47);
      }
  }
  o_47 = t;
  t = term_o_16;
  p_47 = t;
  t = SSL_printnl(p_47, o_47);
  t = n_47;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  t = term_f_18;
  t_47 = t;
  t = term_j_20;
  u_47 = t;
  t = term_l_20;
  t = h_6(t_47, u_47, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL;
  t = term_y_21;
  v_47 = t;
  t = term_e_8;
  w_47 = t;
  t = term_z_21;
  t = k_6(v_47, w_47, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
  t = term_y_21;
  z_47 = t;
  t = term_e_8;
  a_48 = t;
  t = term_z_21;
  t = k_6(z_47, a_48, t);
  t = term_b_22;
  x_47 = t;
  t = term_e_8;
  y_47 = t;
  t = term_c_22;
  t = k_6(x_47, y_47, t);
  t = term_d_22;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, g_5, p_5, t);
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      t = Option_3_0(t_5, o_6, p_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm t)
{
  ATerm b_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,t_16 = NULL;
  i_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_48 = ATgetFirst((ATermList) t);
      f_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_48);
  b_48 = t;
  t = e_48;
  t = q_71(t);
  g_48 = t;
  t = f_48;
  t = r_71(t);
  h_48 = t;
  t = (ATerm) ATinsert(CheckATermList(h_48), g_48);
  t_16 = t;
  t = SSLsetAnnotations(t_16, b_48);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_116 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,s_48 = NULL,t_48 = NULL,v_16 = NULL;
  n_48 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_22;
        t = h_116(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
      }
  }
  t = n_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_48 = ATgetFirst((ATermList) t);
      q_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_48);
  o_48 = t;
  t = term_j_20;
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, p_48);
  t = k_6(t_48, p_48, t);
  t = q_48;
  {
    static ATerm d_49 (ATerm t)
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_48 = NULL;
              w_48 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_48;
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
              t = h_116(t);
              t = Cons_2_0(_id, d_49, t);
            }
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm z_48 = NULL,a_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_48 = ATgetFirst((ATermList) t);
                a_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_49), (ATerm) ATmakeAppl(sym_Undefined_1, z_48));
          }
        }
      return(t);
    }
    t = d_49(t);
  }
  s_48 = t;
  t = (ATerm) ATinsert(CheckATermList(s_48), (ATerm) ATmakeAppl(sym_Program_1, p_48));
  v_16 = t;
  t = SSLsetAnnotations(v_16, o_48);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm q_49 = NULL;
  q_49 = t;
  if(match_string(t, "--help"))
    {
      t = q_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_49;
        }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  t = term_g_21;
  r_49 = t;
  t = term_e_8;
  s_49 = t;
  t = term_o_22;
  t = k_6(r_49, s_49, t);
  t = term_p_22;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_116 (ATerm), ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  k_49 = t;
  t = term_u_19;
  l_49 = t;
  t = term_r_22;
  t = lookup_table_0_1(l_49, t);
  p_49 = t;
  t = term_x_19;
  m_49 = t;
  t = (ATerm) ATempty;
  n_49 = t;
  t = p_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(m_49, n_49, o_49, t);
  t = k_49;
  {
    static ATerm s_6 (ATerm t)
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_116(t);
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          {
            ATerm u_22 = t;
            int v_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_6, u_6, w_6, t);
                LocalPopChoice(v_22);
              }
            else
              {
                t = u_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_6, t);
  }
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_50 = NULL;
        d_50 = t;
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_21 = NULL;
              t = d_50;
              {
                ATerm a_23 = t;
                int b_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_21 = NULL,e_21 = NULL;
                    t = term_f_18;
                    d_21 = t;
                    t = term_g_21;
                    e_21 = t;
                    t = term_h_21;
                    t = h_6(d_21, e_21, t);
                    LocalPopChoice(b_23);
                  }
                else
                  {
                    t = a_23;
                    t = fetch_1_0(y_6, t);
                  }
              }
              t = d_50;
              t = default_system_usage_0_0(t);
              t = term_r_18;
              c_21 = t;
              t = SSL_exit(c_21);
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              {
                ATerm m_21 = NULL,p_21 = NULL,s_21 = NULL;
                t = term_f_18;
                p_21 = t;
                t = term_y_21;
                s_21 = t;
                t = term_c_23;
                t = h_6(p_21, s_21, t);
                t = d_50;
                t = default_system_about_0_0(t);
                t = term_r_18;
                m_21 = t;
                t = SSL_exit(m_21);
              }
            }
        }
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
              static ATerm l_7 (ATerm t)
              {
                ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,v_18 = NULL;
                j_50 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_50 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_50);
                h_50 = t;
                t = i_50;
                if(((i_49 != NULL) && (i_49 != t)))
                  _fail(t);
                else
                  i_49 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_50);
                v_18 = t;
                t = SSLsetAnnotations(v_18, h_50);
                return(t);
              }
              t = fetch_1_0(l_7, t);
              t = term_g_8;
              f_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_49)), term_f_23);
              g_50 = t;
              t = SSL_printnl(f_50, g_50);
              t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_49)), term_f_23));
              t = default_system_usage_0_0(t);
              t = term_l_8;
              e_50 = t;
              t = SSL_exit(e_50);
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
            }
        }
      }
  }
  j_49 = t;
  t = term_u_19;
  t = table_destroy_0_0(t);
  t = j_49;
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL;
  t = parse_options_1_0(g_114, t);
  o_50 = t;
  t = term_g_23;
  t = table_create_0_0(t);
  t = term_g_23;
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_23, term_h_23, o_50);
  t = lookup_table_0_1(p_50, t);
  s_50 = t;
  t = term_h_23;
  q_50 = t;
  t = s_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(q_50, o_50, r_50, t);
  t = o_50;
  t = i_114(t);
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_114, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_114(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = if_verbose2_1_0(u_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  t = term_m_23;
  t_50 = t;
  t = term_e_8;
  u_50 = t;
  t = term_n_23;
  t = k_6(t_50, u_50, t);
  t = term_o_23;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  v_50 = t;
  t = term_f_18;
  z_50 = t;
  t = term_j_20;
  a_51 = t;
  t = term_l_20;
  t = h_6(z_50, a_51, t);
  w_50 = t;
  t = term_g_8;
  x_50 = t;
  t = (ATerm) ATinsert(ATempty, w_50);
  y_50 = t;
  t = SSL_printnl(x_50, y_50);
  t = v_50;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t)
{
  static ATerm m_7 (ATerm t)
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_113(t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                ATerm u_23 = t;
                int v_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(v_23);
                  }
                else
                  {
                    t = u_23;
                    {
                      ATerm w_23 = t;
                      int x_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_7, q_7, s_7, t);
                          LocalPopChoice(x_23);
                        }
                      else
                        {
                          t = w_23;
                          {
                            ATerm y_23 = t;
                            int z_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_23);
                              }
                            else
                              {
                                t = y_23;
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
  static ATerm o_7 (ATerm t)
  {
    ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
    c_51 = t;
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm c_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_51 != NULL) && (b_51 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_8, t);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          t = term_c_24;
          b_51 = t;
        }
    }
    t = not_null(b_51);
    t = ReadFromFile_0_0(t);
    d_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_51, d_51);
    t = apply_strategy_1_0(p_113, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(m_7, r_113, n_7, o_7, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,t_20 = NULL;
  i_51 = t;
  if(match_cons(t, sym__2))
    {
      f_51 = ATgetArgument(t, 0);
      g_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_51);
  e_51 = t;
  t = g_51;
  t = dead_var_elim_0_0(t);
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_51, h_51);
  t_20 = t;
  t = SSLsetAnnotations(t_20, e_51);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_8, _fail, default_usage_0_0, t);
  return(t);
}

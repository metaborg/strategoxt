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
ATerm term_g_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_g_22;
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
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_n_16;
ATerm term_g_16;
ATerm term_b_16;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_c_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_14);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_y_17);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_c_8);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_w_19);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_r_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_h_19, term_j_19);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_c_8);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_c_8);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_c_8);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_d_21);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_c_8);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm all_rl_1_0 (ATerm s_80 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm o_80 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm n_80 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm d_9 (ATerm a_8, ATerm b_8, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm y_4 (ATerm a_40, ATerm z_39, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm m_80 (ATerm), ATerm t);
static ATerm z_4 (ATerm k_39, ATerm l_39, ATerm m_39, ATerm t);
ATerm alltd_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm y_94 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm b_5 (ATerm t_80 (ATerm), ATerm t);
static ATerm d_5 (ATerm i_39, ATerm j_39, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_101 (ATerm), ATerm t);
static ATerm e_5 (ATerm g_94 (ATerm), ATerm t_37, ATerm r_37, ATerm t);
static ATerm f_5 (ATerm c_39, ATerm d_39, ATerm t);
ATerm end_scope_1_0 (ATerm d_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm c_94 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t);
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
static ATerm i_5 (ATerm s_29, ATerm t_29, ATerm t);
static ATerm j_5 (ATerm k_28, ATerm l_28, ATerm t);
static ATerm l_5 (ATerm x_89 (ATerm), ATerm u_205, ATerm q_28, ATerm t);
static ATerm k_5 (ATerm g_28, ATerm h_28, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm k_109 (ATerm), ATerm t);
static ATerm s_32 (ATerm d_32, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_5 (ATerm m_28, ATerm t);
static ATerm n_5 (ATerm c_53, ATerm d_53, ATerm t);
static ATerm o_5 (ATerm u_29, ATerm v_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_34 (ATerm k_33, ATerm t);
static ATerm t_34 (ATerm v_33, ATerm w_33, ATerm x_33, ATerm t);
static ATerm u_34 (ATerm f_34, ATerm g_34, ATerm h_34, ATerm t);
static ATerm p_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_95 (ATerm), ATerm t);
static ATerm s_5 (ATerm o_40, ATerm p_40, ATerm t);
ATerm if_verbose2_1_0 (ATerm o_91 (ATerm), ATerm t);
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
static ATerm v_5 (ATerm n_33, ATerm o_33, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_5 (ATerm x_38, ATerm y_38, ATerm w_38, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_5 (ATerm f_36, ATerm g_36, ATerm t);
ATerm foldr_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_91 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm need_help_1_0 (ATerm i_110 (ATerm), ATerm t);
ATerm map_1_0 (ATerm v_94 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_112 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm parse_options_1_0 (ATerm k_112 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm iowrap_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
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
  t = term_c_8;
  t = whoami_0_0(t);
  i_0 = t;
  t = term_e_8;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_8), i_0), term_h_8);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_m_8;
  p_0 = t;
  t = SSL_exit(p_0);
  t = a_0;
  return(t);
}
ATerm all_rl_1_0 (ATerm s_80 (ATerm), ATerm t)
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
  t = reverse_map_1_0(s_80, t);
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
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_3;
        q_1 = t;
        t = SSLgetAnnotations(i_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(r_8) != AT_LIST) || !(ATisEmpty(r_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_3;
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        {
          ATerm s_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_3;
              q_1 = t;
              t = SSLgetAnnotations(i_3);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_8 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) v_8) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(w_8) != AT_LIST) || !(ATisEmpty(w_8))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = i_3;
              LocalPopChoice(t_8);
            }
          else
            {
              t = s_8;
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
  t = term_x_8;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_1);
  w_1 = t;
  t = term_z_8;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_8, (ATerm)ATmakeAppl(sym_Var_1, q_1), term_z_8);
  t = z_4(u_1, w_1, y_1, t);
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
      ATerm a_9 = ATgetFirst((ATermList) t);
      ATerm b_9 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
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
ATerm elim_guardedlchoice_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_2 = NULL;
  static ATerm o_0 (ATerm t)
  {
    ATerm a_4 = NULL,b_4 = NULL,e_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL,l_4 = NULL,m_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,t_4 = NULL,r_2 = NULL,g_2 = NULL;
    t_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        l_4 = ATgetArgument(t, 0);
        m_4 = ATgetArgument(t, 1);
        p_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_4);
    i_4 = t;
    t = m_4;
    t = o_80(t);
    q_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, l_4, q_4, p_4);
    g_2 = t;
    t = SSLsetAnnotations(g_2, i_4);
    r_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        b_4 = ATgetArgument(t, 0);
        e_4 = ATgetArgument(t, 1);
        f_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_4);
    a_4 = t;
    t = b_4;
    t = o_80(t);
    h_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_4, e_4, f_4);
    r_2 = t;
    t = SSLsetAnnotations(r_2, a_4);
    return(t);
  }
  static ATerm u_0 (ATerm t)
  {
    ATerm c_5 = NULL,g_5 = NULL,u_5 = NULL,w_5 = NULL,g_6 = NULL,i_6 = NULL,s_2 = NULL;
    i_6 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        g_5 = ATgetArgument(t, 0);
        u_5 = ATgetArgument(t, 1);
        w_5 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_6);
    c_5 = t;
    t = w_5;
    t = o_80(t);
    g_6 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, g_5, u_5, g_6);
    s_2 = t;
    t = SSLsetAnnotations(s_2, c_5);
    return(t);
  }
  z_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      v_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
      y_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_3);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_3, x_3, y_3);
  a_2 = t;
  t = SSLsetAnnotations(a_2, q_3);
  t = elim_abstract_choice_2_0(o_0, u_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,x_2 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,y_2 = NULL;
    r_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        o_6 = ATgetArgument(t, 0);
        p_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_6);
    n_6 = t;
    t = o_6;
    t = n_80(t);
    q_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_6, p_6);
    y_2 = t;
    t = SSLsetAnnotations(y_2, n_6);
    return(t);
  }
  static ATerm w_0 (ATerm t)
  {
    ATerm s_6 = NULL,t_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,z_2 = NULL;
    z_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        t_6 = ATgetArgument(t, 0);
        x_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_6);
    s_6 = t;
    t = x_6;
    t = n_80(t);
    y_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_6, y_6);
    z_2 = t;
    t = SSLsetAnnotations(z_2, s_6);
    return(t);
  }
  m_6 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, k_6, l_6);
  x_2 = t;
  t = SSLsetAnnotations(x_2, j_6);
  t = elim_abstract_choice_2_0(v_0, w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,u_8 = NULL;
  u_8 = t;
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
      t = j_8;
      {
        ATerm c_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_8 = ATgetFirst((ATermList) t);
                {
                  ATerm u_9 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_9);
            t = k_8;
            {
              ATerm w_9 = t;
              int y_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm z_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_9);
                  t = i_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = u_8;
                    }
                  else
                    {
                      ATerm a_10 = t;
                      int c_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_9(i_8, u_8, t);
                          LocalPopChoice(c_10);
                        }
                      else
                        {
                          t = a_10;
                          t = u_8;
                        }
                    }
                }
              else
                {
                  t = w_9;
                  t = i_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = u_8;
                    }
                  else
                    {
                      t = u_8;
                    }
                }
            }
          }
        else
          {
            t = c_9;
            t = i_8;
            if(match_cons(t, sym_Scopes_0))
              {
                t = u_8;
              }
            else
              {
                t = u_8;
              }
          }
      }
    }
  else
    {
      t = u_8;
    }
  return(t);
}
static ATerm d_9 (ATerm a_8, ATerm b_8, ATerm t)
{
  t = b_8;
  {
    ATerm d_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        t = term_x_8;
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_8, a_8);
        t = s_5(v_1, a_8, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_10 = ATgetFirst((ATermList) t);
            if(match_cons(n_10, sym_Defined_1))
              {
                ATerm q_10 = ATgetArgument(n_10, 0);
              }
            else
              _fail(t);
            {
              ATerm p_10 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_8;
        LocalPopChoice(l_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATmakeAppl(sym__2, a_8, (ATerm) ATinsert(ATempty, term_z_8));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm v_7 = NULL,y_7 = NULL,z_7 = NULL;
  t = map_1_0(x_0, t);
  v_7 = t;
  t = term_x_8;
  z_7 = t;
  t = SSL_table_destroy(z_7);
  t = term_x_8;
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, v_7);
  t = y_4(y_7, v_7, t);
  t = v_7;
  return(t);
}
static ATerm y_4 (ATerm a_40, ATerm z_39, ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL;
    if(match_cons(t, sym__2))
      {
        f_9 = ATgetArgument(t, 0);
        g_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(a_40, f_9, g_9);
    t = (ATerm) ATmakeAppl(sym__3, a_40, f_9, g_9);
    return(t);
  }
  t = z_39;
  t = map_1_0(a_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  static ATerm b_1 (ATerm t)
  {
    ATerm i_9 = NULL,j_9 = NULL;
    i_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_9), i_9);
    t = s_5(not_null(h_9), i_9, t);
    j_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_9, j_9);
    return(t);
  }
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  t = SSL_table_keys(h_9);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_x_8;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,q_9 = NULL,v_9 = NULL,x_9 = NULL,b_10 = NULL,e_10 = NULL;
  x_9 = t;
  t = save_ElimVar_0_0(t);
  n_9 = t;
  t = x_9;
  t = p_80(t);
  v_9 = t;
  t = save_ElimVar_0_0(t);
  o_9 = t;
  t = term_x_8;
  e_10 = t;
  t = SSL_table_destroy(e_10);
  t = term_x_8;
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, n_9);
  t = y_4(b_10, n_9, t);
  t = v_9;
  t = q_80(t);
  q_9 = t;
  t = o_9;
  t = isect_ElimVar_0_0(t);
  t = q_9;
  return(t);
}
ATerm elim_choice_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,d_3 = NULL;
  static ATerm c_1 (ATerm t)
  {
    ATerm j_10 = NULL,k_10 = NULL,o_10 = NULL,w_10 = NULL,x_10 = NULL,e_3 = NULL;
    x_10 = t;
    if(match_cons(t, sym_Choice_2))
      {
        k_10 = ATgetArgument(t, 0);
        o_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_10);
    j_10 = t;
    t = k_10;
    t = m_80(t);
    w_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, w_10, o_10);
    e_3 = t;
    t = SSLsetAnnotations(e_3, j_10);
    return(t);
  }
  static ATerm d_1 (ATerm t)
  {
    ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,e_11 = NULL,f_3 = NULL;
    e_11 = t;
    if(match_cons(t, sym_Choice_2))
      {
        z_10 = ATgetArgument(t, 0);
        a_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_11);
    y_10 = t;
    t = a_11;
    t = m_80(t);
    b_11 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, z_10, b_11);
    f_3 = t;
    t = SSLsetAnnotations(f_3, y_10);
    return(t);
  }
  i_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_10);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, g_10, h_10);
  d_3 = t;
  t = SSLsetAnnotations(d_3, f_10);
  t = elim_abstract_choice_2_0(c_1, d_1, t);
  return(t);
}
static ATerm z_4 (ATerm k_39, ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm f_11 = NULL,i_11 = NULL,l_11 = NULL;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_39, l_39);
  t = s_5(k_39, l_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_10 = ATgetFirst((ATermList) t);
      f_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_11), m_39);
  l_11 = t;
  t = SSL_table_put(k_39, l_39, l_11);
  t = i_11;
  return(t);
}
ATerm alltd_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm m_11 (ATerm t)
  {
    ATerm h_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_84(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = h_11;
        t = SRTS_all(m_11, t);
      }
    return(t);
  }
  t = m_11(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  o_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_12 = ATgetFirst((ATermList) t);
      n_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL,l_2 = NULL,m_2 = NULL,o_3 = NULL,n_3 = NULL;
        t = SSLgetAnnotations(o_12);
        i_2 = t;
        t = n_12;
        t = reverse_map_1_0(y_94, t);
        l_2 = t;
        t = (ATerm) ATinsert(CheckATermList(l_2), m_12);
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
        t = y_94(t);
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
      t = o_12;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,d_13 = NULL,g_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_13 = ATgetArgument(t, 0);
      {
        ATerm k_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, b_13);
  d_13 = t;
  t = term_z_8;
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_13), term_z_8);
  t = e_5(h_1, d_13, g_13, t);
  t = a_13;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm b_5 (ATerm t_80 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,v_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,s_3 = NULL;
    z_12 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        r_12 = ATgetArgument(t, 0);
        s_12 = ATgetArgument(t, 1);
        t_12 = ATgetArgument(t, 2);
        v_12 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_12);
    q_12 = t;
    t = t_12;
    t = map_1_0(g_1, t);
    x_12 = t;
    t = v_12;
    t = t_80(t);
    y_12 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, r_12, s_12, x_12, y_12);
    s_3 = t;
    t = SSLsetAnnotations(s_3, q_12);
    return(t);
  }
  t = scope_2_0(e_1, f_1, t);
  return(t);
}
static ATerm d_5 (ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm h_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_39, j_39);
  t = s_5(i_39, j_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_13 = ATgetFirst((ATermList) t);
      {
        ATerm n_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_13;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm o_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_4 = NULL;
        t = term_x_8;
        k_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_8, e_15);
        t = d_5(k_4, e_15, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = e_15;
        _fail(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = p_11;
        {
          ATerm y_11 = t;
          int z_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 = NULL;
              t = term_x_8;
              x_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_8, e_15);
              t = d_5(x_4, e_15, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = e_15;
              _fail(t);
              LocalPopChoice(z_11);
            }
          else
            {
              t = y_11;
              {
                ATerm a_12 = t;
                int b_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_6 = NULL;
                    t = term_x_8;
                    a_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_8, e_15);
                    t = d_5(a_6, e_15, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = e_15;
                    _fail(t);
                    LocalPopChoice(b_12);
                  }
                else
                  {
                    t = a_12;
                    {
                      ATerm h_6 = NULL;
                      t = term_x_8;
                      h_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_x_8, e_15);
                      t = d_5(h_6, e_15, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm d_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) d_12) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_f_12;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,k_16 = NULL,l_16 = NULL;
  i_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_16;
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
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 = NULL,e_7 = NULL,f_7 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(i_16);
            b_7 = t;
            t = k_16;
            t = o_101(t);
            e_7 = t;
            t = l_16;
            t = filter_1_0(o_101, t);
            f_7 = t;
            t = (ATerm) ATinsert(CheckATermList(f_7), e_7);
            u_3 = t;
            t = SSLsetAnnotations(u_3, b_7);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = l_16;
            t = filter_1_0(o_101, t);
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm g_94 (ATerm), ATerm t_37, ATerm r_37, ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,g_17 = NULL;
  d_17 = t;
  t = g_94(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_16, t_37, r_37);
  t = t_5(y_16, t_37, r_37, t);
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_17 = NULL;
        t = term_l_12;
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, term_l_12);
        t = s_5(y_16, k_17, t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_16 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_12;
  e_17 = t;
  t = (ATerm) ATinsert(CheckATermList(c_17), (ATerm) ATinsert(CheckATermList(z_16), t_37));
  g_17 = t;
  t = SSL_table_put(y_16, e_17, g_17);
  t = d_17;
  return(t);
}
static ATerm f_5 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  r_17 = t;
  {
    ATerm p_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
        t = s_5(c_39, d_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_13 = ATgetFirst((ATermList) t);
            q_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_12);
        t = SSL_table_put(c_39, d_39, q_17);
        t = (ATerm) ATmakeAppl(sym__3, c_39, d_39, q_17);
      }
    else
      {
        t = p_12;
        t = SSL_table_remove(c_39, d_39);
        t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
      }
  }
  t = r_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  b_18 = t;
  t = d_94(t);
  a_18 = t;
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        t = term_l_12;
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_18, term_l_12);
        t = s_5(a_18, d_18, t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_17 = ATgetFirst((ATermList) t);
      s_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_12;
  c_18 = t;
  t = SSL_table_put(a_18, c_18, s_17);
  t = z_17;
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm e_18 = NULL;
      e_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_18, e_18);
      t = f_5(a_18, e_18, t);
      return(t);
    }
    t = map_1_0(i_1, t);
  }
  t = b_18;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_85(t);
      t = v_85(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      t = v_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  o_18 = t;
  t = c_94(t);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_18, term_l_12);
  {
    ATerm k_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_13 = ATgetArgument(t, 0);
            ATerm b_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_12;
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_18, term_l_12);
        t = s_5(i_18, i_19, t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = k_13;
        t = (ATerm) ATempty;
      }
  }
  p_18 = t;
  t = term_l_12;
  q_18 = t;
  t = (ATerm) ATinsert(CheckATermList(p_18), (ATerm) ATempty);
  r_18 = t;
  t = SSL_table_put(i_18, q_18, r_18);
  t = o_18;
  return(t);
}
ATerm scope_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    t = end_scope_1_0(e_94, t);
    return(t);
  }
  t = begin_scope_1_0(e_94, t);
  t = restore_always_2_0(f_94, k_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_25);
  i_25 = t;
  t = term_d_14;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, h_25), term_d_14);
  t = e_5(s_1, i_25, j_25, t);
  t = h_25;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm e_14 = t;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL;
      k_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_25);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_14;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  q_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_x_8;
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_7);
  t_7 = t;
  t = term_z_8;
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_8, (ATerm)ATmakeAppl(sym_Var_1, r_7), term_z_8);
  t = z_4(s_7, t_7, u_7, t);
  t = q_7;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = alltd_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm m_9 = NULL,p_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  m_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_x_8;
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_9);
  s_9 = t;
  t = term_z_8;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_8, (ATerm)ATmakeAppl(sym_Var_1, p_9), term_z_8);
  t = z_4(r_9, s_9, t_9, t);
  t = m_9;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = alltd_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,c_11 = NULL,d_11 = NULL,g_11 = NULL;
  u_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_x_8;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_10);
  d_11 = t;
  t = term_z_8;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_8, (ATerm)ATmakeAppl(sym_Var_1, v_10), term_z_8);
  t = z_4(c_11, d_11, g_11, t);
  t = u_10;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,r_11 = NULL;
  a_14 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_14);
  x_13 = t;
  t = y_13;
  t = map_1_0(dead_var_elim_0_0, t);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_13);
  r_11 = t;
  t = SSLsetAnnotations(r_11, x_13);
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
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm s_26 (ATerm t)
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_23 = NULL,a_24 = NULL,e_24 = NULL,g_24 = NULL;
            a_24 = t;
            {
              ATerm t_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      ATerm x_14 = ATgetArgument(t, 0);
                      ATerm y_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_14);
                  {
                    static ATerm o_1 (ATerm t)
                    {
                      ATerm l_24 = NULL,m_24 = NULL,r_24 = NULL,s_24 = NULL,w_24 = NULL,x_24 = NULL,a_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,g_25 = NULL,b_6 = NULL,a_5 = NULL;
                      g_25 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          x_24 = ATgetArgument(t, 0);
                          a_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(g_25);
                      w_24 = t;
                      t = x_24;
                      t = map_1_0(r_1, t);
                      c_25 = t;
                      t = a_25;
                      t = s_26(t);
                      d_25 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, c_25, d_25);
                      a_5 = t;
                      t = SSLsetAnnotations(a_5, w_24);
                      e_25 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          m_24 = ATgetArgument(t, 0);
                          r_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(e_25);
                      l_24 = t;
                      t = m_24;
                      t = filter_1_0(t_1, t);
                      s_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, s_24, r_24);
                      b_6 = t;
                      t = SSLsetAnnotations(b_6, l_24);
                      return(t);
                    }
                    t = a_24;
                    t = scope_2_0(n_1, o_1, t);
                  }
                }
              else
                {
                  t = t_14;
                  {
                    ATerm z_14 = t;
                    int a_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm b_15 = ATgetArgument(t, 0);
                            ATerm c_15 = ATgetArgument(t, 1);
                            ATerm f_15 = ATgetArgument(t, 2);
                            ATerm g_15 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(a_15);
                        t = a_24;
                        t = b_5(s_26, t);
                      }
                    else
                      {
                        t = z_14;
                        if(match_cons(t, sym_Build_1))
                          {
                            e_24 = ATgetArgument(t, 0);
                            {
                              ATerm m_7 = NULL,o_7 = NULL,u_6 = NULL;
                              t = SSLgetAnnotations(a_24);
                              m_7 = t;
                              t = e_24;
                              t = alltd_1_0(x_1, t);
                              o_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, o_7);
                              u_6 = t;
                              t = SSLsetAnnotations(u_6, m_7);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                e_24 = ATgetArgument(t, 0);
                                g_24 = ATgetArgument(t, 1);
                                x_23 = ATgetArgument(t, 2);
                                {
                                  ATerm p_8 = NULL,y_8 = NULL,k_9 = NULL,d_8 = NULL;
                                  t = SSLgetAnnotations(a_24);
                                  p_8 = t;
                                  t = g_24;
                                  t = reverse_map_1_0(s_26, t);
                                  y_8 = t;
                                  t = x_23;
                                  t = reverse_map_1_0(z_1, t);
                                  k_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, e_24, y_8, k_9);
                                  d_8 = t;
                                  t = SSLsetAnnotations(d_8, p_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    e_24 = ATgetArgument(t, 0);
                                    g_24 = ATgetArgument(t, 1);
                                    x_23 = ATgetArgument(t, 2);
                                    {
                                      ATerm m_10 = NULL,r_10 = NULL,s_10 = NULL,f_8 = NULL;
                                      t = SSLgetAnnotations(a_24);
                                      m_10 = t;
                                      t = g_24;
                                      t = reverse_map_1_0(s_26, t);
                                      r_10 = t;
                                      t = x_23;
                                      t = reverse_map_1_0(c_2, t);
                                      s_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, e_24, r_10, s_10);
                                      f_8 = t;
                                      t = SSLsetAnnotations(f_8, m_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm t_11 = NULL,u_11 = NULL,x_11 = NULL,c_12 = NULL,e_12 = NULL,i_12 = NULL,u_12 = NULL,e_9 = NULL,g_8 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        e_24 = ATgetArgument(t, 0);
                                        g_24 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(a_24);
                                    e_12 = t;
                                    t = g_24;
                                    t = s_26(t);
                                    i_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, e_24, i_12);
                                    g_8 = t;
                                    t = SSLsetAnnotations(g_8, e_12);
                                    u_12 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        u_11 = ATgetArgument(t, 0);
                                        x_11 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(u_12);
                                    t_11 = t;
                                    t = u_11;
                                    t = s_26(t);
                                    c_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, x_11);
                                    e_9 = t;
                                    t = SSLsetAnnotations(e_9, t_11);
                                  }
                              }
                          }
                      }
                  }
                }
            }
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm i_15 = t;
              int m_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(s_26, t);
                  LocalPopChoice(m_15);
                }
              else
                {
                  t = i_15;
                  {
                    ATerm n_15 = t;
                    int s_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = elim_lchoice_1_0(s_26, t);
                        LocalPopChoice(s_15);
                      }
                    else
                      {
                        t = n_15;
                        {
                          ATerm w_15 = t;
                          int y_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(s_26, t);
                              LocalPopChoice(y_15);
                            }
                          else
                            {
                              t = w_15;
                              {
                                ATerm z_15 = t;
                                int a_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EliminateFromMatch_0_0(t);
                                    LocalPopChoice(a_16);
                                  }
                                else
                                  {
                                    t = z_15;
                                    t = all_rl_1_0(s_26, t);
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
      t = s_26(t);
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm q_26 = NULL,r_26 = NULL,l_13 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_11 = NULL,v_11 = NULL,q_11 = NULL;
        q_26 = t;
        if(match_cons(t, sym_Specification_1))
          {
            r_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_26);
        l_13 = t;
        t = r_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_13 = ATgetFirst((ATermList) t);
            q_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_26);
        n_13 = t;
        t = o_13;
        if(match_cons(t, sym_Signature_1))
          {
            u_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_13);
        t_13 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, u_13);
        q_11 = t;
        t = SSLsetAnnotations(q_11, t_13);
        v_13 = t;
        t = q_13;
        t = Cons_2_0(k_2, n_2, t);
        r_13 = t;
        t = (ATerm) ATinsert(CheckATermList(r_13), v_13);
        v_11 = t;
        t = SSLsetAnnotations(v_11, n_13);
        s_13 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, s_13);
        w_11 = t;
        t = SSLsetAnnotations(w_11, l_13);
      }
    }
  return(t);
}
static ATerm i_5 (ATerm s_29, ATerm t_29, ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_fputc(s_29, t_29);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_27);
  return(t);
}
static ATerm j_5 (ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_write_term_to_stream_text(k_28, l_28);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
  return(t);
}
static ATerm l_5 (ATerm x_89 (ATerm), ATerm u_205, ATerm q_28, ATerm t)
{
  ATerm g_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_205, term_b_16);
  t = p_5(t);
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_27, q_28);
  t = x_89(t);
  t = fclose_0_0(t);
  t = q_28;
  return(t);
}
static ATerm k_5 (ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm h_27 = NULL;
  t = SSL_write_term_to_stream_baf(g_28, h_28);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_27);
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
  ATerm o_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if(match_cons(d_16, sym_Stream_1))
        {
          o_14 = ATgetArgument(d_16, 0);
        }
      else
        _fail(t);
      s_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(o_14, s_14, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if(match_cons(e_16, sym_Stream_1))
        {
          u_15 = ATgetArgument(e_16, 0);
        }
      else
        _fail(t);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(u_15, v_15, t);
  p_15 = t;
  t = term_g_16;
  q_15 = t;
  t = p_15;
  if(match_cons(t, sym_Stream_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, p_15);
  t = i_5(q_15, t_15, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_27 = NULL,t_27 = NULL,u_27 = NULL,z_27 = NULL,a_28 = NULL,n_28 = NULL,o_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,e_31 = NULL,f_31 = NULL,j_14 = NULL,p_13 = NULL;
  t_27 = t;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_27);
  o_28 = t;
  t = t_28;
  {
    ATerm j_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_2, t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = j_16;
        t = term_n_16;
        q_27 = t;
      }
  }
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_28, u_28);
  p_13 = t;
  t = SSLsetAnnotations(p_13, o_28);
  t = t_27;
  if(match_cons(t, sym__2))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_27);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_27, (ATerm) ATmakeAppl(sym__2, not_null(q_27), a_28));
  j_14 = t;
  t = SSLsetAnnotations(j_14, u_27);
  n_28 = t;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,i_14 = NULL,k_14 = NULL,m_14 = NULL,n_14 = NULL,l_14 = NULL;
        t = SSLgetAnnotations(n_28);
        f_14 = t;
        t = e_31;
        t = fetch_1_0(p_2, t);
        i_14 = t;
        t = f_31;
        if(match_cons(t, sym__2))
          {
            m_14 = ATgetArgument(t, 0);
            n_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(q_2, m_14, n_14, t);
        k_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_14, k_14);
        l_14 = t;
        t = SSLsetAnnotations(l_14, f_14);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm d_15 = NULL,h_15 = NULL,l_15 = NULL,o_15 = NULL,p_14 = NULL;
          t = SSLgetAnnotations(n_28);
          d_15 = t;
          t = f_31;
          if(match_cons(t, sym__2))
            {
              l_15 = ATgetArgument(t, 0);
              o_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_5(t_2, l_15, o_15, t);
          h_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_31, h_15);
          p_14 = t;
          t = SSLsetAnnotations(p_14, d_15);
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
ATerm apply_strategy_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,n_31 = NULL,p_31 = NULL;
  p_31 = t;
  t = dtime_0_0(t);
  t = p_31;
  t = k_109(t);
  n_31 = t;
  t = dtime_0_0(t);
  i_31 = t;
  t = n_31;
  if(match_cons(t, sym__2))
    {
      j_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_31), (ATerm) ATmakeAppl(sym_Runtime_1, i_31)), k_31);
  return(t);
}
static ATerm s_32 (ATerm d_32, ATerm t)
{
  t = SSL_fclose(d_32);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_32 = ATgetArgument(t, 0);
      {
        ATerm q_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_32);
            LocalPopChoice(t_16);
          }
        else
          {
            t = q_16;
            t = s_32(k_32, t);
          }
      }
    }
  else
    {
      t = s_32(k_32, t);
    }
  return(t);
}
static ATerm m_5 (ATerm m_28, ATerm t)
{
  t = SSL_read_term_from_stream(m_28);
  return(t);
}
static ATerm n_5 (ATerm c_53, ATerm d_53, ATerm t)
{
  t = SSL_strcat(c_53, d_53);
  return(t);
}
static ATerm o_5 (ATerm u_29, ATerm v_29, ATerm t)
{
  ATerm t_32 = NULL;
  t = SSL_fopen(u_29, v_29);
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_32 = NULL;
  t = SSL_stdin_stream();
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_33 = NULL;
  t = SSL_stdout_stream();
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_33);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_33 = NULL;
  t = SSL_stderr_stream();
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_33);
  return(t);
}
static ATerm s_34 (ATerm k_33, ATerm t)
{
  ATerm l_33 = NULL;
  t = SSL_explode_term(k_33);
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_16 = ATgetArgument(t, 1);
        if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
          {
            l_33 = ATgetFirst((ATermList) v_16);
            {
              ATerm w_16 = (ATerm) ATgetNext((ATermList) v_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_33;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_33;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_33;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_33;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_34 (ATerm v_33, ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,d_34 = NULL,v_14 = NULL;
  t = SSLgetAnnotations(x_33);
  a_34 = t;
  t = v_33;
  if(match_cons(t, sym_Path_1))
    {
      d_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_34, w_33);
  v_14 = t;
  t = SSLsetAnnotations(v_14, a_34);
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      z_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(y_33, z_33, t);
  return(t);
}
static ATerm u_34 (ATerm f_34, ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,n_34 = NULL,w_14 = NULL;
  t = SSLgetAnnotations(h_34);
  k_34 = t;
  t = SSL_is_string(f_34);
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_34, g_34);
  w_14 = t;
  t = SSLsetAnnotations(w_14, k_34);
  if(match_cons(t, sym__2))
    {
      i_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(i_34, j_34, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  if(match_cons(t, sym__2))
    {
      q_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
      {
        ATerm x_16 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_34(p_34, t);
            LocalPopChoice(b_17);
          }
        else
          {
            t = x_16;
            {
              ATerm f_17 = t;
              int i_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_34(q_34, r_34, p_34, t);
                  LocalPopChoice(i_17);
                }
              else
                {
                  t = f_17;
                  t = u_34(q_34, r_34, p_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_34(p_34, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,d_35 = NULL;
  d_35 = t;
  {
    ATerm j_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_35, term_m_17);
        t = p_5(t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = j_17;
        {
          ATerm r_16 = NULL,s_16 = NULL;
          t = term_n_17;
          s_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_17, d_35);
          t = n_5(s_16, d_35, t);
          r_16 = t;
          t = SSL_perror(r_16);
          _fail(t);
        }
      }
  }
  x_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(y_34, t);
  w_34 = t;
  t = x_34;
  t = fclose_0_0(t);
  t = w_34;
  return(t);
}
ATerm fetch_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  static ATerm c_36 (ATerm t)
  {
    ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
    z_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_36 = ATgetFirst((ATermList) t);
        b_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_17 = NULL,h_17 = NULL,j_15 = NULL;
          t = SSLgetAnnotations(z_35);
          a_17 = t;
          t = a_36;
          t = f_95(t);
          h_17 = t;
          t = (ATerm) ATinsert(CheckATermList(b_36), h_17);
          j_15 = t;
          t = SSLsetAnnotations(j_15, a_17);
          LocalPopChoice(p_17);
        }
      else
        {
          t = o_17;
          {
            ATerm t_17 = NULL,w_17 = NULL,k_15 = NULL;
            t = SSLgetAnnotations(z_35);
            t_17 = t;
            t = b_36;
            t = c_36(t);
            w_17 = t;
            t = (ATerm) ATinsert(CheckATermList(w_17), a_36);
            k_15 = t;
            t = SSLsetAnnotations(k_15, t_17);
          }
        }
    }
    return(t);
  }
  t = c_36(t);
  return(t);
}
static ATerm s_5 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSL_table_get(o_40, p_40);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_91 (ATerm), ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
        t = term_x_17;
        l_36 = t;
        t = term_y_17;
        m_36 = t;
        t = term_f_18;
        t = s_5(l_36, m_36, t);
        k_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_36, term_g_18);
        t = geq_0_0(t);
        t = i_36;
        t = o_91(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = i_36;
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  if(match_string(t, "-k"))
    {
      t = p_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_36;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  t = SSL_string_to_int(q_36);
  r_36 = t;
  t = term_l_18;
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_18, r_36);
  t = v_5(s_36, r_36, t);
  t = q_36;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  if(match_string(t, "-S"))
    {
      t = u_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_36;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  t = term_y_17;
  v_36 = t;
  t = term_t_18;
  w_36 = t;
  t = term_u_18;
  t = v_5(v_36, w_36, t);
  t = term_v_18;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_w_18;
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
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  t = SSL_string_to_int(x_36);
  y_36 = t;
  t = term_y_17;
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, y_36);
  t = v_5(z_36, y_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_36);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_x_18;
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
  ATerm a_37 = NULL,b_37 = NULL;
  t = term_y_18;
  a_37 = t;
  t = term_c_8;
  b_37 = t;
  t = term_z_18;
  t = v_5(a_37, b_37, t);
  t = term_a_19;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_3, b_3, c_3, t);
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_3, h_3, k_3, t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = Option_3_0(p_3, r_3, t_3, t);
          }
      }
    }
  return(t);
}
static ATerm v_5 (ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm c_37 = NULL;
  t = term_x_17;
  c_37 = t;
  t = SSL_table_put(c_37, n_33, o_33);
  t = (ATerm) ATmakeAppl(sym__3, term_x_17, n_33, o_33);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
      t = term_c_8;
      t = e_0(t);
      h_37 = t;
      t = term_h_19;
      i_37 = t;
      t = term_j_19;
      j_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_19, term_j_19, h_37);
      t = t_5(i_37, j_37, h_37, t);
      _fail(t);
    }
  else
    {
      ATerm x_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_37 = ATgetFirst((ATermList) t);
          g_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_37;
      t = c_0(t);
      t = term_c_8;
      t = d_0(t);
      x_37 = t;
      t = (ATerm) ATinsert(CheckATermList(g_37), x_37);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  if(match_string(t, "-o"))
    {
      t = a_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_38;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  b_38 = t;
  t = term_k_19;
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, b_38);
  t = v_5(c_38, b_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_38);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, c_4, d_4, t);
  return(t);
}
static ATerm t_5 (ATerm x_38, ATerm y_38, ATerm w_38, ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_19 = ATgetArgument(t, 0);
            ATerm q_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
        t = s_5(x_38, y_38, t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATempty;
      }
  }
  f_38 = t;
  t = (ATerm) ATinsert(CheckATermList(f_38), w_38);
  g_38 = t;
  t = SSL_table_put(x_38, y_38, g_38);
  t = e_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
      t = term_c_8;
      t = l_0(t);
      r_38 = t;
      t = term_h_19;
      s_38 = t;
      t = term_j_19;
      t_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_19, term_j_19, r_38);
      t = t_5(s_38, t_38, r_38, t);
      _fail(t);
    }
  else
    {
      ATerm a_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_38 = ATgetFirst((ATermList) t);
          o_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_38 = ATgetFirst((ATermList) t);
          q_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_38;
      t = h_0(t);
      t = p_38;
      t = j_0(t);
      a_39 = t;
      t = (ATerm) ATinsert(CheckATermList(q_38), a_39);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  if(match_string(t, "-i"))
    {
      t = f_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_39;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  t = term_r_19;
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, g_39);
  t = v_5(h_39, g_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_39);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, j_4, n_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_8;
  t = whoami_0_0(t);
  o_39 = t;
  t = term_e_8;
  q_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_19), o_39);
  r_39 = t;
  t = SSL_printnl(q_39, r_39);
  t = term_m_8;
  p_39 = t;
  t = SSL_exit(p_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  t = term_x_17;
  s_39 = t;
  t = term_w_19;
  t_39 = t;
  t = term_x_19;
  t = s_5(s_39, t_39, t);
  return(t);
}
static ATerm q_5 (ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_36, g_36);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      t = SSL_addr(f_36, g_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,d_40 = NULL;
  v_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_39;
      t = k_100(t);
    }
  else
    {
      ATerm g_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_39 = ATgetFirst((ATermList) t);
          d_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_40;
      t = foldr_2_0(k_100, l_100, t);
      g_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_39, g_40);
      t = l_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(m_18, n_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_40 = NULL,h_18 = NULL,j_18 = NULL;
  t = times_0_0(t);
  j_18 = t;
  t = SSL_explode_term(j_18);
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_18;
  t = foldr_2_0(o_4, s_4, t);
  j_40 = t;
  t = SSL_TicksToSeconds(j_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_40;
        if((x_40 != t))
          {
            _fail(t);
          }
        t = w_40;
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = (ATerm) ATmakeAppl(sym__2, x_40, y_40);
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_40, y_40);
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
              t = SSL_gtr(x_40, y_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_40, y_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
        t = term_x_17;
        f_41 = t;
        t = term_y_17;
        g_41 = t;
        t = term_f_18;
        t = s_5(f_41, g_41, t);
        e_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_41, term_m_8);
        t = geq_0_0(t);
        t = c_41;
        t = n_91(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = c_41;
      }
  }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,l_41 = NULL,m_41 = NULL;
  t = run_time_0_0(t);
  i_41 = t;
  t = term_c_8;
  t = whoami_0_0(t);
  j_41 = t;
  t = term_e_8;
  l_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_20), i_41), term_l_20), j_41);
  m_41 = t;
  t = SSL_printnl(l_41, m_41);
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_20), i_41), term_l_20), j_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_18;
  n_41 = t;
  t = SSL_exit(n_41);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  y_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_41 = ATgetArgument(t, 0);
          {
            ATerm g_19 = NULL,r_15 = NULL;
            t = SSLgetAnnotations(y_41);
            g_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_41);
            r_15 = t;
            t = SSLsetAnnotations(r_15, g_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm n_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_41 = NULL,r_41 = NULL;
      t = term_x_17;
      q_41 = t;
      t = term_r_20;
      r_41 = t;
      t = term_s_20;
      t = s_5(q_41, r_41, t);
      LocalPopChoice(q_20);
    }
  else
    {
      t = n_20;
      t = fetch_1_0(v_4, t);
    }
  t = i_110(t);
  return(t);
}
ATerm map_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  static ATerm q_42 (ATerm t)
  {
    ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
    n_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_42;
      }
    else
      {
        ATerm p_19 = NULL,s_19 = NULL,t_19 = NULL,x_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_42 = ATgetFirst((ATermList) t);
            p_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_42);
        p_19 = t;
        t = o_42;
        t = v_94(t);
        s_19 = t;
        t = p_42;
        t = q_42(t);
        t_19 = t;
        t = (ATerm) ATinsert(CheckATermList(t_19), s_19);
        x_15 = t;
        t = SSLsetAnnotations(x_15, p_19);
      }
    return(t);
  }
  t = q_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_42 = ATgetFirst((ATermList) t);
      u_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_42 = NULL,z_42 = NULL;
        static ATerm w_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_42)), not_null(z_42));
          return(t);
        }
        t = u_42;
        t = g_0(t);
        if(((y_42 != NULL) && (y_42 != t)))
          _fail(t);
        else
          y_42 = t;
        t = t_42;
        t = f_0(t);
        if(((z_42 != NULL) && (z_42 != t)))
          _fail(t);
        else
          z_42 = t;
        t = u_42;
        t = reverse_acc_2_0(f_0, w_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_8;
      t = g_0(t);
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,c_16 = NULL;
  h_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_43);
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_43);
  c_16 = t;
  t = SSLsetAnnotations(c_16, f_43);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm j_43 = NULL;
  j_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_43), term_u_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_43 = NULL,e_43 = NULL;
      t = term_x_17;
      d_43 = t;
      t = term_w_19;
      e_43 = t;
      t = term_x_19;
      t = s_5(d_43, e_43, t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = fetch_1_0(h_5, t);
    }
  t = term_x_20;
  t = echo_0_0(t);
  t = term_h_19;
  b_43 = t;
  t = term_j_19;
  c_43 = t;
  t = term_y_20;
  t = s_5(b_43, c_43, t);
  t = reverse_acc_2_0(_id, r_5, t);
  t = map_1_0(x_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_21 = ATgetFirst((ATermList) t);
                ATerm c_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_43;
          }
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = (ATerm) ATinsert(ATempty, l_43);
      }
  }
  m_43 = t;
  t = term_n_16;
  n_43 = t;
  t = SSL_printnl(n_43, m_43);
  t = l_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL;
  t = term_x_17;
  r_43 = t;
  t = term_w_19;
  s_43 = t;
  t = term_x_19;
  t = s_5(r_43, s_43, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  t = term_d_21;
  t_43 = t;
  t = term_c_8;
  u_43 = t;
  t = term_e_21;
  t = v_5(t_43, u_43, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_f_21;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL;
  t = term_d_21;
  x_43 = t;
  t = term_c_8;
  y_43 = t;
  t = term_e_21;
  t = v_5(x_43, y_43, t);
  t = term_g_21;
  v_43 = t;
  t = term_c_8;
  w_43 = t;
  t = term_h_21;
  t = v_5(v_43, w_43, t);
  t = term_i_21;
  return(t);
}
static ATerm f_6 (ATerm t)
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
      t = Option_3_0(y_5, z_5, c_6, t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      t = Option_3_0(d_6, e_6, f_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_16 = NULL;
  e_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_44 = ATgetFirst((ATermList) t);
      b_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_44);
  z_43 = t;
  t = a_44;
  t = d_68(t);
  c_44 = t;
  t = b_44;
  t = e_68(t);
  d_44 = t;
  t = (ATerm) ATinsert(CheckATermList(d_44), c_44);
  f_16 = t;
  t = SSLsetAnnotations(f_16, z_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,p_44 = NULL,q_44 = NULL,h_16 = NULL;
  k_44 = t;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_21;
        t = l_112(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
      }
  }
  t = k_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_44 = ATgetFirst((ATermList) t);
      n_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_44);
  l_44 = t;
  t = term_w_19;
  q_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, m_44);
  t = v_5(q_44, m_44, t);
  t = n_44;
  {
    static ATerm a_45 (ATerm t)
    {
      ATerm p_21 = t;
      int q_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_44 = NULL;
              t_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_44;
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = l_112(t);
              t = Cons_2_0(_id, a_45, t);
            }
          LocalPopChoice(q_21);
        }
      else
        {
          t = p_21;
          {
            ATerm w_44 = NULL,x_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_44 = ATgetFirst((ATermList) t);
                x_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_44), (ATerm) ATmakeAppl(sym_Undefined_1, w_44));
          }
        }
      return(t);
    }
    t = a_45(t);
  }
  p_44 = t;
  t = (ATerm) ATinsert(CheckATermList(p_44), (ATerm) ATmakeAppl(sym_Program_1, m_44));
  h_16 = t;
  t = SSLsetAnnotations(h_16, l_44);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  if(match_string(t, "--help"))
    {
      t = o_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_45;
        }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  t = term_r_20;
  p_45 = t;
  t = term_c_8;
  q_45 = t;
  t = term_t_21;
  t = v_5(p_45, q_45, t);
  t = term_u_21;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  h_45 = t;
  t = term_h_19;
  l_45 = t;
  t = term_j_19;
  m_45 = t;
  t = (ATerm) ATempty;
  n_45 = t;
  t = SSL_table_put(l_45, m_45, n_45);
  t = h_45;
  {
    static ATerm v_6 (ATerm t)
    {
      ATerm w_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_112(t);
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
                t = Option_3_0(w_6, a_7, c_7, t);
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
    t = parse_options_p__1_0(v_6, t);
  }
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_46 = NULL;
        b_46 = t;
        {
          ATerm c_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_20 = NULL;
              t = b_46;
              {
                ATerm e_22 = t;
                int f_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_20 = NULL,e_20 = NULL;
                    t = term_x_17;
                    d_20 = t;
                    t = term_r_20;
                    e_20 = t;
                    t = term_s_20;
                    t = s_5(d_20, e_20, t);
                    LocalPopChoice(f_22);
                  }
                else
                  {
                    t = e_22;
                    t = fetch_1_0(d_7, t);
                  }
              }
              t = b_46;
              t = default_system_usage_0_0(t);
              t = term_t_18;
              a_20 = t;
              t = SSL_exit(a_20);
              LocalPopChoice(d_22);
            }
          else
            {
              t = c_22;
              {
                ATerm o_20 = NULL,p_20 = NULL,t_20 = NULL;
                t = term_x_17;
                p_20 = t;
                t = term_d_21;
                t_20 = t;
                t = term_g_22;
                t = s_5(p_20, t_20, t);
                t = b_46;
                t = default_system_about_0_0(t);
                t = term_t_18;
                o_20 = t;
                t = SSL_exit(o_20);
              }
            }
        }
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
              static ATerm g_7 (ATerm t)
              {
                ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,k_18 = NULL;
                h_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_46);
                f_46 = t;
                t = g_46;
                if(((f_45 != NULL) && (f_45 != t)))
                  _fail(t);
                else
                  f_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_46);
                k_18 = t;
                t = SSLsetAnnotations(k_18, f_46);
                return(t);
              }
              t = fetch_1_0(g_7, t);
              t = term_e_8;
              d_46 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_45)), term_j_22);
              e_46 = t;
              t = SSL_printnl(d_46, e_46);
              t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_45)), term_j_22));
              t = default_system_usage_0_0(t);
              t = term_m_8;
              c_46 = t;
              t = SSL_exit(c_46);
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
            }
        }
      }
  }
  g_45 = t;
  t = term_h_19;
  k_45 = t;
  t = SSL_table_destroy(k_45);
  t = g_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  t = parse_options_1_0(k_110, t);
  m_46 = t;
  t = term_k_22;
  p_46 = t;
  t = SSL_table_create(p_46);
  t = term_k_22;
  n_46 = t;
  t = term_l_22;
  o_46 = t;
  t = SSL_table_put(n_46, o_46, m_46);
  t = m_46;
  t = m_110(t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_110, t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          ATerm o_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_110(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_22);
            }
          else
            {
              t = o_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = if_verbose2_1_0(p_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  t = term_q_22;
  q_46 = t;
  t = term_c_8;
  r_46 = t;
  t = term_r_22;
  t = v_5(q_46, r_46, t);
  t = term_s_22;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  s_46 = t;
  t = term_x_17;
  w_46 = t;
  t = term_w_19;
  x_46 = t;
  t = term_x_19;
  t = s_5(w_46, x_46, t);
  t_46 = t;
  t = term_e_8;
  u_46 = t;
  t = (ATerm) ATinsert(ATempty, t_46);
  v_46 = t;
  t = SSL_printnl(u_46, v_46);
  t = s_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t)
{
  static ATerm h_7 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_109(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm w_22 = t;
          int x_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(x_22);
            }
          else
            {
              t = w_22;
              {
                ATerm y_22 = t;
                int z_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(z_22);
                  }
                else
                  {
                    t = y_22;
                    {
                      ATerm a_23 = t;
                      int b_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_7, l_7, n_7, t);
                          LocalPopChoice(b_23);
                        }
                      else
                        {
                          t = a_23;
                          {
                            ATerm c_23 = t;
                            int d_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(d_23);
                              }
                            else
                              {
                                t = c_23;
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
  static ATerm j_7 (ATerm t)
  {
    ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
    z_46 = t;
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_46 != NULL) && (y_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_7, t);
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          t = term_g_23;
          y_46 = t;
        }
    }
    t = not_null(y_46);
    t = ReadFromFile_0_0(t);
    a_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
    t = apply_strategy_1_0(t_109, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(h_7, v_109, i_7, j_7, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,b_20 = NULL;
  f_47 = t;
  if(match_cons(t, sym__2))
    {
      c_47 = ATgetArgument(t, 0);
      d_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_47);
  b_47 = t;
  t = d_47;
  t = dead_var_elim_0_0(t);
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_47, e_47);
  b_20 = t;
  t = SSLsetAnnotations(b_20, b_47);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_7, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_Prefix_2;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_k_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_a_22;
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
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_r_18;
ATerm term_i_18;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_v_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_f_13;
ATerm term_j_12;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_14);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_k_8);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_v_19);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_k_8);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_k_8);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_k_8);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_u_22, term_k_8);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm all_rl_1_0 (ATerm h_79 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm d_79 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm c_79 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm c_9 (ATerm p_7, ATerm r_7, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm f_5 (ATerm a_40, ATerm z_39, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm b_79 (ATerm), ATerm t);
static ATerm g_5 (ATerm k_39, ATerm l_39, ATerm m_39, ATerm t);
ATerm alltd_1_0 (ATerm u_82 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm n_93 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_5 (ATerm i_79 (ATerm), ATerm t);
static ATerm k_5 (ATerm i_39, ATerm j_39, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm t);
static ATerm l_5 (ATerm v_92 (ATerm), ATerm t_37, ATerm r_37, ATerm t);
static ATerm m_5 (ATerm c_39, ATerm d_39, ATerm t);
ATerm end_scope_1_0 (ATerm s_92 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm r_92 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm dead_var_elim_0_0 (ATerm t);
static ATerm q_5 (ATerm o_29, ATerm p_29, ATerm t);
static ATerm r_5 (ATerm j_28, ATerm k_28, ATerm t);
static ATerm t_5 (ATerm m_88 (ATerm), ATerm c_203, ATerm n_28, ATerm t);
static ATerm s_5 (ATerm f_28, ATerm g_28, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm l_107 (ATerm), ATerm t);
static ATerm e_32 (ATerm p_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_5 (ATerm l_28, ATerm t);
static ATerm v_5 (ATerm q_29, ATerm r_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_34 (ATerm w_32, ATerm t);
static ATerm k_34 (ATerm f_33, ATerm g_33, ATerm h_33, ATerm t);
static ATerm l_34 (ATerm w_33, ATerm x_33, ATerm y_33, ATerm t);
static ATerm w_5 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_93 (ATerm), ATerm t);
static ATerm p_5 (ATerm i_52, ATerm j_52, ATerm t);
ATerm debug_1_0 (ATerm k_88 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm d_90 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_6 (ATerm i_33, ATerm j_33, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_6 (ATerm x_38, ATerm y_38, ATerm w_38, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_5 (ATerm f_36, ATerm g_36, ATerm t);
ATerm foldr_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_90 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm need_help_1_0 (ATerm j_108 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm z_5 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_110 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm parse_options_1_0 (ATerm l_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm iowrap_3_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_k_8;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_l_8;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_8), b_0), term_m_8);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_p_8;
  p_0 = t;
  t = SSL_exit(p_0);
  t = a_0;
  return(t);
}
ATerm all_rl_1_0 (ATerm h_79 (ATerm), ATerm t)
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
  t = reverse_map_1_0(h_79, t);
  y_0 = t;
  t = SSL_mkterm(s_0, y_0);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm q_1 = NULL,u_1 = NULL,w_1 = NULL,y_1 = NULL,g_3 = NULL,i_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_3;
        q_1 = t;
        t = SSLgetAnnotations(g_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(u_8) != AT_LIST) || !(ATisEmpty(u_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_3;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_3;
              q_1 = t;
              t = SSLgetAnnotations(g_3);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_8 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm y_8 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(y_8) != AT_LIST) || !(ATisEmpty(y_8))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = g_3;
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              t = i_3;
              q_1 = t;
              t = SSLgetAnnotations(g_3);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_3;
            }
        }
      }
  }
  t = term_a_9;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_1);
  w_1 = t;
  t = term_b_9;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_9, (ATerm)ATmakeAppl(sym_Var_1, q_1), term_b_9);
  t = g_5(u_1, w_1, y_1, t);
  t = g_3;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  j_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_9 = ATgetFirst((ATermList) t);
      ATerm z_9 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(z_9) != AT_LIST) || !(ATisEmpty(z_9))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, k_3);
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
  t = alltd_1_0(f_0, t);
  t = alltd_1_0(i_0, t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, m_1);
  k_0 = t;
  t = SSLsetAnnotations(k_0, j_1);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,a_2 = NULL;
  static ATerm m_0 (ATerm t)
  {
    ATerm w_3 = NULL,x_3 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL,c_2 = NULL,b_2 = NULL;
    p_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        h_4 = ATgetArgument(t, 0);
        i_4 = ATgetArgument(t, 1);
        l_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_4);
    g_4 = t;
    t = i_4;
    t = d_79(t);
    m_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_4, m_4, l_4);
    b_2 = t;
    t = SSLsetAnnotations(b_2, g_4);
    o_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        x_3 = ATgetArgument(t, 0);
        c_4 = ATgetArgument(t, 1);
        e_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_4);
    w_3 = t;
    t = x_3;
    t = d_79(t);
    f_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_4, c_4, e_4);
    c_2 = t;
    t = SSLsetAnnotations(c_2, w_3);
    return(t);
  }
  static ATerm u_0 (ATerm t)
  {
    ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,e_2 = NULL;
    y_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        t_4 = ATgetArgument(t, 0);
        v_4 = ATgetArgument(t, 1);
        w_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_4);
    s_4 = t;
    t = w_4;
    t = d_79(t);
    x_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, t_4, v_4, x_4);
    e_2 = t;
    t = SSLsetAnnotations(e_2, s_4);
    return(t);
  }
  v_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
      u_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_3);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_3, t_3, u_3);
  a_2 = t;
  t = SSLsetAnnotations(a_2, q_3);
  t = elim_abstract_choice_2_0(m_0, u_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,j_5 = NULL,y_5 = NULL,b_6 = NULL,x_2 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm d_6 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,y_2 = NULL;
    r_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        n_6 = ATgetArgument(t, 0);
        p_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_6);
    d_6 = t;
    t = n_6;
    t = c_79(t);
    q_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_6, p_6);
    y_2 = t;
    t = SSLsetAnnotations(y_2, d_6);
    return(t);
  }
  static ATerm w_0 (ATerm t)
  {
    ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,z_2 = NULL;
    w_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        t_6 = ATgetArgument(t, 0);
        u_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_6);
    s_6 = t;
    t = u_6;
    t = c_79(t);
    v_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_6, v_6);
    z_2 = t;
    t = SSLsetAnnotations(z_2, s_6);
    return(t);
  }
  b_6 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      j_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_6);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, j_5, y_5);
  x_2 = t;
  t = SSLsetAnnotations(x_2, h_5);
  t = elim_abstract_choice_2_0(v_0, w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,o_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      t = i_8;
      {
        ATerm a_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_8 = ATgetFirst((ATermList) t);
                {
                  ATerm e_10 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_10);
            t = j_8;
            {
              ATerm f_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm i_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_10);
                  t = h_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_8;
                    }
                  else
                    {
                      ATerm j_10 = t;
                      int s_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_9(h_8, o_8, t);
                          LocalPopChoice(s_10);
                        }
                      else
                        {
                          t = j_10;
                          t = o_8;
                        }
                    }
                }
              else
                {
                  t = f_10;
                  t = h_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_8;
                    }
                  else
                    {
                      t = o_8;
                    }
                }
            }
          }
        else
          {
            t = a_10;
            t = h_8;
            if(match_cons(t, sym_Scopes_0))
              {
                t = o_8;
              }
            else
              {
                t = o_8;
              }
          }
      }
    }
  else
    {
      t = o_8;
    }
  return(t);
}
static ATerm c_9 (ATerm p_7, ATerm r_7, ATerm t)
{
  t = r_7;
  {
    ATerm t_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = term_a_9;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, p_7);
        t = z_5(t_1, p_7, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_10 = ATgetFirst((ATermList) t);
            if(match_cons(y_10, sym_Defined_1))
              {
                ATerm k_11 = ATgetArgument(y_10, 0);
              }
            else
              _fail(t);
            {
              ATerm j_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = r_7;
        LocalPopChoice(v_10);
      }
    else
      {
        t = t_10;
        t = (ATerm) ATmakeAppl(sym__2, p_7, (ATerm) ATinsert(ATempty, term_b_9));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,o_7 = NULL;
  t = map_1_0(x_0, t);
  j_7 = t;
  t = term_a_9;
  o_7 = t;
  t = SSL_table_destroy(o_7);
  t = term_a_9;
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, j_7);
  t = f_5(k_7, j_7, t);
  t = j_7;
  return(t);
}
static ATerm f_5 (ATerm a_40, ATerm z_39, ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm e_9 = NULL,g_9 = NULL;
    if(match_cons(t, sym__2))
      {
        e_9 = ATgetArgument(t, 0);
        g_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(a_40, e_9, g_9);
    t = (ATerm) ATmakeAppl(sym__3, a_40, e_9, g_9);
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
    t = z_5(not_null(h_9), i_9, t);
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
  t = term_a_9;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,t_9 = NULL;
  o_9 = t;
  t = save_ElimVar_0_0(t);
  k_9 = t;
  t = o_9;
  t = e_79(t);
  n_9 = t;
  t = save_ElimVar_0_0(t);
  l_9 = t;
  t = term_a_9;
  t_9 = t;
  t = SSL_table_destroy(t_9);
  t = term_a_9;
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, k_9);
  t = f_5(p_9, k_9, t);
  t = n_9;
  t = f_79(t);
  m_9 = t;
  t = l_9;
  t = isect_ElimVar_0_0(t);
  t = m_9;
  return(t);
}
ATerm elim_choice_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,w_9 = NULL,b_10 = NULL,d_10 = NULL,d_3 = NULL;
  static ATerm c_1 (ATerm t)
  {
    ATerm h_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,e_3 = NULL;
    n_10 = t;
    if(match_cons(t, sym_Choice_2))
      {
        k_10 = ATgetArgument(t, 0);
        l_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_10);
    h_10 = t;
    t = k_10;
    t = b_79(t);
    m_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, m_10, l_10);
    e_3 = t;
    t = SSLsetAnnotations(e_3, h_10);
    return(t);
  }
  static ATerm d_1 (ATerm t)
  {
    ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,u_10 = NULL,c_11 = NULL,f_3 = NULL;
    c_11 = t;
    if(match_cons(t, sym_Choice_2))
      {
        p_10 = ATgetArgument(t, 0);
        q_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_11);
    o_10 = t;
    t = q_10;
    t = b_79(t);
    u_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, p_10, u_10);
    f_3 = t;
    t = SSLsetAnnotations(f_3, o_10);
    return(t);
  }
  d_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      w_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_10);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, w_9, b_10);
  d_3 = t;
  t = SSLsetAnnotations(d_3, u_9);
  t = elim_abstract_choice_2_0(c_1, d_1, t);
  return(t);
}
static ATerm g_5 (ATerm k_39, ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_39, l_39);
  t = z_5(k_39, l_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_11 = ATgetFirst((ATermList) t);
      d_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_11), m_39);
  f_11 = t;
  t = SSL_table_put(k_39, l_39, f_11);
  t = e_11;
  return(t);
}
ATerm alltd_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  static ATerm g_11 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_82(t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = SRTS_all(g_11, t);
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,k_12 = NULL,n_12 = NULL;
  n_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_12 = ATgetFirst((ATermList) t);
      k_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,o_2 = NULL,p_2 = NULL,o_3 = NULL,n_3 = NULL;
        t = SSLgetAnnotations(n_12);
        k_2 = t;
        t = k_12;
        t = reverse_map_1_0(n_93, t);
        o_2 = t;
        t = (ATerm) ATinsert(CheckATermList(o_2), i_12);
        n_3 = t;
        t = SSLsetAnnotations(n_3, k_2);
        p_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_2 = ATgetFirst((ATermList) t);
            i_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_2);
        g_2 = t;
        t = h_2;
        t = n_93(t);
        j_2 = t;
        t = (ATerm) ATinsert(CheckATermList(i_2), j_2);
        o_3 = t;
        t = SSLsetAnnotations(o_3, g_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_12;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL;
  y_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_12 = ATgetArgument(t, 0);
      {
        ATerm q_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, z_12);
  a_13 = t;
  t = term_b_9;
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_12), term_b_9);
  t = l_5(h_1, a_13, c_13, t);
  t = y_12;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm i_5 (ATerm i_79 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_3 = NULL;
    x_12 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        r_12 = ATgetArgument(t, 0);
        s_12 = ATgetArgument(t, 1);
        t_12 = ATgetArgument(t, 2);
        u_12 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_12);
    q_12 = t;
    t = t_12;
    t = map_1_0(g_1, t);
    v_12 = t;
    t = u_12;
    t = i_79(t);
    w_12 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, r_12, s_12, v_12, w_12);
    y_3 = t;
    t = SSLsetAnnotations(y_3, q_12);
    return(t);
  }
  t = scope_2_0(e_1, f_1, t);
  return(t);
}
static ATerm k_5 (ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm e_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_39, j_39);
  t = z_5(i_39, j_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_13 = ATgetFirst((ATermList) t);
      {
        ATerm r_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_13;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm w_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL;
        t = term_a_9;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, a_15);
        t = k_5(n_4, a_15, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = a_15;
        _fail(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        {
          ATerm b_12 = t;
          int c_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_5 = NULL;
              t = term_a_9;
              c_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_9, a_15);
              t = k_5(c_5, a_15, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = a_15;
              _fail(t);
              LocalPopChoice(c_12);
            }
          else
            {
              t = b_12;
              {
                ATerm f_12 = t;
                int g_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_6 = NULL;
                    t = term_a_9;
                    g_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_a_9, a_15);
                    t = k_5(g_6, a_15, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = a_15;
                    _fail(t);
                    LocalPopChoice(g_12);
                  }
                else
                  {
                    t = f_12;
                    {
                      ATerm m_6 = NULL;
                      t = term_a_9;
                      m_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_a_9, a_15);
                      t = k_5(m_6, a_15, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm h_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) h_12) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_j_12;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  i_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_16 = ATgetFirst((ATermList) t);
          k_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_7 = NULL,d_7 = NULL,e_7 = NULL,q_4 = NULL;
            t = SSLgetAnnotations(i_16);
            a_7 = t;
            t = j_16;
            t = p_99(t);
            d_7 = t;
            t = k_16;
            t = filter_1_0(p_99, t);
            e_7 = t;
            t = (ATerm) ATinsert(CheckATermList(e_7), d_7);
            q_4 = t;
            t = SSLsetAnnotations(q_4, a_7);
            LocalPopChoice(p_12);
          }
        else
          {
            t = l_12;
            t = k_16;
            t = filter_1_0(p_99, t);
          }
      }
    }
  return(t);
}
static ATerm l_5 (ATerm v_92 (ATerm), ATerm t_37, ATerm r_37, ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,a_17 = NULL;
  r_16 = t;
  t = v_92(t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_16, t_37, r_37);
  t = a_6(o_16, t_37, r_37, t);
  {
    ATerm b_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_17 = NULL;
        t = term_f_13;
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, term_f_13);
        t = z_5(o_16, e_17, t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = b_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_16 = ATgetFirst((ATermList) t);
      q_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_13;
  s_16 = t;
  t = (ATerm) ATinsert(CheckATermList(q_16), (ATerm) ATinsert(CheckATermList(p_16), t_37));
  a_17 = t;
  t = SSL_table_put(o_16, s_16, a_17);
  t = r_16;
  return(t);
}
static ATerm m_5 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  g_17 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
        t = z_5(c_39, d_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_13 = ATgetFirst((ATermList) t);
            f_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_13);
        t = SSL_table_put(c_39, d_39, f_17);
        t = (ATerm) ATmakeAppl(sym__3, c_39, d_39, f_17);
      }
    else
      {
        t = g_13;
        t = SSL_table_remove(c_39, d_39);
        t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
      }
  }
  t = g_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm s_92 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,q_17 = NULL,w_17 = NULL;
  q_17 = t;
  t = s_92(t);
  l_17 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_17 = NULL;
        t = term_f_13;
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_17, term_f_13);
        t = z_5(l_17, x_17, t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_17 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_13;
  w_17 = t;
  t = SSL_table_put(l_17, w_17, j_17);
  t = k_17;
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm z_17 = NULL;
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_17, z_17);
      t = m_5(l_17, z_17, t);
      return(t);
    }
    t = map_1_0(i_1, t);
  }
  t = q_17;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t)
{
  ATerm m_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_84(t);
      t = k_84(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = m_13;
      t = k_84(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,l_18 = NULL;
  f_18 = t;
  t = r_92(t);
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_18, term_f_13);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            ATerm g_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_13;
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_18, term_f_13);
        t = z_5(d_18, q_18, t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATempty;
      }
  }
  g_18 = t;
  t = term_f_13;
  h_18 = t;
  t = (ATerm) ATinsert(CheckATermList(g_18), (ATerm) ATempty);
  l_18 = t;
  t = SSL_table_put(d_18, h_18, l_18);
  t = f_18;
  return(t);
}
ATerm scope_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    t = end_scope_1_0(t_92, t);
    return(t);
  }
  t = begin_scope_1_0(t_92, t);
  t = restore_always_2_0(u_92, k_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm u_24 = NULL,z_24 = NULL,a_25 = NULL;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_24);
  z_24 = t;
  t = term_k_14;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, u_24), term_k_14);
  t = l_5(s_1, z_24, a_25, t);
  t = u_24;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm l_14 = t;
  if((PushChoice() == 0))
    {
      ATerm c_25 = NULL;
      c_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_25);
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
  ATerm u_7 = NULL,v_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
  u_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_a_9;
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_7);
  y_7 = t;
  t = term_b_9;
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_9, (ATerm)ATmakeAppl(sym_Var_1, v_7), term_b_9);
  t = g_5(x_7, y_7, z_7, t);
  t = u_7;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = alltd_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL;
  r_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_a_9;
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_9);
  x_9 = t;
  t = term_b_9;
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_9, (ATerm)ATmakeAppl(sym_Var_1, s_9), term_b_9);
  t = g_5(v_9, x_9, y_9, t);
  t = r_9;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = alltd_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,h_11 = NULL,i_11 = NULL;
  z_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_a_9;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_11);
  h_11 = t;
  t = term_b_9;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_9, (ATerm)ATmakeAppl(sym_Var_1, a_11), term_b_9);
  t = g_5(b_11, h_11, i_11, t);
  t = z_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,s_11 = NULL;
  c_14 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_14);
  z_13 = t;
  t = a_14;
  t = map_1_0(dead_var_elim_0_0, t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_14);
  s_11 = t;
  t = SSLsetAnnotations(s_11, z_13);
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
  ATerm m_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm i_26 (ATerm t)
      {
        ATerm q_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
            r_23 = t;
            {
              ATerm y_14 = t;
              int z_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      ATerm b_15 = ATgetArgument(t, 0);
                      ATerm c_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_14);
                  {
                    static ATerm o_1 (ATerm t)
                    {
                      ATerm u_23 = NULL,v_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,k_24 = NULL,m_24 = NULL,t_24 = NULL,o_6 = NULL,h_6 = NULL;
                      t_24 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          d_24 = ATgetArgument(t, 0);
                          e_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(t_24);
                      a_24 = t;
                      t = d_24;
                      t = map_1_0(r_1, t);
                      f_24 = t;
                      t = e_24;
                      t = i_26(t);
                      k_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, f_24, k_24);
                      h_6 = t;
                      t = SSLsetAnnotations(h_6, a_24);
                      m_24 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          v_23 = ATgetArgument(t, 0);
                          y_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(m_24);
                      u_23 = t;
                      t = v_23;
                      t = filter_1_0(v_1, t);
                      z_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, z_23, y_23);
                      o_6 = t;
                      t = SSLsetAnnotations(o_6, u_23);
                      return(t);
                    }
                    t = r_23;
                    t = scope_2_0(n_1, o_1, t);
                  }
                }
              else
                {
                  t = y_14;
                  {
                    ATerm e_15 = t;
                    int g_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm h_15 = ATgetArgument(t, 0);
                            ATerm j_15 = ATgetArgument(t, 1);
                            ATerm k_15 = ATgetArgument(t, 2);
                            ATerm q_15 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_15);
                        t = r_23;
                        t = i_5(i_26, t);
                      }
                    else
                      {
                        t = e_15;
                        if(match_cons(t, sym_Build_1))
                          {
                            s_23 = ATgetArgument(t, 0);
                            {
                              ATerm n_7 = NULL,s_7 = NULL,a_8 = NULL;
                              t = SSLgetAnnotations(r_23);
                              n_7 = t;
                              t = s_23;
                              t = alltd_1_0(x_1, t);
                              s_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, s_7);
                              a_8 = t;
                              t = SSLsetAnnotations(a_8, n_7);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                s_23 = ATgetArgument(t, 0);
                                t_23 = ATgetArgument(t, 1);
                                q_23 = ATgetArgument(t, 2);
                                {
                                  ATerm t_8 = NULL,z_8 = NULL,f_9 = NULL,c_8 = NULL;
                                  t = SSLgetAnnotations(r_23);
                                  t_8 = t;
                                  t = t_23;
                                  t = reverse_map_1_0(i_26, t);
                                  z_8 = t;
                                  t = q_23;
                                  t = reverse_map_1_0(z_1, t);
                                  f_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, s_23, z_8, f_9);
                                  c_8 = t;
                                  t = SSLsetAnnotations(c_8, t_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    s_23 = ATgetArgument(t, 0);
                                    t_23 = ATgetArgument(t, 1);
                                    q_23 = ATgetArgument(t, 2);
                                    {
                                      ATerm r_10 = NULL,w_10 = NULL,x_10 = NULL,f_8 = NULL;
                                      t = SSLgetAnnotations(r_23);
                                      r_10 = t;
                                      t = t_23;
                                      t = reverse_map_1_0(i_26, t);
                                      w_10 = t;
                                      t = q_23;
                                      t = reverse_map_1_0(f_2, t);
                                      x_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, s_23, w_10, x_10);
                                      f_8 = t;
                                      t = SSLsetAnnotations(f_8, r_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm u_11 = NULL,z_11 = NULL,a_12 = NULL,d_12 = NULL,e_12 = NULL,m_12 = NULL,o_12 = NULL,l_11 = NULL,d_9 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        s_23 = ATgetArgument(t, 0);
                                        t_23 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(r_23);
                                    e_12 = t;
                                    t = t_23;
                                    t = i_26(t);
                                    m_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, s_23, m_12);
                                    d_9 = t;
                                    t = SSLsetAnnotations(d_9, e_12);
                                    o_12 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        z_11 = ATgetArgument(t, 0);
                                        a_12 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(o_12);
                                    u_11 = t;
                                    t = z_11;
                                    t = i_26(t);
                                    d_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, a_12);
                                    l_11 = t;
                                    t = SSLsetAnnotations(l_11, u_11);
                                  }
                              }
                          }
                      }
                  }
                }
            }
            LocalPopChoice(v_14);
          }
        else
          {
            t = q_14;
            {
              ATerm t_15 = t;
              int v_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(i_26, t);
                  LocalPopChoice(v_15);
                }
              else
                {
                  t = t_15;
                  {
                    ATerm y_15 = t;
                    int b_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = elim_lchoice_1_0(i_26, t);
                        LocalPopChoice(b_16);
                      }
                    else
                      {
                        t = y_15;
                        {
                          ATerm c_16 = t;
                          int d_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(i_26, t);
                              LocalPopChoice(d_16);
                            }
                          else
                            {
                              t = c_16;
                              {
                                ATerm e_16 = t;
                                int f_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EliminateFromMatch_0_0(t);
                                    LocalPopChoice(f_16);
                                  }
                                else
                                  {
                                    t = e_16;
                                    t = all_rl_1_0(i_26, t);
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
      t = i_26(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = m_14;
      {
        ATerm e_26 = NULL,h_26 = NULL,l_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_11 = NULL,t_11 = NULL,m_11 = NULL;
        e_26 = t;
        if(match_cons(t, sym_Specification_1))
          {
            h_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_26);
        l_13 = t;
        t = h_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_13 = ATgetFirst((ATermList) t);
            p_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_26);
        n_13 = t;
        t = o_13;
        if(match_cons(t, sym_Signature_1))
          {
            t_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_13);
        s_13 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, t_13);
        m_11 = t;
        t = SSLsetAnnotations(m_11, s_13);
        u_13 = t;
        t = p_13;
        t = Cons_2_0(m_2, n_2, t);
        q_13 = t;
        t = (ATerm) ATinsert(CheckATermList(q_13), u_13);
        t_11 = t;
        t = SSLsetAnnotations(t_11, n_13);
        r_13 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, r_13);
        v_11 = t;
        t = SSLsetAnnotations(v_11, l_13);
      }
    }
  return(t);
}
static ATerm q_5 (ATerm o_29, ATerm p_29, ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_fputc(o_29, p_29);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_26);
  return(t);
}
static ATerm r_5 (ATerm j_28, ATerm k_28, ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_write_term_to_stream_text(j_28, k_28);
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_26);
  return(t);
}
static ATerm t_5 (ATerm m_88 (ATerm), ATerm c_203, ATerm n_28, ATerm t)
{
  ATerm u_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_203, term_g_16);
  t = w_5(t);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, n_28);
  t = m_88(t);
  t = fclose_0_0(t);
  t = n_28;
  return(t);
}
static ATerm s_5 (ATerm f_28, ATerm g_28, ATerm t)
{
  ATerm v_26 = NULL;
  t = SSL_write_term_to_stream_baf(f_28, g_28);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if(match_cons(h_16, sym_Stream_1))
        {
          t_14 = ATgetArgument(h_16, 0);
        }
      else
        _fail(t);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(t_14, u_14, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,s_15 = NULL,x_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      if(match_cons(l_16, sym_Stream_1))
        {
          x_15 = ATgetArgument(l_16, 0);
        }
      else
        _fail(t);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(x_15, a_16, t);
  o_15 = t;
  t = term_m_16;
  p_15 = t;
  t = o_15;
  if(match_cons(t, sym_Stream_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, o_15);
  t = q_5(p_15, s_15, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_26 = NULL,c_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,m_27 = NULL,s_27 = NULL,x_27 = NULL,y_27 = NULL,b_28 = NULL,q_30 = NULL,r_30 = NULL,w_13 = NULL,v_13 = NULL;
  c_27 = t;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  s_27 = t;
  t = x_27;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_2, t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = term_v_16;
        z_26 = t;
      }
  }
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, y_27);
  v_13 = t;
  t = SSLsetAnnotations(v_13, s_27);
  t = c_27;
  if(match_cons(t, sym__2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_27, (ATerm) ATmakeAppl(sym__2, not_null(z_26), h_27));
  w_13 = t;
  t = SSLsetAnnotations(w_13, f_27);
  m_27 = t;
  if(match_cons(t, sym__2))
    {
      q_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = NULL,n_14 = NULL,o_14 = NULL,r_14 = NULL,s_14 = NULL,x_13 = NULL;
        t = SSLgetAnnotations(m_27);
        h_14 = t;
        t = q_30;
        t = fetch_1_0(r_2, t);
        n_14 = t;
        t = r_30;
        if(match_cons(t, sym__2))
          {
            r_14 = ATgetArgument(t, 0);
            s_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_5(s_2, r_14, s_14, t);
        o_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_14, o_14);
        x_13 = t;
        t = SSLsetAnnotations(x_13, h_14);
        LocalPopChoice(y_16);
      }
    else
      {
        t = w_16;
        {
          ATerm i_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,j_14 = NULL;
          t = SSLgetAnnotations(m_27);
          i_15 = t;
          t = r_30;
          if(match_cons(t, sym__2))
            {
              m_15 = ATgetArgument(t, 0);
              n_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_5(t_2, m_15, n_15, t);
          l_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_30, l_15);
          j_14 = t;
          t = SSLsetAnnotations(j_14, i_15);
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
ATerm apply_strategy_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,z_30 = NULL,b_31 = NULL;
  b_31 = t;
  t = dtime_0_0(t);
  t = b_31;
  t = l_107(t);
  z_30 = t;
  t = dtime_0_0(t);
  u_30 = t;
  t = z_30;
  if(match_cons(t, sym__2))
    {
      v_30 = ATgetArgument(t, 0);
      w_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_30), (ATerm) ATmakeAppl(sym_Runtime_1, u_30)), w_30);
  return(t);
}
static ATerm e_32 (ATerm p_31, ATerm t)
{
  t = SSL_fclose(p_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_31 = ATgetArgument(t, 0);
      {
        ATerm z_16 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_31);
            LocalPopChoice(c_17);
          }
        else
          {
            t = z_16;
            t = e_32(w_31, t);
          }
      }
    }
  else
    {
      t = e_32(w_31, t);
    }
  return(t);
}
static ATerm u_5 (ATerm l_28, ATerm t)
{
  t = SSL_read_term_from_stream(l_28);
  return(t);
}
static ATerm v_5 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_fopen(q_29, r_29);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = SSL_stdin_stream();
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_32 = NULL;
  t = SSL_stdout_stream();
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_32 = NULL;
  t = SSL_stderr_stream();
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_32);
  return(t);
}
static ATerm j_34 (ATerm w_32, ATerm t)
{
  ATerm x_32 = NULL;
  t = SSL_explode_term(w_32);
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_17 = ATgetArgument(t, 1);
        if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
          {
            x_32 = ATgetFirst((ATermList) h_17);
            {
              ATerm i_17 = (ATerm) ATgetNext((ATermList) h_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_34 (ATerm f_33, ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,p_33 = NULL,w_14 = NULL;
  t = SSLgetAnnotations(h_33);
  m_33 = t;
  t = f_33;
  if(match_cons(t, sym_Path_1))
    {
      p_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_33, g_33);
  w_14 = t;
  t = SSLsetAnnotations(w_14, m_33);
  if(match_cons(t, sym__2))
    {
      k_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(k_33, l_33, t);
  return(t);
}
static ATerm l_34 (ATerm w_33, ATerm x_33, ATerm y_33, ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,e_34 = NULL,x_14 = NULL;
  t = SSLgetAnnotations(y_33);
  b_34 = t;
  t = SSL_is_string(w_33);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_34, x_33);
  x_14 = t;
  t = SSLsetAnnotations(x_14, b_34);
  if(match_cons(t, sym__2))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(z_33, a_34, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      i_34 = ATgetArgument(t, 1);
      {
        ATerm m_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_34(g_34, t);
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            {
              ATerm o_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_34(h_34, i_34, g_34, t);
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = o_17;
                  t = l_34(h_34, i_34, g_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_34(g_34, t);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_34 = NULL;
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_34, term_y_17);
      t = w_5(t);
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      t = debug_1_0(u_2, t);
      _fail(t);
    }
  n_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(o_34, t);
  m_34 = t;
  t = n_34;
  t = fclose_0_0(t);
  t = m_34;
  return(t);
}
ATerm fetch_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  static ATerm n_35 (ATerm t)
  {
    ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
    k_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_35 = ATgetFirst((ATermList) t);
        m_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_18 = t;
      int b_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_16 = NULL,b_17 = NULL,d_15 = NULL;
          t = SSLgetAnnotations(k_35);
          x_16 = t;
          t = l_35;
          t = u_93(t);
          b_17 = t;
          t = (ATerm) ATinsert(CheckATermList(m_35), b_17);
          d_15 = t;
          t = SSLsetAnnotations(d_15, x_16);
          LocalPopChoice(b_18);
        }
      else
        {
          t = a_18;
          {
            ATerm p_17 = NULL,t_17 = NULL,f_15 = NULL;
            t = SSLgetAnnotations(k_35);
            p_17 = t;
            t = m_35;
            t = n_35(t);
            t_17 = t;
            t = (ATerm) ATinsert(CheckATermList(t_17), l_35);
            f_15 = t;
            t = SSLsetAnnotations(f_15, p_17);
          }
        }
    }
    return(t);
  }
  t = n_35(t);
  return(t);
}
static ATerm p_5 (ATerm i_52, ATerm j_52, ATerm t)
{
  t = SSL_strcat(i_52, j_52);
  return(t);
}
ATerm debug_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  q_35 = t;
  t = k_88(t);
  r_35 = t;
  t = term_l_8;
  s_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_35), r_35);
  t_35 = t;
  t = SSL_printnl(s_35, t_35);
  t = q_35;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = c_18;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_i_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = NULL;
      a_36 = t;
      t = SSL_is_string(a_36);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_2, t);
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            {
              ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
              i_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_36 = ATgetArgument(t, 0);
                  t = j_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_36 = ATgetArgument(t, 0);
                      t = j_36;
                      {
                        ATerm o_18 = t;
                        int p_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(p_18);
                          }
                        else
                          {
                            t = o_18;
                            t = debug_1_0(w_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_36 = NULL,p_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_36 = ATgetArgument(t, 0);
                          k_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_36;
                      t = eval_config_0_0(t);
                      o_36 = t;
                      t = k_36;
                      t = eval_config_0_0(t);
                      p_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
                      t = p_5(o_36, p_36, t);
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
  ATerm t_36 = NULL,u_36 = NULL;
  t_36 = t;
  t = term_r_18;
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, t_36);
  t = z_5(u_36, t_36, t);
  {
    ATerm u_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_36 = NULL,w_36 = NULL;
        t = eval_config_0_0(t);
        v_36 = t;
        t = term_r_18;
        w_36 = t;
        t = SSL_table_put(w_36, t_36, v_36);
        t = v_36;
        LocalPopChoice(y_18);
      }
    else
      {
        t = u_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_37 = NULL;
        t = term_b_19;
        t = get_config_0_0(t);
        c_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_37, term_c_19);
        t = geq_0_0(t);
        t = a_37;
        t = d_90(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = a_37;
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm f_37 = NULL;
  f_37 = t;
  if(match_string(t, "-k"))
    {
      t = f_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_37;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  t = SSL_string_to_int(g_37);
  h_37 = t;
  t = term_d_19;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, h_37);
  t = c_6(i_37, h_37, t);
  t = g_37;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  if(match_string(t, "-S"))
    {
      t = k_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_37;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  t = term_b_19;
  w_37 = t;
  t = term_f_19;
  x_37 = t;
  t = term_g_19;
  t = c_6(w_37, x_37, t);
  t = term_h_19;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_j_19;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm y_37 = NULL,a_38 = NULL,b_38 = NULL;
  y_37 = t;
  t = SSL_string_to_int(y_37);
  a_38 = t;
  t = term_b_19;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_19, a_38);
  t = c_6(b_38, a_38, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_37);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  t = term_l_19;
  c_38 = t;
  t = term_k_8;
  d_38 = t;
  t = term_m_19;
  t = c_6(c_38, d_38, t);
  t = term_o_19;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, l_3, m_3, t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_3, r_3, z_3, t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = Option_3_0(a_4, b_4, d_4, t);
          }
      }
    }
  return(t);
}
static ATerm c_6 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm e_38 = NULL;
  t = term_r_18;
  e_38 = t;
  t = SSL_table_put(e_38, i_33, j_33);
  t = (ATerm) ATmakeAppl(sym__3, term_r_18, i_33, j_33);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
      t = term_k_8;
      t = g_0(t);
      j_38 = t;
      t = term_u_19;
      k_38 = t;
      t = term_v_19;
      l_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, j_38);
      t = a_6(k_38, l_38, j_38, t);
      _fail(t);
    }
  else
    {
      ATerm o_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_38 = ATgetFirst((ATermList) t);
          i_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_38;
      t = d_0(t);
      t = term_k_8;
      t = e_0(t);
      o_38 = t;
      t = (ATerm) ATinsert(CheckATermList(i_38), o_38);
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  if(match_string(t, "-o"))
    {
      t = q_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_38;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  r_38 = t;
  t = term_x_19;
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_19, r_38);
  t = c_6(s_38, r_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_38);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, r_4, t);
  return(t);
}
static ATerm a_6 (ATerm x_38, ATerm y_38, ATerm w_38, ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,z_38 = NULL;
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            ATerm e_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
        t = z_5(x_38, y_38, t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = (ATerm) ATempty;
      }
  }
  v_38 = t;
  t = (ATerm) ATinsert(CheckATermList(v_38), w_38);
  z_38 = t;
  t = SSL_table_put(x_38, y_38, z_38);
  t = u_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
      t = term_k_8;
      t = o_0(t);
      t_39 = t;
      t = term_u_19;
      u_39 = t;
      t = term_v_19;
      v_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, t_39);
      t = a_6(u_39, v_39, t_39, t);
      _fail(t);
    }
  else
    {
      ATerm f_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_39 = ATgetFirst((ATermList) t);
          q_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_39 = ATgetFirst((ATermList) t);
          s_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_39;
      t = l_0(t);
      t = r_39;
      t = n_0(t);
      f_40 = t;
      t = (ATerm) ATinsert(CheckATermList(s_39), f_40);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  if(match_string(t, "-i"))
    {
      t = h_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_40;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  i_40 = t;
  t = term_f_20;
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, i_40);
  t = c_6(j_40, i_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_40);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, z_4, a_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_8;
  t = whoami_0_0(t);
  k_40 = t;
  t = term_l_8;
  m_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_20), k_40);
  n_40 = t;
  t = SSL_printnl(m_40, n_40);
  t = term_p_8;
  l_40 = t;
  t = SSL_exit(l_40);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm x_5 (ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_36, g_36);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = SSL_addr(f_36, g_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  r_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_40;
      t = l_98(t);
    }
  else
    {
      ATerm w_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_40 = ATgetFirst((ATermList) t);
          t_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_40;
      t = foldr_2_0(l_98, m_98, t);
      w_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_40, w_40);
      t = m_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_f_19;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(w_18, x_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_40 = NULL,s_18 = NULL,t_18 = NULL;
  t = times_0_0(t);
  t_18 = t;
  t = SSL_explode_term(t_18);
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_18;
  t = foldr_2_0(b_5, d_5, t);
  z_40 = t;
  t = SSL_TicksToSeconds(z_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_41;
        if((l_41 != t))
          {
            _fail(t);
          }
        t = k_41;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATmakeAppl(sym__2, l_41, m_41);
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_41, m_41);
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              t = SSL_gtr(l_41, m_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_41, m_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_90 (ATerm), ATerm t)
{
  ATerm q_41 = NULL;
  q_41 = t;
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_41 = NULL;
        t = term_b_19;
        t = get_config_0_0(t);
        s_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_41, term_p_8);
        t = geq_0_0(t);
        t = q_41;
        t = c_90(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = q_41;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm u_41 = NULL,x_41 = NULL,z_41 = NULL,a_42 = NULL;
  t = run_time_0_0(t);
  u_41 = t;
  t = term_k_8;
  t = whoami_0_0(t);
  x_41 = t;
  t = term_l_8;
  z_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), u_41), term_t_20), x_41);
  a_42 = t;
  t = SSL_printnl(z_41, a_42);
  t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), u_41), term_t_20), x_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_19;
  b_42 = t;
  t = SSL_exit(b_42);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  k_42 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_42;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_42 = ATgetArgument(t, 0);
          {
            ATerm n_19 = NULL,r_15 = NULL;
            t = SSLgetAnnotations(k_42);
            n_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_42);
            r_15 = t;
            t = SSLsetAnnotations(r_15, n_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_42;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_20;
      t = get_config_0_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = fetch_1_0(n_5, t);
    }
  t = j_108(t);
  return(t);
}
ATerm map_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  static ATerm a_43 (ATerm t)
  {
    ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
    x_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_42;
      }
    else
      {
        ATerm w_19 = NULL,b_20 = NULL,c_20 = NULL,u_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_42 = ATgetFirst((ATermList) t);
            z_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_42);
        w_19 = t;
        t = y_42;
        t = k_93(t);
        b_20 = t;
        t = z_42;
        t = a_43(t);
        c_20 = t;
        t = (ATerm) ATinsert(CheckATermList(c_20), b_20);
        u_15 = t;
        t = SSLsetAnnotations(u_15, w_19);
      }
    return(t);
  }
  t = a_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_43 = ATgetFirst((ATermList) t);
      e_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_43 = NULL,j_43 = NULL;
        static ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_43)), not_null(j_43));
          return(t);
        }
        t = e_43;
        t = j_0(t);
        if(((i_43 != NULL) && (i_43 != t)))
          _fail(t);
        else
          i_43 = t;
        t = d_43;
        t = h_0(t);
        if(((j_43 != NULL) && (j_43 != t)))
          _fail(t);
        else
          j_43 = t;
        t = e_43;
        t = reverse_acc_2_0(h_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_8;
      t = j_0(t);
    }
  return(t);
}
static ATerm z_5 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSL_table_get(o_40, p_40);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,w_15 = NULL;
  q_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_43);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_43);
  w_15 = t;
  t = SSLsetAnnotations(w_15, o_43);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_43), term_y_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_43 = NULL,n_43 = NULL;
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_20;
      t = get_config_0_0(t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = fetch_1_0(e_6, t);
    }
  t = term_b_21;
  t = echo_0_0(t);
  t = term_u_19;
  l_43 = t;
  t = term_v_19;
  n_43 = t;
  t = term_c_21;
  t = z_5(l_43, n_43, t);
  t = reverse_acc_2_0(_id, f_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_43;
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
            t = u_43;
          }
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = (ATerm) ATinsert(ATempty, u_43);
      }
  }
  v_43 = t;
  t = term_v_16;
  w_43 = t;
  t = SSL_printnl(w_43, v_43);
  t = u_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL;
  t = term_i_21;
  a_44 = t;
  t = term_k_8;
  b_44 = t;
  t = term_j_21;
  t = c_6(a_44, b_44, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  t = term_i_21;
  e_44 = t;
  t = term_k_8;
  f_44 = t;
  t = term_j_21;
  t = c_6(e_44, f_44, t);
  t = term_l_21;
  c_44 = t;
  t = term_k_8;
  d_44 = t;
  t = term_m_21;
  t = c_6(c_44, d_44, t);
  t = term_n_21;
  return(t);
}
static ATerm z_6 (ATerm t)
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
      t = Option_3_0(j_6, k_6, l_6, t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = Option_3_0(x_6, y_6, z_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,z_15 = NULL;
  l_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_44 = ATgetFirst((ATermList) t);
      i_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_44);
  g_44 = t;
  t = h_44;
  t = t_66(t);
  j_44 = t;
  t = i_44;
  t = u_66(t);
  k_44 = t;
  t = (ATerm) ATinsert(CheckATermList(k_44), j_44);
  z_15 = t;
  t = SSLsetAnnotations(z_15, g_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,x_44 = NULL,y_44 = NULL,n_16 = NULL;
  s_44 = t;
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_21;
        t = m_110(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
      }
  }
  t = s_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_44 = ATgetFirst((ATermList) t);
      v_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_44);
  t_44 = t;
  t = term_i_20;
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, u_44);
  t = c_6(y_44, u_44, t);
  t = v_44;
  {
    static ATerm i_45 (ATerm t)
    {
      ATerm u_21 = t;
      int v_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_45 = NULL;
              b_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_45;
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              t = m_110(t);
              t = Cons_2_0(_id, i_45, t);
            }
          LocalPopChoice(v_21);
        }
      else
        {
          t = u_21;
          {
            ATerm e_45 = NULL,f_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_45 = ATgetFirst((ATermList) t);
                f_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_45), (ATerm) ATmakeAppl(sym_Undefined_1, e_45));
          }
        }
      return(t);
    }
    t = i_45(t);
  }
  x_44 = t;
  t = (ATerm) ATinsert(CheckATermList(x_44), (ATerm) ATmakeAppl(sym_Program_1, u_44));
  n_16 = t;
  t = SSLsetAnnotations(n_16, t_44);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  if(match_string(t, "--help"))
    {
      t = u_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_45;
        }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  t = term_x_20;
  v_45 = t;
  t = term_k_8;
  w_45 = t;
  t = term_y_21;
  t = c_6(v_45, w_45, t);
  t = term_z_21;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  p_45 = t;
  t = term_u_19;
  r_45 = t;
  t = term_v_19;
  s_45 = t;
  t = (ATerm) ATempty;
  t_45 = t;
  t = SSL_table_put(r_45, s_45, t_45);
  t = p_45;
  {
    static ATerm b_7 (ATerm t)
    {
      ATerm b_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_110(t);
          LocalPopChoice(c_22);
        }
      else
        {
          t = b_22;
          {
            ATerm d_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_7, f_7, g_7, t);
                LocalPopChoice(e_22);
              }
            else
              {
                t = d_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_7, t);
  }
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_46 = NULL;
        d_46 = t;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_20 = NULL;
              t = d_46;
              {
                ATerm j_22 = t;
                int k_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_20;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_22);
                  }
                else
                  {
                    t = j_22;
                    t = fetch_1_0(h_7, t);
                  }
              }
              t = d_46;
              t = default_system_usage_0_0(t);
              t = term_f_19;
              s_20 = t;
              t = SSL_exit(s_20);
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              {
                ATerm d_21 = NULL;
                t = term_i_21;
                t = get_config_0_0(t);
                t = d_46;
                t = default_system_about_0_0(t);
                t = term_f_19;
                d_21 = t;
                t = SSL_exit(d_21);
              }
            }
        }
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
              static ATerm i_7 (ATerm t)
              {
                ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,v_18 = NULL;
                j_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_46);
                h_46 = t;
                t = i_46;
                if(((n_45 != NULL) && (n_45 != t)))
                  _fail(t);
                else
                  n_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_46);
                v_18 = t;
                t = SSLsetAnnotations(v_18, h_46);
                return(t);
              }
              t = fetch_1_0(i_7, t);
              t = term_l_8;
              f_46 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_45)), term_n_22);
              g_46 = t;
              t = SSL_printnl(f_46, g_46);
              t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_45)), term_n_22));
              t = default_system_usage_0_0(t);
              t = term_p_8;
              e_46 = t;
              t = SSL_exit(e_46);
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
            }
        }
      }
  }
  o_45 = t;
  t = term_u_19;
  q_45 = t;
  t = SSL_table_destroy(q_45);
  t = o_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  t = parse_options_1_0(l_108, t);
  o_46 = t;
  t = term_o_22;
  r_46 = t;
  t = SSL_table_create(r_46);
  t = term_o_22;
  p_46 = t;
  t = term_p_22;
  q_46 = t;
  t = SSL_table_put(p_46, q_46, o_46);
  t = o_46;
  t = n_108(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_108, t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_22);
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
static ATerm m_7 (ATerm t)
{
  t = if_verbose2_1_0(d_8, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL;
  t = term_u_22;
  s_46 = t;
  t = term_k_8;
  t_46 = t;
  t = term_v_22;
  t = c_6(s_46, t_46, t);
  t = term_w_22;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  u_46 = t;
  t = term_i_20;
  t = get_config_0_0(t);
  v_46 = t;
  t = term_l_8;
  w_46 = t;
  t = (ATerm) ATinsert(ATempty, v_46);
  x_46 = t;
  t = SSL_printnl(w_46, x_46);
  t = u_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t)
{
  static ATerm l_7 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_107(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(d_23);
                  }
                else
                  {
                    t = c_23;
                    {
                      ATerm e_23 = t;
                      int f_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_7, w_7, b_8, t);
                          LocalPopChoice(f_23);
                        }
                      else
                        {
                          t = e_23;
                          {
                            ATerm g_23 = t;
                            int h_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(h_23);
                              }
                            else
                              {
                                t = g_23;
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
  static ATerm q_7 (ATerm t)
  {
    ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
    z_46 = t;
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm e_8 (ATerm t)
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
          t = fetch_1_0(e_8, t);
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          t = term_k_23;
          y_46 = t;
        }
    }
    t = not_null(y_46);
    t = ReadFromFile_0_0(t);
    a_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
    t = apply_strategy_1_0(u_107, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_7, w_107, m_7, q_7, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,i_19 = NULL;
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
  i_19 = t;
  t = SSLsetAnnotations(i_19, b_47);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_8, _fail, default_usage_0_0, t);
  return(t);
}

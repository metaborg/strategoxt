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
ATerm term_s_23;
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
ATerm term_d_21;
ATerm term_c_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_v_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_w_17;
ATerm term_z_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_g_13;
ATerm term_m_12;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_14);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_m_8);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
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
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_w_19);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_m_8);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_m_8);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_m_8);
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
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_u_22, term_m_8);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm all_rl_1_0 (ATerm a_78 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm EliminateFromMatch_0_0 (ATerm t);
ATerm elim_guardedlchoice_1_0 (ATerm w_77 (ATerm), ATerm t);
ATerm elim_lchoice_1_0 (ATerm v_77 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_8 (ATerm n_7, ATerm s_7, ATerm t);
ATerm isect_ElimVar_0_0 (ATerm t);
static ATerm b_5 (ATerm x_38, ATerm w_38, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_ElimVar_0_0 (ATerm t);
ATerm elim_abstract_choice_2_0 (ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm t);
ATerm elim_choice_1_0 (ATerm u_77 (ATerm), ATerm t);
static ATerm c_5 (ATerm h_38, ATerm i_38, ATerm j_38, ATerm t);
ATerm alltd_1_0 (ATerm n_81 (ATerm), ATerm t);
ATerm reverse_map_1_0 (ATerm b_92 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm e_5 (ATerm b_78 (ATerm), ATerm t);
static ATerm g_5 (ATerm f_38, ATerm g_38, ATerm t);
ATerm ElimVar_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_98 (ATerm), ATerm t);
static ATerm h_5 (ATerm o_91 (ATerm), ATerm m_37, ATerm k_37, ATerm t);
static ATerm i_5 (ATerm z_37, ATerm a_38, ATerm t);
ATerm end_scope_1_0 (ATerm l_91 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_91 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm dead_var_elim_0_0 (ATerm t);
static ATerm m_5 (ATerm j_29, ATerm k_29, ATerm t);
static ATerm n_5 (ATerm e_28, ATerm f_28, ATerm t);
static ATerm p_5 (ATerm f_87 (ATerm), ATerm h_199, ATerm i_28, ATerm t);
static ATerm o_5 (ATerm a_28, ATerm b_28, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm z_105 (ATerm), ATerm t);
static ATerm s_31 (ATerm j_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_5 (ATerm g_28, ATerm t);
static ATerm r_5 (ATerm l_29, ATerm m_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_34 (ATerm n_32, ATerm t);
static ATerm e_34 (ATerm u_32, ATerm y_32, ATerm d_33, ATerm t);
static ATerm f_34 (ATerm q_33, ATerm r_33, ATerm s_33, ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_92 (ATerm), ATerm t);
static ATerm l_5 (ATerm d_51, ATerm e_51, ATerm t);
ATerm debug_1_0 (ATerm d_87 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm w_88 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_5 (ATerm b_33, ATerm c_33, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_5 (ATerm u_37, ATerm v_37, ATerm t_37, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_5 (ATerm y_35, ATerm z_35, ATerm t);
ATerm foldr_2_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_88 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm need_help_1_0 (ATerm x_106 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_91 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm v_5 (ATerm l_39, ATerm m_39, ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm parse_options_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm iowrap_3_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
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
  t = term_m_8;
  t = whoami_0_0(t);
  i_0 = t;
  t = term_n_8;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), i_0), term_o_8);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_q_8;
  p_0 = t;
  t = SSL_exit(p_0);
  t = a_0;
  return(t);
}
ATerm all_rl_1_0 (ATerm a_78 (ATerm), ATerm t)
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
  t = reverse_map_1_0(a_78, t);
  y_0 = t;
  t = SSL_mkterm(s_0, y_0);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm o_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL,e_3 = NULL,f_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_3;
        o_1 = t;
        t = SSLgetAnnotations(e_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) u_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(v_8) != AT_LIST) || !(ATisEmpty(v_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_3;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          ATerm w_8 = t;
          int x_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_3;
              o_1 = t;
              t = SSLgetAnnotations(e_3);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_8 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm n_9 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(n_9) != AT_LIST) || !(ATisEmpty(n_9))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = e_3;
              LocalPopChoice(x_8);
            }
          else
            {
              t = w_8;
              t = f_3;
              o_1 = t;
              t = SSLgetAnnotations(e_3);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_3;
            }
        }
      }
  }
  t = term_w_9;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_1);
  u_1 = t;
  t = term_y_9;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_9, (ATerm)ATmakeAppl(sym_Var_1, o_1), term_y_9);
  t = c_5(s_1, u_1, v_1, t);
  t = e_3;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_10 = ATgetFirst((ATermList) t);
      ATerm b_10 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(b_10) != AT_LIST) || !(ATisEmpty(b_10))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, i_3);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,k_0 = NULL;
  m_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_1);
  h_1 = t;
  t = i_1;
  t = alltd_1_0(m_0, t);
  t = alltd_1_0(n_0, t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_1);
  k_0 = t;
  t = SSLsetAnnotations(k_0, h_1);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,w_1 = NULL;
  static ATerm o_0 (ATerm t)
  {
    ATerm t_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,o_4 = NULL,y_1 = NULL,x_1 = NULL;
    o_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        e_4 = ATgetArgument(t, 0);
        h_4 = ATgetArgument(t, 1);
        i_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_4);
    d_4 = t;
    t = h_4;
    t = w_77(t);
    k_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_4, k_4, i_4);
    x_1 = t;
    t = SSLsetAnnotations(x_1, d_4);
    l_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        y_3 = ATgetArgument(t, 0);
        a_4 = ATgetArgument(t, 1);
        b_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_4);
    t_3 = t;
    t = y_3;
    t = w_77(t);
    c_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_4, a_4, b_4);
    y_1 = t;
    t = SSLsetAnnotations(y_1, t_3);
    return(t);
  }
  static ATerm u_0 (ATerm t)
  {
    ATerm p_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,d_5 = NULL,a_2 = NULL;
    d_5 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        r_4 = ATgetArgument(t, 0);
        s_4 = ATgetArgument(t, 1);
        t_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_5);
    p_4 = t;
    t = t_4;
    t = w_77(t);
    u_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_4, s_4, u_4);
    a_2 = t;
    t = SSLsetAnnotations(a_2, p_4);
    return(t);
  }
  s_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
      r_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_3);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_3, q_3, r_3);
  w_1 = t;
  t = SSLsetAnnotations(w_1, o_3);
  t = elim_abstract_choice_2_0(o_0, u_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm f_5 = NULL,u_5 = NULL,x_5 = NULL,z_5 = NULL,x_2 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm j_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,y_2 = NULL;
    o_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        l_6 = ATgetArgument(t, 0);
        m_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_6);
    j_6 = t;
    t = l_6;
    t = v_77(t);
    n_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, n_6, m_6);
    y_2 = t;
    t = SSLsetAnnotations(y_2, j_6);
    return(t);
  }
  static ATerm w_0 (ATerm t)
  {
    ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,z_2 = NULL;
    t_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        q_6 = ATgetArgument(t, 0);
        r_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_6);
    p_6 = t;
    t = r_6;
    t = v_77(t);
    s_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_6, s_6);
    z_2 = t;
    t = SSLsetAnnotations(z_2, p_6);
    return(t);
  }
  z_5 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      u_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_5);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, u_5, x_5);
  x_2 = t;
  t = SSLsetAnnotations(x_2, f_5);
  t = elim_abstract_choice_2_0(v_0, w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,h_8 = NULL,l_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      t = f_8;
      {
        ATerm c_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_8 = ATgetFirst((ATermList) t);
                {
                  ATerm f_10 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_10);
            t = h_8;
            {
              ATerm n_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm r_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_10);
                  t = e_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = l_8;
                    }
                  else
                    {
                      ATerm s_10 = t;
                      int v_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_8(e_8, l_8, t);
                          LocalPopChoice(v_10);
                        }
                      else
                        {
                          t = s_10;
                          t = l_8;
                        }
                    }
                }
              else
                {
                  t = n_10;
                  t = e_8;
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
            t = c_10;
            t = e_8;
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
static ATerm z_8 (ATerm n_7, ATerm s_7, ATerm t)
{
  t = s_7;
  {
    ATerm h_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL;
        t = term_w_9;
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, n_7);
        t = v_5(b_2, n_7, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_11 = ATgetFirst((ATermList) t);
            if(match_cons(k_11, sym_Defined_1))
              {
                ATerm m_11 = ATgetArgument(k_11, 0);
              }
            else
              _fail(t);
            {
              ATerm l_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_7;
        LocalPopChoice(j_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATmakeAppl(sym__2, n_7, (ATerm) ATinsert(ATempty, term_y_9));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm g_7 = NULL,k_7 = NULL,l_7 = NULL;
  t = map_1_0(x_0, t);
  g_7 = t;
  t = term_w_9;
  l_7 = t;
  t = SSL_table_destroy(l_7);
  t = term_w_9;
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, g_7);
  t = b_5(k_7, g_7, t);
  t = g_7;
  return(t);
}
static ATerm b_5 (ATerm x_38, ATerm w_38, ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm c_9 = NULL,d_9 = NULL;
    if(match_cons(t, sym__2))
      {
        c_9 = ATgetArgument(t, 0);
        d_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(x_38, c_9, d_9);
    t = (ATerm) ATmakeAppl(sym__3, x_38, c_9, d_9);
    return(t);
  }
  t = w_38;
  t = map_1_0(a_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_9 = NULL;
  static ATerm b_1 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL;
    f_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), f_9);
    t = v_5(not_null(e_9), f_9, t);
    g_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_9, g_9);
    return(t);
  }
  if(((e_9 != NULL) && (e_9 != t)))
    _fail(t);
  else
    e_9 = t;
  t = SSL_table_keys(e_9);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_w_9;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,p_9 = NULL,q_9 = NULL;
  l_9 = t;
  t = save_ElimVar_0_0(t);
  h_9 = t;
  t = l_9;
  t = x_77(t);
  k_9 = t;
  t = save_ElimVar_0_0(t);
  i_9 = t;
  t = term_w_9;
  q_9 = t;
  t = SSL_table_destroy(q_9);
  t = term_w_9;
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, h_9);
  t = b_5(p_9, h_9, t);
  t = k_9;
  t = y_77(t);
  j_9 = t;
  t = i_9;
  t = isect_ElimVar_0_0(t);
  t = j_9;
  return(t);
}
ATerm elim_choice_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,x_9 = NULL,z_9 = NULL,d_10 = NULL,d_3 = NULL;
  static ATerm c_1 (ATerm t)
  {
    ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,h_3 = NULL;
    k_10 = t;
    if(match_cons(t, sym_Choice_2))
      {
        h_10 = ATgetArgument(t, 0);
        i_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_10);
    g_10 = t;
    t = h_10;
    t = u_77(t);
    j_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, j_10, i_10);
    h_3 = t;
    t = SSLsetAnnotations(h_3, g_10);
    return(t);
  }
  static ATerm d_1 (ATerm t)
  {
    ATerm l_10 = NULL,m_10 = NULL,q_10 = NULL,y_10 = NULL,z_10 = NULL,j_3 = NULL;
    z_10 = t;
    if(match_cons(t, sym_Choice_2))
      {
        m_10 = ATgetArgument(t, 0);
        q_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_10);
    l_10 = t;
    t = q_10;
    t = u_77(t);
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, m_10, y_10);
    j_3 = t;
    t = SSLsetAnnotations(j_3, l_10);
    return(t);
  }
  d_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      x_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_10);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, x_9, z_9);
  d_3 = t;
  t = SSLsetAnnotations(d_3, s_9);
  t = elim_abstract_choice_2_0(c_1, d_1, t);
  return(t);
}
static ATerm c_5 (ATerm h_38, ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_38, i_38);
  t = v_5(h_38, i_38, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_11 = ATgetFirst((ATermList) t);
      a_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_11), j_38);
  c_11 = t;
  t = SSL_table_put(h_38, i_38, c_11);
  t = b_11;
  return(t);
}
ATerm alltd_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  static ATerm d_11 (ATerm t)
  {
    ATerm q_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_81(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = q_11;
        t = SRTS_all(d_11, t);
      }
    return(t);
  }
  t = d_11(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,j_12 = NULL,l_12 = NULL;
  l_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_12 = ATgetFirst((ATermList) t);
      j_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,q_2 = NULL,r_2 = NULL,u_3 = NULL,n_3 = NULL;
        t = SSLgetAnnotations(l_12);
        l_2 = t;
        t = j_12;
        t = reverse_map_1_0(b_92, t);
        q_2 = t;
        t = (ATerm) ATinsert(CheckATermList(q_2), g_12);
        n_3 = t;
        t = SSLsetAnnotations(n_3, l_2);
        r_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_2 = ATgetFirst((ATermList) t);
            j_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_2);
        g_2 = t;
        t = i_2;
        t = b_92(t);
        k_2 = t;
        t = (ATerm) ATinsert(CheckATermList(j_2), k_2);
        u_3 = t;
        t = SSLsetAnnotations(u_3, g_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_12;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,y_12 = NULL,a_13 = NULL;
  v_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_12 = ATgetArgument(t, 0);
      {
        ATerm t_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, w_12);
  y_12 = t;
  t = term_y_9;
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_12), term_y_9);
  t = h_5(j_1, y_12, a_13, t);
  t = v_12;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
static ATerm e_5 (ATerm b_78 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t)
  {
    ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,x_3 = NULL;
    u_12 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        o_12 = ATgetArgument(t, 0);
        p_12 = ATgetArgument(t, 1);
        q_12 = ATgetArgument(t, 2);
        r_12 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_12);
    n_12 = t;
    t = q_12;
    t = map_1_0(g_1, t);
    s_12 = t;
    t = r_12;
    t = b_78(t);
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, o_12, p_12, s_12, t_12);
    x_3 = t;
    t = SSLsetAnnotations(x_3, n_12);
    return(t);
  }
  t = scope_2_0(e_1, f_1, t);
  return(t);
}
static ATerm g_5 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm b_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_38, g_38);
  t = v_5(f_38, g_38, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_13 = ATgetFirst((ATermList) t);
      {
        ATerm u_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_13;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm x_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_11 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        t = term_w_9;
        q_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, t_14);
        t = g_5(q_4, t_14, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = y_11;
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL;
              t = term_w_9;
              a_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_9, t_14);
              t = g_5(a_5, t_14, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              {
                ATerm e_12 = t;
                int h_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_6 = NULL;
                    t = term_w_9;
                    d_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_w_9, t_14);
                    t = g_5(d_6, t_14, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    LocalPopChoice(h_12);
                  }
                else
                  {
                    t = e_12;
                    {
                      ATerm k_6 = NULL;
                      t = term_w_9;
                      k_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_w_9, t_14);
                      t = g_5(k_6, t_14, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm i_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) i_12) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_m_12;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,z_15 = NULL,e_16 = NULL;
  v_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_15 = ATgetFirst((ATermList) t);
          e_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_12 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 = NULL,b_7 = NULL,c_7 = NULL,f_4 = NULL;
            t = SSLgetAnnotations(v_15);
            y_6 = t;
            t = z_15;
            t = d_98(t);
            b_7 = t;
            t = e_16;
            t = filter_1_0(d_98, t);
            c_7 = t;
            t = (ATerm) ATinsert(CheckATermList(c_7), b_7);
            f_4 = t;
            t = SSLsetAnnotations(f_4, y_6);
            LocalPopChoice(c_13);
          }
        else
          {
            t = z_12;
            t = e_16;
            t = filter_1_0(d_98, t);
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm o_91 (ATerm), ATerm m_37, ATerm k_37, ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  t = o_91(t);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_16, m_37, k_37);
  t = w_5(i_16, m_37, k_37, t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL;
        t = term_g_13;
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_16, term_g_13);
        t = v_5(i_16, o_16, t);
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
      j_16 = ATgetFirst((ATermList) t);
      k_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_g_13;
  m_16 = t;
  t = (ATerm) ATinsert(CheckATermList(k_16), (ATerm) ATinsert(CheckATermList(j_16), m_37));
  n_16 = t;
  t = SSL_table_put(i_16, m_16, n_16);
  t = l_16;
  return(t);
}
static ATerm i_5 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm w_16 = NULL,a_17 = NULL;
  a_17 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_37, a_38);
        t = v_5(z_37, a_38, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_13 = ATgetFirst((ATermList) t);
            w_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_13);
        t = SSL_table_put(z_37, a_38, w_16);
        t = (ATerm) ATmakeAppl(sym__3, z_37, a_38, w_16);
      }
    else
      {
        t = h_13;
        t = SSL_table_remove(z_37, a_38);
        t = (ATerm) ATmakeAppl(sym__2, z_37, a_38);
      }
  }
  t = a_17;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  g_17 = t;
  t = l_91(t);
  f_17 = t;
  {
    ATerm v_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_17 = NULL;
        t = term_g_13;
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_g_13);
        t = v_5(f_17, m_17, t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_17 = ATgetFirst((ATermList) t);
      b_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_g_13;
  h_17 = t;
  t = SSL_table_put(f_17, h_17, b_17);
  t = c_17;
  {
    static ATerm k_1 (ATerm t)
    {
      ATerm s_17 = NULL;
      s_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_17, s_17);
      t = i_5(f_17, s_17, t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  t = g_17;
  return(t);
}
ATerm restore_always_2_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_83(t);
      t = d_83(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      t = d_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,y_17 = NULL,z_17 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  t = k_91(t);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_17, term_g_13);
  {
    ATerm d_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_14 = ATgetArgument(t, 0);
            ATerm i_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_13;
        k_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_17, term_g_13);
        t = v_5(v_17, k_18, t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATempty;
      }
  }
  z_17 = t;
  t = term_g_13;
  b_18 = t;
  t = (ATerm) ATinsert(CheckATermList(z_17), (ATerm) ATempty);
  c_18 = t;
  t = SSL_table_put(v_17, b_18, c_18);
  t = y_17;
  return(t);
}
ATerm scope_2_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm t)
{
  static ATerm n_1 (ATerm t)
  {
    t = end_scope_1_0(m_91, t);
    return(t);
  }
  t = begin_scope_1_0(m_91, t);
  t = restore_always_2_0(n_91, n_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm i_24 = NULL,p_24 = NULL,q_24 = NULL;
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_24);
  p_24 = t;
  t = term_l_14;
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_24), term_l_14);
  t = h_5(t_1, p_24, q_24, t);
  t = i_24;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm m_14 = t;
  if((PushChoice() == 0))
    {
      ATerm v_24 = NULL;
      v_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_24);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_14;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm r_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,x_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_w_9;
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_7);
  v_7 = t;
  t = term_y_9;
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_9, (ATerm)ATmakeAppl(sym_Var_1, t_7), term_y_9);
  t = c_5(u_7, v_7, x_7, t);
  t = r_7;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = alltd_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm o_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_w_9;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_9);
  u_9 = t;
  t = term_y_9;
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_9, (ATerm)ATmakeAppl(sym_Var_1, r_9), term_y_9);
  t = c_5(t_9, u_9, v_9, t);
  t = o_9;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = alltd_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  w_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_w_9;
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_10);
  f_11 = t;
  t = term_y_9;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_9, (ATerm)ATmakeAppl(sym_Var_1, x_10), term_y_9);
  t = c_5(e_11, f_11, g_11, t);
  t = w_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,o_11 = NULL;
  z_13 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_13);
  w_13 = t;
  t = x_13;
  t = map_1_0(dead_var_elim_0_0, t);
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_13);
  o_11 = t;
  t = SSLsetAnnotations(o_11, w_13);
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
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm a_26 (ATerm t)
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = NULL,j_23 = NULL,m_23 = NULL,n_23 = NULL;
            j_23 = t;
            {
              ATerm a_15 = t;
              int b_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      ATerm c_15 = ATgetArgument(t, 0);
                      ATerm e_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_15);
                  {
                    static ATerm q_1 (ATerm t)
                    {
                      ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,g_24 = NULL,e_6 = NULL,j_5 = NULL;
                      g_24 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          v_23 = ATgetArgument(t, 0);
                          w_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(g_24);
                      u_23 = t;
                      t = v_23;
                      t = map_1_0(r_1, t);
                      z_23 = t;
                      t = w_23;
                      t = a_26(t);
                      a_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, z_23, a_24);
                      j_5 = t;
                      t = SSLsetAnnotations(j_5, u_23);
                      b_24 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          p_23 = ATgetArgument(t, 0);
                          q_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(b_24);
                      o_23 = t;
                      t = p_23;
                      t = filter_1_0(z_1, t);
                      r_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, r_23, q_23);
                      e_6 = t;
                      t = SSLsetAnnotations(e_6, o_23);
                      return(t);
                    }
                    t = j_23;
                    t = scope_2_0(p_1, q_1, t);
                  }
                }
              else
                {
                  t = a_15;
                  {
                    ATerm f_15 = t;
                    int l_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm m_15 = ATgetArgument(t, 0);
                            ATerm p_15 = ATgetArgument(t, 1);
                            ATerm r_15 = ATgetArgument(t, 2);
                            ATerm u_15 = ATgetArgument(t, 3);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_15);
                        t = j_23;
                        t = e_5(a_26, t);
                      }
                    else
                      {
                        t = f_15;
                        if(match_cons(t, sym_Build_1))
                          {
                            m_23 = ATgetArgument(t, 0);
                            {
                              ATerm m_7 = NULL,p_7 = NULL,u_6 = NULL;
                              t = SSLgetAnnotations(j_23);
                              m_7 = t;
                              t = m_23;
                              t = alltd_1_0(c_2, t);
                              p_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, p_7);
                              u_6 = t;
                              t = SSLsetAnnotations(u_6, m_7);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                m_23 = ATgetArgument(t, 0);
                                n_23 = ATgetArgument(t, 1);
                                i_23 = ATgetArgument(t, 2);
                                {
                                  ATerm r_8 = NULL,b_9 = NULL,m_9 = NULL,y_7 = NULL;
                                  t = SSLgetAnnotations(j_23);
                                  r_8 = t;
                                  t = n_23;
                                  t = reverse_map_1_0(a_26, t);
                                  b_9 = t;
                                  t = i_23;
                                  t = reverse_map_1_0(d_2, t);
                                  m_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, m_23, b_9, m_9);
                                  y_7 = t;
                                  t = SSLsetAnnotations(y_7, r_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    m_23 = ATgetArgument(t, 0);
                                    n_23 = ATgetArgument(t, 1);
                                    i_23 = ATgetArgument(t, 2);
                                    {
                                      ATerm o_10 = NULL,t_10 = NULL,u_10 = NULL,b_8 = NULL;
                                      t = SSLgetAnnotations(j_23);
                                      o_10 = t;
                                      t = n_23;
                                      t = reverse_map_1_0(a_26, t);
                                      t_10 = t;
                                      t = i_23;
                                      t = reverse_map_1_0(f_2, t);
                                      u_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, m_23, t_10, u_10);
                                      b_8 = t;
                                      t = SSLsetAnnotations(b_8, o_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm v_11 = NULL,w_11 = NULL,z_11 = NULL,a_12 = NULL,f_12 = NULL,k_12 = NULL,x_12 = NULL,a_9 = NULL,c_8 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        m_23 = ATgetArgument(t, 0);
                                        n_23 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(j_23);
                                    f_12 = t;
                                    t = n_23;
                                    t = a_26(t);
                                    k_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, m_23, k_12);
                                    c_8 = t;
                                    t = SSLsetAnnotations(c_8, f_12);
                                    x_12 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        w_11 = ATgetArgument(t, 0);
                                        z_11 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(x_12);
                                    v_11 = t;
                                    t = w_11;
                                    t = a_26(t);
                                    a_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_12, z_11);
                                    a_9 = t;
                                    t = SSLsetAnnotations(a_9, v_11);
                                  }
                              }
                          }
                      }
                  }
                }
            }
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            {
              ATerm y_15 = t;
              int a_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_choice_1_0(a_26, t);
                  LocalPopChoice(a_16);
                }
              else
                {
                  t = y_15;
                  {
                    ATerm b_16 = t;
                    int c_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = elim_lchoice_1_0(a_26, t);
                        LocalPopChoice(c_16);
                      }
                    else
                      {
                        t = b_16;
                        {
                          ATerm d_16 = t;
                          int f_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_guardedlchoice_1_0(a_26, t);
                              LocalPopChoice(f_16);
                            }
                          else
                            {
                              t = d_16;
                              {
                                ATerm h_16 = t;
                                int p_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EliminateFromMatch_0_0(t);
                                    LocalPopChoice(p_16);
                                  }
                                else
                                  {
                                    t = h_16;
                                    t = all_rl_1_0(a_26, t);
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
      t = a_26(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm x_25 = NULL,z_25 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL,r_11 = NULL,p_11 = NULL,i_11 = NULL;
        x_25 = t;
        if(match_cons(t, sym_Specification_1))
          {
            z_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_25);
        j_13 = t;
        t = z_25;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_13 = ATgetFirst((ATermList) t);
            n_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_25);
        l_13 = t;
        t = m_13;
        if(match_cons(t, sym_Signature_1))
          {
            r_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_13);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, r_13);
        i_11 = t;
        t = SSLsetAnnotations(i_11, q_13);
        u_13 = t;
        t = n_13;
        t = Cons_2_0(m_2, n_2, t);
        o_13 = t;
        t = (ATerm) ATinsert(CheckATermList(o_13), u_13);
        p_11 = t;
        t = SSLsetAnnotations(p_11, l_13);
        p_13 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, p_13);
        r_11 = t;
        t = SSLsetAnnotations(r_11, j_13);
      }
    }
  return(t);
}
static ATerm m_5 (ATerm j_29, ATerm k_29, ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_fputc(j_29, k_29);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_26);
  return(t);
}
static ATerm n_5 (ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_write_term_to_stream_text(e_28, f_28);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_26);
  return(t);
}
static ATerm p_5 (ATerm f_87 (ATerm), ATerm h_199, ATerm i_28, ATerm t)
{
  ATerm n_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_199, term_q_16);
  t = s_5(t);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_26, i_28);
  t = f_87(t);
  t = fclose_0_0(t);
  t = i_28;
  return(t);
}
static ATerm o_5 (ATerm a_28, ATerm b_28, ATerm t)
{
  ATerm p_26 = NULL;
  t = SSL_write_term_to_stream_baf(a_28, b_28);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_26);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if(match_cons(r_16, sym_Stream_1))
        {
          q_14 = ATgetArgument(r_16, 0);
        }
      else
        _fail(t);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(q_14, r_14, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm k_15 = NULL,o_15 = NULL,t_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if(match_cons(s_16, sym_Stream_1))
        {
          w_15 = ATgetArgument(s_16, 0);
        }
      else
        _fail(t);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(w_15, x_15, t);
  k_15 = t;
  t = term_t_16;
  o_15 = t;
  t = k_15;
  if(match_cons(t, sym_Stream_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, k_15);
  t = m_5(o_15, t_15, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,y_26 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL,i_27 = NULL,o_27 = NULL,t_27 = NULL,i_30 = NULL,l_30 = NULL,s_13 = NULL,d_13 = NULL;
  u_26 = t;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  e_27 = t;
  t = i_27;
  {
    ATerm v_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_2, t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = v_16;
        t = term_z_16;
        t_26 = t;
      }
  }
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_27, o_27);
  d_13 = t;
  t = SSLsetAnnotations(d_13, e_27);
  t = u_26;
  if(match_cons(t, sym__2))
    {
      y_26 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_26, (ATerm) ATmakeAppl(sym__2, not_null(t_26), b_27));
  s_13 = t;
  t = SSLsetAnnotations(s_13, v_26);
  d_27 = t;
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,k_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,t_13 = NULL;
        t = SSLgetAnnotations(d_27);
        e_14 = t;
        t = i_30;
        t = fetch_1_0(p_2, t);
        k_14 = t;
        t = l_30;
        if(match_cons(t, sym__2))
          {
            o_14 = ATgetArgument(t, 0);
            p_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_5(s_2, o_14, p_14, t);
        n_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_14, n_14);
        t_13 = t;
        t = SSLsetAnnotations(t_13, e_14);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        {
          ATerm d_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,f_14 = NULL;
          t = SSLgetAnnotations(d_27);
          d_15 = t;
          t = l_30;
          if(match_cons(t, sym__2))
            {
              i_15 = ATgetArgument(t, 0);
              j_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_5(t_2, i_15, j_15, t);
          h_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_30, h_15);
          f_14 = t;
          t = SSLsetAnnotations(f_14, d_15);
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
ATerm apply_strategy_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  s_30 = t;
  t = dtime_0_0(t);
  t = s_30;
  t = z_105(t);
  r_30 = t;
  t = dtime_0_0(t);
  o_30 = t;
  t = r_30;
  if(match_cons(t, sym__2))
    {
      p_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_30), (ATerm) ATmakeAppl(sym_Runtime_1, o_30)), q_30);
  return(t);
}
static ATerm s_31 (ATerm j_31, ATerm t)
{
  t = SSL_fclose(j_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_31 = NULL,q_31 = NULL;
  q_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_31 = ATgetArgument(t, 0);
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_31);
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            t = s_31(q_31, t);
          }
      }
    }
  else
    {
      t = s_31(q_31, t);
    }
  return(t);
}
static ATerm q_5 (ATerm g_28, ATerm t)
{
  t = SSL_read_term_from_stream(g_28);
  return(t);
}
static ATerm r_5 (ATerm l_29, ATerm m_29, ATerm t)
{
  ATerm z_31 = NULL;
  t = SSL_fopen(l_29, m_29);
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_32 = NULL;
  t = SSL_stdin_stream();
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_stdout_stream();
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_32 = NULL;
  t = SSL_stderr_stream();
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_32);
  return(t);
}
static ATerm d_34 (ATerm n_32, ATerm t)
{
  ATerm q_32 = NULL;
  t = SSL_explode_term(n_32);
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_17 = ATgetArgument(t, 1);
        if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
          {
            q_32 = ATgetFirst((ATermList) l_17);
            {
              ATerm o_17 = (ATerm) ATgetNext((ATermList) l_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_34 (ATerm u_32, ATerm y_32, ATerm d_33, ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,j_33 = NULL,s_14 = NULL;
  t = SSLgetAnnotations(d_33);
  g_33 = t;
  t = u_32;
  if(match_cons(t, sym_Path_1))
    {
      j_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_33, y_32);
  s_14 = t;
  t = SSLsetAnnotations(s_14, g_33);
  if(match_cons(t, sym__2))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(e_33, f_33, t);
  return(t);
}
static ATerm f_34 (ATerm q_33, ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,y_33 = NULL,w_14 = NULL;
  t = SSLgetAnnotations(s_33);
  v_33 = t;
  t = SSL_is_string(q_33);
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, r_33);
  w_14 = t;
  t = SSLsetAnnotations(w_14, v_33);
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(t_33, u_33, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  if(match_cons(t, sym__2))
    {
      b_34 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
      {
        ATerm p_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_34(a_34, t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = p_17;
            {
              ATerm t_17 = t;
              int u_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_34(b_34, c_34, a_34, t);
                  LocalPopChoice(u_17);
                }
              else
                {
                  t = t_17;
                  t = f_34(b_34, c_34, a_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_34(a_34, t);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  ATerm x_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_34 = NULL;
      j_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_34, term_d_18);
      t = s_5(t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = x_17;
      t = debug_1_0(u_2, t);
      _fail(t);
    }
  h_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(i_34, t);
  g_34 = t;
  t = h_34;
  t = fclose_0_0(t);
  t = g_34;
  return(t);
}
ATerm fetch_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  static ATerm h_35 (ATerm t)
  {
    ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
    e_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_35 = ATgetFirst((ATermList) t);
        g_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_16 = NULL,y_16 = NULL,z_14 = NULL;
          t = SSLgetAnnotations(e_35);
          u_16 = t;
          t = f_35;
          t = i_92(t);
          y_16 = t;
          t = (ATerm) ATinsert(CheckATermList(g_35), y_16);
          z_14 = t;
          t = SSLsetAnnotations(z_14, u_16);
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          {
            ATerm n_17 = NULL,q_17 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(e_35);
            n_17 = t;
            t = g_35;
            t = h_35(t);
            q_17 = t;
            t = (ATerm) ATinsert(CheckATermList(q_17), f_35);
            g_15 = t;
            t = SSLsetAnnotations(g_15, n_17);
          }
        }
    }
    return(t);
  }
  t = h_35(t);
  return(t);
}
static ATerm l_5 (ATerm d_51, ATerm e_51, ATerm t)
{
  t = SSL_strcat(d_51, e_51);
  return(t);
}
ATerm debug_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  k_35 = t;
  t = d_87(t);
  l_35 = t;
  t = term_n_8;
  m_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_35), l_35);
  n_35 = t;
  t = SSL_printnl(m_35, n_35);
  t = k_35;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
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
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_35 = NULL;
      u_35 = t;
      t = SSL_is_string(u_35);
      LocalPopChoice(l_18);
    }
  else
    {
      t = j_18;
      {
        ATerm m_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_2, t);
            LocalPopChoice(p_18);
          }
        else
          {
            t = m_18;
            {
              ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
              c_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_36 = ATgetArgument(t, 0);
                  t = d_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_36 = ATgetArgument(t, 0);
                      t = d_36;
                      {
                        ATerm t_18 = t;
                        int u_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(u_18);
                          }
                        else
                          {
                            t = t_18;
                            t = debug_1_0(w_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_36 = NULL,j_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_36 = ATgetArgument(t, 0);
                          e_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_36;
                      t = eval_config_0_0(t);
                      i_36 = t;
                      t = e_36;
                      t = eval_config_0_0(t);
                      j_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_36, j_36);
                      t = l_5(i_36, j_36, t);
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
  ATerm n_36 = NULL,o_36 = NULL;
  n_36 = t;
  t = term_v_18;
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, n_36);
  t = v_5(o_36, n_36, t);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_36 = NULL,q_36 = NULL;
        t = eval_config_0_0(t);
        p_36 = t;
        t = term_v_18;
        q_36 = t;
        t = SSL_table_put(q_36, n_36, p_36);
        t = p_36;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_36 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_36, term_b_19);
        t = geq_0_0(t);
        t = u_36;
        t = w_88(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = u_36;
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  if(match_string(t, "-k"))
    {
      t = z_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_36;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  t = SSL_string_to_int(a_37);
  b_37 = t;
  t = term_d_19;
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, b_37);
  t = y_5(c_37, b_37, t);
  t = a_37;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  if(match_string(t, "-S"))
    {
      t = p_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_37;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  t = term_a_19;
  q_37 = t;
  t = term_g_19;
  r_37 = t;
  t = term_h_19;
  t = y_5(q_37, r_37, t);
  t = term_i_19;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_j_19;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,b_38 = NULL;
  w_37 = t;
  t = SSL_string_to_int(w_37);
  x_37 = t;
  t = term_a_19;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, x_37);
  t = y_5(b_38, x_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_37);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_l_19;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  t = term_m_19;
  c_38 = t;
  t = term_m_8;
  d_38 = t;
  t = term_n_19;
  t = y_5(c_38, d_38, t);
  t = term_o_19;
  return(t);
}
static ATerm m_4 (ATerm t)
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
      t = Option_3_0(k_3, l_3, m_3, t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
        ATerm s_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_3, w_3, z_3, t);
            LocalPopChoice(u_19);
          }
        else
          {
            t = s_19;
            t = Option_3_0(g_4, j_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm e_38 = NULL;
  t = term_v_18;
  e_38 = t;
  t = SSL_table_put(e_38, b_33, c_33);
  t = (ATerm) ATmakeAppl(sym__3, term_v_18, b_33, c_33);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
      t = term_m_8;
      t = e_0(t);
      p_38 = t;
      t = term_v_19;
      q_38 = t;
      t = term_w_19;
      r_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, p_38);
      t = w_5(q_38, r_38, p_38, t);
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
      t = n_38;
      t = c_0(t);
      t = term_m_8;
      t = d_0(t);
      a_39 = t;
      t = (ATerm) ATinsert(CheckATermList(o_38), a_39);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  if(match_string(t, "-o"))
    {
      t = c_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_39;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  d_39 = t;
  t = term_x_19;
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_19, d_39);
  t = y_5(e_39, d_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_39);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, v_4, w_4, t);
  return(t);
}
static ATerm w_5 (ATerm u_37, ATerm v_37, ATerm t_37, ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            ATerm e_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
        t = v_5(u_37, v_37, t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = (ATerm) ATempty;
      }
  }
  h_39 = t;
  t = (ATerm) ATinsert(CheckATermList(h_39), t_37);
  i_39 = t;
  t = SSL_table_put(u_37, v_37, i_39);
  t = g_39;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
      t = term_m_8;
      t = l_0(t);
      v_39 = t;
      t = term_v_19;
      w_39 = t;
      t = term_w_19;
      x_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_19, term_w_19, v_39);
      t = w_5(w_39, x_39, v_39, t);
      _fail(t);
    }
  else
    {
      ATerm b_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_39 = ATgetFirst((ATermList) t);
          s_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_39 = ATgetFirst((ATermList) t);
          u_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_39;
      t = h_0(t);
      t = t_39;
      t = j_0(t);
      b_40 = t;
      t = (ATerm) ATinsert(CheckATermList(u_39), b_40);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm d_40 = NULL;
  d_40 = t;
  if(match_string(t, "-i"))
    {
      t = d_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_40;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  e_40 = t;
  t = term_f_20;
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, e_40);
  t = y_5(f_40, e_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_40);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  g_40 = t;
  t = term_n_8;
  i_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_20), g_40);
  j_40 = t;
  t = SSL_printnl(i_40, j_40);
  t = term_q_8;
  h_40 = t;
  t = SSL_exit(h_40);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm t_5 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_35, z_35);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = SSL_addr(y_35, z_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_40;
      t = z_96(t);
    }
  else
    {
      ATerm q_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_40 = ATgetFirst((ATermList) t);
          n_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_40;
      t = foldr_2_0(z_96, a_97, t);
      q_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_40, q_40);
      t = a_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_g_19;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(r_18, s_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_40 = NULL,n_18 = NULL,o_18 = NULL;
  t = times_0_0(t);
  o_18 = t;
  t = SSL_explode_term(o_18);
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_18;
  t = foldr_2_0(k_5, a_6, t);
  v_40 = t;
  t = SSL_TicksToSeconds(v_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  if(match_cons(t, sym__2))
    {
      h_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_41;
        if((h_41 != t))
          {
            _fail(t);
          }
        t = g_41;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATmakeAppl(sym__2, h_41, i_41);
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_41, i_41);
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              t = SSL_gtr(h_41, i_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_41, i_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_41 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        o_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_41, term_q_8);
        t = geq_0_0(t);
        t = m_41;
        t = v_88(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = m_41;
      }
  }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,t_41 = NULL,u_41 = NULL;
  t = run_time_0_0(t);
  q_41 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  r_41 = t;
  t = term_n_8;
  t_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), q_41), term_t_20), r_41);
  u_41 = t;
  t = SSL_printnl(t_41, u_41);
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), q_41), term_t_20), r_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_19;
  v_41 = t;
  t = SSL_exit(v_41);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL;
  e_42 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_42;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_42 = ATgetArgument(t, 0);
          {
            ATerm k_19 = NULL,n_15 = NULL;
            t = SSLgetAnnotations(e_42);
            k_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_42);
            n_15 = t;
            t = SSLsetAnnotations(n_15, k_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_42;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_106 (ATerm), ATerm t)
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
      t = fetch_1_0(c_6, t);
    }
  t = x_106(t);
  return(t);
}
ATerm map_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  static ATerm v_42 (ATerm t)
  {
    ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
    s_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_42;
      }
    else
      {
        ATerm t_19 = NULL,y_19 = NULL,z_19 = NULL,q_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_42 = ATgetFirst((ATermList) t);
            u_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_42);
        t_19 = t;
        t = t_42;
        t = y_91(t);
        y_19 = t;
        t = u_42;
        t = v_42(t);
        z_19 = t;
        t = (ATerm) ATinsert(CheckATermList(z_19), y_19);
        q_15 = t;
        t = SSLsetAnnotations(q_15, t_19);
      }
    return(t);
  }
  t = v_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_42 = ATgetFirst((ATermList) t);
      z_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_43 = NULL,e_43 = NULL;
        static ATerm f_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_43)), not_null(e_43));
          return(t);
        }
        t = z_42;
        t = g_0(t);
        if(((d_43 != NULL) && (d_43 != t)))
          _fail(t);
        else
          d_43 = t;
        t = y_42;
        t = f_0(t);
        if(((e_43 != NULL) && (e_43 != t)))
          _fail(t);
        else
          e_43 = t;
        t = z_42;
        t = reverse_acc_2_0(f_0, f_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_8;
      t = g_0(t);
    }
  return(t);
}
static ATerm v_5 (ATerm l_39, ATerm m_39, ATerm t)
{
  t = SSL_table_get(l_39, m_39);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,s_15 = NULL;
  k_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_43);
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_43);
  s_15 = t;
  t = SSLsetAnnotations(s_15, i_43);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm o_43 = NULL;
  o_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_43), term_y_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  ATerm z_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_20;
      t = get_config_0_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = z_20;
      t = fetch_1_0(g_6, t);
    }
  t = term_c_21;
  t = echo_0_0(t);
  t = term_v_19;
  g_43 = t;
  t = term_w_19;
  h_43 = t;
  t = term_d_21;
  t = v_5(g_43, h_43, t);
  t = reverse_acc_2_0(_id, h_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
  q_43 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_43;
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
            t = q_43;
          }
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = (ATerm) ATinsert(ATempty, q_43);
      }
  }
  r_43 = t;
  t = term_z_16;
  s_43 = t;
  t = SSL_printnl(s_43, r_43);
  t = q_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL;
  t = term_i_21;
  w_43 = t;
  t = term_m_8;
  x_43 = t;
  t = term_j_21;
  t = y_5(w_43, x_43, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  t = term_i_21;
  a_44 = t;
  t = term_m_8;
  b_44 = t;
  t = term_j_21;
  t = y_5(a_44, b_44, t);
  t = term_l_21;
  y_43 = t;
  t = term_m_8;
  z_43 = t;
  t = term_m_21;
  t = y_5(y_43, z_43, t);
  t = term_n_21;
  return(t);
}
static ATerm d_7 (ATerm t)
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
      t = Option_3_0(v_6, w_6, x_6, t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = Option_3_0(z_6, a_7, d_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,g_16 = NULL;
  h_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_44 = ATgetFirst((ATermList) t);
      e_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_44);
  c_44 = t;
  t = d_44;
  t = m_65(t);
  f_44 = t;
  t = e_44;
  t = n_65(t);
  g_44 = t;
  t = (ATerm) ATinsert(CheckATermList(g_44), f_44);
  g_16 = t;
  t = SSLsetAnnotations(g_16, c_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,r_44 = NULL,s_44 = NULL,q_18 = NULL;
  m_44 = t;
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_21;
        t = a_109(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
      }
  }
  t = m_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_44 = ATgetFirst((ATermList) t);
      p_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  n_44 = t;
  t = term_i_20;
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, o_44);
  t = y_5(s_44, o_44, t);
  t = p_44;
  {
    static ATerm c_45 (ATerm t)
    {
      ATerm u_21 = t;
      int v_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_44 = NULL;
              v_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_44;
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              t = a_109(t);
              t = Cons_2_0(_id, c_45, t);
            }
          LocalPopChoice(v_21);
        }
      else
        {
          t = u_21;
          {
            ATerm y_44 = NULL,z_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_44 = ATgetFirst((ATermList) t);
                z_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_44), (ATerm) ATmakeAppl(sym_Undefined_1, y_44));
          }
        }
      return(t);
    }
    t = c_45(t);
  }
  r_44 = t;
  t = (ATerm) ATinsert(CheckATermList(r_44), (ATerm) ATmakeAppl(sym_Program_1, o_44));
  q_18 = t;
  t = SSLsetAnnotations(q_18, n_44);
  return(t);
}
static ATerm f_7 (ATerm t)
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
static ATerm h_7 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  t = term_x_20;
  p_45 = t;
  t = term_m_8;
  q_45 = t;
  t = term_y_21;
  t = y_5(p_45, q_45, t);
  t = term_z_21;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  j_45 = t;
  t = term_v_19;
  l_45 = t;
  t = term_w_19;
  m_45 = t;
  t = (ATerm) ATempty;
  n_45 = t;
  t = SSL_table_put(l_45, m_45, n_45);
  t = j_45;
  {
    static ATerm e_7 (ATerm t)
    {
      ATerm b_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_108(t);
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
                t = Option_3_0(f_7, h_7, i_7, t);
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
    t = parse_options_p__1_0(e_7, t);
  }
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_45 = NULL;
        x_45 = t;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_20 = NULL;
              t = x_45;
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
                    t = fetch_1_0(j_7, t);
                  }
              }
              t = x_45;
              t = default_system_usage_0_0(t);
              t = term_g_19;
              q_20 = t;
              t = SSL_exit(q_20);
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              {
                ATerm a_21 = NULL;
                t = term_i_21;
                t = get_config_0_0(t);
                t = x_45;
                t = default_system_about_0_0(t);
                t = term_g_19;
                a_21 = t;
                t = SSL_exit(a_21);
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
              ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
              static ATerm o_7 (ATerm t)
              {
                ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,c_19 = NULL;
                d_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_46);
                b_46 = t;
                t = c_46;
                if(((h_45 != NULL) && (h_45 != t)))
                  _fail(t);
                else
                  h_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_46);
                c_19 = t;
                t = SSLsetAnnotations(c_19, b_46);
                return(t);
              }
              t = fetch_1_0(o_7, t);
              t = term_n_8;
              z_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_45)), term_n_22);
              a_46 = t;
              t = SSL_printnl(z_45, a_46);
              t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_45)), term_n_22));
              t = default_system_usage_0_0(t);
              t = term_q_8;
              y_45 = t;
              t = SSL_exit(y_45);
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
            }
        }
      }
  }
  i_45 = t;
  t = term_v_19;
  k_45 = t;
  t = SSL_table_destroy(k_45);
  t = i_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  t = parse_options_1_0(z_106, t);
  i_46 = t;
  t = term_o_22;
  l_46 = t;
  t = SSL_table_create(l_46);
  t = term_o_22;
  j_46 = t;
  t = term_p_22;
  k_46 = t;
  t = SSL_table_put(j_46, k_46, i_46);
  t = i_46;
  t = b_107(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_107, t);
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
              t = c_107(t);
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
static ATerm w_7 (ATerm t)
{
  t = if_verbose2_1_0(i_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  t = term_u_22;
  m_46 = t;
  t = term_m_8;
  n_46 = t;
  t = term_v_22;
  t = y_5(m_46, n_46, t);
  t = term_w_22;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  o_46 = t;
  t = term_i_20;
  t = get_config_0_0(t);
  p_46 = t;
  t = term_n_8;
  q_46 = t;
  t = (ATerm) ATinsert(ATempty, p_46);
  r_46 = t;
  t = SSL_printnl(q_46, r_46);
  t = o_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t)
{
  static ATerm q_7 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_106(t);
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
                          t = Option_3_0(a_8, d_8, g_8, t);
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
  static ATerm z_7 (ATerm t)
  {
    ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
    t_46 = t;
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm j_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_46 != NULL) && (s_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_8, t);
          LocalPopChoice(l_23);
        }
      else
        {
          t = k_23;
          t = term_s_23;
          s_46 = t;
        }
    }
    t = not_null(s_46);
    t = ReadFromFile_0_0(t);
    u_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_46, u_46);
    t = apply_strategy_1_0(i_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_7, k_106, w_7, z_7, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,e_19 = NULL;
  z_46 = t;
  if(match_cons(t, sym__2))
    {
      w_46 = ATgetArgument(t, 0);
      x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_46);
  v_46 = t;
  t = x_46;
  t = dead_var_elim_0_0(t);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_46, y_46);
  e_19 = t;
  t = SSLsetAnnotations(e_19, v_46);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_8, _fail, default_usage_0_0, t);
  return(t);
}

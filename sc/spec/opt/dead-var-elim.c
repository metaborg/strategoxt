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
ATerm term_w_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_p_18;
ATerm term_h_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_y_16;
ATerm term_t_16;
ATerm term_m_16;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_s_13;
ATerm term_f_13;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
void init_constant_terms (void)
{
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_14);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_e_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_f_8);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_h_20);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_f_8);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_x_21, term_f_8);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_f_8);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_f_8);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm all_rl_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm l_0 (ATerm);
ATerm m_0 (ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm b_85 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm a_85 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm l_8 (ATerm a_7, ATerm b_7, ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm a_5 (ATerm z_46, ATerm y_46, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm b_5 (ATerm j_46, ATerm k_46, ATerm l_46, ATerm);
ATerm alltd_1_0 (ATerm s_88 (ATerm), ATerm);
ATerm reverse_map_1_0 (ATerm e_93 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm elim_sdef_1_0 (ATerm g_85 (ATerm), ATerm);
ATerm e_5 (ATerm h_46, ATerm i_46, ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm f_5 (ATerm n_99 (ATerm), ATerm o_45, ATerm m_45, ATerm);
ATerm g_5 (ATerm b_46, ATerm c_46, ATerm);
ATerm end_scope_1_0 (ATerm k_99 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_99 (ATerm), ATerm);
ATerm scope_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm w_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm j_5 (ATerm n_56, ATerm o_56, ATerm);
ATerm k_5 (ATerm b_60, ATerm c_60, ATerm);
ATerm m_5 (ATerm u_108 (ATerm), ATerm v_489, ATerm f_60, ATerm);
ATerm l_5 (ATerm x_59, ATerm y_59, ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm w_111 (ATerm), ATerm);
ATerm a_31 (ATerm k_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm n_5 (ATerm d_60, ATerm);
ATerm o_5 (ATerm p_56, ATerm q_56, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_33 (ATerm u_31, ATerm);
ATerm e_33 (ATerm b_32, ATerm c_32, ATerm d_32, ATerm);
ATerm f_33 (ATerm q_32, ATerm r_32, ATerm s_32, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm i_5 (ATerm d_54, ATerm e_54, ATerm);
ATerm debug_1_0 (ATerm s_108 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_110 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm q_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm u_5 (ATerm e_61, ATerm f_61, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm q_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_5 (ATerm w_45, ATerm x_45, ATerm v_45, ATerm);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm p_5 (ATerm a_44, ATerm b_44, ATerm);
ATerm foldr_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_110 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm need_help_1_0 (ATerm u_112 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm r_5 (ATerm n_47, ATerm o_47, ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm x_114 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm parse_options_1_0 (ATerm w_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm iowrap_3_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  i_0 = t;
  t = term_f_8;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_g_8;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), k_0), term_h_8);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_j_8;
  p_0 = t;
  t = SSL_exit(p_0);
  t = i_0;
  return(t);
}
ATerm all_rl_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  z_0 = t;
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_0;
  t = reverse_map_1_0(f_85, t);
  y_0 = t;
  t = SSL_mkterm(s_0, y_0);
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm p_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,y_2 = NULL,a_3 = NULL;
  y_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_3;
        p_1 = t;
        t = SSLgetAnnotations(y_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_9 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_9 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(n_9) != AT_LIST) || !(ATisEmpty(n_9))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_2;
        ;
        LocalPopChoice(o_8);
      }
    else
      {
        t = k_8;
        t = a_3;
        p_1 = t;
        t = SSLgetAnnotations(y_2);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_2;
      }
    t = term_p_9;
    t_1 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, p_1);
    u_1 = t;
    t = term_q_9;
    v_1 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_p_9, (ATerm)ATmakeAppl(sym_Var_1, p_1), term_q_9);
    t = b_5(t_1, u_1, v_1, t);
    t = y_2;
  }
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_9 = ATgetFirst((ATermList) t);
      ATerm s_9 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(s_9) != AT_LIST) || !(ATisEmpty(s_9))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, d_3);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,l_1 = NULL,n_1 = NULL,n_0 = NULL;
  n_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_1);
  g_1 = t;
  t = h_1;
  t = alltd_1_0(l_0, t);
  t = alltd_1_0(m_0, t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_1);
  n_0 = t;
  t = SSLsetAnnotations(n_0, g_1);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,x_1 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,x_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,a_2 = NULL,y_1 = NULL;
    d_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        x_3 = ATgetArgument(t, 0);
        z_3 = ATgetArgument(t, 1);
        a_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_4);
    s_3 = t;
    t = z_3;
    t = b_85(t);
    b_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_3, b_4, a_4);
    y_1 = t;
    t = SSLsetAnnotations(y_1, s_3);
    c_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        o_3 = ATgetArgument(t, 0);
        p_3 = ATgetArgument(t, 1);
        q_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_4);
    n_3 = t;
    t = o_3;
    t = b_85(t);
    r_3 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_3, p_3, q_3);
    a_2 = t;
    t = SSLsetAnnotations(a_2, n_3);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm g_4 = NULL,h_4 = NULL,j_4 = NULL,k_4 = NULL,n_4 = NULL,o_4 = NULL,g_2 = NULL;
    o_4 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        h_4 = ATgetArgument(t, 0);
        j_4 = ATgetArgument(t, 1);
        k_4 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_4);
    g_4 = t;
    t = k_4;
    t = b_85(t);
    n_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_4, j_4, n_4);
    g_2 = t;
    t = SSLsetAnnotations(g_2, g_4);
    return(t);
  }
  if(((l_3 != NULL) && (l_3 != t)))
    _fail(t);
  else
    l_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((i_3 != NULL) && (i_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_3 = ATgetArgument(t, 0);
      if(((j_3 != NULL) && (j_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_3 = ATgetArgument(t, 1);
      if(((k_3 != NULL) && (k_3 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(l_3));
  if(((h_3 != NULL) && (h_3 != t)))
    _fail(t);
  else
    h_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(i_3), not_null(j_3), not_null(k_3));
  if(((x_1 != NULL) && (x_1 != t)))
    _fail(t);
  else
    x_1 = t;
  t = SSLsetAnnotations(not_null(x_1), not_null(h_3));
  t = elim_abstract_choice_2_0(o_0, t_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL,r_2 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm d_5 = NULL,h_5 = NULL,v_5 = NULL,d_6 = NULL,f_6 = NULL,s_2 = NULL;
    f_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        h_5 = ATgetArgument(t, 0);
        v_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_6);
    d_5 = t;
    t = h_5;
    t = a_85(t);
    d_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, d_6, v_5);
    s_2 = t;
    t = SSLsetAnnotations(s_2, d_5);
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,t_2 = NULL;
    k_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        h_6 = ATgetArgument(t, 0);
        i_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_6);
    g_6 = t;
    t = i_6;
    t = a_85(t);
    j_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, h_6, j_6);
    t_2 = t;
    t = SSLsetAnnotations(t_2, g_6);
    return(t);
  }
  if(((v_4 != NULL) && (v_4 != t)))
    _fail(t);
  else
    v_4 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((s_4 != NULL) && (s_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_4 = ATgetArgument(t, 0);
      if(((t_4 != NULL) && (t_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(v_4));
  if(((r_4 != NULL) && (r_4 != t)))
    _fail(t);
  else
    r_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_4), not_null(t_4));
  if(((r_2 != NULL) && (r_2 != t)))
    _fail(t);
  else
    r_2 = t;
  t = SSLsetAnnotations(not_null(r_2), not_null(r_4));
  t = elim_abstract_choice_2_0(u_0, v_0, t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm s_7 = NULL,v_7 = NULL,w_7 = NULL,z_7 = NULL;
  z_7 = t;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
      t = v_7;
      {
        ATerm u_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_7 = ATgetFirst((ATermList) t);
                {
                  ATerm y_9 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_9);
            t = w_7;
            {
              ATerm a_10 = t;
              int b_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm l_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_10);
                  t = s_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = z_7;
                    }
                  else
                    {
                      ATerm s_10 = t;
                      int t_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = l_8(s_7, z_7, t);
                          ;
                          LocalPopChoice(t_10);
                        }
                      else
                        {
                          t = s_10;
                          t = z_7;
                        }
                    }
                }
              else
                {
                  t = a_10;
                  t = s_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = z_7;
                    }
                  else
                    {
                      t = z_7;
                    }
                }
            }
          }
        else
          {
            t = u_9;
            t = s_7;
            if(match_cons(t, sym_Scopes_0))
              {
                t = z_7;
              }
            else
              {
                t = z_7;
              }
          }
      }
    }
  else
    {
      t = z_7;
    }
  return(t);
}
ATerm l_8 (ATerm a_7, ATerm b_7, ATerm t)
{
  t = b_7;
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL;
        t = term_p_9;
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, a_7);
        t = r_5(j_1, a_7, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_10 = ATgetFirst((ATermList) t);
            if(match_cons(z_10, sym_Defined_1))
              {
                ATerm d_11 = ATgetArgument(z_10, 0);
              }
            else
              _fail(t);
            {
              ATerm a_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_7;
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = (ATerm) ATmakeAppl(sym__2, a_7, (ATerm) ATinsert(ATempty, term_q_9));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  t = map_1_0(w_0, t);
  x_6 = t;
  t = term_p_9;
  z_6 = t;
  t = SSL_table_destroy(z_6);
  t = term_p_9;
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, x_6);
  t = a_5(y_6, x_6, t);
  t = x_6;
  return(t);
}
ATerm a_5 (ATerm z_46, ATerm y_46, ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm r_8 = NULL,s_8 = NULL;
    if(match_cons(t, sym__2))
      {
        r_8 = ATgetArgument(t, 0);
        s_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(not_null(z_46), r_8, s_8);
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_46), r_8, s_8);
    return(t);
  }
  t = not_null(y_46);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_8 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm u_8 = NULL,w_8 = NULL;
    u_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_8), u_8);
    t = r_5(not_null(t_8), u_8, t);
    w_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_8, w_8);
    return(t);
  }
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  t = SSL_table_keys(not_null(t_8));
  t = map_1_0(b_1, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_p_9;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  t = save_ElimVar_0_0(t);
  y_8 = t;
  t = c_9;
  t = c_85(t);
  b_9 = t;
  t = save_ElimVar_0_0(t);
  z_8 = t;
  t = term_p_9;
  e_9 = t;
  t = SSL_table_destroy(e_9);
  t = term_p_9;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, y_8);
  t = a_5(d_9, y_8, t);
  t = b_9;
  t = d_85(t);
  a_9 = t;
  t = z_8;
  t = isect_ElimVar_0_0(t);
  t = a_9;
  return(t);
}
ATerm elim_choice_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,l_9 = NULL,x_2 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm m_9 = NULL,o_9 = NULL,t_9 = NULL,v_9 = NULL,z_9 = NULL,z_2 = NULL;
    z_9 = t;
    if(match_cons(t, sym_Choice_2))
      {
        o_9 = ATgetArgument(t, 0);
        t_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_9);
    m_9 = t;
    t = o_9;
    t = z_84(t);
    v_9 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, v_9, t_9);
    z_2 = t;
    t = SSLsetAnnotations(z_2, m_9);
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,c_3 = NULL;
    g_10 = t;
    if(match_cons(t, sym_Choice_2))
      {
        d_10 = ATgetArgument(t, 0);
        e_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_10);
    c_10 = t;
    t = e_10;
    t = z_84(t);
    f_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, d_10, f_10);
    c_3 = t;
    t = SSLsetAnnotations(c_3, c_10);
    return(t);
  }
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((g_9 != NULL) && (g_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_9 = ATgetArgument(t, 0);
      if(((h_9 != NULL) && (h_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(l_9));
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_9), not_null(h_9));
  if(((x_2 != NULL) && (x_2 != t)))
    _fail(t);
  else
    x_2 = t;
  t = SSLsetAnnotations(not_null(x_2), not_null(f_9));
  t = elim_abstract_choice_2_0(c_1, d_1, t);
  return(t);
}
ATerm b_5 (ATerm j_46, ATerm k_46, ATerm l_46, ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,m_10 = NULL;
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_46, k_46);
  t = r_5(j_46, k_46, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_11 = ATgetFirst((ATermList) t);
      h_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_10), l_46);
  m_10 = t;
  t = SSL_table_put(j_46, k_46, m_10);
  t = i_10;
  return(t);
}
ATerm alltd_1_0 (ATerm s_88 (ATerm), ATerm t)
{
  ATerm u_10 (ATerm t)
  {
    ATerm o_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_88(t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = o_11;
        t = SRTS_all(u_10, t);
      }
    return(t);
  }
  t = u_10(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  w_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_11 = ATgetFirst((ATermList) t);
      v_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_1 = NULL,z_1 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,h_2 = NULL,i_2 = NULL,e_4 = NULL,m_3 = NULL;
        t = SSLgetAnnotations(w_11);
        d_2 = t;
        t = v_11;
        t = reverse_map_1_0(e_93, t);
        h_2 = t;
        t = (ATerm) ATinsert(CheckATermList(h_2), u_11);
        m_3 = t;
        t = SSLsetAnnotations(m_3, d_2);
        i_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_1 = ATgetFirst((ATermList) t);
            b_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_2);
        s_1 = t;
        t = z_1;
        t = e_93(t);
        c_2 = t;
        t = (ATerm) ATinsert(CheckATermList(b_2), c_2);
        e_4 = t;
        t = SSLsetAnnotations(e_4, s_1);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_11;
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_12 = ATgetArgument(t, 0);
      {
        ATerm s_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, n_12);
  o_12 = t;
  t = term_q_9;
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_12), term_q_9);
  t = f_5(k_1, o_12, p_12, t);
  t = m_12;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm elim_sdef_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm y_11 = NULL,a_12 = NULL,d_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,z_5 = NULL;
    l_12 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        a_12 = ATgetArgument(t, 0);
        d_12 = ATgetArgument(t, 1);
        h_12 = ATgetArgument(t, 2);
        i_12 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_12);
    y_11 = t;
    t = h_12;
    t = map_1_0(i_1, t);
    j_12 = t;
    t = i_12;
    t = g_85(t);
    k_12 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, a_12, d_12, j_12, k_12);
    z_5 = t;
    t = SSLsetAnnotations(z_5, y_11);
    return(t);
  }
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      ATerm x_11 = ATgetArgument(t, 1);
      ATerm c_12 = ATgetArgument(t, 2);
      ATerm e_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = scope_2_0(e_1, f_1, t);
  return(t);
}
ATerm e_5 (ATerm h_46, ATerm i_46, ATerm t)
{
  ATerm q_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  t = r_5(h_46, i_46, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_12 = ATgetFirst((ATermList) t);
      {
        ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_12;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL;
        t = term_p_9;
        y_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, d_14);
        t = e_5(y_3, d_14, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_4 = NULL;
              t = term_p_9;
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_9, d_14);
              t = e_5(p_4, d_14, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              {
                ATerm w_12 = t;
                int d_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_4 = NULL;
                    t = term_p_9;
                    z_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_p_9, d_14);
                    t = e_5(z_4, d_14, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(d_13);
                  }
                else
                  {
                    t = w_12;
                    {
                      ATerm y_5 = NULL;
                      t = term_p_9;
                      y_5 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_p_9, d_14);
                      t = e_5(y_5, d_14, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm e_13 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_f_13;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_15 = ATgetFirst((ATermList) t);
          i_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 = NULL,n_6 = NULL,o_6 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(g_15);
            e_6 = t;
            t = h_15;
            t = r_99(t);
            n_6 = t;
            t = i_15;
            t = filter_1_0(r_99, t);
            o_6 = t;
            t = (ATerm) ATinsert(CheckATermList(o_6), n_6);
            h_7 = t;
            t = SSLsetAnnotations(h_7, e_6);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = g_13;
            t = i_15;
            t = filter_1_0(r_99, t);
          }
      }
    }
  return(t);
}
ATerm f_5 (ATerm n_99 (ATerm), ATerm o_45, ATerm m_45, ATerm t)
{
  ATerm q_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,y_15 = NULL,z_15 = NULL;
  w_15 = t;
  t = n_99(t);
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_15, o_45, m_45);
  t = s_5(q_15, o_45, m_45, t);
  {
    ATerm n_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_16 = NULL;
        t = term_s_13;
        a_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, term_s_13);
        t = r_5(q_15, a_16, t);
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = n_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_15 = ATgetFirst((ATermList) t);
        v_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_13;
    y_15 = t;
    t = (ATerm) ATinsert(CheckATermList(v_15), (ATerm) ATinsert(CheckATermList(u_15), o_45));
    z_15 = t;
    t = SSL_table_put(q_15, y_15, z_15);
    t = w_15;
  }
  return(t);
}
ATerm g_5 (ATerm b_46, ATerm c_46, ATerm t)
{
  ATerm b_16 = NULL,d_16 = NULL;
  d_16 = t;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
        t = r_5(b_46, c_46, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_13 = ATgetFirst((ATermList) t);
            b_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_13);
        t = SSL_table_put(b_46, c_46, b_16);
        t = (ATerm) ATmakeAppl(sym__3, b_46, c_46, b_16);
      }
    else
      {
        t = t_13;
        t = SSL_table_remove(b_46, c_46);
        t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
      }
    t = d_16;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_99 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,j_16 = NULL,n_16 = NULL,r_16 = NULL,s_16 = NULL;
  if(((r_16 != NULL) && (r_16 != t)))
    _fail(t);
  else
    r_16 = t;
  t = k_99(t);
  if(((n_16 != NULL) && (n_16 != t)))
    _fail(t);
  else
    n_16 = t;
  {
    ATerm y_13 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_16 = NULL;
        t = term_s_13;
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), term_s_13);
        t = r_5(not_null(n_16), v_16, t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = y_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_16 != NULL) && (j_16 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_16 = ATgetFirst((ATermList) t);
        if(((e_16 != NULL) && (e_16 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_13;
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    t = SSL_table_put(not_null(n_16), not_null(s_16), not_null(e_16));
    t = not_null(j_16);
    {
      ATerm m_1 (ATerm t)
      {
        ATerm w_16 = NULL;
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), w_16);
        t = g_5(not_null(n_16), w_16, t);
        return(t);
      }
      t = map_1_0(m_1, t);
      t = not_null(r_16);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_90(t);
      t = i_90(t);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      t = i_90(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,e_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL;
  e_17 = t;
  t = j_99(t);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, term_s_13);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_17 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_14 = ATgetArgument(t, 0);
            ATerm n_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_13;
        s_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_17, term_s_13);
        t = r_5(a_17, s_17, t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = (ATerm) ATempty;
      }
    i_17 = t;
    t = term_s_13;
    j_17 = t;
    t = (ATerm) ATinsert(CheckATermList(i_17), (ATerm) ATempty);
    l_17 = t;
    t = SSL_table_put(a_17, j_17, l_17);
    t = e_17;
  }
  return(t);
}
ATerm scope_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = end_scope_1_0(l_99, t);
    return(t);
  }
  t = begin_scope_1_0(l_99, t);
  t = restore_always_2_0(m_99, o_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_19);
  y_19 = t;
  t = term_q_14;
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_19), term_q_14);
  t = f_5(e_2, y_19, z_19, t);
  t = x_19;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm t_14 = t;
  if((PushChoice() == 0))
    {
      ATerm c_20 = NULL;
      c_20 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_20);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_14;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm f_7 = NULL,i_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_p_9;
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_7);
  l_7 = t;
  t = term_q_9;
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, (ATerm)ATmakeAppl(sym_Var_1, i_7), term_q_9);
  t = b_5(k_7, l_7, m_7, t);
  t = f_7;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = alltd_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm q_8 = NULL,v_8 = NULL,x_8 = NULL,i_9 = NULL,j_9 = NULL;
  q_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_p_9;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_8);
  i_9 = t;
  t = term_q_9;
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, (ATerm)ATmakeAppl(sym_Var_1, v_8), term_q_9);
  t = b_5(x_8, i_9, j_9, t);
  t = q_8;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = alltd_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_p_9;
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_10);
  q_10 = t;
  t = term_q_9;
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, (ATerm)ATmakeAppl(sym_Var_1, o_10), term_q_9);
  t = b_5(p_10, q_10, r_10, t);
  t = n_10;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,q_13 = NULL,j_11 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_13);
  k_13 = t;
  t = l_13;
  t = map_1_0(dead_var_elim_0_0, t);
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_13);
  j_11 = t;
  t = SSLsetAnnotations(j_11, k_13);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm u_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_25 (ATerm t)
      {
        ATerm x_14 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18 = NULL;
            ATerm r_1 (ATerm t)
            {
              ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,y_18 = NULL,g_19 = NULL,i_19 = NULL,m_19 = NULL,s_19 = NULL,t_19 = NULL,w_19 = NULL,x_10 = NULL,p_8 = NULL;
              w_19 = t;
              if(match_cons(t, sym_Scope_2))
                {
                  g_19 = ATgetArgument(t, 0);
                  i_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_19);
              y_18 = t;
              t = g_19;
              t = map_1_0(w_1, t);
              m_19 = t;
              t = i_19;
              t = r_25(t);
              s_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_19, s_19);
              p_8 = t;
              t = SSLsetAnnotations(p_8, y_18);
              t_19 = t;
              if(match_cons(t, sym_Scope_2))
                {
                  s_18 = ATgetArgument(t, 0);
                  t_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_19);
              r_18 = t;
              t = s_18;
              t = filter_1_0(f_2, t);
              u_18 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, u_18, t_18);
              x_10 = t;
              t = SSLsetAnnotations(x_10, r_18);
              return(t);
            }
            if(((k_18 != NULL) && (k_18 != t)))
              _fail(t);
            else
              k_18 = t;
            if(match_cons(t, sym_Scope_2))
              {
                ATerm f_15 = ATgetArgument(t, 0);
                ATerm k_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(k_18);
            t = scope_2_0(q_1, r_1, t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = x_14;
            {
              ATerm o_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_sdef_1_0(r_25, t);
                  ;
                  LocalPopChoice(p_15);
                }
              else
                {
                  t = o_15;
                  {
                    ATerm r_15 = t;
                    int s_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_23 = NULL,b_24 = NULL,c_24 = NULL,e_24 = NULL;
                        b_24 = t;
                        if(match_cons(t, sym_Build_1))
                          {
                            c_24 = ATgetArgument(t, 0);
                            {
                              ATerm v_6 = NULL,d_7 = NULL,y_10 = NULL;
                              t = SSLgetAnnotations(b_24);
                              v_6 = t;
                              t = c_24;
                              t = alltd_1_0(j_2, t);
                              d_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, d_7);
                              y_10 = t;
                              t = SSLsetAnnotations(y_10, v_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                c_24 = ATgetArgument(t, 0);
                                e_24 = ATgetArgument(t, 1);
                                y_23 = ATgetArgument(t, 2);
                                {
                                  ATerm a_8 = NULL,m_8 = NULL,n_8 = NULL,b_11 = NULL;
                                  t = SSLgetAnnotations(b_24);
                                  a_8 = t;
                                  t = e_24;
                                  t = reverse_map_1_0(r_25, t);
                                  m_8 = t;
                                  t = y_23;
                                  t = reverse_map_1_0(k_2, t);
                                  n_8 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_24, m_8, n_8);
                                  b_11 = t;
                                  t = SSLsetAnnotations(b_11, a_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    c_24 = ATgetArgument(t, 0);
                                    e_24 = ATgetArgument(t, 1);
                                    y_23 = ATgetArgument(t, 2);
                                    {
                                      ATerm x_9 = NULL,j_10 = NULL,k_10 = NULL,c_11 = NULL;
                                      t = SSLgetAnnotations(b_24);
                                      x_9 = t;
                                      t = e_24;
                                      t = reverse_map_1_0(r_25, t);
                                      j_10 = t;
                                      t = y_23;
                                      t = reverse_map_1_0(m_2, t);
                                      k_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, c_24, j_10, k_10);
                                      c_11 = t;
                                      t = SSLsetAnnotations(c_11, x_9);
                                    }
                                  }
                                else
                                  {
                                    ATerm e_11 = NULL,h_11 = NULL,k_11 = NULL,p_11 = NULL,q_11 = NULL,z_11 = NULL,b_12 = NULL,g_11 = NULL,f_11 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        c_24 = ATgetArgument(t, 0);
                                        e_24 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(b_24);
                                    q_11 = t;
                                    t = e_24;
                                    t = r_25(t);
                                    z_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_24, z_11);
                                    f_11 = t;
                                    t = SSLsetAnnotations(f_11, q_11);
                                    b_12 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        h_11 = ATgetArgument(t, 0);
                                        k_11 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(b_12);
                                    e_11 = t;
                                    t = h_11;
                                    t = r_25(t);
                                    p_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, k_11);
                                    g_11 = t;
                                    t = SSLsetAnnotations(g_11, e_11);
                                  }
                              }
                          }
                        ;
                        LocalPopChoice(s_15);
                      }
                    else
                      {
                        t = r_15;
                        {
                          ATerm t_15 = t;
                          int x_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_choice_1_0(r_25, t);
                              ;
                              LocalPopChoice(x_15);
                            }
                          else
                            {
                              t = t_15;
                              {
                                ATerm c_16 = t;
                                int f_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = elim_lchoice_1_0(r_25, t);
                                    ;
                                    LocalPopChoice(f_16);
                                  }
                                else
                                  {
                                    t = c_16;
                                    {
                                      ATerm g_16 = t;
                                      int h_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = elim_guardedlchoice_1_0(r_25, t);
                                          ;
                                          LocalPopChoice(h_16);
                                        }
                                      else
                                        {
                                          t = g_16;
                                          {
                                            ATerm i_16 = t;
                                            int l_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = EliminateFromMatch_0_0(t);
                                                ;
                                                LocalPopChoice(l_16);
                                              }
                                            else
                                              {
                                                t = i_16;
                                                t = all_rl_1_0(r_25, t);
                                              }
                                          }
                                        }
                                    }
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
      t = r_25(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = u_14;
      {
        ATerm p_25 = NULL,q_25 = NULL,v_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,h_13 = NULL,i_13 = NULL,m_11 = NULL,l_11 = NULL,i_11 = NULL;
        p_25 = t;
        if(match_cons(t, sym_Specification_1))
          {
            q_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_25);
        v_12 = t;
        t = q_25;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_12 = ATgetFirst((ATermList) t);
            z_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_25);
        x_12 = t;
        t = y_12;
        if(match_cons(t, sym_Signature_1))
          {
            h_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_12);
        c_13 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, h_13);
        i_11 = t;
        t = SSLsetAnnotations(i_11, c_13);
        i_13 = t;
        t = z_12;
        t = Cons_2_0(o_2, p_2, t);
        a_13 = t;
        t = (ATerm) ATinsert(CheckATermList(a_13), i_13);
        l_11 = t;
        t = SSLsetAnnotations(l_11, x_12);
        b_13 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, b_13);
        m_11 = t;
        t = SSLsetAnnotations(m_11, v_12);
      }
    }
  return(t);
}
ATerm j_5 (ATerm n_56, ATerm o_56, ATerm t)
{
  ATerm b_26 = NULL;
  t = SSL_fputc(n_56, o_56);
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_26);
  return(t);
}
ATerm k_5 (ATerm b_60, ATerm c_60, ATerm t)
{
  ATerm c_26 = NULL;
  t = SSL_write_term_to_stream_text(b_60, c_60);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_26);
  return(t);
}
ATerm m_5 (ATerm u_108 (ATerm), ATerm v_489, ATerm f_60, ATerm t)
{
  ATerm d_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_489, term_m_16);
  t = open_stream_0_0(t);
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_26, f_60);
  t = u_108(t);
  t = fclose_0_0(t);
  t = f_60;
  return(t);
}
ATerm l_5 (ATerm x_59, ATerm y_59, ATerm t)
{
  ATerm h_26 = NULL;
  t = SSL_write_term_to_stream_baf(x_59, y_59);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_26);
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if(match_cons(p_16, sym_Stream_1))
        {
          e_14 = ATgetArgument(p_16, 0);
        }
      else
        _fail(t);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(e_14, f_14, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm a_15 = NULL,e_15 = NULL,j_15 = NULL,m_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if(match_cons(q_16, sym_Stream_1))
        {
          m_15 = ATgetArgument(q_16, 0);
        }
      else
        _fail(t);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(m_15, n_15, t);
  a_15 = t;
  t = term_t_16;
  e_15 = t;
  t = a_15;
  if(match_cons(t, sym_Stream_1))
    {
      j_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, a_15);
  t = j_5(e_15, j_15, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,w_26 = NULL,x_26 = NULL,c_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,l_29 = NULL,m_29 = NULL,p_13 = NULL,o_13 = NULL;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  if(match_cons(t, sym__2))
    {
      if(((h_27 != NULL) && (h_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_27 = ATgetArgument(t, 0);
      if(((i_27 != NULL) && (i_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(s_26));
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  t = not_null(h_27);
  {
    ATerm u_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_26 != NULL) && (r_26 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_2, t);
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = u_16;
        t = term_y_16;
        if(((r_26 != NULL) && (r_26 != t)))
          _fail(t);
        else
          r_26 = t;
      }
    if(((j_27 != NULL) && (j_27 != t)))
      _fail(t);
    else
      j_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(i_27));
    if(((o_13 != NULL) && (o_13 != t)))
      _fail(t);
    else
      o_13 = t;
    t = SSLsetAnnotations(not_null(o_13), not_null(g_27));
    t = not_null(s_26);
    if(match_cons(t, sym__2))
      {
        if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          w_26 = ATgetArgument(t, 0);
        if(((x_26 != NULL) && (x_26 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          x_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(s_26));
    if(((t_26 != NULL) && (t_26 != t)))
      _fail(t);
    else
      t_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), (ATerm) ATmakeAppl(sym__2, not_null(r_26), not_null(x_26)));
    if(((p_13 != NULL) && (p_13 != t)))
      _fail(t);
    else
      p_13 = t;
    t = SSLsetAnnotations(not_null(p_13), not_null(t_26));
    if(((c_27 != NULL) && (c_27 != t)))
      _fail(t);
    else
      c_27 = t;
    if(match_cons(t, sym__2))
      {
        if(((l_29 != NULL) && (l_29 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_29 = ATgetArgument(t, 0);
        if(((m_29 != NULL) && (m_29 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          m_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm z_16 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,v_13 = NULL;
          t = SSLgetAnnotations(not_null(c_27));
          w_13 = t;
          t = not_null(l_29);
          t = fetch_1_0(u_2, t);
          z_13 = t;
          t = not_null(m_29);
          if(match_cons(t, sym__2))
            {
              b_14 = ATgetArgument(t, 0);
              c_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_5(v_2, b_14, c_14, t);
          a_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_13, a_14);
          v_13 = t;
          t = SSLsetAnnotations(v_13, w_13);
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = z_16;
          {
            ATerm p_14 = NULL,v_14 = NULL,y_14 = NULL,z_14 = NULL,j_14 = NULL;
            t = SSLgetAnnotations(not_null(c_27));
            p_14 = t;
            t = not_null(m_29);
            if(match_cons(t, sym__2))
              {
                y_14 = ATgetArgument(t, 0);
                z_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_5(w_2, y_14, z_14, t);
            v_14 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), v_14);
            j_14 = t;
            t = SSLsetAnnotations(j_14, p_14);
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
ATerm apply_strategy_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,u_29 = NULL,w_29 = NULL;
  w_29 = t;
  t = dtime_0_0(t);
  t = w_29;
  t = w_111(t);
  u_29 = t;
  t = dtime_0_0(t);
  p_29 = t;
  t = u_29;
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_29), (ATerm) ATmakeAppl(sym_Runtime_1, p_29)), r_29);
  return(t);
}
ATerm a_31 (ATerm k_30, ATerm t)
{
  t = SSL_fclose(k_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  r_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_30 = ATgetArgument(t, 0);
      {
        ATerm d_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_30);
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = d_17;
            t = a_31(r_30, t);
          }
      }
    }
  else
    {
      t = a_31(r_30, t);
    }
  return(t);
}
ATerm n_5 (ATerm d_60, ATerm t)
{
  t = SSL_read_term_from_stream(d_60);
  return(t);
}
ATerm o_5 (ATerm p_56, ATerm q_56, ATerm t)
{
  ATerm d_31 = NULL;
  t = SSL_fopen(p_56, q_56);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_31 = NULL;
  t = SSL_stdin_stream();
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_31 = NULL;
  t = SSL_stdout_stream();
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_31 = NULL;
  t = SSL_stderr_stream();
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_31);
  return(t);
}
ATerm d_33 (ATerm u_31, ATerm t)
{
  ATerm v_31 = NULL;
  t = SSL_explode_term(u_31);
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_17 = ATgetArgument(t, 1);
        if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
          {
            v_31 = ATgetFirst((ATermList) k_17);
            {
              ATerm m_17 = (ATerm) ATgetNext((ATermList) k_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_31;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_33 (ATerm b_32, ATerm c_32, ATerm d_32, ATerm t)
{
  ATerm h_32 = NULL,k_32 = NULL,l_32 = NULL,o_32 = NULL,r_14 = NULL;
  t = SSLgetAnnotations(d_32);
  l_32 = t;
  t = b_32;
  if(match_cons(t, sym_Path_1))
    {
      o_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_32, c_32);
  r_14 = t;
  t = SSLsetAnnotations(r_14, l_32);
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(h_32, k_32, t);
  return(t);
}
ATerm f_33 (ATerm q_32, ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,y_32 = NULL,s_14 = NULL;
  t = SSLgetAnnotations(s_32);
  v_32 = t;
  t = SSL_is_string(q_32);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_32, r_32);
  s_14 = t;
  t = SSLsetAnnotations(s_14, v_32);
  if(match_cons(t, sym__2))
    {
      t_32 = ATgetArgument(t, 0);
      u_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(t_32, u_32, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      ATerm o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  a_33 = t;
  if(match_cons(t, sym__2))
    {
      b_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_33(a_33, t);
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            {
              ATerm r_17 = t;
              int t_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_33(b_33, c_33, a_33, t);
                  ;
                  LocalPopChoice(t_17);
                }
              else
                {
                  t = r_17;
                  t = f_33(b_33, c_33, a_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_33(a_33, t);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_33 = NULL;
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_33, term_x_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      t = debug_1_0(e_3, t);
      _fail(t);
    }
  h_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_5(i_33, t);
  g_33 = t;
  t = h_33;
  t = fclose_0_0(t);
  t = g_33;
  return(t);
}
ATerm fetch_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm h_34 (ATerm t)
  {
    ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
    e_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_34 = ATgetFirst((ATermList) t);
        g_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_17 = t;
      int b_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_16 = NULL,o_16 = NULL,b_15 = NULL;
          t = SSLgetAnnotations(e_34);
          k_16 = t;
          t = f_34;
          t = l_93(t);
          o_16 = t;
          t = (ATerm) ATinsert(CheckATermList(g_34), o_16);
          b_15 = t;
          t = SSLsetAnnotations(b_15, k_16);
          ;
          LocalPopChoice(b_18);
        }
      else
        {
          t = y_17;
          {
            ATerm b_17 = NULL,f_17 = NULL,c_15 = NULL;
            t = SSLgetAnnotations(e_34);
            b_17 = t;
            t = g_34;
            t = h_34(t);
            f_17 = t;
            t = (ATerm) ATinsert(CheckATermList(f_17), f_34);
            c_15 = t;
            t = SSLsetAnnotations(c_15, b_17);
          }
        }
    }
    return(t);
  }
  t = h_34(t);
  return(t);
}
ATerm i_5 (ATerm d_54, ATerm e_54, ATerm t)
{
  t = SSL_strcat(d_54, e_54);
  return(t);
}
ATerm debug_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  k_34 = t;
  t = s_108(t);
  l_34 = t;
  t = term_g_8;
  m_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_34), l_34);
  n_34 = t;
  t = SSL_printnl(m_34, n_34);
  t = k_34;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_34 = NULL;
      u_34 = t;
      t = SSL_is_string(u_34);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_3, t);
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
              a_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_35 = ATgetArgument(t, 0);
                  t = b_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_35 = ATgetArgument(t, 0);
                      t = b_35;
                      {
                        ATerm n_18 = t;
                        int o_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_18);
                          }
                        else
                          {
                            t = n_18;
                            t = debug_1_0(g_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_35 = NULL,h_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_35 = ATgetArgument(t, 0);
                          c_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_35;
                      t = eval_config_0_0(t);
                      g_35 = t;
                      t = c_35;
                      t = eval_config_0_0(t);
                      h_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_35, h_35);
                      t = i_5(g_35, h_35, t);
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
  ATerm l_35 = NULL,m_35 = NULL;
  l_35 = t;
  t = term_p_18;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, l_35);
  t = r_5(m_35, l_35, t);
  {
    ATerm q_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_35 = NULL,o_35 = NULL;
        t = eval_config_0_0(t);
        n_35 = t;
        t = term_p_18;
        o_35 = t;
        t = SSL_table_put(o_35, l_35, n_35);
        t = n_35;
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = q_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  {
    ATerm w_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_35 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        u_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_35, term_b_19);
        t = geq_0_0(t);
        t = s_35;
        t = f_110(t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = w_18;
        t = s_35;
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  if(match_string(t, "-k"))
    {
      t = x_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_35;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  y_35 = t;
  t = SSL_string_to_int(y_35);
  z_35 = t;
  t = term_c_19;
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, z_35);
  t = u_5(a_36, z_35, t);
  t = y_35;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  if(match_string(t, "-S"))
    {
      t = c_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_36;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  t = term_a_19;
  d_36 = t;
  t = term_e_19;
  e_36 = t;
  t = term_f_19;
  t = u_5(d_36, e_36, t);
  t = term_j_19;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  t = SSL_string_to_int(f_36);
  g_36 = t;
  t = term_a_19;
  h_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, g_36);
  t = u_5(h_36, g_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_36);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  t = term_p_19;
  i_36 = t;
  t = term_f_8;
  j_36 = t;
  t = term_q_19;
  t = u_5(i_36, j_36, t);
  t = term_r_19;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, f_4, i_4, t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = v_19;
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, m_4, q_4, t);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            t = Option_3_0(u_4, w_4, x_4, t);
          }
      }
    }
  return(t);
}
ATerm u_5 (ATerm e_61, ATerm f_61, ATerm t)
{
  ATerm k_36 = NULL;
  t = term_p_18;
  k_36 = t;
  t = SSL_table_put(k_36, e_61, f_61);
  t = (ATerm) ATmakeAppl(sym__3, term_p_18, e_61, f_61);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
      t = term_f_8;
      t = d_0(t);
      p_36 = t;
      t = term_f_20;
      q_36 = t;
      t = term_h_20;
      r_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_20, term_h_20, p_36);
      t = s_5(q_36, r_36, p_36, t);
      _fail(t);
    }
  else
    {
      ATerm u_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_36 = ATgetFirst((ATermList) t);
          o_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_36;
      t = a_0(t);
      t = term_f_8;
      t = b_0(t);
      u_36 = t;
      t = (ATerm) ATinsert(CheckATermList(o_36), u_36);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  if(match_string(t, "-o"))
    {
      t = w_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_36;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  t = term_j_20;
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, x_36);
  t = u_5(y_36, x_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_36);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, c_5, q_5, t);
  return(t);
}
ATerm s_5 (ATerm w_45, ATerm x_45, ATerm v_45, ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_45, x_45);
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            ATerm s_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_45, x_45);
        t = r_5(w_45, x_45, t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATempty;
      }
    b_37 = t;
    t = (ATerm) ATinsert(CheckATermList(b_37), v_45);
    c_37 = t;
    t = SSL_table_put(w_45, x_45, c_37);
    t = a_37;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
      t = term_f_8;
      t = j_0(t);
      n_37 = t;
      t = term_f_20;
      o_37 = t;
      t = term_h_20;
      p_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_20, term_h_20, n_37);
      t = s_5(o_37, p_37, n_37, t);
      _fail(t);
    }
  else
    {
      ATerm t_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_37 = ATgetFirst((ATermList) t);
          k_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_37 = ATgetFirst((ATermList) t);
          m_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_37;
      t = g_0(t);
      t = l_37;
      t = h_0(t);
      t_37 = t;
      t = (ATerm) ATinsert(CheckATermList(m_37), t_37);
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  if(match_string(t, "-i"))
    {
      t = v_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_37;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  w_37 = t;
  t = term_t_20;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, w_37);
  t = u_5(x_37, w_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_37);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, w_5, x_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_8;
  t = whoami_0_0(t);
  y_37 = t;
  t = term_g_8;
  a_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_20), y_37);
  b_38 = t;
  t = SSL_printnl(a_38, b_38);
  t = term_j_8;
  z_37 = t;
  t = SSL_exit(z_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm p_5 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_44, b_44);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      t = SSL_addr(a_44, b_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_38;
      t = c_98(t);
    }
  else
    {
      ATerm i_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_38 = ATgetFirst((ATermList) t);
          f_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_38;
      t = foldr_2_0(c_98, d_98, t);
      i_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_38, i_38);
      t = d_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(d_18, e_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_38 = NULL,z_17 = NULL,a_18 = NULL;
  t = times_0_0(t);
  a_18 = t;
  t = SSL_explode_term(a_18);
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_17;
  t = foldr_2_0(a_6, b_6, t);
  l_38 = t;
  t = SSL_TicksToSeconds(l_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_38;
        if((x_38 != t))
          {
            _fail(t);
          }
        t = w_38;
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_38, y_38);
              ;
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = SSL_gtr(x_38, y_38);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_39 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        g_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_39, term_j_8);
        t = geq_0_0(t);
        t = c_39;
        t = e_110(t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = c_39;
      }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,l_39 = NULL,m_39 = NULL;
  t = run_time_0_0(t);
  i_39 = t;
  t = term_f_8;
  t = whoami_0_0(t);
  j_39 = t;
  t = term_g_8;
  l_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_21), i_39), term_g_21), j_39);
  m_39 = t;
  t = SSL_printnl(l_39, m_39);
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_21), i_39), term_g_21), j_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_19;
  n_39 = t;
  t = SSL_exit(n_39);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  w_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_39 = ATgetArgument(t, 0);
          {
            ATerm x_18 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(w_39);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_39);
            l_15 = t;
            t = SSLsetAnnotations(l_15, x_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = fetch_1_0(l_6, t);
    }
  t = u_112(t);
  return(t);
}
ATerm map_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  ATerm m_40 (ATerm t)
  {
    ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
    j_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_40;
      }
    else
      {
        ATerm h_19 = NULL,l_19 = NULL,n_19 = NULL,c_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_40 = ATgetFirst((ATermList) t);
            l_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_40);
        h_19 = t;
        t = k_40;
        t = b_93(t);
        l_19 = t;
        t = l_40;
        t = m_40(t);
        n_19 = t;
        t = (ATerm) ATinsert(CheckATermList(n_19), l_19);
        c_18 = t;
        t = SSLsetAnnotations(c_18, h_19);
      }
    return(t);
  }
  t = m_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_40 = ATgetFirst((ATermList) t);
      q_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_40 = NULL,w_40 = NULL;
        ATerm m_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_40)), not_null(w_40));
          return(t);
        }
        t = not_null(q_40);
        t = f_0(t);
        if(((v_40 != NULL) && (v_40 != t)))
          _fail(t);
        else
          v_40 = t;
        t = not_null(p_40);
        t = e_0(t);
        if(((w_40 != NULL) && (w_40 != t)))
          _fail(t);
        else
          w_40 = t;
        t = not_null(q_40);
        t = reverse_acc_2_0(e_0, m_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_8;
      t = f_0(t);
    }
  return(t);
}
ATerm r_5 (ATerm n_47, ATerm o_47, ATerm t)
{
  t = SSL_table_get(n_47, o_47);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,i_20 = NULL;
  c_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_41);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_41);
  i_20 = t;
  t = SSLsetAnnotations(i_20, a_41);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_41), term_l_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = fetch_1_0(p_6, t);
    }
  t = term_o_21;
  t = echo_0_0(t);
  t = term_f_20;
  y_40 = t;
  t = term_h_20;
  z_40 = t;
  t = term_p_21;
  t = r_5(y_40, z_40, t);
  t = reverse_acc_2_0(_id, q_6, t);
  t = map_1_0(r_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_21 = ATgetFirst((ATermList) t);
                ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_41;
          }
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATinsert(ATempty, g_41);
      }
    h_41 = t;
    t = term_y_16;
    i_41 = t;
    t = SSL_printnl(i_41, h_41);
    t = g_41;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  t = term_u_21;
  m_41 = t;
  t = term_f_8;
  n_41 = t;
  t = term_v_21;
  t = u_5(m_41, n_41, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  t = term_u_21;
  q_41 = t;
  t = term_f_8;
  r_41 = t;
  t = term_v_21;
  t = u_5(q_41, r_41, t);
  t = term_x_21;
  o_41 = t;
  t = term_f_8;
  p_41 = t;
  t = term_y_21;
  t = u_5(o_41, p_41, t);
  t = term_z_21;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, t_6, u_6, t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      t = Option_3_0(w_6, c_7, e_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,y_41 = NULL,z_41 = NULL,k_20 = NULL;
  z_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_41 = ATgetFirst((ATermList) t);
      u_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_41);
  s_41 = t;
  t = t_41;
  t = w_71(t);
  v_41 = t;
  t = u_41;
  t = x_71(t);
  y_41 = t;
  t = (ATerm) ATinsert(CheckATermList(y_41), v_41);
  k_20 = t;
  t = SSLsetAnnotations(k_20, s_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,j_42 = NULL,k_42 = NULL,m_20 = NULL;
  if(((e_42 != NULL) && (e_42 != t)))
    _fail(t);
  else
    e_42 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_22;
        t = x_114(t);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
      }
    t = not_null(e_42);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_42 != NULL) && (g_42 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_42 = ATgetFirst((ATermList) t);
        if(((h_42 != NULL) && (h_42 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          h_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(e_42));
    if(((f_42 != NULL) && (f_42 != t)))
      _fail(t);
    else
      f_42 = t;
    t = term_w_20;
    if(((k_42 != NULL) && (k_42 != t)))
      _fail(t);
    else
      k_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_20, not_null(g_42));
    t = u_5(not_null(k_42), not_null(g_42), t);
    t = not_null(h_42);
    {
      ATerm u_42 (ATerm t)
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_42 = NULL;
                n_42 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_42;
                ;
                LocalPopChoice(j_22);
              }
            else
              {
                t = i_22;
                t = x_114(t);
                t = Cons_2_0(_id, u_42, t);
              }
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm q_42 = NULL,r_42 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_42 = ATgetFirst((ATermList) t);
                  r_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_42), (ATerm) ATmakeAppl(sym_Undefined_1, q_42));
            }
          }
        return(t);
      }
      t = u_42(t);
      if(((j_42 != NULL) && (j_42 != t)))
        _fail(t);
      else
        j_42 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(j_42)), (ATerm) ATmakeAppl(sym_Program_1, not_null(g_42)));
      if(((m_20 != NULL) && (m_20 != t)))
        _fail(t);
      else
        m_20 = t;
      t = SSLsetAnnotations(not_null(m_20), not_null(f_42));
    }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm g_43 = NULL;
  g_43 = t;
  if(match_string(t, "--help"))
    {
      t = g_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_43;
        }
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL;
  t = term_k_21;
  h_43 = t;
  t = term_f_8;
  i_43 = t;
  t = term_k_22;
  t = u_5(h_43, i_43, t);
  t = term_l_22;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm p_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  if(((b_43 != NULL) && (b_43 != t)))
    _fail(t);
  else
    b_43 = t;
  t = term_f_20;
  if(((d_43 != NULL) && (d_43 != t)))
    _fail(t);
  else
    d_43 = t;
  t = term_h_20;
  if(((e_43 != NULL) && (e_43 != t)))
    _fail(t);
  else
    e_43 = t;
  t = (ATerm) ATempty;
  if(((f_43 != NULL) && (f_43 != t)))
    _fail(t);
  else
    f_43 = t;
  t = SSL_table_put(not_null(d_43), not_null(e_43), not_null(f_43));
  t = not_null(b_43);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm n_22 = t;
      int o_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_114(t);
          ;
          LocalPopChoice(o_22);
        }
      else
        {
          t = n_22;
          {
            ATerm p_22 = t;
            int q_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_7, n_7, o_7, t);
                ;
                LocalPopChoice(q_22);
              }
            else
              {
                t = p_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm r_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_43 = NULL;
          p_43 = t;
          {
            ATerm t_22 = t;
            int u_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_20 = NULL;
                t = p_43;
                {
                  ATerm v_22 = t;
                  int w_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_21;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_22);
                    }
                  else
                    {
                      t = v_22;
                      t = fetch_1_0(p_7, t);
                    }
                  t = p_43;
                  t = default_system_usage_0_0(t);
                  t = term_e_19;
                  a_20 = t;
                  t = SSL_exit(a_20);
                }
                ;
                LocalPopChoice(u_22);
              }
            else
              {
                t = t_22;
                {
                  ATerm g_20 = NULL;
                  t = term_u_21;
                  t = get_config_0_0(t);
                  t = p_43;
                  t = default_system_about_0_0(t);
                  t = term_e_19;
                  g_20 = t;
                  t = SSL_exit(g_20);
                }
              }
          }
          ;
          LocalPopChoice(s_22);
        }
      else
        {
          t = r_22;
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
                ATerm q_7 (ATerm t)
                {
                  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,o_20 = NULL;
                  v_43 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_43 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_43);
                  t_43 = t;
                  t = u_43;
                  if(((z_42 != NULL) && (z_42 != t)))
                    _fail(t);
                  else
                    z_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_43);
                  o_20 = t;
                  t = SSLsetAnnotations(o_20, t_43);
                  return(t);
                }
                t = fetch_1_0(q_7, t);
                t = term_g_8;
                if(((r_43 != NULL) && (r_43 != t)))
                  _fail(t);
                else
                  r_43 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_42)), term_z_22);
                if(((s_43 != NULL) && (s_43 != t)))
                  _fail(t);
                else
                  s_43 = t;
                t = SSL_printnl(not_null(r_43), not_null(s_43));
                t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_42)), term_z_22));
                t = default_system_usage_0_0(t);
                t = term_j_8;
                if(((q_43 != NULL) && (q_43 != t)))
                  _fail(t);
                else
                  q_43 = t;
                t = SSL_exit(not_null(q_43));
                ;
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
              }
          }
        }
      if(((a_43 != NULL) && (a_43 != t)))
        _fail(t);
      else
        a_43 = t;
      t = term_f_20;
      if(((c_43 != NULL) && (c_43 != t)))
        _fail(t);
      else
        c_43 = t;
      t = SSL_table_destroy(not_null(c_43));
      t = not_null(a_43);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  t = parse_options_1_0(w_112, t);
  c_44 = t;
  t = term_a_23;
  f_44 = t;
  t = SSL_table_create(f_44);
  t = term_a_23;
  d_44 = t;
  t = term_b_23;
  e_44 = t;
  t = SSL_table_put(d_44, e_44, c_44);
  t = c_44;
  t = y_112(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_112, t);
        ;
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
              t = z_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = if_verbose2_1_0(c_8, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  t = term_g_23;
  g_44 = t;
  t = term_f_8;
  h_44 = t;
  t = term_h_23;
  t = u_5(g_44, h_44, t);
  t = term_i_23;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  i_44 = t;
  t = term_w_20;
  t = get_config_0_0(t);
  j_44 = t;
  t = term_g_8;
  k_44 = t;
  t = (ATerm) ATinsert(ATempty, j_44);
  l_44 = t;
  t = SSL_printnl(k_44, l_44);
  t = i_44;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_112(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
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
                          t = Option_3_0(x_7, y_7, b_8, t);
                          ;
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_23);
                              }
                            else
                              {
                                t = s_23;
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
  ATerm u_7 (ATerm t)
  {
    ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
    if(((n_44 != NULL) && (n_44 != t)))
      _fail(t);
    else
      n_44 = t;
    {
      ATerm u_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_44 != NULL) && (m_44 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_8, t);
          ;
          LocalPopChoice(v_23);
        }
      else
        {
          t = u_23;
          t = term_w_23;
          if(((m_44 != NULL) && (m_44 != t)))
            _fail(t);
          else
            m_44 = t;
        }
      t = not_null(m_44);
      t = ReadFromFile_0_0(t);
      if(((o_44 != NULL) && (o_44 != t)))
        _fail(t);
      else
        o_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_44), not_null(o_44));
      t = apply_strategy_1_0(f_112, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(r_7, h_112, t_7, u_7, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,q_20 = NULL;
  t_44 = t;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_44);
  p_44 = t;
  t = r_44;
  t = dead_var_elim_0_0(t);
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_44, s_44);
  q_20 = t;
  t = SSLsetAnnotations(q_20, p_44);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(e_8, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_g_24;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_h_20;
ATerm term_b_20;
ATerm term_v_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_y_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_v_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_c_13;
ATerm term_u_12;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
void init_constant_terms (void)
{
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_13);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__3, term_g_16, term_e_19, term_w_9);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm topdown_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm all_rl_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm Match_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm y_84 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm m_6 (ATerm s_5, ATerm u_5, ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm x_84 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm alltd_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm reverse_map_1_0 (ATerm c_93 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm);
ATerm Build_1_0 (ATerm t_76 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm q_3 (ATerm);
ATerm elim_sdef_1_0 (ATerm e_85 (ATerm), ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm);
ATerm assert_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm table_pop_rm_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm scope_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm z_92 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm z_71 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm d_72 (ATerm), ATerm);
ATerm _2_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm s_108 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_111 (ATerm), ATerm);
ATerm w_22 (ATerm q_22, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_93 (ATerm), ATerm);
ATerm debug_1_0 (ATerm q_108 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_110 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_7 (ATerm);
ATerm f_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_110 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm need_help_1_0 (ATerm s_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm r_84 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm s_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_114 (ATerm), ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm parse_options_1_0 (ATerm u_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm z_8 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm iowrap_3_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm u_9 (ATerm);
ATerm dead_var_elim_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL,o_0 = NULL,p_0 = NULL,s_0 = NULL;
  i_0 = t;
  t = term_w_9;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_y_9;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_10), k_0), term_z_9);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_b_10;
  s_0 = t;
  t = SSL_exit(s_0);
  t = i_0;
  return(t);
}
ATerm topdown_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  t = y_86(t);
  {
    ATerm k_2 (ATerm t)
    {
      t = topdown_1_0(y_86, t);
      return(t);
    }
    t = SRTS_all(k_2, t);
  }
  return(t);
}
ATerm all_rl_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,b_1 = NULL,c_1 = NULL;
  w_0 = t;
  t = SSL_explode_term(w_0);
  if(match_cons(t, sym__2))
    {
      x_0 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_1;
  t = reverse_map_1_0(d_85, t);
  c_1 = t;
  t = SSL_mkterm(x_0, c_1);
  return(t);
}
ATerm Match_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,g_1 = NULL,i_1 = NULL,l_0 = NULL,m_0 = NULL;
  i_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_1);
  d_1 = t;
  t = e_1;
  t = s_76(t);
  g_1 = t;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, g_1);
  l_0 = t;
  t = SSLsetAnnotations(l_0, d_1);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = alltd_1_0(m_2, t);
  t = alltd_1_0(n_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,y_2 = NULL,z_2 = NULL;
  y_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_2;
        t_1 = t;
        t = SSLgetAnnotations(y_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_10 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) g_10) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_10 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(h_10) != AT_LIST) || !(ATisEmpty(h_10))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_2;
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = d_10;
        t = z_2;
        t_1 = t;
        t = SSLgetAnnotations(y_2);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_2;
      }
    u_1 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_j_10, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_k_10);
    t = table_replace_0_0(t);
    t = u_1;
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_10 = ATgetFirst((ATermList) t);
      ATerm m_10 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(m_10) != AT_LIST) || !(ATisEmpty(m_10))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, c_3);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  t = Match_1_0(l_2, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,n_0 = NULL,q_0 = NULL;
  p_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      l_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  g_3 = t;
  t = i_3;
  t = f_77(t);
  m_3 = t;
  t = j_3;
  t = g_77(t);
  n_3 = t;
  t = l_3;
  t = h_77(t);
  o_3 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, m_3, n_3, o_3);
  n_0 = t;
  t = SSLsetAnnotations(n_0, g_3);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm o_2 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, z_84, _id, t);
      t = GuardedLChoice_3_0(z_84, _id, _id, t);
      return(t);
    }
    ATerm p_2 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, z_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(o_2, p_2, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,r_0 = NULL,t_0 = NULL;
  c_4 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      y_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  w_3 = t;
  t = y_3;
  t = b_77(t);
  a_4 = t;
  t = z_3;
  t = c_77(t);
  b_4 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, a_4, b_4);
  r_0 = t;
  t = SSLsetAnnotations(r_0, w_3);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm q_2 (ATerm t)
    {
      t = LChoice_2_0(y_84, _id, t);
      return(t);
    }
    ATerm r_2 (ATerm t)
    {
      t = LChoice_2_0(_id, y_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(q_2, r_2, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,m_4 = NULL,n_4 = NULL,q_4 = NULL,u_0 = NULL,v_0 = NULL;
  q_4 = t;
  if(match_cons(t, sym_Choice_2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_4);
  i_4 = t;
  t = j_4;
  t = z_75(t);
  m_4 = t;
  t = k_4;
  t = a_76(t);
  n_4 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, m_4, n_4);
  u_0 = t;
  t = SSLsetAnnotations(u_0, i_4);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_6 = NULL,d_6 = NULL,h_6 = NULL,i_6 = NULL;
      c_6 = t;
      if(match_cons(t, sym__2))
        {
          d_6 = ATgetArgument(t, 0);
          h_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_6;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_6 = ATgetFirst((ATermList) t);
                {
                  ATerm x_10 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_10);
            t = i_6;
            {
              ATerm y_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm b_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_11);
                  t = d_6;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm c_11 = t;
                      int g_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_6;
                          ;
                          LocalPopChoice(g_11);
                        }
                      else
                        {
                          t = c_11;
                          t = m_6(d_6, c_6, t);
                        }
                    }
                  else
                    {
                      t = m_6(d_6, c_6, t);
                    }
                }
              else
                {
                  t = y_10;
                  t = d_6;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = c_6;
                }
            }
          }
        else
          {
            t = u_10;
            t = d_6;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = c_6;
          }
      }
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
    }
  return(t);
}
ATerm m_6 (ATerm s_5, ATerm u_5, ATerm t)
{
  t = u_5;
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL;
        t = term_j_10;
        r_1 = t;
        t = SSL_table_get(r_1, s_5);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_11 = ATgetFirst((ATermList) t);
            if(match_cons(j_11, sym_Defined_1))
              {
                ATerm o_11 = ATgetArgument(j_11, 0);
              }
            else
              _fail(t);
            {
              ATerm n_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_5;
        ;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATmakeAppl(sym__2, s_5, (ATerm) ATinsert(ATempty, term_k_10));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL;
  t = map_1_0(s_2, t);
  q_5 = t;
  t = term_j_10;
  r_5 = t;
  t = SSL_table_destroy(r_5);
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, q_5);
  t = table_putlist_0_0(t);
  t = q_5;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm p_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      s_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  {
    ATerm t_2 (ATerm t)
    {
      ATerm t_6 = NULL,u_6 = NULL;
      if(match_cons(t, sym__2))
        {
          t_6 = ATgetArgument(t, 0);
          u_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(s_6, t_6, u_6);
      t = (ATerm) ATmakeAppl(sym__3, s_6, t_6, u_6);
      return(t);
    }
    t = map_1_0(t_2, t);
  }
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  ATerm x_1 = NULL;
  t = term_j_10;
  x_1 = t;
  t = SSL_table_keys(x_1);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm y_1 = NULL,z_1 = NULL;
      y_1 = t;
      t = SSL_table_get(x_1, y_1);
      z_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_1, z_1);
      return(t);
    }
    t = map_1_0(u_2, t);
  }
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL;
  y_6 = t;
  t = save_ElimVar_0_0(t);
  z_6 = t;
  t = y_6;
  t = a_85(t);
  a_7 = t;
  t = save_ElimVar_0_0(t);
  b_7 = t;
  t = term_j_10;
  d_7 = t;
  t = SSL_table_destroy(d_7);
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, z_6);
  t = table_putlist_0_0(t);
  t = a_7;
  t = b_85(t);
  e_7 = t;
  t = b_7;
  t = isect_ElimVar_0_0(t);
  t = e_7;
  return(t);
}
ATerm elim_choice_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm v_2 (ATerm t)
    {
      t = Choice_2_0(x_84, _id, t);
      return(t);
    }
    ATerm w_2 (ATerm t)
    {
      t = Choice_2_0(_id, x_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(v_2, w_2, t);
  }
  return(t);
}
ATerm Seq_2_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,j_7 = NULL,k_7 = NULL,t_7 = NULL,v_7 = NULL,y_0 = NULL,z_0 = NULL;
  v_7 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_7);
  g_7 = t;
  t = h_7;
  t = z_76(t);
  k_7 = t;
  t = j_7;
  t = a_77(t);
  t_7 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, k_7, t_7);
  y_0 = t;
  t = SSLsetAnnotations(y_0, g_7);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm b_8 = NULL,e_8 = NULL,g_8 = NULL,k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__3))
    {
      b_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
      g_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(b_8, e_8);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_11 = ATgetFirst((ATermList) t);
      k_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_8), g_8);
  l_8 = t;
  t = SSL_table_put(b_8, e_8, l_8);
  t = (ATerm) ATmakeAppl(sym__3, b_8, e_8, g_8);
  return(t);
}
ATerm alltd_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_88(t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = SRTS_all(s_8, t);
      }
    return(t);
  }
  t = s_8(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        t = reverse_map_1_0(c_93, t);
        return(t);
      }
      t = Cons_2_0(_id, x_2, t);
      t = Cons_2_0(c_93, _id, t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,y_8 = NULL,g_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,x_9 = NULL,a_1 = NULL,f_1 = NULL;
  x_9 = t;
  if(match_cons(t, sym_CallT_3))
    {
      v_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
      g_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_9);
  u_8 = t;
  t = v_8;
  t = p_76(t);
  r_9 = t;
  t = y_8;
  t = q_76(t);
  s_9 = t;
  t = g_9;
  t = r_76(t);
  t_9 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, r_9, s_9, t_9);
  a_1 = t;
  t = SSLsetAnnotations(a_1, u_8);
  return(t);
}
ATerm PrimT_3_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,i_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,w_10 = NULL,h_1 = NULL,j_1 = NULL;
  w_10 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
      q_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_10);
  e_10 = t;
  t = i_10;
  t = r_77(t);
  r_10 = t;
  t = n_10;
  t = s_77(t);
  s_10 = t;
  t = q_10;
  t = t_77(t);
  t_10 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, r_10, s_10, t_10);
  h_1 = t;
  t = SSLsetAnnotations(h_1, e_10);
  return(t);
}
ATerm Build_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,k_1 = NULL,l_1 = NULL;
  f_11 = t;
  if(match_cons(t, sym_Build_1))
    {
      d_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_11);
  z_10 = t;
  t = d_11;
  t = t_76(t);
  e_11 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, e_11);
  k_1 = t;
  t = SSLsetAnnotations(k_1, z_10);
  return(t);
}
ATerm SDefT_4_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,v_11 = NULL,y_11 = NULL,c_12 = NULL,f_12 = NULL,m_1 = NULL,n_1 = NULL;
  f_12 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
      q_11 = ATgetArgument(t, 2);
      r_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_12);
  k_11 = t;
  t = l_11;
  t = d_79(t);
  s_11 = t;
  t = m_11;
  t = e_79(t);
  v_11 = t;
  t = q_11;
  t = f_79(t);
  y_11 = t;
  t = r_11;
  t = g_79(t);
  c_12 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_11, v_11, y_11, c_12);
  m_1 = t;
  t = SSLsetAnnotations(m_1, k_11);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = map_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm k_12 = NULL,n_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_12 = ATgetArgument(t, 0);
      {
        ATerm z_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_12), term_k_10);
  t = assert_1_0(q_3, t);
  t = k_12;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm elim_sdef_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      ATerm b_12 = ATgetArgument(t, 1);
      ATerm d_12 = ATgetArgument(t, 2);
      ATerm e_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm d_3 (ATerm t)
    {
      t = SDefT_4_0(_id, _id, e_3, e_85, t);
      return(t);
    }
    t = scope_2_0(a_3, d_3, t);
  }
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_3 = NULL,k_3 = NULL;
        t = term_j_10;
        h_3 = t;
        t = SSL_table_get(h_3, q_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_3 = ATgetFirst((ATermList) t);
            {
              ATerm j_12 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = k_3;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        {
          ATerm l_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_4 = NULL,e_4 = NULL;
              t = term_j_10;
              d_4 = t;
              t = SSL_table_get(d_4, q_14);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_4 = ATgetFirst((ATermList) t);
                  {
                    ATerm o_12 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = e_4;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(m_12);
            }
          else
            {
              t = l_12;
              {
                ATerm p_12 = t;
                int q_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_4 = NULL,v_4 = NULL;
                    t = term_j_10;
                    t_4 = t;
                    t = SSL_table_get(t_4, q_14);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        v_4 = ATgetFirst((ATermList) t);
                        {
                          ATerm r_12 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = v_4;
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(q_12);
                  }
                else
                  {
                    t = p_12;
                    {
                      ATerm b_5 = NULL,c_5 = NULL;
                      t = term_j_10;
                      b_5 = t;
                      t = SSL_table_get(b_5, q_14);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          c_5 = ATgetFirst((ATermList) t);
                          {
                            ATerm s_12 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = c_5;
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm t_12 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) t_12) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_u_12;
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
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              t = filter_1_0(p_99, t);
              return(t);
            }
            t = Cons_2_0(p_99, r_3, t);
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
              ATerm o_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_12 = ATgetFirst((ATermList) t);
                  o_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_15;
              t = filter_1_0(p_99, t);
            }
          }
      }
    }
  return(t);
}
ATerm Scope_2_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,t_15 = NULL,w_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,o_1 = NULL,p_1 = NULL;
  c_16 = t;
  if(match_cons(t, sym_Scope_2))
    {
      t_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_16);
  q_15 = t;
  t = t_15;
  t = v_76(t);
  a_16 = t;
  t = w_15;
  t = w_76(t);
  b_16 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_16, b_16);
  o_1 = t;
  t = SSLsetAnnotations(o_1, q_15);
  return(t);
}
ATerm assert_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,y_16 = NULL,e_17 = NULL,l_17 = NULL,o_17 = NULL,q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_99(t);
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_17, v_16, y_16);
  t = table_push_0_0(t);
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_17 = NULL;
        t = term_c_13;
        s_17 = t;
        t = SSL_table_get(e_17, s_17);
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_17 = ATgetFirst((ATermList) t);
        o_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_13;
    q_17 = t;
    t = (ATerm) ATinsert(CheckATermList(o_17), (ATerm) ATinsert(CheckATermList(l_17), v_16));
    r_17 = t;
    t = SSL_table_put(e_17, q_17, r_17);
    t = (ATerm) ATmakeAppl(sym__2, v_16, y_16);
  }
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm t_17 = NULL,z_17 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_17, z_17);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_13 = ATgetFirst((ATermList) t);
            h_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_13);
        t = SSL_table_put(t_17, z_17, h_18);
        t = (ATerm) ATmakeAppl(sym__3, t_17, z_17, h_18);
      }
    else
      {
        t = d_13;
        t = SSL_table_remove(t_17, z_17);
        t = (ATerm) ATmakeAppl(sym__2, t_17, z_17);
      }
    t = (ATerm) ATmakeAppl(sym__2, t_17, z_17);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,c_19 = NULL;
  q_18 = t;
  t = i_99(t);
  v_18 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL;
        t = term_c_13;
        j_19 = t;
        t = SSL_table_get(v_18, j_19);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_18 = ATgetFirst((ATermList) t);
        w_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_13;
    c_19 = t;
    t = SSL_table_put(v_18, c_19, w_18);
    t = x_18;
    {
      ATerm s_3 (ATerm t)
      {
        ATerm k_19 = NULL;
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_18, k_19);
        t = table_pop_rm_0_0(t);
        return(t);
      }
      t = map_1_0(s_3, t);
      t = q_18;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_90(t);
      t = g_90(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      t = g_90(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  n_19 = t;
  t = h_99(t);
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_19, term_c_13);
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_13 = ATgetArgument(t, 0);
            ATerm n_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_13;
        f_5 = t;
        t = SSL_table_get(o_19, f_5);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = (ATerm) ATempty;
      }
    p_19 = t;
    t = term_c_13;
    q_19 = t;
    t = (ATerm) ATinsert(CheckATermList(p_19), (ATerm) ATempty);
    r_19 = t;
    t = SSL_table_put(o_19, q_19, r_19);
    t = n_19;
  }
  return(t);
}
ATerm scope_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t)
{
  t = begin_scope_1_0(j_99, t);
  {
    ATerm t_3 (ATerm t)
    {
      t = end_scope_1_0(j_99, t);
      return(t);
    }
    t = restore_always_2_0(k_99, t_3, t);
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = Scope_2_0(x_3, dead_var_elim_0_0, t);
  t = Scope_2_0(h_4, _id, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = map_1_0(f_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_20), term_p_13);
  t = assert_1_0(g_4, t);
  t = c_20;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = filter_1_0(l_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm q_13 = t;
  if((PushChoice() == 0))
    {
      ATerm d_20 = NULL;
      d_20 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_20);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_13;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = alltd_1_0(p_4, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm e_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_10, (ATerm)ATmakeAppl(sym_Var_1, e_20), term_k_10);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, e_20);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = reverse_map_1_0(dead_var_elim_0_0, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = reverse_map_1_0(u_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = alltd_1_0(w_4, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm f_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_10, (ATerm)ATmakeAppl(sym_Var_1, f_20), term_k_10);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, f_20);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = reverse_map_1_0(dead_var_elim_0_0, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = reverse_map_1_0(z_4, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = alltd_1_0(a_5, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm g_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_10, (ATerm)ATmakeAppl(sym_Var_1, g_20), term_k_10);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, g_20);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 = NULL;
      z_19 = t;
      if(match_cons(t, sym_Scope_2))
        {
          ATerm t_13 = ATgetArgument(t, 0);
          ATerm u_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_19;
      t = scope_2_0(u_3, v_3, t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = elim_sdef_1_0(dead_var_elim_0_0, t);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm x_13 = t;
              int y_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Build_1_0(o_4, t);
                  ;
                  LocalPopChoice(y_13);
                }
              else
                {
                  t = x_13;
                  {
                    ATerm z_13 = t;
                    int a_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = PrimT_3_0(_id, r_4, s_4, t);
                        ;
                        LocalPopChoice(a_14);
                      }
                    else
                      {
                        t = z_13;
                        {
                          ATerm b_14 = t;
                          int c_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = CallT_3_0(_id, x_4, y_4, t);
                              ;
                              LocalPopChoice(c_14);
                            }
                          else
                            {
                              t = b_14;
                              {
                                ATerm d_14 = t;
                                int e_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(_id, dead_var_elim_0_0, t);
                                    t = Seq_2_0(dead_var_elim_0_0, _id, t);
                                    ;
                                    LocalPopChoice(e_14);
                                  }
                                else
                                  {
                                    t = d_14;
                                    {
                                      ATerm f_14 = t;
                                      int g_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = elim_choice_1_0(dead_var_elim_0_0, t);
                                          ;
                                          LocalPopChoice(g_14);
                                        }
                                      else
                                        {
                                          t = f_14;
                                          {
                                            ATerm h_14 = t;
                                            int i_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = elim_lchoice_1_0(dead_var_elim_0_0, t);
                                                ;
                                                LocalPopChoice(i_14);
                                              }
                                            else
                                              {
                                                t = h_14;
                                                {
                                                  ATerm j_14 = t;
                                                  int k_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = elim_guardedlchoice_1_0(dead_var_elim_0_0, t);
                                                      ;
                                                      LocalPopChoice(k_14);
                                                    }
                                                  else
                                                    {
                                                      t = j_14;
                                                      {
                                                        ATerm l_14 = t;
                                                        int m_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = EliminateFromMatch_0_0(t);
                                                            ;
                                                            LocalPopChoice(m_14);
                                                          }
                                                        else
                                                          {
                                                            t = l_14;
                                                            t = all_rl_1_0(dead_var_elim_0_0, t);
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm map_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm i_20 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = Cons_2_0(z_92, i_20, t);
      }
    return(t);
  }
  t = i_20(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,q_1 = NULL,s_1 = NULL;
  m_20 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_20);
  j_20 = t;
  t = k_20;
  t = y_71(t);
  l_20 = t;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_20);
  q_1 = t;
  t = SSLsetAnnotations(q_1, j_20);
  return(t);
}
ATerm Cons_2_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_1 = NULL,w_1 = NULL;
  u_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_20 = ATgetFirst((ATermList) t);
      r_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_20);
  p_20 = t;
  t = q_20;
  t = u_71(t);
  s_20 = t;
  t = r_20;
  t = v_71(t);
  t_20 = t;
  w_1 = t;
  t = (ATerm) ATinsert(CheckATermList(t_20), s_20);
  v_1 = t;
  t = SSLsetAnnotations(v_1, p_20);
  return(t);
}
ATerm Signature_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,a_2 = NULL,b_2 = NULL;
  a_21 = t;
  if(match_cons(t, sym_Signature_1))
    {
      y_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_21);
  x_20 = t;
  t = y_20;
  t = z_71(t);
  z_20 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, z_20);
  a_2 = t;
  t = SSLsetAnnotations(a_2, x_20);
  return(t);
}
ATerm Specification_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,c_2 = NULL,d_2 = NULL;
  g_21 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_21);
  d_21 = t;
  t = e_21;
  t = d_72(t);
  f_21 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_21);
  c_2 = t;
  t = SSLsetAnnotations(c_2, d_21);
  return(t);
}
ATerm _2_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,e_2 = NULL,f_2 = NULL;
  o_21 = t;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_21);
  j_21 = t;
  t = k_21;
  t = f_67(t);
  m_21 = t;
  t = l_21;
  t = g_67(t);
  n_21 = t;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_21, n_21);
  e_2 = t;
  t = SSLsetAnnotations(e_2, j_21);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      r_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_21, term_p_14);
  t = open_stream_0_0(t);
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_21, s_21);
  t = s_108(t);
  t = fclose_0_0(t);
  t = s_21;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = fetch_1_0(j_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = WriteToFile_1_0(k_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(match_cons(r_14, sym_Stream_1))
        {
          w_21 = ATgetArgument(r_14, 0);
        }
      else
        _fail(t);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(w_21, x_21);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_21);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = WriteToFile_1_0(m_5, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_14 = ATgetArgument(t, 0);
      if(match_cons(s_14, sym_Stream_1))
        {
          z_21 = ATgetArgument(s_14, 0);
        }
      else
        _fail(t);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(z_21, a_22);
  b_22 = t;
  t = term_t_14;
  c_22 = t;
  t = SSL_fputc(c_22, b_22);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  u_21 = t;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm u_14 = t;
      int v_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((v_21 != NULL) && (v_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_5, t);
          ;
          LocalPopChoice(v_14);
        }
      else
        {
          t = u_14;
          t = term_w_14;
          if(((v_21 != NULL) && (v_21 != t)))
            _fail(t);
          else
            v_21 = t;
        }
      return(t);
    }
    t = _2_0(d_5, _id, t);
    t = u_21;
    {
      ATerm g_5 (ATerm t)
      {
        ATerm e_6 = NULL;
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), e_6);
        return(t);
      }
      t = _2_0(_id, g_5, t);
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(h_5, i_5, t);
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            t = _2_0(_id, l_5, t);
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
ATerm apply_strategy_1_0 (ATerm u_111 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
  e_22 = t;
  t = dtime_0_0(t);
  t = e_22;
  t = u_111(t);
  f_22 = t;
  t = dtime_0_0(t);
  g_22 = t;
  t = f_22;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_22), (ATerm) ATmakeAppl(sym_Runtime_1, g_22)), i_22);
  return(t);
}
ATerm w_22 (ATerm q_22, ATerm t)
{
  t = SSL_fclose(q_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  u_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_22 = ATgetArgument(t, 0);
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_22);
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = w_22(u_22, t);
          }
      }
    }
  else
    {
      t = w_22(u_22, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_22 = NULL;
  t = SSL_stdin_stream();
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_22 = NULL;
  t = SSL_stdout_stream();
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_22 = NULL;
  t = SSL_stderr_stream();
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_22);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm h_23 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      h_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_23;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  t = SSL_is_string(l_23);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_15 = ATgetArgument(t, 0);
      ATerm c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_7 = NULL,n_7 = NULL;
        m_7 = t;
        t = SSL_explode_term(m_7);
        if(match_cons(t, sym__2))
          {
            ATerm f_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_15 = ATgetArgument(t, 1);
              if(((ATgetType(g_15) == AT_LIST) && !(ATisEmpty(g_15))))
                {
                  n_7 = ATgetFirst((ATermList) g_15);
                  {
                    ATerm h_15 = (ATerm) ATgetNext((ATermList) g_15);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
              t = _2_0(n_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_23 = ATgetArgument(t, 0);
                  f_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_23, f_23);
              g_23 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, g_23);
              ;
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              {
                ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
                t = _2_0(o_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_23 = ATgetArgument(t, 0);
                    j_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(i_23, j_23);
                k_23 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_23);
              }
            }
        }
      }
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23 = NULL;
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_23, term_n_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      t = debug_1_0(p_5, t);
      _fail(t);
    }
  m_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(o_23);
  n_23 = t;
  t = m_23;
  t = fclose_0_0(t);
  t = n_23;
  return(t);
}
ATerm fetch_1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm p_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_93, _id, t);
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = p_15;
        t = Cons_2_0(_id, u_23, t);
      }
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm debug_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  v_23 = t;
  t = q_108(t);
  w_23 = t;
  t = term_y_9;
  x_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_23), w_23);
  y_23 = t;
  t = SSL_printnl(x_23, y_23);
  t = v_23;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm s_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = s_15;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_24 = NULL;
      f_24 = t;
      t = SSL_is_string(f_24);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
        ATerm z_15 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_5, t);
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = z_15;
            {
              ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
              q_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_24 = ATgetArgument(t, 0);
                  t = r_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_24 = ATgetArgument(t, 0);
                      t = r_24;
                      {
                        ATerm e_16 = t;
                        int f_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_16);
                          }
                        else
                          {
                            t = e_16;
                            t = debug_1_0(v_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_8 = NULL,j_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_24 = ATgetArgument(t, 0);
                          s_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_24;
                      t = eval_config_0_0(t);
                      i_8 = t;
                      t = s_24;
                      t = eval_config_0_0(t);
                      j_8 = t;
                      t = SSL_strcat(i_8, j_8);
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
  ATerm x_24 = NULL,y_24 = NULL;
  x_24 = t;
  t = term_g_16;
  y_24 = t;
  t = SSL_table_get(y_24, x_24);
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL,a_25 = NULL;
        t = eval_config_0_0(t);
        z_24 = t;
        t = term_g_16;
        a_25 = t;
        t = SSL_table_put(a_25, x_24, z_24);
        t = z_24;
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_25 = NULL,d_25 = NULL;
      b_25 = t;
      t = term_l_16;
      t = get_config_0_0(t);
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_25, term_m_16);
      t = geq_0_0(t);
      t = b_25;
      t = d_110(t);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  if(match_string(t, "-k"))
    {
      t = f_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_25;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  g_25 = t;
  t = SSL_string_to_int(g_25);
  h_25 = t;
  t = term_g_16;
  i_25 = t;
  t = term_n_16;
  j_25 = t;
  t = SSL_table_put(i_25, j_25, h_25);
  t = g_25;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_5, x_5, y_5, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  if(match_string(t, "-S"))
    {
      t = l_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_25;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  t = term_g_16;
  m_25 = t;
  t = term_l_16;
  n_25 = t;
  t = term_p_16;
  o_25 = t;
  t = SSL_table_put(m_25, n_25, o_25);
  t = term_q_16;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_r_16;
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  p_25 = t;
  t = SSL_string_to_int(p_25);
  q_25 = t;
  t = term_g_16;
  r_25 = t;
  t = term_l_16;
  s_25 = t;
  t = SSL_table_put(r_25, s_25, q_25);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_25);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t = term_g_16;
  t_25 = t;
  t = term_t_16;
  u_25 = t;
  t = term_w_9;
  v_25 = t;
  t = SSL_table_put(t_25, u_25, v_25);
  t = term_u_16;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_5, a_6, b_6, t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = x_16;
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_6, g_6, j_6, t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            t = Option_3_0(k_6, l_6, n_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_26 = NULL;
      t = term_w_9;
      t = d_0(t);
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_d_17, a_26);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_25 = ATgetFirst((ATermList) t);
          z_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_25;
      t = a_0(t);
      t = term_w_9;
      t = b_0(t);
      d_26 = t;
      t = (ATerm) ATinsert(CheckATermList(z_25), d_26);
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  if(match_string(t, "-o"))
    {
      t = f_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_26;
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  t = term_g_16;
  h_26 = t;
  t = term_f_17;
  i_26 = t;
  t = SSL_table_put(h_26, i_26, g_26);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_26);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_6, q_6, r_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__3))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
      n_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_26, m_26);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            ATerm k_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_26, m_26);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = (ATerm) ATempty;
      }
    o_26 = t;
    t = (ATerm) ATinsert(CheckATermList(o_26), n_26);
    p_26 = t;
    t = SSL_table_put(l_26, m_26, p_26);
    t = (ATerm) ATmakeAppl(sym__3, l_26, m_26, n_26);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_27 = NULL;
      t = term_w_9;
      t = j_0(t);
      b_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_d_17, b_27);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm f_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_26 = ATgetFirst((ATermList) t);
          y_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_26 = ATgetFirst((ATermList) t);
          a_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_26;
      t = g_0(t);
      t = z_26;
      t = h_0(t);
      f_27 = t;
      t = (ATerm) ATinsert(CheckATermList(a_27), f_27);
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  if(match_string(t, "-i"))
    {
      t = h_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_27;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  t = term_g_16;
  j_27 = t;
  t = term_m_17;
  k_27 = t;
  t = SSL_table_put(j_27, k_27, i_27);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_27);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_6, w_6, x_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_9;
  t = whoami_0_0(t);
  l_27 = t;
  t = term_y_9;
  m_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_17), l_27);
  n_27 = t;
  t = SSL_printnl(m_27, n_27);
  t = term_b_10;
  o_27 = t;
  t = SSL_exit(o_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_98(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm r_27 = NULL,s_27 = NULL,v_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_27 = ATgetFirst((ATermList) t);
            s_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_27;
        t = foldr_2_0(a_98, b_98, t);
        v_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, v_27);
        t = b_98(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_9, b_9);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = SSL_addr(a_9, b_9);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_27 = NULL,t_8 = NULL,w_8 = NULL;
  t = times_0_0(t);
  t_8 = t;
  t = SSL_explode_term(t_8);
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8;
  t = foldr_2_0(c_7, f_7, t);
  y_27 = t;
  t = SSL_TicksToSeconds(y_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_28;
        if((k_28 != t))
          {
            _fail(t);
          }
        t = j_28;
        ;
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = j_28;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_28, l_28);
              ;
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = SSL_gtr(k_28, l_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_28 = NULL,q_28 = NULL;
      o_28 = t;
      t = term_l_16;
      t = get_config_0_0(t);
      q_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_28, term_b_10);
      t = geq_0_0(t);
      t = o_28;
      t = c_110(t);
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t = run_time_0_0(t);
  s_28 = t;
  t = term_w_9;
  t = whoami_0_0(t);
  t_28 = t;
  t = term_y_9;
  u_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_18), s_28), term_i_18), t_28);
  v_28 = t;
  t = SSL_printnl(u_28, v_28);
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_18), s_28), term_i_18), t_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_16;
  w_28 = t;
  t = SSL_exit(w_28);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      t = fetch_1_0(l_7, t);
    }
  t = s_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_28 = ATgetFirst((ATermList) t);
      z_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_29 = NULL,e_29 = NULL;
        t = z_28;
        t = f_0(t);
        d_29 = t;
        t = y_28;
        t = e_0(t);
        e_29 = t;
        t = z_28;
        {
          ATerm o_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_29), e_29);
            return(t);
          }
          t = reverse_acc_2_0(e_0, o_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_9;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,g_2 = NULL,h_2 = NULL;
  i_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_29);
  f_29 = t;
  t = g_29;
  t = r_84(t);
  h_29 = t;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_29);
  g_2 = t;
  t = SSLsetAnnotations(g_2, f_29);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_29), term_s_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = fetch_1_0(p_7, t);
    }
  t = term_y_18;
  t = echo_0_0(t);
  t = term_c_17;
  l_29 = t;
  t = term_d_17;
  m_29 = t;
  t = SSL_table_get(l_29, m_29);
  t = reverse_acc_2_0(_id, q_7, t);
  t = map_1_0(r_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,i_2 = NULL,j_2 = NULL;
  r_29 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_29);
  o_29 = t;
  t = p_29;
  t = s_84(t);
  q_29 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_29);
  i_2 = t;
  t = SSLsetAnnotations(i_2, o_29);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_19 = ATgetFirst((ATermList) t);
                ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_29;
          }
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = (ATerm) ATinsert(ATempty, v_29);
      }
    w_29 = t;
    t = term_w_14;
    x_29 = t;
    t = SSL_printnl(x_29, w_29);
    t = v_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  t = term_g_16;
  b_30 = t;
  t = term_e_19;
  c_30 = t;
  t = term_w_9;
  d_30 = t;
  t = SSL_table_put(b_30, c_30, d_30);
  t = term_f_19;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  t = term_g_16;
  e_30 = t;
  t = term_e_19;
  f_30 = t;
  t = term_w_9;
  g_30 = t;
  t = SSL_table_put(e_30, f_30, g_30);
  t = term_g_16;
  h_30 = t;
  t = term_h_19;
  i_30 = t;
  t = term_w_9;
  j_30 = t;
  t = SSL_table_put(h_30, i_30, j_30);
  t = term_i_19;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_7, u_7, w_7, t);
      ;
      LocalPopChoice(s_19);
    }
  else
    {
      t = m_19;
      t = Option_3_0(x_7, y_7, z_7, t);
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  t = term_g_16;
  n_30 = t;
  t = term_u_17;
  o_30 = t;
  t = SSL_table_put(n_30, o_30, m_30);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_114 (ATerm), ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_19;
        t = v_114(t);
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
      }
    t = l_30;
    {
      ATerm c_8 (ATerm t)
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_20);
              }
            else
              {
                t = y_19;
                t = v_114(t);
                t = Cons_2_0(_id, c_8, t);
              }
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm q_30 = NULL,r_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_30 = ATgetFirst((ATermList) t);
                  r_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_30), (ATerm) ATmakeAppl(sym_Undefined_1, q_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(a_8, c_8, t);
    }
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  if(match_string(t, "--help"))
    {
      t = m_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_31;
        }
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  t = term_g_16;
  n_31 = t;
  t = term_r_18;
  o_31 = t;
  t = term_w_9;
  p_31 = t;
  t = SSL_table_put(n_31, o_31, p_31);
  t = term_b_20;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm n_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  e_31 = t;
  t = term_c_17;
  g_31 = t;
  t = term_d_17;
  h_31 = t;
  t = (ATerm) ATempty;
  i_31 = t;
  t = SSL_table_put(g_31, h_31, i_31);
  t = e_31;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm n_20 = t;
      int o_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_114(t);
          ;
          LocalPopChoice(o_20);
        }
      else
        {
          t = n_20;
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_8, h_8, m_8, t);
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_8, t);
    {
      ATerm b_21 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_31 = NULL;
          w_31 = t;
          {
            ATerm h_21 = t;
            int i_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_9 = NULL;
                t = w_31;
                {
                  ATerm p_21 = t;
                  int q_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_21);
                    }
                  else
                    {
                      t = p_21;
                      t = fetch_1_0(n_8, t);
                    }
                  t = w_31;
                  t = default_system_usage_0_0(t);
                  t = term_p_16;
                  o_9 = t;
                  t = SSL_exit(o_9);
                }
                ;
                LocalPopChoice(i_21);
              }
            else
              {
                t = h_21;
                {
                  ATerm v_9 = NULL;
                  t = term_e_19;
                  t = get_config_0_0(t);
                  t = w_31;
                  t = default_system_about_0_0(t);
                  t = term_p_16;
                  v_9 = t;
                  t = SSL_exit(v_9);
                }
              }
          }
          ;
          LocalPopChoice(c_21);
        }
      else
        {
          t = b_21;
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
                ATerm o_8 (ATerm t)
                {
                  ATerm p_8 (ATerm t)
                  {
                    if(((j_31 != NULL) && (j_31 != t)))
                      _fail(t);
                    else
                      j_31 = t;
                    return(t);
                  }
                  t = Undefined_1_0(p_8, t);
                  return(t);
                }
                t = fetch_1_0(o_8, t);
                t = term_y_9;
                x_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_31)), term_l_22);
                y_31 = t;
                t = SSL_printnl(x_31, y_31);
                t = (ATerm) ATmakeAppl(sym__2, term_y_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_31)), term_l_22));
                t = default_system_usage_0_0(t);
                t = term_b_10;
                z_31 = t;
                t = SSL_exit(z_31);
                ;
                LocalPopChoice(k_22);
              }
            else
              {
                t = j_22;
              }
          }
        }
      k_31 = t;
      t = term_c_17;
      l_31 = t;
      t = SSL_table_destroy(l_31);
      t = k_31;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  t = parse_options_1_0(u_112, t);
  c_32 = t;
  t = term_m_22;
  d_32 = t;
  t = SSL_table_create(d_32);
  t = term_m_22;
  e_32 = t;
  t = term_n_22;
  f_32 = t;
  t = SSL_table_put(e_32, f_32, c_32);
  t = c_32;
  t = w_112(t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_112, t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = if_verbose2_1_0(e_9, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  t = term_g_16;
  g_32 = t;
  t = term_v_22;
  h_32 = t;
  t = term_w_9;
  i_32 = t;
  t = SSL_table_put(g_32, h_32, i_32);
  t = term_a_23;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  j_32 = t;
  t = term_u_17;
  t = get_config_0_0(t);
  k_32 = t;
  t = term_y_9;
  l_32 = t;
  t = (ATerm) ATinsert(ATempty, k_32);
  m_32 = t;
  t = SSL_printnl(l_32, m_32);
  t = j_32;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_23);
                  }
                else
                  {
                    t = s_23;
                    {
                      ATerm z_23 = t;
                      int a_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_8, c_9, d_9, t);
                          ;
                          LocalPopChoice(a_24);
                        }
                      else
                        {
                          t = z_23;
                          {
                            ATerm b_24 = t;
                            int c_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_24);
                              }
                            else
                              {
                                t = b_24;
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
  ATerm x_8 (ATerm t)
  {
    ATerm n_32 = NULL,o_32 = NULL,c_10 = NULL;
    n_32 = t;
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_32 != NULL) && (o_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_9, t);
          ;
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
          t = term_g_24;
          o_32 = t;
        }
      t = not_null(o_32);
      t = ReadFromFile_0_0(t);
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_32, c_10);
      t = apply_strategy_1_0(d_112, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(q_8, f_112, r_8, x_8, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = _2_0(_id, i_9, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = Specification_1_0(j_9, t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = Cons_2_0(k_9, l_9, t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = Cons_2_0(m_9, n_9, t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = Strategies_1_0(p_9, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = map_1_0(q_9, t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = dead_var_elim_0_0(t);
  t = topdown_1_0(u_9, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_32 = NULL,w_32 = NULL;
      v_32 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_32);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm j_24 = ATgetFirst((ATermList) t);
          ATerm k_24 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(k_24) != AT_LIST) || !(ATisEmpty(k_24))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, w_32);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
    }
  return(t);
}
ATerm dead_var_elim_io_0_0 (ATerm t)
{
  t = iowrap_3_0(h_9, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_var_elim_io_0_0(t);
  return(t);
}

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
ATerm term_a_24;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
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
ATerm term_s_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_x_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_13;
ATerm term_c_13;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
void init_constant_terms (void)
{
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_14);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_j_8);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_h_20);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_j_8);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_j_8);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_j_8);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_k_23, term_j_8);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm all_rl_1_0 (ATerm s_72 (ATerm), ATerm);
ATerm f_0 (ATerm);
ATerm i_0 (ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm o_72 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm n_72 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm x_8 (ATerm l_7, ATerm t_7, ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm b_5 (ATerm k_34, ATerm j_34, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm m_72 (ATerm), ATerm);
ATerm c_5 (ATerm u_33, ATerm v_33, ATerm w_33, ATerm);
ATerm alltd_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm reverse_map_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm elim_sdef_1_0 (ATerm t_72 (ATerm), ATerm);
ATerm f_5 (ATerm s_33, ATerm t_33, ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm g_5 (ATerm b_87 (ATerm), ATerm z_32, ATerm x_32, ATerm);
ATerm h_5 (ATerm m_33, ATerm n_33, ATerm);
ATerm end_scope_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm k_5 (ATerm a_44, ATerm b_44, ATerm);
ATerm l_5 (ATerm o_47, ATerm p_47, ATerm);
ATerm n_5 (ATerm n_96 (ATerm), ATerm n_460, ATerm s_47, ATerm);
ATerm m_5 (ATerm k_47, ATerm l_47, ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm t_31 (ATerm c_31, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_5 (ATerm q_47, ATerm);
ATerm p_5 (ATerm c_44, ATerm d_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_34 (ATerm l_32, ATerm);
ATerm w_34 (ATerm j_33, ATerm k_33, ATerm o_33, ATerm);
ATerm x_34 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm j_5 (ATerm q_41, ATerm r_41, ATerm);
ATerm debug_1_0 (ATerm l_96 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_97 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm z_3 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_5 (ATerm r_48, ATerm s_48, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_5 (ATerm h_33, ATerm i_33, ATerm g_33, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm q_5 (ATerm l_31, ATerm m_31, ATerm);
ATerm foldr_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm r_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm need_help_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_5 (ATerm y_34, ATerm z_34, ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_102 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm b_8 (ATerm);
ATerm e_8 (ATerm);
ATerm iowrap_3_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm);
ATerm h_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_j_8;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_k_8;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_8), b_0), term_l_8);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_n_8;
  p_0 = t;
  t = SSL_exit(p_0);
  t = a_0;
  return(t);
}
ATerm all_rl_1_0 (ATerm s_72 (ATerm), ATerm t)
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
  t = reverse_map_1_0(s_72, t);
  y_0 = t;
  t = SSL_mkterm(s_0, y_0);
  return(t);
}
ATerm f_0 (ATerm t)
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
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_3;
        o_1 = t;
        t = SSLgetAnnotations(e_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_3;
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm u_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_3;
              o_1 = t;
              t = SSLgetAnnotations(e_3);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_8 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) w_8) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm k_9 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(k_9) != AT_LIST) || !(ATisEmpty(k_9))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = e_3;
              ;
              LocalPopChoice(v_8);
            }
          else
            {
              t = u_8;
              t = f_3;
              o_1 = t;
              t = SSLgetAnnotations(e_3);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_3;
            }
        }
      }
    t = term_t_9;
    s_1 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, o_1);
    u_1 = t;
    t = term_u_9;
    v_1 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_t_9, (ATerm)ATmakeAppl(sym_Var_1, o_1), term_u_9);
    t = c_5(s_1, u_1, v_1, t);
    t = e_3;
  }
  return(t);
}
ATerm i_0 (ATerm t)
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
      ATerm w_9 = ATgetFirst((ATermList) t);
      ATerm y_9 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
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
  t = alltd_1_0(f_0, t);
  t = alltd_1_0(i_0, t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_1);
  k_0 = t;
  t = SSLsetAnnotations(k_0, h_1);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm o_72 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,x_1 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm t_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,o_4 = NULL,a_2 = NULL,y_1 = NULL;
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
    t = o_72(t);
    k_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_4, k_4, i_4);
    y_1 = t;
    t = SSLsetAnnotations(y_1, d_4);
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
    t = o_72(t);
    c_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_4, a_4, b_4);
    a_2 = t;
    t = SSLsetAnnotations(a_2, t_3);
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm p_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,d_5 = NULL,h_2 = NULL;
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
    t = o_72(t);
    u_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_4, s_4, u_4);
    h_2 = t;
    t = SSLsetAnnotations(h_2, p_4);
    return(t);
  }
  if(((s_3 != NULL) && (s_3 != t)))
    _fail(t);
  else
    s_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((p_3 != NULL) && (p_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_3 = ATgetArgument(t, 0);
      if(((q_3 != NULL) && (q_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_3 = ATgetArgument(t, 1);
      if(((r_3 != NULL) && (r_3 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_3);
  if(((o_3 != NULL) && (o_3 != t)))
    _fail(t);
  else
    o_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_3, q_3, r_3);
  if(((x_1 != NULL) && (x_1 != t)))
    _fail(t);
  else
    x_1 = t;
  t = SSLsetAnnotations(x_1, o_3);
  t = elim_abstract_choice_2_0(o_0, u_0, t);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm n_72 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,u_5 = NULL,w_5 = NULL,g_6 = NULL,x_2 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,y_2 = NULL;
    m_6 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        j_6 = ATgetArgument(t, 0);
        k_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_6);
    i_6 = t;
    t = j_6;
    t = n_72(t);
    l_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, l_6, k_6);
    y_2 = t;
    t = SSLsetAnnotations(y_2, i_6);
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,z_2 = NULL;
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
    t = p_6;
    t = n_72(t);
    q_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, o_6, q_6);
    z_2 = t;
    t = SSLsetAnnotations(z_2, n_6);
    return(t);
  }
  if(((g_6 != NULL) && (g_6 != t)))
    _fail(t);
  else
    g_6 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((u_5 != NULL) && (u_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_5 = ATgetArgument(t, 0);
      if(((w_5 != NULL) && (w_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_6);
  if(((e_5 != NULL) && (e_5 != t)))
    _fail(t);
  else
    e_5 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, u_5, w_5);
  if(((x_2 != NULL) && (x_2 != t)))
    _fail(t);
  else
    x_2 = t;
  t = SSLsetAnnotations(x_2, e_5);
  t = elim_abstract_choice_2_0(v_0, w_0, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,f_8 = NULL,i_8 = NULL;
  i_8 = t;
  if(match_cons(t, sym__2))
    {
      c_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      t = d_8;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_8 = ATgetFirst((ATermList) t);
                {
                  ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_10);
            t = f_8;
            {
              ATerm d_10 = t;
              int m_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm n_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_10);
                  t = c_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = i_8;
                    }
                  else
                    {
                      ATerm p_10 = t;
                      int s_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_8(c_8, i_8, t);
                          ;
                          LocalPopChoice(s_10);
                        }
                      else
                        {
                          t = p_10;
                          t = i_8;
                        }
                    }
                }
              else
                {
                  t = d_10;
                  t = c_8;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = i_8;
                    }
                  else
                    {
                      t = i_8;
                    }
                }
            }
          }
        else
          {
            t = z_9;
            t = c_8;
            if(match_cons(t, sym_Scopes_0))
              {
                t = i_8;
              }
            else
              {
                t = i_8;
              }
          }
      }
    }
  else
    {
      t = i_8;
    }
  return(t);
}
ATerm x_8 (ATerm l_7, ATerm t_7, ATerm t)
{
  t = t_7;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL;
        t = term_t_9;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, l_7);
        t = s_5(z_1, l_7, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_11 = ATgetFirst((ATermList) t);
            if(match_cons(g_11, sym_Defined_1))
              {
                ATerm j_11 = ATgetArgument(g_11, 0);
              }
            else
              _fail(t);
            {
              ATerm h_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = t_7;
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = (ATerm) ATmakeAppl(sym__2, l_7, (ATerm) ATinsert(ATempty, term_u_9));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm e_7 = NULL,i_7 = NULL,j_7 = NULL;
  t = map_1_0(x_0, t);
  e_7 = t;
  t = term_t_9;
  j_7 = t;
  t = SSL_table_destroy(j_7);
  t = term_t_9;
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_9, e_7);
  t = b_5(i_7, e_7, t);
  t = e_7;
  return(t);
}
ATerm b_5 (ATerm k_34, ATerm j_34, ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm a_9 = NULL,b_9 = NULL;
    if(match_cons(t, sym__2))
      {
        a_9 = ATgetArgument(t, 0);
        b_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(k_34, a_9, b_9);
    t = (ATerm) ATmakeAppl(sym__3, k_34, a_9, b_9);
    return(t);
  }
  t = j_34;
  t = map_1_0(a_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm d_9 = NULL,e_9 = NULL;
    d_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), d_9);
    t = s_5(not_null(c_9), d_9, t);
    e_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
    return(t);
  }
  if(((c_9 != NULL) && (c_9 != t)))
    _fail(t);
  else
    c_9 = t;
  t = SSL_table_keys(c_9);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_t_9;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,n_9 = NULL,o_9 = NULL;
  j_9 = t;
  t = save_ElimVar_0_0(t);
  f_9 = t;
  t = j_9;
  t = p_72(t);
  i_9 = t;
  t = save_ElimVar_0_0(t);
  g_9 = t;
  t = term_t_9;
  o_9 = t;
  t = SSL_table_destroy(o_9);
  t = term_t_9;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_9, f_9);
  t = b_5(n_9, f_9, t);
  t = i_9;
  t = q_72(t);
  h_9 = t;
  t = g_9;
  t = isect_ElimVar_0_0(t);
  t = h_9;
  return(t);
}
ATerm elim_choice_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,v_9 = NULL,x_9 = NULL,b_10 = NULL,d_3 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,h_3 = NULL;
    i_10 = t;
    if(match_cons(t, sym_Choice_2))
      {
        f_10 = ATgetArgument(t, 0);
        g_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_10);
    e_10 = t;
    t = f_10;
    t = m_72(t);
    h_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, h_10, g_10);
    h_3 = t;
    t = SSLsetAnnotations(h_3, e_10);
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm j_10 = NULL,k_10 = NULL,o_10 = NULL,w_10 = NULL,x_10 = NULL,j_3 = NULL;
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
    t = o_10;
    t = m_72(t);
    w_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, k_10, w_10);
    j_3 = t;
    t = SSLsetAnnotations(j_3, j_10);
    return(t);
  }
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((v_9 != NULL) && (v_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_9 = ATgetArgument(t, 0);
      if(((x_9 != NULL) && (x_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_10);
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, v_9, x_9);
  if(((d_3 != NULL) && (d_3 != t)))
    _fail(t);
  else
    d_3 = t;
  t = SSLsetAnnotations(d_3, q_9);
  t = elim_abstract_choice_2_0(c_1, d_1, t);
  return(t);
}
ATerm c_5 (ATerm u_33, ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, v_33);
  t = s_5(u_33, v_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_11 = ATgetFirst((ATermList) t);
      y_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_10), w_33);
  a_11 = t;
  t = SSL_table_put(u_33, v_33, a_11);
  t = z_10;
  return(t);
}
ATerm alltd_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm n_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_76(t);
        ;
        LocalPopChoice(q_11);
      }
    else
      {
        t = n_11;
        t = SRTS_all(b_11, t);
      }
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,g_12 = NULL,j_12 = NULL;
  j_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_12 = ATgetFirst((ATermList) t);
      g_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_2 = NULL,g_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,p_2 = NULL,q_2 = NULL,u_3 = NULL,n_3 = NULL;
        t = SSLgetAnnotations(j_12);
        k_2 = t;
        t = g_12;
        t = reverse_map_1_0(r_80, t);
        p_2 = t;
        t = (ATerm) ATinsert(CheckATermList(p_2), d_12);
        n_3 = t;
        t = SSLsetAnnotations(n_3, k_2);
        q_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_2 = ATgetFirst((ATermList) t);
            i_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_2);
        f_2 = t;
        t = g_2;
        t = r_80(t);
        j_2 = t;
        t = (ATerm) ATinsert(CheckATermList(i_2), j_2);
        u_3 = t;
        t = SSLsetAnnotations(u_3, f_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_12;
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm t_12 = NULL,v_12 = NULL,x_12 = NULL,y_12 = NULL;
  t_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_12 = ATgetArgument(t, 0);
      {
        ATerm r_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, v_12);
  x_12 = t;
  t = term_u_9;
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_12), term_u_9);
  t = g_5(j_1, x_12, y_12, t);
  t = t_12;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm elim_sdef_1_0 (ATerm t_72 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,x_3 = NULL;
    s_12 = t;
    if(match_cons(t, sym_SDefT_4))
      {
        m_12 = ATgetArgument(t, 0);
        n_12 = ATgetArgument(t, 1);
        o_12 = ATgetArgument(t, 2);
        p_12 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_12);
    l_12 = t;
    t = o_12;
    t = map_1_0(g_1, t);
    q_12 = t;
    t = p_12;
    t = t_72(t);
    r_12 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, m_12, n_12, q_12, r_12);
    x_3 = t;
    t = SSLsetAnnotations(x_3, l_12);
    return(t);
  }
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      ATerm w_11 = ATgetArgument(t, 1);
      ATerm y_11 = ATgetArgument(t, 2);
      ATerm z_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = scope_2_0(e_1, f_1, t);
  return(t);
}
ATerm f_5 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm z_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_33, t_33);
  t = s_5(s_33, t_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      {
        ATerm a_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_12;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm b_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL;
        t = term_t_9;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, p_14);
        t = f_5(n_4, p_14, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        {
          ATerm k_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_4 = NULL;
              t = term_t_9;
              z_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_t_9, p_14);
              t = f_5(z_4, p_14, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(u_12);
            }
          else
            {
              t = k_12;
              {
                ATerm w_12 = t;
                int a_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_5 = NULL;
                    t = term_t_9;
                    z_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_t_9, p_14);
                    t = f_5(z_5, p_14, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(a_13);
                  }
                else
                  {
                    t = w_12;
                    {
                      ATerm f_6 = NULL;
                      t = term_t_9;
                      f_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_t_9, p_14);
                      t = f_5(f_6, p_14, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm b_13 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) b_13) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_c_13;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,x_15 = NULL,y_15 = NULL;
  s_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_15 = ATgetFirst((ATermList) t);
          y_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 = NULL,y_6 = NULL,z_6 = NULL,q_4 = NULL;
            t = SSLgetAnnotations(s_15);
            v_6 = t;
            t = x_15;
            t = f_87(t);
            y_6 = t;
            t = y_15;
            t = filter_1_0(f_87, t);
            z_6 = t;
            t = (ATerm) ATinsert(CheckATermList(z_6), y_6);
            q_4 = t;
            t = SSLsetAnnotations(q_4, v_6);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = y_15;
            t = filter_1_0(f_87, t);
          }
      }
    }
  return(t);
}
ATerm g_5 (ATerm b_87 (ATerm), ATerm z_32, ATerm x_32, ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,g_16 = NULL,h_16 = NULL,l_16 = NULL;
  g_16 = t;
  t = b_87(t);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_16, z_32, x_32);
  t = t_5(c_16, z_32, x_32, t);
  {
    ATerm f_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_16 = NULL;
        t = term_s_13;
        p_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_16, term_s_13);
        t = s_5(c_16, p_16, t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_16 = ATgetFirst((ATermList) t);
        e_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_13;
    h_16 = t;
    t = (ATerm) ATinsert(CheckATermList(e_16), (ATerm) ATinsert(CheckATermList(d_16), z_32));
    l_16 = t;
    t = SSL_table_put(c_16, h_16, l_16);
    t = g_16;
  }
  return(t);
}
ATerm h_5 (ATerm m_33, ATerm n_33, ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  v_16 = t;
  {
    ATerm x_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
        t = s_5(m_33, n_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_14 = ATgetFirst((ATermList) t);
            u_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_13);
        t = SSL_table_put(m_33, n_33, u_16);
        t = (ATerm) ATmakeAppl(sym__3, m_33, n_33, u_16);
      }
    else
      {
        t = x_13;
        t = SSL_table_remove(m_33, n_33);
        t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
      }
    t = v_16;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,c_17 = NULL,g_17 = NULL;
  c_17 = t;
  t = y_86(t);
  a_17 = t;
  {
    ATerm b_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_17 = NULL;
        t = term_s_13;
        l_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_17, term_s_13);
        t = s_5(a_17, l_17, t);
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = b_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_16 = ATgetFirst((ATermList) t);
        y_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_13;
    g_17 = t;
    t = SSL_table_put(a_17, g_17, y_16);
    t = z_16;
    {
      ATerm k_1 (ATerm t)
      {
        ATerm m_17 = NULL;
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_17, m_17);
        t = h_5(a_17, m_17, t);
        return(t);
      }
      t = map_1_0(k_1, t);
      t = c_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t)
{
  ATerm e_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_77(t);
      t = v_77(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = e_14;
      t = v_77(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL,v_17 = NULL;
  r_17 = t;
  t = x_86(t);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, term_s_13);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_14 = ATgetArgument(t, 0);
            ATerm q_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_13;
        l_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_17, term_s_13);
        t = s_5(p_17, l_18, t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATempty;
      }
    s_17 = t;
    t = term_s_13;
    u_17 = t;
    t = (ATerm) ATinsert(CheckATermList(s_17), (ATerm) ATempty);
    v_17 = t;
    t = SSL_table_put(p_17, u_17, v_17);
    t = r_17;
  }
  return(t);
}
ATerm scope_2_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = end_scope_1_0(z_86, t);
    return(t);
  }
  t = begin_scope_1_0(z_86, t);
  t = restore_always_2_0(a_87, n_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,p_20 = NULL;
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_20);
  m_20 = t;
  t = term_u_14;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, l_20), term_u_14);
  t = g_5(t_1, m_20, p_20, t);
  t = l_20;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm w_14 = t;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL;
      q_20 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_20);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_14;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_t_9;
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_7);
  r_7 = t;
  t = term_u_9;
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_9, (ATerm)ATmakeAppl(sym_Var_1, p_7), term_u_9);
  t = c_5(q_7, r_7, s_7, t);
  t = o_7;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = alltd_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,p_9 = NULL,r_9 = NULL,s_9 = NULL;
  l_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_t_9;
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_9);
  r_9 = t;
  t = term_u_9;
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_9, (ATerm)ATmakeAppl(sym_Var_1, m_9), term_u_9);
  t = c_5(p_9, r_9, s_9, t);
  t = l_9;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = alltd_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,c_11 = NULL,d_11 = NULL;
  t_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_t_9;
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_10);
  c_11 = t;
  t = term_u_9;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_9, (ATerm)ATmakeAppl(sym_Var_1, u_10), term_u_9);
  t = c_5(v_10, c_11, d_11, t);
  t = t_10;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,m_11 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_13);
  t_13 = t;
  t = u_13;
  t = map_1_0(dead_var_elim_0_0, t);
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_13);
  m_11 = t;
  t = SSLsetAnnotations(m_11, t_13);
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_26 (ATerm t)
      {
        ATerm z_14 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_18 = NULL;
            ATerm q_1 (ATerm t)
            {
              ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,q_19 = NULL,y_19 = NULL,a_20 = NULL,b_20 = NULL,e_20 = NULL,f_20 = NULL,h_6 = NULL,a_6 = NULL;
              f_20 = t;
              if(match_cons(t, sym_Scope_2))
                {
                  q_19 = ATgetArgument(t, 0);
                  y_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_20);
              o_19 = t;
              t = q_19;
              t = map_1_0(r_1, t);
              a_20 = t;
              t = y_19;
              t = d_26(t);
              b_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_20, b_20);
              a_6 = t;
              t = SSLsetAnnotations(a_6, o_19);
              e_20 = t;
              if(match_cons(t, sym_Scope_2))
                {
                  l_19 = ATgetArgument(t, 0);
                  m_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_20);
              k_19 = t;
              t = l_19;
              t = filter_1_0(w_1, t);
              n_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, n_19, m_19);
              h_6 = t;
              t = SSLsetAnnotations(h_6, k_19);
              return(t);
            }
            if(((z_18 != NULL) && (z_18 != t)))
              _fail(t);
            else
              z_18 = t;
            if(match_cons(t, sym_Scope_2))
              {
                ATerm c_15 = ATgetArgument(t, 0);
                ATerm g_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_18;
            t = scope_2_0(p_1, q_1, t);
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = z_14;
            {
              ATerm i_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = elim_sdef_1_0(d_26, t);
                  ;
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = i_15;
                  {
                    ATerm n_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_24 = NULL,s_24 = NULL,w_24 = NULL,x_24 = NULL;
                        s_24 = t;
                        if(match_cons(t, sym_Build_1))
                          {
                            w_24 = ATgetArgument(t, 0);
                            {
                              ATerm h_7 = NULL,m_7 = NULL,y_7 = NULL;
                              t = SSLgetAnnotations(s_24);
                              h_7 = t;
                              t = w_24;
                              t = alltd_1_0(b_2, t);
                              m_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, m_7);
                              y_7 = t;
                              t = SSLsetAnnotations(y_7, h_7);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_PrimT_3))
                              {
                                w_24 = ATgetArgument(t, 0);
                                x_24 = ATgetArgument(t, 1);
                                r_24 = ATgetArgument(t, 2);
                                {
                                  ATerm o_8 = NULL,t_8 = NULL,y_8 = NULL,z_7 = NULL;
                                  t = SSLgetAnnotations(s_24);
                                  o_8 = t;
                                  t = x_24;
                                  t = reverse_map_1_0(d_26, t);
                                  t_8 = t;
                                  t = r_24;
                                  t = reverse_map_1_0(c_2, t);
                                  y_8 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_24, t_8, y_8);
                                  z_7 = t;
                                  t = SSLsetAnnotations(z_7, o_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    w_24 = ATgetArgument(t, 0);
                                    x_24 = ATgetArgument(t, 1);
                                    r_24 = ATgetArgument(t, 2);
                                    {
                                      ATerm l_10 = NULL,q_10 = NULL,r_10 = NULL,a_8 = NULL;
                                      t = SSLgetAnnotations(s_24);
                                      l_10 = t;
                                      t = x_24;
                                      t = reverse_map_1_0(d_26, t);
                                      q_10 = t;
                                      t = r_24;
                                      t = reverse_map_1_0(e_2, t);
                                      r_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, w_24, q_10, r_10);
                                      a_8 = t;
                                      t = SSLsetAnnotations(a_8, l_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,x_11 = NULL,c_12 = NULL,h_12 = NULL,i_12 = NULL,i_11 = NULL,z_8 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        w_24 = ATgetArgument(t, 0);
                                        x_24 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(s_24);
                                    c_12 = t;
                                    t = x_24;
                                    t = d_26(t);
                                    h_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, w_24, h_12);
                                    z_8 = t;
                                    t = SSLsetAnnotations(z_8, c_12);
                                    i_12 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        t_11 = ATgetArgument(t, 0);
                                        u_11 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(i_12);
                                    s_11 = t;
                                    t = t_11;
                                    t = d_26(t);
                                    x_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, u_11);
                                    i_11 = t;
                                    t = SSLsetAnnotations(i_11, s_11);
                                  }
                              }
                          }
                        ;
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = n_15;
                        {
                          ATerm w_15 = t;
                          int z_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = elim_choice_1_0(d_26, t);
                              ;
                              LocalPopChoice(z_15);
                            }
                          else
                            {
                              t = w_15;
                              {
                                ATerm a_16 = t;
                                int b_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = elim_lchoice_1_0(d_26, t);
                                    ;
                                    LocalPopChoice(b_16);
                                  }
                                else
                                  {
                                    t = a_16;
                                    {
                                      ATerm f_16 = t;
                                      int i_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = elim_guardedlchoice_1_0(d_26, t);
                                          ;
                                          LocalPopChoice(i_16);
                                        }
                                      else
                                        {
                                          t = f_16;
                                          {
                                            ATerm j_16 = t;
                                            int k_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = EliminateFromMatch_0_0(t);
                                                ;
                                                LocalPopChoice(k_16);
                                              }
                                            else
                                              {
                                                t = j_16;
                                                t = all_rl_1_0(d_26, t);
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
      t = d_26(t);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        ATerm b_26 = NULL,c_26 = NULL,g_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,p_11 = NULL,o_11 = NULL,l_11 = NULL;
        b_26 = t;
        if(match_cons(t, sym_Specification_1))
          {
            c_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_26);
        g_13 = t;
        t = c_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_13 = ATgetFirst((ATermList) t);
            k_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_26);
        i_13 = t;
        t = j_13;
        if(match_cons(t, sym_Signature_1))
          {
            o_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_13);
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, o_13);
        l_11 = t;
        t = SSLsetAnnotations(l_11, n_13);
        p_13 = t;
        t = k_13;
        t = Cons_2_0(m_2, n_2, t);
        l_13 = t;
        t = (ATerm) ATinsert(CheckATermList(l_13), p_13);
        o_11 = t;
        t = SSLsetAnnotations(o_11, i_13);
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, m_13);
        p_11 = t;
        t = SSLsetAnnotations(p_11, g_13);
      }
    }
  return(t);
}
ATerm k_5 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_fputc(a_44, b_44);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_26);
  return(t);
}
ATerm l_5 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_write_term_to_stream_text(o_47, p_47);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_26);
  return(t);
}
ATerm n_5 (ATerm n_96 (ATerm), ATerm n_460, ATerm s_47, ATerm t)
{
  ATerm n_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_460, term_m_16);
  t = open_stream_0_0(t);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_26, s_47);
  t = n_96(t);
  t = fclose_0_0(t);
  t = s_47;
  return(t);
}
ATerm m_5 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm q_26 = NULL;
  t = SSL_write_term_to_stream_baf(k_47, l_47);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_26);
  return(t);
}
ATerm r_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm k_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym_Stream_1))
        {
          k_14 = ATgetArgument(n_16, 0);
        }
      else
        _fail(t);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(k_14, v_14, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if(match_cons(o_16, sym_Stream_1))
        {
          t_15 = ATgetArgument(o_16, 0);
        }
      else
        _fail(t);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(t_15, u_15, t);
  p_15 = t;
  t = term_q_16;
  q_15 = t;
  t = p_15;
  if(match_cons(t, sym_Stream_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_16, p_15);
  t = k_5(q_15, r_15, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,g_27 = NULL,p_27 = NULL,r_27 = NULL,s_27 = NULL,v_27 = NULL,w_27 = NULL,d_30 = NULL,e_30 = NULL,r_13 = NULL,q_13 = NULL;
  a_27 = t;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_27);
  r_27 = t;
  t = s_27;
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
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
        t = fetch_1_0(o_2, t);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = term_x_16;
        z_26 = t;
      }
    if(((w_27 != NULL) && (w_27 != t)))
      _fail(t);
    else
      w_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_27, v_27);
    if(((q_13 != NULL) && (q_13 != t)))
      _fail(t);
    else
      q_13 = t;
    t = SSLsetAnnotations(q_13, r_27);
    t = a_27;
    if(match_cons(t, sym__2))
      {
        if(((c_27 != NULL) && (c_27 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_27 = ATgetArgument(t, 0);
        if(((g_27 != NULL) && (g_27 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          g_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_27);
    if(((b_27 != NULL) && (b_27 != t)))
      _fail(t);
    else
      b_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_27, (ATerm) ATmakeAppl(sym__2, not_null(z_26), g_27));
    if(((r_13 != NULL) && (r_13 != t)))
      _fail(t);
    else
      r_13 = t;
    t = SSLsetAnnotations(r_13, b_27);
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    if(match_cons(t, sym__2))
      {
        if(((d_30 != NULL) && (d_30 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_30 = ATgetArgument(t, 0);
        if(((e_30 != NULL) && (e_30 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          e_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm b_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_14 = NULL,f_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,y_13 = NULL;
          t = SSLgetAnnotations(p_27);
          c_14 = t;
          t = d_30;
          t = fetch_1_0(r_2, t);
          f_14 = t;
          t = e_30;
          if(match_cons(t, sym__2))
            {
              i_14 = ATgetArgument(t, 0);
              j_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_5(s_2, i_14, j_14, t);
          h_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_14, h_14);
          y_13 = t;
          t = SSLsetAnnotations(y_13, c_14);
          ;
          LocalPopChoice(d_17);
        }
      else
        {
          t = b_17;
          {
            ATerm a_15 = NULL,d_15 = NULL,h_15 = NULL,m_15 = NULL,g_14 = NULL;
            t = SSLgetAnnotations(p_27);
            a_15 = t;
            t = e_30;
            if(match_cons(t, sym__2))
              {
                h_15 = ATgetArgument(t, 0);
                m_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_5(t_2, h_15, m_15, t);
            d_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_30, d_15);
            g_14 = t;
            t = SSLsetAnnotations(g_14, a_15);
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
ATerm apply_strategy_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,m_30 = NULL,o_30 = NULL;
  o_30 = t;
  t = dtime_0_0(t);
  t = o_30;
  t = p_99(t);
  m_30 = t;
  t = dtime_0_0(t);
  h_30 = t;
  t = m_30;
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_30), (ATerm) ATmakeAppl(sym_Runtime_1, h_30)), j_30);
  return(t);
}
ATerm t_31 (ATerm c_31, ATerm t)
{
  t = SSL_fclose(c_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  j_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_31 = ATgetArgument(t, 0);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_31);
            ;
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            t = t_31(j_31, t);
          }
      }
    }
  else
    {
      t = t_31(j_31, t);
    }
  return(t);
}
ATerm o_5 (ATerm q_47, ATerm t)
{
  t = SSL_read_term_from_stream(q_47);
  return(t);
}
ATerm p_5 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm u_31 = NULL;
  t = SSL_fopen(c_44, d_44);
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_31);
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
  ATerm c_32 = NULL;
  t = SSL_stderr_stream();
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_32);
  return(t);
}
ATerm v_34 (ATerm l_32, ATerm t)
{
  ATerm m_32 = NULL;
  t = SSL_explode_term(l_32);
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_17 = ATgetArgument(t, 1);
        if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
          {
            m_32 = ATgetFirst((ATermList) i_17);
            {
              ATerm k_17 = (ATerm) ATgetNext((ATermList) i_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_34 (ATerm j_33, ATerm k_33, ATerm o_33, ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,a_34 = NULL,r_14 = NULL;
  t = SSLgetAnnotations(o_33);
  r_33 = t;
  t = j_33;
  if(match_cons(t, sym_Path_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_34, k_33);
  r_14 = t;
  t = SSLsetAnnotations(r_14, r_33);
  if(match_cons(t, sym__2))
    {
      p_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(p_33, q_33, t);
  return(t);
}
ATerm x_34 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,n_34 = NULL,q_34 = NULL,s_14 = NULL;
  t = SSLgetAnnotations(e_34);
  n_34 = t;
  t = SSL_is_string(c_34);
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_34, d_34);
  s_14 = t;
  t = SSLsetAnnotations(s_14, n_34);
  if(match_cons(t, sym__2))
    {
      f_34 = ATgetArgument(t, 0);
      g_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(f_34, g_34, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      ATerm q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  s_34 = t;
  if(match_cons(t, sym__2))
    {
      t_34 = ATgetArgument(t, 0);
      u_34 = ATgetArgument(t, 1);
      {
        ATerm t_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_34(s_34, t);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = t_17;
            {
              ATerm x_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_34(t_34, u_34, s_34, t);
                  ;
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = x_17;
                  t = x_34(t_34, u_34, s_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_34(s_34, t);
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_35 = NULL;
      d_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_35, term_c_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      t = debug_1_0(u_2, t);
      _fail(t);
    }
  b_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_5(c_35, t);
  a_35 = t;
  t = b_35;
  t = fclose_0_0(t);
  t = a_35;
  return(t);
}
ATerm fetch_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm b_36 (ATerm t)
  {
    ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
    y_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_35 = ATgetFirst((ATermList) t);
        a_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_16 = NULL,w_16 = NULL,e_15 = NULL;
          t = SSLgetAnnotations(y_35);
          r_16 = t;
          t = z_35;
          t = y_80(t);
          w_16 = t;
          t = (ATerm) ATinsert(CheckATermList(a_36), w_16);
          e_15 = t;
          t = SSLsetAnnotations(e_15, r_16);
          ;
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          {
            ATerm j_17 = NULL,o_17 = NULL,f_15 = NULL;
            t = SSLgetAnnotations(y_35);
            j_17 = t;
            t = a_36;
            t = b_36(t);
            o_17 = t;
            t = (ATerm) ATinsert(CheckATermList(o_17), z_35);
            f_15 = t;
            t = SSLsetAnnotations(f_15, j_17);
          }
        }
    }
    return(t);
  }
  t = b_36(t);
  return(t);
}
ATerm j_5 (ATerm q_41, ATerm r_41, ATerm t)
{
  t = SSL_strcat(q_41, r_41);
  return(t);
}
ATerm debug_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  e_36 = t;
  t = l_96(t);
  f_36 = t;
  t = term_k_8;
  g_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_36), f_36);
  h_36 = t;
  t = SSL_printnl(g_36, h_36);
  t = e_36;
  return(t);
}
ATerm v_2 (ATerm t)
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
ATerm w_2 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_36 = NULL;
      o_36 = t;
      t = SSL_is_string(o_36);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = i_18;
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_2, t);
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            {
              ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
              u_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_36 = ATgetArgument(t, 0);
                  t = v_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_36 = ATgetArgument(t, 0);
                      t = v_36;
                      {
                        ATerm s_18 = t;
                        int t_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_18);
                          }
                        else
                          {
                            t = s_18;
                            t = debug_1_0(w_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_37 = NULL,b_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_36 = ATgetArgument(t, 0);
                          w_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_36;
                      t = eval_config_0_0(t);
                      a_37 = t;
                      t = w_36;
                      t = eval_config_0_0(t);
                      b_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_37, b_37);
                      t = j_5(a_37, b_37, t);
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
  ATerm f_37 = NULL,g_37 = NULL;
  f_37 = t;
  t = term_u_18;
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, f_37);
  t = s_5(g_37, f_37, t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_37 = NULL,i_37 = NULL;
        t = eval_config_0_0(t);
        h_37 = t;
        t = term_u_18;
        i_37 = t;
        t = SSL_table_put(i_37, f_37, h_37);
        t = h_37;
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_37 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_37, term_b_19);
        t = geq_0_0(t);
        t = m_37;
        t = y_97(t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = m_37;
      }
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  if(match_string(t, "-k"))
    {
      t = r_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_37;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
  s_37 = t;
  t = SSL_string_to_int(s_37);
  t_37 = t;
  t = term_c_19;
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, t_37);
  t = v_5(u_37, t_37, t);
  t = s_37;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  if(match_string(t, "-S"))
    {
      t = w_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_37;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL;
  t = term_a_19;
  x_37 = t;
  t = term_f_19;
  y_37 = t;
  t = term_g_19;
  t = v_5(x_37, y_37, t);
  t = term_h_19;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  t = SSL_string_to_int(z_37);
  a_38 = t;
  t = term_a_19;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, a_38);
  t = v_5(b_38, a_38, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_37);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  t = term_p_19;
  c_38 = t;
  t = term_j_8;
  d_38 = t;
  t = term_r_19;
  t = v_5(c_38, d_38, t);
  t = term_t_19;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_3, l_3, m_3, t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = x_19;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_3, w_3, z_3, t);
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            t = Option_3_0(f_4, g_4, j_4, t);
          }
      }
    }
  return(t);
}
ATerm v_5 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm e_38 = NULL;
  t = term_u_18;
  e_38 = t;
  t = SSL_table_put(e_38, r_48, s_48);
  t = (ATerm) ATmakeAppl(sym__3, term_u_18, r_48, s_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
      t = term_j_8;
      t = g_0(t);
      j_38 = t;
      t = term_g_20;
      k_38 = t;
      t = term_h_20;
      l_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, j_38);
      t = t_5(k_38, l_38, j_38, t);
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
      t = term_j_8;
      t = e_0(t);
      o_38 = t;
      t = (ATerm) ATinsert(CheckATermList(i_38), o_38);
    }
  return(t);
}
ATerm m_4 (ATerm t)
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
ATerm v_4 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  r_38 = t;
  t = term_j_20;
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, r_38);
  t = v_5(s_38, r_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_38);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_k_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, v_4, w_4, t);
  return(t);
}
ATerm t_5 (ATerm h_33, ATerm i_33, ATerm g_33, ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_33, i_33);
  {
    ATerm n_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_20 = ATgetArgument(t, 0);
            ATerm v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_33, i_33);
        t = s_5(h_33, i_33, t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATempty;
      }
    v_38 = t;
    t = (ATerm) ATinsert(CheckATermList(v_38), g_33);
    w_38 = t;
    t = SSL_table_put(h_33, i_33, w_38);
    t = u_38;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
      t = term_j_8;
      t = n_0(t);
      h_39 = t;
      t = term_g_20;
      i_39 = t;
      t = term_h_20;
      j_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, h_39);
      t = t_5(i_39, j_39, h_39, t);
      _fail(t);
    }
  else
    {
      ATerm n_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_39 = ATgetFirst((ATermList) t);
          e_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_39 = ATgetFirst((ATermList) t);
          g_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_39;
      t = l_0(t);
      t = f_39;
      t = m_0(t);
      n_39 = t;
      t = (ATerm) ATinsert(CheckATermList(g_39), n_39);
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  if(match_string(t, "-i"))
    {
      t = p_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_39;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  q_39 = t;
  t = term_x_20;
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, q_39);
  t = v_5(r_39, q_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_39);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, a_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_8;
  t = whoami_0_0(t);
  s_39 = t;
  t = term_k_8;
  u_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_20), s_39);
  v_39 = t;
  t = SSL_printnl(u_39, v_39);
  t = term_n_8;
  t_39 = t;
  t = SSL_exit(t_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm q_5 (ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_31, m_31);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      t = SSL_addr(l_31, m_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_39;
      t = p_85(t);
    }
  else
    {
      ATerm c_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_39 = ATgetFirst((ATermList) t);
          z_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_39;
      t = foldr_2_0(p_85, q_85, t);
      c_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_39, c_40);
      t = q_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(o_18, p_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_40 = NULL,j_18 = NULL,k_18 = NULL;
  t = times_0_0(t);
  k_18 = t;
  t = SSL_explode_term(k_18);
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_18;
  t = foldr_2_0(i_5, r_5, t);
  f_40 = t;
  t = SSL_TicksToSeconds(f_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_40;
        if((r_40 != t))
          {
            _fail(t);
          }
        t = q_40;
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = (ATerm) ATmakeAppl(sym__2, r_40, s_40);
        {
          ATerm g_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_40, s_40);
              ;
              LocalPopChoice(h_21);
            }
          else
            {
              t = g_21;
              t = SSL_gtr(r_40, s_40);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_40, s_40);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_40 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        y_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_40, term_n_8);
        t = geq_0_0(t);
        t = w_40;
        t = x_97(t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = w_40;
      }
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,d_41 = NULL,e_41 = NULL;
  t = run_time_0_0(t);
  a_41 = t;
  t = term_j_8;
  t = whoami_0_0(t);
  b_41 = t;
  t = term_k_8;
  d_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_21), a_41), term_k_21), b_41);
  e_41 = t;
  t = SSL_printnl(d_41, e_41);
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_21), a_41), term_k_21), b_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_19;
  f_41 = t;
  t = SSL_exit(f_41);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  o_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_41 = ATgetArgument(t, 0);
          {
            ATerm d_19 = NULL,j_15 = NULL;
            t = SSLgetAnnotations(o_41);
            d_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_41);
            j_15 = t;
            t = SSLsetAnnotations(j_15, d_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = fetch_1_0(y_5, t);
    }
  t = n_100(t);
  return(t);
}
ATerm map_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm g_42 (ATerm t)
  {
    ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
    d_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_42;
      }
    else
      {
        ATerm s_19 = NULL,v_19 = NULL,w_19 = NULL,l_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_42 = ATgetFirst((ATermList) t);
            f_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_42);
        s_19 = t;
        t = e_42;
        t = o_80(t);
        v_19 = t;
        t = f_42;
        t = g_42(t);
        w_19 = t;
        t = (ATerm) ATinsert(CheckATermList(w_19), v_19);
        l_15 = t;
        t = SSLsetAnnotations(l_15, s_19);
      }
    return(t);
  }
  t = g_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_42 = ATgetFirst((ATermList) t);
      k_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_42 = NULL,p_42 = NULL;
        ATerm b_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_42)), not_null(p_42));
          return(t);
        }
        t = k_42;
        t = j_0(t);
        if(((o_42 != NULL) && (o_42 != t)))
          _fail(t);
        else
          o_42 = t;
        t = j_42;
        t = h_0(t);
        if(((p_42 != NULL) && (p_42 != t)))
          _fail(t);
        else
          p_42 = t;
        t = k_42;
        t = reverse_acc_2_0(h_0, b_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_8;
      t = j_0(t);
    }
  return(t);
}
ATerm s_5 (ATerm y_34, ATerm z_34, ATerm t)
{
  t = SSL_table_get(y_34, z_34);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,o_15 = NULL;
  v_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_42);
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_42);
  o_15 = t;
  t = SSLsetAnnotations(o_15, t_42);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm x_42 = NULL;
  x_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_42), term_p_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      t = fetch_1_0(c_6, t);
    }
  t = term_s_21;
  t = echo_0_0(t);
  t = term_g_20;
  r_42 = t;
  t = term_h_20;
  s_42 = t;
  t = term_t_21;
  t = s_5(r_42, s_42, t);
  t = reverse_acc_2_0(_id, d_6, t);
  t = map_1_0(e_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  z_42 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_42;
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
            t = z_42;
          }
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = (ATerm) ATinsert(ATempty, z_42);
      }
    a_43 = t;
    t = term_x_16;
    b_43 = t;
    t = SSL_printnl(b_43, a_43);
    t = z_42;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_21;
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
  ATerm f_43 = NULL,g_43 = NULL;
  t = term_y_21;
  f_43 = t;
  t = term_j_8;
  g_43 = t;
  t = term_z_21;
  t = v_5(f_43, g_43, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  t = term_y_21;
  j_43 = t;
  t = term_j_8;
  k_43 = t;
  t = term_z_21;
  t = v_5(j_43, k_43, t);
  t = term_b_22;
  h_43 = t;
  t = term_j_8;
  i_43 = t;
  t = term_c_22;
  t = v_5(h_43, i_43, t);
  t = term_d_22;
  return(t);
}
ATerm a_7 (ATerm t)
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
      t = Option_3_0(s_6, t_6, u_6, t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      t = Option_3_0(w_6, x_6, a_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,m_18 = NULL;
  q_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_43 = ATgetFirst((ATermList) t);
      n_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_43);
  l_43 = t;
  t = m_43;
  t = j_59(t);
  o_43 = t;
  t = n_43;
  t = k_59(t);
  p_43 = t;
  t = (ATerm) ATinsert(CheckATermList(p_43), o_43);
  m_18 = t;
  t = SSLsetAnnotations(m_18, l_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,g_44 = NULL,h_44 = NULL,r_20 = NULL;
  v_43 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_22;
        t = q_102(t);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
      }
    t = v_43;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_43 = ATgetFirst((ATermList) t);
        y_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_43);
    w_43 = t;
    t = term_a_21;
    h_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_21, x_43);
    t = v_5(h_44, x_43, t);
    t = y_43;
    {
      ATerm r_44 (ATerm t)
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_44 = NULL;
                k_44 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_44;
                ;
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
                t = q_102(t);
                t = Cons_2_0(_id, r_44, t);
              }
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm n_44 = NULL,o_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_44 = ATgetFirst((ATermList) t);
                  o_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_44), (ATerm) ATmakeAppl(sym_Undefined_1, n_44));
            }
          }
        return(t);
      }
      t = r_44(t);
      if(((g_44 != NULL) && (g_44 != t)))
        _fail(t);
      else
        g_44 = t;
      t = (ATerm) ATinsert(CheckATermList(g_44), (ATerm) ATmakeAppl(sym_Program_1, x_43));
      if(((r_20 != NULL) && (r_20 != t)))
        _fail(t);
      else
        r_20 = t;
      t = SSLsetAnnotations(r_20, w_43);
    }
  }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  if(match_string(t, "--help"))
    {
      t = d_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_45;
        }
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  t = term_o_21;
  e_45 = t;
  t = term_j_8;
  f_45 = t;
  t = term_o_22;
  t = v_5(e_45, f_45, t);
  t = term_p_22;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  y_44 = t;
  t = term_g_20;
  a_45 = t;
  t = term_h_20;
  b_45 = t;
  t = (ATerm) ATempty;
  c_45 = t;
  t = SSL_table_put(a_45, b_45, c_45);
  t = y_44;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm r_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_102(t);
          ;
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
                t = Option_3_0(c_7, d_7, f_7, t);
                ;
                LocalPopChoice(u_22);
              }
            else
              {
                t = t_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_7, t);
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_45 = NULL;
          m_45 = t;
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_20 = NULL;
                t = m_45;
                {
                  ATerm z_22 = t;
                  int a_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_21;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_23);
                    }
                  else
                    {
                      t = z_22;
                      t = fetch_1_0(g_7, t);
                    }
                  t = m_45;
                  t = default_system_usage_0_0(t);
                  t = term_f_19;
                  i_20 = t;
                  t = SSL_exit(i_20);
                }
                ;
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
                {
                  ATerm o_20 = NULL;
                  t = term_y_21;
                  t = get_config_0_0(t);
                  t = m_45;
                  t = default_system_about_0_0(t);
                  t = term_f_19;
                  o_20 = t;
                  t = SSL_exit(o_20);
                }
              }
          }
          ;
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          {
            ATerm b_23 = t;
            int c_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
                ATerm k_7 (ATerm t)
                {
                  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,u_20 = NULL;
                  s_45 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_45);
                  q_45 = t;
                  t = r_45;
                  if(((w_44 != NULL) && (w_44 != t)))
                    _fail(t);
                  else
                    w_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_45);
                  u_20 = t;
                  t = SSLsetAnnotations(u_20, q_45);
                  return(t);
                }
                t = fetch_1_0(k_7, t);
                t = term_k_8;
                if(((o_45 != NULL) && (o_45 != t)))
                  _fail(t);
                else
                  o_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_d_23);
                if(((p_45 != NULL) && (p_45 != t)))
                  _fail(t);
                else
                  p_45 = t;
                t = SSL_printnl(o_45, p_45);
                t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_d_23));
                t = default_system_usage_0_0(t);
                t = term_n_8;
                if(((n_45 != NULL) && (n_45 != t)))
                  _fail(t);
                else
                  n_45 = t;
                t = SSL_exit(n_45);
                ;
                LocalPopChoice(c_23);
              }
            else
              {
                t = b_23;
              }
          }
        }
      if(((x_44 != NULL) && (x_44 != t)))
        _fail(t);
      else
        x_44 = t;
      t = term_g_20;
      if(((z_44 != NULL) && (z_44 != t)))
        _fail(t);
      else
        z_44 = t;
      t = SSL_table_destroy(z_44);
      t = x_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  t = parse_options_1_0(p_100, t);
  x_45 = t;
  t = term_e_23;
  a_46 = t;
  t = SSL_table_create(a_46);
  t = term_e_23;
  y_45 = t;
  t = term_f_23;
  z_45 = t;
  t = SSL_table_put(y_45, z_45, x_45);
  t = x_45;
  t = r_100(t);
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_100, t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_100(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = if_verbose2_1_0(e_8, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  t = term_k_23;
  b_46 = t;
  t = term_j_8;
  c_46 = t;
  t = term_l_23;
  t = v_5(b_46, c_46, t);
  t = term_m_23;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
  d_46 = t;
  t = term_a_21;
  t = get_config_0_0(t);
  e_46 = t;
  t = term_k_8;
  f_46 = t;
  t = (ATerm) ATinsert(ATempty, e_46);
  g_46 = t;
  t = SSL_printnl(f_46, g_46);
  t = d_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_99(t);
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
                      ATerm u_23 = t;
                      int v_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(w_7, x_7, b_8, t);
                          ;
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(x_23);
                              }
                            else
                              {
                                t = w_23;
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
  ATerm v_7 (ATerm t)
  {
    ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
    i_46 = t;
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_46 != NULL) && (h_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_8, t);
          ;
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          t = term_a_24;
          h_46 = t;
        }
      t = not_null(h_46);
      t = ReadFromFile_0_0(t);
      if(((j_46 != NULL) && (j_46 != t)))
        _fail(t);
      else
        j_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
      t = apply_strategy_1_0(y_99, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_7, a_100, u_7, v_7, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,w_20 = NULL;
  o_46 = t;
  if(match_cons(t, sym__2))
    {
      l_46 = ATgetArgument(t, 0);
      m_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_46);
  k_46 = t;
  t = m_46;
  t = dead_var_elim_0_0(t);
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_46, n_46);
  w_20 = t;
  t = SSLsetAnnotations(w_20, k_46);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_8, _fail, default_usage_0_0, t);
  return(t);
}

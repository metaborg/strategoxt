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
ATerm term_n_23;
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
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
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
void init_constant_terms (void)
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
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_f_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
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
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
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
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_v_19);
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
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm all_rl_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm z_8 (ATerm n_7, ATerm s_7, ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm b_5 (ATerm u_34, ATerm t_34, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm f_73 (ATerm), ATerm);
ATerm c_5 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm);
ATerm alltd_1_0 (ATerm y_76 (ATerm), ATerm);
ATerm reverse_map_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm e_5 (ATerm m_73 (ATerm), ATerm);
ATerm g_5 (ATerm c_34, ATerm d_34, ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm h_5 (ATerm u_87 (ATerm), ATerm j_33, ATerm h_33, ATerm);
ATerm i_5 (ATerm w_33, ATerm x_33, ATerm);
ATerm end_scope_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm scope_2_0 (ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm m_5 (ATerm l_44, ATerm m_44, ATerm);
ATerm n_5 (ATerm z_47, ATerm a_48, ATerm);
ATerm p_5 (ATerm g_97 (ATerm), ATerm a_465, ATerm d_48, ATerm);
ATerm o_5 (ATerm v_47, ATerm w_47, ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm k_31 (ATerm b_31, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_5 (ATerm b_48, ATerm);
ATerm r_5 (ATerm n_44, ATerm o_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_34 (ATerm h_32, ATerm);
ATerm p_34 (ATerm o_32, ATerm p_32, ATerm t_32, ATerm);
ATerm q_34 (ATerm o_33, ATerm t_33, ATerm u_33, ATerm);
ATerm s_5 (ATerm);
ATerm u_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm l_5 (ATerm b_42, ATerm c_42, ATerm);
ATerm debug_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_98 (ATerm), ATerm);
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
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_5 (ATerm c_49, ATerm d_49, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_5 (ATerm r_33, ATerm s_33, ATerm q_33, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_5 (ATerm v_31, ATerm w_31, ATerm);
ATerm foldr_2_0 (ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm a_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_98 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm need_help_1_0 (ATerm g_101 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm v_5 (ATerm i_35, ATerm j_35, ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_103 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm parse_options_1_0 (ATerm i_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm a_8 (ATerm);
ATerm d_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm iowrap_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
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
ATerm all_rl_1_0 (ATerm l_73 (ATerm), ATerm t)
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
  t = reverse_map_1_0(l_73, t);
  y_0 = t;
  t = SSL_mkterm(s_0, y_0);
  return(t);
}
ATerm m_0 (ATerm t)
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
        ;
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
              ;
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
    t = term_w_9;
    s_1 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, o_1);
    u_1 = t;
    t = term_y_9;
    v_1 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_w_9, (ATerm)ATmakeAppl(sym_Var_1, o_1), term_y_9);
    t = c_5(s_1, u_1, v_1, t);
    t = e_3;
  }
  return(t);
}
ATerm n_0 (ATerm t)
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
ATerm elim_guardedlchoice_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,w_1 = NULL;
  ATerm o_0 (ATerm t)
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
    t = h_73(t);
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
    t = h_73(t);
    c_4 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_4, a_4, b_4);
    y_1 = t;
    t = SSLsetAnnotations(y_1, t_3);
    return(t);
  }
  ATerm u_0 (ATerm t)
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
    t = h_73(t);
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
ATerm elim_lchoice_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm f_5 = NULL,u_5 = NULL,x_5 = NULL,z_5 = NULL,x_2 = NULL;
  ATerm v_0 (ATerm t)
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
    t = g_73(t);
    n_6 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, n_6, m_6);
    y_2 = t;
    t = SSLsetAnnotations(y_2, j_6);
    return(t);
  }
  ATerm w_0 (ATerm t)
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
    t = g_73(t);
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
ATerm x_0 (ATerm t)
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
                          ;
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
ATerm z_8 (ATerm n_7, ATerm s_7, ATerm t)
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
        ;
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
ATerm b_5 (ATerm u_34, ATerm t_34, ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm c_9 = NULL,d_9 = NULL;
    if(match_cons(t, sym__2))
      {
        c_9 = ATgetArgument(t, 0);
        d_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(u_34, c_9, d_9);
    t = (ATerm) ATmakeAppl(sym__3, u_34, c_9, d_9);
    return(t);
  }
  t = t_34;
  t = map_1_0(a_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_9 = NULL;
  ATerm b_1 (ATerm t)
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
ATerm elim_abstract_choice_2_0 (ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,p_9 = NULL,q_9 = NULL;
  l_9 = t;
  t = save_ElimVar_0_0(t);
  h_9 = t;
  t = l_9;
  t = i_73(t);
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
  t = j_73(t);
  j_9 = t;
  t = i_9;
  t = isect_ElimVar_0_0(t);
  t = j_9;
  return(t);
}
ATerm elim_choice_1_0 (ATerm f_73 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,x_9 = NULL,z_9 = NULL,d_10 = NULL,d_3 = NULL;
  ATerm c_1 (ATerm t)
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
    t = f_73(t);
    j_10 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, j_10, i_10);
    h_3 = t;
    t = SSLsetAnnotations(h_3, g_10);
    return(t);
  }
  ATerm d_1 (ATerm t)
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
    t = f_73(t);
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
ATerm c_5 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
  t = v_5(e_34, f_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_11 = ATgetFirst((ATermList) t);
      a_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_11), g_34);
  c_11 = t;
  t = SSL_table_put(e_34, f_34, c_11);
  t = b_11;
  return(t);
}
ATerm alltd_1_0 (ATerm y_76 (ATerm), ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    ATerm q_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_76(t);
        ;
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
ATerm reverse_map_1_0 (ATerm k_81 (ATerm), ATerm t)
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
        t = reverse_map_1_0(k_81, t);
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
        t = k_81(t);
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
ATerm e_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm g_1 (ATerm t)
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
ATerm j_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm e_5 (ATerm m_73 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
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
    t = m_73(t);
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, o_12, p_12, s_12, t_12);
    x_3 = t;
    t = SSLsetAnnotations(x_3, n_12);
    return(t);
  }
  t = scope_2_0(e_1, f_1, t);
  return(t);
}
ATerm g_5 (ATerm c_34, ATerm d_34, ATerm t)
{
  ATerm b_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
  t = v_5(c_34, d_34, t);
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
        ;
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
              ;
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
                    ;
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
ATerm filter_1_0 (ATerm y_87 (ATerm), ATerm t)
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
            t = y_87(t);
            b_7 = t;
            t = e_16;
            t = filter_1_0(y_87, t);
            c_7 = t;
            t = (ATerm) ATinsert(CheckATermList(c_7), b_7);
            f_4 = t;
            t = SSLsetAnnotations(f_4, y_6);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = z_12;
            t = e_16;
            t = filter_1_0(y_87, t);
          }
      }
    }
  return(t);
}
ATerm h_5 (ATerm u_87 (ATerm), ATerm j_33, ATerm h_33, ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  t = u_87(t);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_16, j_33, h_33);
  t = w_5(i_16, j_33, h_33, t);
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
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
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
    t = (ATerm) ATinsert(CheckATermList(k_16), (ATerm) ATinsert(CheckATermList(j_16), j_33));
    n_16 = t;
    t = SSL_table_put(i_16, m_16, n_16);
    t = l_16;
  }
  return(t);
}
ATerm i_5 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm w_16 = NULL,a_17 = NULL;
  a_17 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_33, x_33);
        t = v_5(w_33, x_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_13 = ATgetFirst((ATermList) t);
            w_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_13);
        t = SSL_table_put(w_33, x_33, w_16);
        t = (ATerm) ATmakeAppl(sym__3, w_33, x_33, w_16);
      }
    else
      {
        t = h_13;
        t = SSL_table_remove(w_33, x_33);
        t = (ATerm) ATmakeAppl(sym__2, w_33, x_33);
      }
    t = a_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  g_17 = t;
  t = r_87(t);
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
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
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
      ATerm k_1 (ATerm t)
      {
        ATerm s_17 = NULL;
        s_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, s_17);
        t = i_5(f_17, s_17, t);
        return(t);
      }
      t = map_1_0(k_1, t);
      t = g_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_78(t);
      t = o_78(t);
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      t = o_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,y_17 = NULL,z_17 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  t = q_87(t);
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
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATempty;
      }
    z_17 = t;
    t = term_g_13;
    b_18 = t;
    t = (ATerm) ATinsert(CheckATermList(z_17), (ATerm) ATempty);
    c_18 = t;
    t = SSL_table_put(v_17, b_18, c_18);
    t = y_17;
  }
  return(t);
}
ATerm scope_2_0 (ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = end_scope_1_0(s_87, t);
    return(t);
  }
  t = begin_scope_1_0(s_87, t);
  t = restore_always_2_0(t_87, n_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm r_1 (ATerm t)
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
ATerm t_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm z_1 (ATerm t)
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
ATerm c_2 (ATerm t)
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
ATerm d_2 (ATerm t)
{
  t = alltd_1_0(e_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
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
ATerm f_2 (ATerm t)
{
  t = alltd_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
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
ATerm m_2 (ATerm t)
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
ATerm n_2 (ATerm t)
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
      ATerm a_26 (ATerm t)
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,o_23 = NULL;
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
                    ATerm q_1 (ATerm t)
                    {
                      ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,g_24 = NULL,e_6 = NULL,j_5 = NULL;
                      g_24 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          x_23 = ATgetArgument(t, 0);
                          y_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(g_24);
                      w_23 = t;
                      t = x_23;
                      t = map_1_0(r_1, t);
                      b_24 = t;
                      t = y_23;
                      t = a_26(t);
                      c_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, b_24, c_24);
                      j_5 = t;
                      t = SSLsetAnnotations(j_5, w_23);
                      d_24 = t;
                      if(match_cons(t, sym_Scope_2))
                        {
                          q_23 = ATgetArgument(t, 0);
                          r_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(d_24);
                      p_23 = t;
                      t = q_23;
                      t = filter_1_0(z_1, t);
                      s_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, s_23, r_23);
                      e_6 = t;
                      t = SSLsetAnnotations(e_6, p_23);
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
                            k_23 = ATgetArgument(t, 0);
                            {
                              ATerm m_7 = NULL,p_7 = NULL,u_6 = NULL;
                              t = SSLgetAnnotations(j_23);
                              m_7 = t;
                              t = k_23;
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
                                k_23 = ATgetArgument(t, 0);
                                o_23 = ATgetArgument(t, 1);
                                i_23 = ATgetArgument(t, 2);
                                {
                                  ATerm r_8 = NULL,b_9 = NULL,m_9 = NULL,y_7 = NULL;
                                  t = SSLgetAnnotations(j_23);
                                  r_8 = t;
                                  t = o_23;
                                  t = reverse_map_1_0(a_26, t);
                                  b_9 = t;
                                  t = i_23;
                                  t = reverse_map_1_0(d_2, t);
                                  m_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_23, b_9, m_9);
                                  y_7 = t;
                                  t = SSLsetAnnotations(y_7, r_8);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    k_23 = ATgetArgument(t, 0);
                                    o_23 = ATgetArgument(t, 1);
                                    i_23 = ATgetArgument(t, 2);
                                    {
                                      ATerm o_10 = NULL,t_10 = NULL,u_10 = NULL,b_8 = NULL;
                                      t = SSLgetAnnotations(j_23);
                                      o_10 = t;
                                      t = o_23;
                                      t = reverse_map_1_0(a_26, t);
                                      t_10 = t;
                                      t = i_23;
                                      t = reverse_map_1_0(f_2, t);
                                      u_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, k_23, t_10, u_10);
                                      b_8 = t;
                                      t = SSLsetAnnotations(b_8, o_10);
                                    }
                                  }
                                else
                                  {
                                    ATerm v_11 = NULL,w_11 = NULL,z_11 = NULL,a_12 = NULL,f_12 = NULL,k_12 = NULL,x_12 = NULL,a_9 = NULL,c_8 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        k_23 = ATgetArgument(t, 0);
                                        o_23 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(j_23);
                                    f_12 = t;
                                    t = o_23;
                                    t = a_26(t);
                                    k_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, k_23, k_12);
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
            ;
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
                  ;
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
                        ;
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
                              ;
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
                                    ;
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
      ;
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
ATerm m_5 (ATerm l_44, ATerm m_44, ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_fputc(l_44, m_44);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_26);
  return(t);
}
ATerm n_5 (ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_write_term_to_stream_text(z_47, a_48);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_26);
  return(t);
}
ATerm p_5 (ATerm g_97 (ATerm), ATerm a_465, ATerm d_48, ATerm t)
{
  ATerm n_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_465, term_q_16);
  t = s_5(t);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_26, d_48);
  t = g_97(t);
  t = fclose_0_0(t);
  t = d_48;
  return(t);
}
ATerm o_5 (ATerm v_47, ATerm w_47, ATerm t)
{
  ATerm p_26 = NULL;
  t = SSL_write_term_to_stream_baf(v_47, w_47);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_26);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
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
ATerm t_2 (ATerm t)
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
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,y_26 = NULL,c_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,m_27 = NULL,p_27 = NULL,z_29 = NULL,b_30 = NULL,s_13 = NULL,d_13 = NULL;
  u_26 = t;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  h_27 = t;
  t = i_27;
  {
    ATerm v_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
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
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = v_16;
        t = term_z_16;
        t_26 = t;
      }
    p_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_27, m_27);
    d_13 = t;
    t = SSLsetAnnotations(d_13, h_27);
    t = u_26;
    if(match_cons(t, sym__2))
      {
        y_26 = ATgetArgument(t, 0);
        c_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_26);
    v_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_26, (ATerm) ATmakeAppl(sym__2, not_null(t_26), c_27));
    s_13 = t;
    t = SSLsetAnnotations(s_13, v_26);
    g_27 = t;
    if(match_cons(t, sym__2))
      {
        z_29 = ATgetArgument(t, 0);
        b_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_14 = NULL,k_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,t_13 = NULL;
          t = SSLgetAnnotations(g_27);
          e_14 = t;
          t = z_29;
          t = fetch_1_0(p_2, t);
          k_14 = t;
          t = b_30;
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
          ;
          LocalPopChoice(e_17);
        }
      else
        {
          t = d_17;
          {
            ATerm d_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,f_14 = NULL;
            t = SSLgetAnnotations(g_27);
            d_15 = t;
            t = b_30;
            if(match_cons(t, sym__2))
              {
                i_15 = ATgetArgument(t, 0);
                j_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_5(t_2, i_15, j_15, t);
            h_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_29, h_15);
            f_14 = t;
            t = SSLsetAnnotations(f_14, d_15);
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
ATerm apply_strategy_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  k_30 = t;
  t = dtime_0_0(t);
  t = k_30;
  t = i_100(t);
  j_30 = t;
  t = dtime_0_0(t);
  g_30 = t;
  t = j_30;
  if(match_cons(t, sym__2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_30), (ATerm) ATmakeAppl(sym_Runtime_1, g_30)), i_30);
  return(t);
}
ATerm k_31 (ATerm b_31, ATerm t)
{
  t = SSL_fclose(b_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_31 = NULL,h_31 = NULL;
  h_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_31 = ATgetArgument(t, 0);
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_31);
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            t = k_31(h_31, t);
          }
      }
    }
  else
    {
      t = k_31(h_31, t);
    }
  return(t);
}
ATerm q_5 (ATerm b_48, ATerm t)
{
  t = SSL_read_term_from_stream(b_48);
  return(t);
}
ATerm r_5 (ATerm n_44, ATerm o_44, ATerm t)
{
  ATerm l_31 = NULL;
  t = SSL_fopen(n_44, o_44);
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_31 = NULL;
  t = SSL_stdin_stream();
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t = SSL_stdout_stream();
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_31 = NULL;
  t = SSL_stderr_stream();
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_31);
  return(t);
}
ATerm o_34 (ATerm h_32, ATerm t)
{
  ATerm i_32 = NULL;
  t = SSL_explode_term(h_32);
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_17 = ATgetArgument(t, 1);
        if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
          {
            i_32 = ATgetFirst((ATermList) l_17);
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
  t = i_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_34 (ATerm o_32, ATerm p_32, ATerm t_32, ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,m_33 = NULL,s_14 = NULL;
  t = SSLgetAnnotations(t_32);
  y_32 = t;
  t = o_32;
  if(match_cons(t, sym_Path_1))
    {
      m_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_33, p_32);
  s_14 = t;
  t = SSLsetAnnotations(s_14, y_32);
  if(match_cons(t, sym__2))
    {
      w_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(w_32, x_32, t);
  return(t);
}
ATerm q_34 (ATerm o_33, ATerm t_33, ATerm u_33, ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,j_34 = NULL,w_14 = NULL;
  t = SSLgetAnnotations(u_33);
  a_34 = t;
  t = SSL_is_string(o_33);
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_34, t_33);
  w_14 = t;
  t = SSLsetAnnotations(w_14, a_34);
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      z_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(y_33, z_33, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
  l_34 = t;
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
      {
        ATerm p_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_34(l_34, t);
            ;
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
                  t = p_34(m_34, n_34, l_34, t);
                  ;
                  LocalPopChoice(u_17);
                }
              else
                {
                  t = t_17;
                  t = q_34(m_34, n_34, l_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_34(l_34, t);
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  ATerm x_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_35 = NULL;
      a_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_35, term_d_18);
      t = s_5(t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = x_17;
      t = debug_1_0(u_2, t);
      _fail(t);
    }
  y_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(z_34, t);
  x_34 = t;
  t = y_34;
  t = fclose_0_0(t);
  t = x_34;
  return(t);
}
ATerm fetch_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm a_36 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
    x_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_35 = ATgetFirst((ATermList) t);
        z_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_16 = NULL,y_16 = NULL,z_14 = NULL;
          t = SSLgetAnnotations(x_35);
          u_16 = t;
          t = y_35;
          t = r_81(t);
          y_16 = t;
          t = (ATerm) ATinsert(CheckATermList(z_35), y_16);
          z_14 = t;
          t = SSLsetAnnotations(z_14, u_16);
          ;
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          {
            ATerm n_17 = NULL,q_17 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(x_35);
            n_17 = t;
            t = z_35;
            t = a_36(t);
            q_17 = t;
            t = (ATerm) ATinsert(CheckATermList(q_17), y_35);
            g_15 = t;
            t = SSLsetAnnotations(g_15, n_17);
          }
        }
    }
    return(t);
  }
  t = a_36(t);
  return(t);
}
ATerm l_5 (ATerm b_42, ATerm c_42, ATerm t)
{
  t = SSL_strcat(b_42, c_42);
  return(t);
}
ATerm debug_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  d_36 = t;
  t = e_97(t);
  e_36 = t;
  t = term_n_8;
  f_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_36), e_36);
  g_36 = t;
  t = SSL_printnl(f_36, g_36);
  t = d_36;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
ATerm w_2 (ATerm t)
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
      ATerm n_36 = NULL;
      n_36 = t;
      t = SSL_is_string(n_36);
      ;
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
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = m_18;
            {
              ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
              t_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_36 = ATgetArgument(t, 0);
                  t = u_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_36 = ATgetArgument(t, 0);
                      t = u_36;
                      {
                        ATerm t_18 = t;
                        int u_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
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
                      ATerm z_36 = NULL,a_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_36 = ATgetArgument(t, 0);
                          v_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_36;
                      t = eval_config_0_0(t);
                      z_36 = t;
                      t = v_36;
                      t = eval_config_0_0(t);
                      a_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
                      t = l_5(z_36, a_37, t);
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
  ATerm e_37 = NULL,f_37 = NULL;
  e_37 = t;
  t = term_v_18;
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, e_37);
  t = v_5(f_37, e_37, t);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_37 = NULL,h_37 = NULL;
        t = eval_config_0_0(t);
        g_37 = t;
        t = term_v_18;
        h_37 = t;
        t = SSL_table_put(h_37, e_37, g_37);
        t = g_37;
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_37 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        n_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_37, term_c_19);
        t = geq_0_0(t);
        t = l_37;
        t = r_98(t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = l_37;
      }
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  if(match_string(t, "-k"))
    {
      t = q_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_37;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  t = SSL_string_to_int(r_37);
  s_37 = t;
  t = term_d_19;
  t_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, s_37);
  t = y_5(t_37, s_37, t);
  t = r_37;
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
  ATerm v_37 = NULL;
  v_37 = t;
  if(match_string(t, "-S"))
    {
      t = v_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_37;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  t = term_a_19;
  w_37 = t;
  t = term_f_19;
  x_37 = t;
  t = term_g_19;
  t = y_5(w_37, x_37, t);
  t = term_j_19;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_k_19;
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
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  t = SSL_string_to_int(y_37);
  z_37 = t;
  t = term_a_19;
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, z_37);
  t = y_5(a_38, z_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_37);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  t = term_m_19;
  b_38 = t;
  t = term_m_8;
  c_38 = t;
  t = term_n_19;
  t = y_5(b_38, c_38, t);
  t = term_o_19;
  return(t);
}
ATerm m_4 (ATerm t)
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
      ;
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
            t = ArgOption_3_0(v_3, w_3, z_3, t);
            ;
            LocalPopChoice(t_19);
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
ATerm y_5 (ATerm c_49, ATerm d_49, ATerm t)
{
  ATerm d_38 = NULL;
  t = term_v_18;
  d_38 = t;
  t = SSL_table_put(d_38, c_49, d_49);
  t = (ATerm) ATmakeAppl(sym__3, term_v_18, c_49, d_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
      t = term_m_8;
      t = e_0(t);
      i_38 = t;
      t = term_u_19;
      j_38 = t;
      t = term_v_19;
      k_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, i_38);
      t = w_5(j_38, k_38, i_38, t);
      _fail(t);
    }
  else
    {
      ATerm n_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_38 = ATgetFirst((ATermList) t);
          h_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_38;
      t = c_0(t);
      t = term_m_8;
      t = d_0(t);
      n_38 = t;
      t = (ATerm) ATinsert(CheckATermList(h_38), n_38);
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm p_38 = NULL;
  p_38 = t;
  if(match_string(t, "-o"))
    {
      t = p_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_38;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  q_38 = t;
  t = term_w_19;
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, q_38);
  t = y_5(r_38, q_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_38);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, v_4, w_4, t);
  return(t);
}
ATerm w_5 (ATerm r_33, ATerm s_33, ATerm q_33, ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_33, s_33);
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_20 = ATgetArgument(t, 0);
            ATerm e_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_33, s_33);
        t = v_5(r_33, s_33, t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = (ATerm) ATempty;
      }
    u_38 = t;
    t = (ATerm) ATinsert(CheckATermList(u_38), q_33);
    v_38 = t;
    t = SSL_table_put(r_33, s_33, v_38);
    t = t_38;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
      t = term_m_8;
      t = l_0(t);
      g_39 = t;
      t = term_u_19;
      h_39 = t;
      t = term_v_19;
      i_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, g_39);
      t = w_5(h_39, i_39, g_39, t);
      _fail(t);
    }
  else
    {
      ATerm m_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_39 = ATgetFirst((ATermList) t);
          d_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_39 = ATgetFirst((ATermList) t);
          f_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_39;
      t = h_0(t);
      t = e_39;
      t = j_0(t);
      m_39 = t;
      t = (ATerm) ATinsert(CheckATermList(f_39), m_39);
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  if(match_string(t, "-i"))
    {
      t = o_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_39;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  p_39 = t;
  t = term_f_20;
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, p_39);
  t = y_5(q_39, p_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_39);
  return(t);
}
ATerm z_4 (ATerm t)
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
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  r_39 = t;
  t = term_n_8;
  t_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_20), r_39);
  u_39 = t;
  t = SSL_printnl(t_39, u_39);
  t = term_q_8;
  s_39 = t;
  t = SSL_exit(s_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_5 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_31, w_31);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = SSL_addr(v_31, w_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_39;
      t = i_86(t);
    }
  else
    {
      ATerm b_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_39 = ATgetFirst((ATermList) t);
          y_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_39;
      t = foldr_2_0(i_86, j_86, t);
      b_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_39, b_40);
      t = j_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm a_6 (ATerm t)
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
  ATerm e_40 = NULL,n_18 = NULL,o_18 = NULL;
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
  e_40 = t;
  t = SSL_TicksToSeconds(e_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  if(match_cons(t, sym__2))
    {
      q_40 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_40;
        if((q_40 != t))
          {
            _fail(t);
          }
        t = p_40;
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_40, r_40);
              ;
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              t = SSL_gtr(q_40, r_40);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_98 (ATerm), ATerm t)
{
  ATerm v_40 = NULL;
  v_40 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_40 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        x_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_40, term_q_8);
        t = geq_0_0(t);
        t = v_40;
        t = q_98(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = v_40;
      }
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,c_41 = NULL,d_41 = NULL;
  t = run_time_0_0(t);
  z_40 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  a_41 = t;
  t = term_n_8;
  c_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), z_40), term_t_20), a_41);
  d_41 = t;
  t = SSL_printnl(c_41, d_41);
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), z_40), term_t_20), a_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_19;
  e_41 = t;
  t = SSL_exit(e_41);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  n_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_41 = ATgetArgument(t, 0);
          {
            ATerm h_19 = NULL,n_15 = NULL;
            t = SSLgetAnnotations(n_41);
            h_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_41);
            n_15 = t;
            t = SSLsetAnnotations(n_15, h_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = fetch_1_0(c_6, t);
    }
  t = g_101(t);
  return(t);
}
ATerm map_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm f_42 (ATerm t)
  {
    ATerm a_42 = NULL,d_42 = NULL,e_42 = NULL;
    a_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_42;
      }
    else
      {
        ATerm x_19 = NULL,c_20 = NULL,d_20 = NULL,q_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_42 = ATgetFirst((ATermList) t);
            e_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_42);
        x_19 = t;
        t = d_42;
        t = h_81(t);
        c_20 = t;
        t = e_42;
        t = f_42(t);
        d_20 = t;
        t = (ATerm) ATinsert(CheckATermList(d_20), c_20);
        q_15 = t;
        t = SSLsetAnnotations(q_15, x_19);
      }
    return(t);
  }
  t = f_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_42 = ATgetFirst((ATermList) t);
      j_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_42 = NULL,o_42 = NULL;
        ATerm f_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_42)), not_null(o_42));
          return(t);
        }
        t = j_42;
        t = g_0(t);
        if(((n_42 != NULL) && (n_42 != t)))
          _fail(t);
        else
          n_42 = t;
        t = i_42;
        t = f_0(t);
        if(((o_42 != NULL) && (o_42 != t)))
          _fail(t);
        else
          o_42 = t;
        t = j_42;
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
ATerm v_5 (ATerm i_35, ATerm j_35, ATerm t)
{
  t = SSL_table_get(i_35, j_35);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,s_15 = NULL;
  u_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_42);
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_42);
  s_15 = t;
  t = SSLsetAnnotations(s_15, s_42);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm w_42 = NULL;
  w_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_42), term_y_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  ATerm z_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = z_20;
      t = fetch_1_0(g_6, t);
    }
  t = term_c_21;
  t = echo_0_0(t);
  t = term_u_19;
  q_42 = t;
  t = term_v_19;
  r_42 = t;
  t = term_d_21;
  t = v_5(q_42, r_42, t);
  t = reverse_acc_2_0(_id, h_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_42;
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
            t = y_42;
          }
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = (ATerm) ATinsert(ATempty, y_42);
      }
    z_42 = t;
    t = term_z_16;
    a_43 = t;
    t = SSL_printnl(a_43, z_42);
    t = y_42;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  t = term_i_21;
  e_43 = t;
  t = term_m_8;
  f_43 = t;
  t = term_j_21;
  t = y_5(e_43, f_43, t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
  t = term_i_21;
  i_43 = t;
  t = term_m_8;
  j_43 = t;
  t = term_j_21;
  t = y_5(i_43, j_43, t);
  t = term_l_21;
  g_43 = t;
  t = term_m_8;
  h_43 = t;
  t = term_m_21;
  t = y_5(g_43, h_43, t);
  t = term_n_21;
  return(t);
}
ATerm d_7 (ATerm t)
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
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = Option_3_0(z_6, a_7, d_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,g_16 = NULL;
  p_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_43 = ATgetFirst((ATermList) t);
      m_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_43);
  k_43 = t;
  t = l_43;
  t = u_59(t);
  n_43 = t;
  t = m_43;
  t = v_59(t);
  o_43 = t;
  t = (ATerm) ATinsert(CheckATermList(o_43), n_43);
  g_16 = t;
  t = SSLsetAnnotations(g_16, k_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,z_43 = NULL,a_44 = NULL,q_18 = NULL;
  u_43 = t;
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_21;
        t = j_103(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
      }
    t = u_43;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_43 = ATgetFirst((ATermList) t);
        x_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_43);
    v_43 = t;
    t = term_i_20;
    a_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_20, w_43);
    t = y_5(a_44, w_43, t);
    t = x_43;
    {
      ATerm k_44 (ATerm t)
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_21 = t;
            int x_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_44 = NULL;
                d_44 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_44;
                ;
                LocalPopChoice(x_21);
              }
            else
              {
                t = w_21;
                t = j_103(t);
                t = Cons_2_0(_id, k_44, t);
              }
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm g_44 = NULL,h_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_44 = ATgetFirst((ATermList) t);
                  h_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_44), (ATerm) ATmakeAppl(sym_Undefined_1, g_44));
            }
          }
        return(t);
      }
      t = k_44(t);
      z_43 = t;
      t = (ATerm) ATinsert(CheckATermList(z_43), (ATerm) ATmakeAppl(sym_Program_1, w_43));
      q_18 = t;
      t = SSLsetAnnotations(q_18, v_43);
    }
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  if(match_string(t, "--help"))
    {
      t = c_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_45;
        }
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  t = term_x_20;
  d_45 = t;
  t = term_m_8;
  e_45 = t;
  t = term_y_21;
  t = y_5(d_45, e_45, t);
  t = term_z_21;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
  x_44 = t;
  t = term_u_19;
  z_44 = t;
  t = term_v_19;
  a_45 = t;
  t = (ATerm) ATempty;
  b_45 = t;
  t = SSL_table_put(z_44, a_45, b_45);
  t = x_44;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm b_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_103(t);
          ;
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
                ;
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
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_45 = NULL;
          l_45 = t;
          {
            ATerm h_22 = t;
            int i_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_20 = NULL;
                t = l_45;
                {
                  ATerm j_22 = t;
                  int k_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_22);
                    }
                  else
                    {
                      t = j_22;
                      t = fetch_1_0(j_7, t);
                    }
                  t = l_45;
                  t = default_system_usage_0_0(t);
                  t = term_f_19;
                  q_20 = t;
                  t = SSL_exit(q_20);
                }
                ;
                LocalPopChoice(i_22);
              }
            else
              {
                t = h_22;
                {
                  ATerm a_21 = NULL;
                  t = term_i_21;
                  t = get_config_0_0(t);
                  t = l_45;
                  t = default_system_about_0_0(t);
                  t = term_f_19;
                  a_21 = t;
                  t = SSL_exit(a_21);
                }
              }
          }
          ;
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
                ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
                ATerm o_7 (ATerm t)
                {
                  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,b_19 = NULL;
                  r_45 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_45);
                  p_45 = t;
                  t = q_45;
                  if(((v_44 != NULL) && (v_44 != t)))
                    _fail(t);
                  else
                    v_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_45);
                  b_19 = t;
                  t = SSLsetAnnotations(b_19, p_45);
                  return(t);
                }
                t = fetch_1_0(o_7, t);
                t = term_n_8;
                n_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_44)), term_n_22);
                o_45 = t;
                t = SSL_printnl(n_45, o_45);
                t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_44)), term_n_22));
                t = default_system_usage_0_0(t);
                t = term_q_8;
                m_45 = t;
                t = SSL_exit(m_45);
                ;
                LocalPopChoice(m_22);
              }
            else
              {
                t = l_22;
              }
          }
        }
      w_44 = t;
      t = term_u_19;
      y_44 = t;
      t = SSL_table_destroy(y_44);
      t = w_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  t = parse_options_1_0(i_101, t);
  w_45 = t;
  t = term_o_22;
  z_45 = t;
  t = SSL_table_create(z_45);
  t = term_o_22;
  x_45 = t;
  t = term_p_22;
  y_45 = t;
  t = SSL_table_put(x_45, y_45, w_45);
  t = w_45;
  t = k_101(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_101, t);
        ;
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
              t = l_101(t);
              t = report_success_0_0(t);
              ;
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
ATerm w_7 (ATerm t)
{
  t = if_verbose2_1_0(i_8, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_u_22;
  a_46 = t;
  t = term_m_8;
  b_46 = t;
  t = term_v_22;
  t = y_5(a_46, b_46, t);
  t = term_w_22;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  c_46 = t;
  t = term_i_20;
  t = get_config_0_0(t);
  d_46 = t;
  t = term_n_8;
  e_46 = t;
  t = (ATerm) ATinsert(ATempty, d_46);
  f_46 = t;
  t = SSL_printnl(e_46, f_46);
  t = c_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_100(t);
        ;
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
              ;
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
                          t = Option_3_0(a_8, d_8, g_8, t);
                          ;
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
                                ;
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
  ATerm z_7 (ATerm t)
  {
    ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
    h_46 = t;
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_46 != NULL) && (g_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_8, t);
          ;
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          t = term_n_23;
          g_46 = t;
        }
      t = not_null(g_46);
      t = ReadFromFile_0_0(t);
      i_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
      t = apply_strategy_1_0(r_100, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(q_7, t_100, w_7, z_7, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,i_19 = NULL;
  n_46 = t;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_46);
  j_46 = t;
  t = l_46;
  t = dead_var_elim_0_0(t);
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, m_46);
  i_19 = t;
  t = SSLsetAnnotations(i_19, j_46);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_8, _fail, default_usage_0_0, t);
  return(t);
}

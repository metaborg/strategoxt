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
ATerm term_n_24;
ATerm term_u_23;
ATerm term_q_23;
ATerm term_f_23;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_l_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_r_20;
ATerm term_i_20;
ATerm term_w_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_n_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_n_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_a_14;
ATerm term_j_13;
ATerm term_d_13;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_g_11;
ATerm term_f_10;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_x_6;
void init_constant_terms (void)
{
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_11);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__3, term_a_21, term_b_21, term_x_6);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm topdown_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm all_rl_1_0 (ATerm s_84 (ATerm), ATerm);
ATerm Match_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm q_0 (ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm n_84 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm l_6 (ATerm m_5, ATerm p_5, ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm alltd_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm reverse_map_1_0 (ATerm r_92 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm);
ATerm Build_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm elim_sdef_1_0 (ATerm t_84 (ATerm), ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm);
ATerm assert_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm s_71 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm t_71 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm _2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_111 (ATerm), ATerm);
ATerm b_19 (ATerm v_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_109 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_109 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm need_help_1_0 (ATerm g_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm g_84 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm j_114 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm parse_options_1_0 (ATerm i_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm iowrap_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm dead_var_elim_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL;
  i_0 = t;
  t = term_x_6;
  t = whoami_0_0(t);
  k_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_0;
  return(t);
}
ATerm topdown_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  t = n_86(t);
  {
    ATerm l_0 (ATerm t)
    {
      t = topdown_1_0(n_86, t);
      return(t);
    }
    t = SRTS_all(l_0, t);
  }
  return(t);
}
ATerm all_rl_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,s_0 = NULL,w_0 = NULL;
  o_0 = t;
  t = SSL_explode_term(o_0);
  if(match_cons(t, sym__2))
    {
      p_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_0;
  t = reverse_map_1_0(s_84, t);
  w_0 = t;
  t = SSL_mkterm(p_0, w_0);
  return(t);
}
ATerm Match_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      b_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_1);
  x_0 = t;
  t = b_1;
  t = h_76(t);
  c_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, c_1), x_0);
  return(t);
}
ATerm m_0 (ATerm t)
{
  t = alltd_1_0(n_0, t);
  t = alltd_1_0(q_0, t);
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL,a_2 = NULL,j_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_2;
        n_1 = t;
        t = SSLgetAnnotations(a_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) d_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(e_7) != AT_LIST) || !(ATisEmpty(e_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_2;
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = j_2;
        n_1 = t;
        t = SSLgetAnnotations(a_2);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_2;
      }
    p_1 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_f_7, (ATerm)ATmakeAppl(sym_Var_1, n_1), term_i_7);
    t = table_replace_0_0(t);
    t = p_1;
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_2);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_7 = ATgetFirst((ATermList) t);
      ATerm n_7 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(n_7) != AT_LIST) || !(ATisEmpty(n_7))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_2);
  t = ElimVar_0_0(t);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  t = Match_1_0(m_0, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL;
  k_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
      f_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  a_3 = t;
  t = c_3;
  t = u_76(t);
  g_3 = t;
  t = d_3;
  t = v_76(t);
  h_3 = t;
  t = f_3;
  t = w_76(t);
  j_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, g_3, h_3, j_3), a_3);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm r_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, o_84, _id, t);
      t = GuardedLChoice_3_0(o_84, _id, _id, t);
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, o_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(r_0, t_0, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  u_3 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      q_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_3);
  p_3 = t;
  t = q_3;
  t = q_76(t);
  s_3 = t;
  t = r_3;
  t = r_76(t);
  t_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, s_3, t_3), p_3);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm u_0 (ATerm t)
    {
      t = LChoice_2_0(n_84, _id, t);
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      t = LChoice_2_0(_id, n_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(u_0, v_0, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,k_4 = NULL;
  k_4 = t;
  if(match_cons(t, sym_Choice_2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_4);
  c_4 = t;
  t = d_4;
  t = o_75(t);
  f_4 = t;
  t = e_4;
  t = p_75(t);
  g_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, f_4, g_4), c_4);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 = NULL,c_6 = NULL,d_6 = NULL,g_6 = NULL;
      z_5 = t;
      if(match_cons(t, sym__2))
        {
          c_6 = ATgetArgument(t, 0);
          d_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_6;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_6 = ATgetFirst((ATermList) t);
                {
                  ATerm w_7 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_7);
            t = g_6;
            {
              ATerm x_7 = t;
              int z_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm c_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_7);
                  t = c_6;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm d_8 = t;
                      int e_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_5;
                          ;
                          LocalPopChoice(e_8);
                        }
                      else
                        {
                          t = d_8;
                          t = l_6(c_6, z_5, t);
                        }
                    }
                  else
                    {
                      t = l_6(c_6, z_5, t);
                    }
                }
              else
                {
                  t = x_7;
                  t = c_6;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = z_5;
                }
            }
          }
        else
          {
            t = s_7;
            t = c_6;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = z_5;
          }
      }
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
    }
  return(t);
}
ATerm l_6 (ATerm m_5, ATerm p_5, ATerm t)
{
  t = p_5;
  {
    ATerm f_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), m_5);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_8 = ATgetFirst((ATermList) t);
            if(match_cons(i_8, sym_Defined_1))
              {
                ATerm l_8 = ATgetArgument(i_8, 0);
              }
            else
              _fail(t);
            {
              ATerm k_8 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = p_5;
        ;
        LocalPopChoice(h_8);
      }
    else
      {
        t = f_8;
        t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATempty, term_i_7));
      }
  }
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm l_5 = NULL;
  t = map_1_0(y_0, t);
  l_5 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, l_5);
  t = table_putlist_0_0(t);
  t = l_5;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm v_6 = NULL,w_6 = NULL;
      if(match_cons(t, sym__2))
        {
          v_6 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(r_6, v_6, w_6);
      t = (ATerm) ATmakeAppl(sym__3, r_6, v_6, w_6);
      return(t);
    }
    t = map_1_0(z_0, t);
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  e_2 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), e_2);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, f_2);
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  t = map_1_0(a_1, t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,m_7 = NULL,q_7 = NULL,r_7 = NULL;
  g_7 = t;
  t = save_ElimVar_0_0(t);
  h_7 = t;
  t = g_7;
  t = p_84(t);
  m_7 = t;
  t = save_ElimVar_0_0(t);
  q_7 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, h_7);
  t = table_putlist_0_0(t);
  t = m_7;
  t = q_84(t);
  r_7 = t;
  t = q_7;
  t = isect_ElimVar_0_0(t);
  t = r_7;
  return(t);
}
ATerm elim_choice_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm e_1 (ATerm t)
    {
      t = Choice_2_0(m_84, _id, t);
      return(t);
    }
    ATerm f_1 (ATerm t)
    {
      t = Choice_2_0(_id, m_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(e_1, f_1, t);
  }
  return(t);
}
ATerm Seq_2_0 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,y_7 = NULL,a_8 = NULL,b_8 = NULL,g_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_8);
  u_7 = t;
  t = v_7;
  t = o_76(t);
  a_8 = t;
  t = y_7;
  t = p_76(t);
  b_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, a_8, b_8), u_7);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm j_8 = NULL,m_8 = NULL,n_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym__3))
    {
      j_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
      n_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(j_8, m_8);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_8 = ATgetFirst((ATermList) t);
      u_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(j_8, m_8, (ATerm) ATinsert(CheckATermList(u_8), n_8));
  t = (ATerm) ATmakeAppl(sym__3, j_8, m_8, n_8);
  return(t);
}
ATerm alltd_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm y_8 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_88(t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = SRTS_all(y_8, t);
      }
    return(t);
  }
  t = y_8(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        t = reverse_map_1_0(r_92, t);
        return(t);
      }
      t = Cons_2_0(_id, g_1, t);
      t = Cons_2_0(r_92, _id, t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,m_9 = NULL,n_9 = NULL;
  n_9 = t;
  if(match_cons(t, sym_CallT_3))
    {
      b_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
      h_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_9);
  a_9 = t;
  t = b_9;
  t = e_76(t);
  i_9 = t;
  t = g_9;
  t = f_76(t);
  j_9 = t;
  t = h_9;
  t = g_76(t);
  m_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, i_9, j_9, m_9), a_9);
  return(t);
}
ATerm PrimT_3_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,a_10 = NULL,i_10 = NULL,m_10 = NULL,n_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      a_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_10);
  t_9 = t;
  t = u_9;
  t = g_77(t);
  i_10 = t;
  t = v_9;
  t = h_77(t);
  m_10 = t;
  t = a_10;
  t = i_77(t);
  n_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, i_10, m_10, n_10), t_9);
  return(t);
}
ATerm Build_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
  e_11 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_11);
  a_11 = t;
  t = c_11;
  t = i_76(t);
  d_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, d_11), a_11);
  return(t);
}
ATerm SDefT_4_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,z_11 = NULL,a_12 = NULL,i_12 = NULL,j_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,s_12 = NULL,t_12 = NULL;
  t_12 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
      i_12 = ATgetArgument(t, 2);
      j_12 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_12);
  w_11 = t;
  t = z_11;
  t = s_78(t);
  m_12 = t;
  t = a_12;
  t = t_78(t);
  n_12 = t;
  t = i_12;
  t = u_78(t);
  o_12 = t;
  t = j_12;
  t = v_78(t);
  s_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, m_12, n_12, o_12, s_12), w_11);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = map_1_0(k_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm y_12 = NULL,c_13 = NULL;
  y_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm v_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_13), term_i_7);
  t = assert_1_0(l_1, t);
  t = y_12;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm elim_sdef_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      ATerm x_8 = ATgetArgument(t, 1);
      ATerm z_8 = ATgetArgument(t, 2);
      ATerm c_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm i_1 (ATerm t)
    {
      t = SDefT_4_0(_id, _id, j_1, t_84, t);
      return(t);
    }
    t = scope_2_0(h_1, i_1, t);
  }
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm d_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), t_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_3 = ATgetFirst((ATermList) t);
            {
              ATerm l_9 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = x_3;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = e_9;
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_4 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), t_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_4 = ATgetFirst((ATermList) t);
                  {
                    ATerm s_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = n_4;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              {
                ATerm x_9 = t;
                int y_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_4 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), t_13);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        u_4 = ATgetFirst((ATermList) t);
                        {
                          ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = u_4;
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(y_9);
                  }
                else
                  {
                    t = x_9;
                    {
                      ATerm b_5 = NULL;
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), t_13);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          b_5 = ATgetFirst((ATermList) t);
                          {
                            ATerm d_10 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = b_5;
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm e_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_f_10;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = filter_1_0(d_99, t);
              return(t);
            }
            t = Cons_2_0(d_99, m_1, t);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm c_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_10 = ATgetFirst((ATermList) t);
                  c_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_14;
              t = filter_1_0(d_99, t);
            }
          }
      }
    }
  return(t);
}
ATerm Scope_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_14);
  h_14 = t;
  t = i_14;
  t = k_76(t);
  k_14 = t;
  t = j_14;
  t = l_76(t);
  l_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, k_14, l_14), h_14);
  return(t);
}
ATerm assert_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_98(t);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_14, p_14, t_14);
  t = table_push_0_0(t);
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_14 = ATgetFirst((ATermList) t);
        w_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_14), (ATerm) ATinsert(CheckATermList(v_14), p_14)));
    t = (ATerm) ATmakeAppl(sym__2, p_14, t_14);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm z_14 = NULL,b_15 = NULL,c_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_14, b_15);
  {
    ATerm r_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_10 = ATgetArgument(t, 0);
            ATerm v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_14, b_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_10 = ATgetFirst((ATermList) t);
            e_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_5;
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = r_10;
        t = (ATerm) ATempty;
      }
    c_15 = t;
    t = SSL_table_put(z_14, b_15, c_15);
    t = (ATerm) ATmakeAppl(sym__2, z_14, b_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  i_15 = t;
  t = w_98(t);
  j_15 = t;
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(j_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_15 = ATgetFirst((ATermList) t);
        k_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(j_15, (ATerm)ATmakeAppl(sym_Scopes_0), k_15);
    t = l_15;
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_15 = NULL;
        p_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_15, p_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(o_1, t);
      t = i_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  ATerm b_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_89(t);
      t = v_89(t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = b_11;
      t = v_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  t = v_98(t);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_15, term_g_11);
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            ATerm l_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATempty;
      }
    v_15 = t;
    t = SSL_table_put(u_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_15), (ATerm) ATempty));
    t = t_15;
  }
  return(t);
}
ATerm scope_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  t = begin_scope_1_0(x_98, t);
  {
    ATerm q_1 (ATerm t)
    {
      t = end_scope_1_0(x_98, t);
      return(t);
    }
    t = restore_always_2_0(y_98, q_1, t);
  }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = Scope_2_0(t_1, dead_var_elim_0_0, t);
  t = Scope_2_0(w_1, _id, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = map_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_16), term_o_11);
  t = assert_1_0(v_1, t);
  t = i_16;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = filter_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm p_11 = t;
  if((PushChoice() == 0))
    {
      ATerm j_16 = NULL;
      j_16 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_16);
      t = ElimVar_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_11;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = alltd_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm k_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_7, (ATerm)ATmakeAppl(sym_Var_1, k_16), term_i_7);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, k_16);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = reverse_map_1_0(dead_var_elim_0_0, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = reverse_map_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = alltd_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm l_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_7, (ATerm)ATmakeAppl(sym_Var_1, l_16), term_i_7);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, l_16);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = reverse_map_1_0(dead_var_elim_0_0, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = reverse_map_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = alltd_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm m_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_7, (ATerm)ATmakeAppl(sym_Var_1, m_16), term_i_7);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, m_16);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL;
      f_16 = t;
      if(match_cons(t, sym_Scope_2))
        {
          ATerm s_11 = ATgetArgument(t, 0);
          ATerm t_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_16;
      t = scope_2_0(r_1, s_1, t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = elim_sdef_1_0(dead_var_elim_0_0, t);
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            {
              ATerm x_11 = t;
              int y_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Build_1_0(y_1, t);
                  ;
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
                        t = PrimT_3_0(_id, b_2, c_2, t);
                        ;
                        LocalPopChoice(c_12);
                      }
                    else
                      {
                        t = b_12;
                        {
                          ATerm d_12 = t;
                          int f_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = CallT_3_0(_id, h_2, i_2, t);
                              ;
                              LocalPopChoice(f_12);
                            }
                          else
                            {
                              t = d_12;
                              {
                                ATerm g_12 = t;
                                int h_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(_id, dead_var_elim_0_0, t);
                                    t = Seq_2_0(dead_var_elim_0_0, _id, t);
                                    ;
                                    LocalPopChoice(h_12);
                                  }
                                else
                                  {
                                    t = g_12;
                                    {
                                      ATerm k_12 = t;
                                      int l_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = elim_choice_1_0(dead_var_elim_0_0, t);
                                          ;
                                          LocalPopChoice(l_12);
                                        }
                                      else
                                        {
                                          t = k_12;
                                          {
                                            ATerm p_12 = t;
                                            int r_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = elim_lchoice_1_0(dead_var_elim_0_0, t);
                                                ;
                                                LocalPopChoice(r_12);
                                              }
                                            else
                                              {
                                                t = p_12;
                                                {
                                                  ATerm u_12 = t;
                                                  int v_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = elim_guardedlchoice_1_0(dead_var_elim_0_0, t);
                                                      ;
                                                      LocalPopChoice(v_12);
                                                    }
                                                  else
                                                    {
                                                      t = u_12;
                                                      {
                                                        ATerm w_12 = t;
                                                        int x_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = EliminateFromMatch_0_0(t);
                                                            ;
                                                            LocalPopChoice(x_12);
                                                          }
                                                        else
                                                          {
                                                            t = w_12;
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
ATerm map_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm o_16 (ATerm t)
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = Cons_2_0(o_92, o_16, t);
      }
    return(t);
  }
  t = o_16(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  s_16 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_16);
  p_16 = t;
  t = q_16;
  t = s_71(t);
  r_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, r_16), p_16);
  return(t);
}
ATerm Cons_2_0 (ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  a_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_16 = ATgetFirst((ATermList) t);
      x_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_17);
  v_16 = t;
  t = w_16;
  t = o_71(t);
  y_16 = t;
  t = x_16;
  t = p_71(t);
  z_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_16), y_16), v_16);
  return(t);
}
ATerm Signature_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym_Signature_1))
    {
      e_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_17);
  d_17 = t;
  t = e_17;
  t = t_71(t);
  f_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, f_17), d_17);
  return(t);
}
ATerm Specification_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  j_17 = t;
  t = k_17;
  t = x_71(t);
  l_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, l_17), j_17);
  return(t);
}
ATerm _2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_17);
  p_17 = t;
  t = q_17;
  t = z_66(t);
  s_17 = t;
  t = r_17;
  t = a_67(t);
  t_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_17, t_17), p_17);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      x_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_17, term_d_13);
  t = open_stream_0_0(t);
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_17, y_17);
  t = g_108(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = fetch_1_0(t_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = WriteToFile_1_0(u_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(match_cons(e_13, sym_Stream_1))
        {
          c_18 = ATgetArgument(e_13, 0);
        }
      else
        _fail(t);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(c_18, d_18);
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_18);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = WriteToFile_1_0(w_2, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      if(match_cons(f_13, sym_Stream_1))
        {
          f_18 = ATgetArgument(f_13, 0);
        }
      else
        _fail(t);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(f_18, g_18);
  h_18 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), h_18);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_18);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((b_18 != NULL) && (b_18 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_2, t);
          ;
          LocalPopChoice(i_13);
        }
      else
        {
          t = h_13;
          t = term_j_13;
          if(((b_18 != NULL) && (b_18 != t)))
            _fail(t);
          else
            b_18 = t;
        }
      return(t);
    }
    t = _2_0(m_2, _id, t);
    t = a_18;
    {
      ATerm o_2 (ATerm t)
      {
        ATerm v_5 = NULL;
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), v_5);
        return(t);
      }
      t = _2_0(_id, o_2, t);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(r_2, s_2, t);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = _2_0(_id, v_2, t);
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
ATerm apply_strategy_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  j_18 = t;
  t = dtime_0_0(t);
  t = j_18;
  t = i_111(t);
  k_18 = t;
  t = dtime_0_0(t);
  l_18 = t;
  t = k_18;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_18), (ATerm) ATmakeAppl(sym_Runtime_1, l_18)), n_18);
  return(t);
}
ATerm b_19 (ATerm v_18, ATerm t)
{
  t = SSL_fclose(v_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_18 = ATgetArgument(t, 0);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_18);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            t = b_19(z_18, t);
          }
      }
    }
  else
    {
      t = b_19(z_18, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  t = SSL_stdin_stream();
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_19 = NULL;
  t = SSL_stdout_stream();
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_19 = NULL;
  t = SSL_stderr_stream();
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_19);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm n_19 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_19;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  t = SSL_is_string(r_19);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_13 = ATgetArgument(t, 0);
      ATerm p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,b_7 = NULL;
        a_7 = t;
        t = SSL_explode_term(a_7);
        if(match_cons(t, sym__2))
          {
            ATerm s_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_13 = ATgetArgument(t, 1);
              if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
                {
                  b_7 = ATgetFirst((ATermList) u_13);
                  {
                    ATerm v_13 = (ATerm) ATgetNext((ATermList) u_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
              t = _2_0(x_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_19 = ATgetArgument(t, 0);
                  l_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_19, l_19);
              m_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_19);
              ;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              {
                ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
                t = _2_0(y_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_19 = ATgetArgument(t, 0);
                    p_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_19, p_19);
                q_19 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_19 = NULL;
      v_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_19, term_a_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm c_7 = NULL;
        c_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = c_7;
        _fail(t);
      }
    }
  s_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_19);
  t_19 = t;
  t = s_19;
  t = fclose_0_0(t);
  t = t_19;
  return(t);
}
ATerm fetch_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm a_20 (ATerm t)
  {
    ATerm b_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_92, _id, t);
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = b_14;
        t = Cons_2_0(_id, a_20, t);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm d_20 = NULL,e_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_20 = ATgetFirst((ATermList) t);
            e_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_20;
        {
          ATerm z_2 (ATerm t)
          {
            t = e_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm k_20 (ATerm t)
  {
    ATerm g_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_20, t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = g_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_93(t);
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  t = SSL_explode_string(n_20);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  t = SSL_explode_string(q_20);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm m_20 = NULL;
  t = _2_0(b_3, e_3, t);
  {
    ATerm o_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL,u_20 = NULL;
        if(match_cons(t, sym__2))
          {
            t_20 = ATgetArgument(t, 0);
            u_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_20;
        {
          ATerm i_3 (ATerm t)
          {
            t = u_20;
            return(t);
          }
          t = at_end_1_0(i_3, t);
        }
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = o_14;
        {
          ATerm j_7 = NULL,k_7 = NULL;
          j_7 = t;
          t = SSL_explode_term(j_7);
          if(match_cons(t, sym__2))
            {
              ATerm r_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_7;
          t = concat_0_0(t);
        }
      }
    m_20 = t;
    t = SSL_implode_string(m_20);
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm s_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = s_14;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = SSL_is_string(i_21);
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = y_14;
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_3, t);
            ;
            LocalPopChoice(e_15);
          }
        else
          {
            t = d_15;
            {
              ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
              m_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_21 = ATgetArgument(t, 0);
                  t = n_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_21 = ATgetArgument(t, 0);
                      t = n_21;
                      {
                        ATerm f_15 = t;
                        int g_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_21);
                            {
                              ATerm h_15 = t;
                              int m_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_8 = NULL;
                                  t = eval_config_0_0(t);
                                  r_8 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_21, r_8);
                                  t = r_8;
                                  ;
                                  LocalPopChoice(m_15);
                                }
                              else
                                {
                                  t = h_15;
                                }
                            }
                            ;
                            LocalPopChoice(g_15);
                          }
                        else
                          {
                            t = f_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_21), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_21;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_21 = NULL,t_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_21 = ATgetArgument(t, 0);
                          o_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_21;
                      t = eval_config_0_0(t);
                      s_21 = t;
                      t = o_21;
                      t = eval_config_0_0(t);
                      t_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 = NULL,a_22 = NULL;
      y_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL;
            t = eval_config_0_0(t);
            f_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_9);
            t = f_9;
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
          }
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, term_s_15);
        t = geq_0_0(t);
        t = y_21;
        t = r_109(t);
      }
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  if(match_string(t, "-k"))
    {
      t = c_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_22;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  d_22 = t;
  t = SSL_string_to_int(d_22);
  e_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), e_22);
  t = d_22;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, n_3, o_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  if(match_string(t, "-S"))
    {
      t = g_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_22;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_y_15;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  h_22 = t;
  t = SSL_string_to_int(h_22);
  i_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_22);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_22);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_16;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, y_3, t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, a_4, b_4, t);
            ;
            LocalPopChoice(h_16);
          }
        else
          {
            t = g_16;
            t = Option_3_0(h_4, i_4, j_4, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_22 = NULL;
      t = term_x_6;
      t = d_0(t);
      n_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_16, term_t_16, n_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_22 = ATgetFirst((ATermList) t);
          m_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_22;
      t = a_0(t);
      t = term_x_6;
      t = b_0(t);
      q_22 = t;
      t = (ATerm) ATinsert(CheckATermList(m_22), q_22);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  if(match_string(t, "-o"))
    {
      t = s_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_22;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_22);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_22);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, o_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym__3))
    {
      w_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
      y_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_22, x_22);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_17 = ATgetArgument(t, 0);
            ATerm i_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_22, x_22);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = (ATerm) ATempty;
      }
    z_22 = t;
    t = SSL_table_put(w_22, x_22, (ATerm) ATinsert(CheckATermList(z_22), y_22));
    t = (ATerm) ATmakeAppl(sym__3, w_22, x_22, y_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_23 = NULL;
      t = term_x_6;
      t = j_0(t);
      l_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_16, term_t_16, l_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_23 = ATgetFirst((ATermList) t);
          k_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_23;
      t = g_0(t);
      t = j_23;
      t = h_0(t);
      p_23 = t;
      t = (ATerm) ATinsert(CheckATermList(k_23), p_23);
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  if(match_string(t, "-i"))
    {
      t = r_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_23;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm s_23 = NULL;
  s_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_23);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_23);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_6;
  t = whoami_0_0(t);
  t_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), t_23));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm o_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL;
        t = eval_config_0_0(t);
        q_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_9);
        t = q_9;
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = o_17;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm w_17 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_97(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = w_17;
      {
        ATerm w_23 = NULL,x_23 = NULL,a_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_23 = ATgetFirst((ATermList) t);
            x_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_23;
        t = foldr_2_0(o_97, p_97, t);
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, a_24);
        t = p_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_9, b_10);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = SSL_addr(z_9, b_10);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_24 = NULL,r_9 = NULL,w_9 = NULL;
  t = times_0_0(t);
  r_9 = t;
  t = SSL_explode_term(r_9);
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9;
  t = foldr_2_0(s_4, t_4, t);
  d_24 = t;
  t = SSL_TicksToSeconds(d_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_24;
        if((q_24 != t))
          {
            _fail(t);
          }
        t = p_24;
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = p_24;
        {
          ATerm u_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_24, r_24);
              ;
              LocalPopChoice(w_18);
            }
          else
            {
              t = u_18;
              t = SSL_gtr(q_24, r_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_109 (ATerm), ATerm t)
{
  ATerm x_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_24 = NULL,w_24 = NULL;
      u_24 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm c_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_10 = NULL;
            t = eval_config_0_0(t);
            s_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_10);
            t = s_10;
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = c_19;
          }
        w_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_24, term_h_19);
        t = geq_0_0(t);
        t = u_24;
        t = q_109(t);
      }
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = x_18;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  t = run_time_0_0(t);
  y_24 = t;
  t = term_x_6;
  t = whoami_0_0(t);
  z_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_24), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_24));
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_19), y_24), term_j_19), z_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm z_19 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = z_19;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm c_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 = NULL;
            t = eval_config_0_0(t);
            x_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), x_10);
            t = x_10;
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
          }
      }
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = c_20;
      t = fetch_1_0(w_4, t);
    }
  t = g_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      c_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_25 = NULL,h_25 = NULL;
        t = c_25;
        t = f_0(t);
        g_25 = t;
        t = b_25;
        t = e_0(t);
        h_25 = t;
        t = c_25;
        {
          ATerm x_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_25), h_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_6;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  l_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  i_25 = t;
  t = j_25;
  t = g_84(t);
  k_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_25), i_25);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_25), term_i_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 = NULL;
            t = eval_config_0_0(t);
            h_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_11);
            t = h_11;
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
          }
      }
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = j_20;
      t = fetch_1_0(y_4, t);
    }
  t = term_r_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, z_4, t);
  t = map_1_0(a_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  p_25 = t;
  t = q_25;
  t = h_84(t);
  r_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_25), p_25);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  {
    ATerm s_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_20 = ATgetFirst((ATermList) t);
                ATerm x_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_25;
          }
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = s_20;
        t = (ATerm) ATinsert(ATempty, y_25);
      }
    z_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_25);
    t = y_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_11 = NULL;
        t = eval_config_0_0(t);
        m_11 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_11);
        t = m_11;
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_21;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_21;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_5, d_5, f_5, t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      t = Option_3_0(g_5, h_5, i_5, t);
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_26);
  t = (ATerm) ATmakeAppl(sym_Program_1, f_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_21;
        t = j_114(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
      }
    t = e_26;
    {
      ATerm k_5 (ATerm t)
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_21 = t;
            int u_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_21);
              }
            else
              {
                t = r_21;
                t = j_114(t);
                t = Cons_2_0(_id, k_5, t);
              }
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            {
              ATerm h_26 = NULL,i_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_26 = ATgetFirst((ATermList) t);
                  i_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_26), (ATerm) ATmakeAppl(sym_Undefined_1, h_26));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_5, k_5, t);
    }
  }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  if(match_string(t, "--help"))
    {
      t = u_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_26;
        }
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_21;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm s_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_114 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,t_26 = NULL;
  p_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = p_26;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm x_21 = t;
      int z_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_114(t);
          ;
          LocalPopChoice(z_21);
        }
      else
        {
          t = x_21;
          {
            ATerm b_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_5, q_5, r_5, t);
                ;
                LocalPopChoice(f_22);
              }
            else
              {
                t = b_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_5, t);
    {
      ATerm j_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_26 = NULL;
          z_26 = t;
          {
            ATerm o_22 = t;
            int p_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_26;
                {
                  ATerm r_22 = t;
                  int u_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm v_22 = t;
                        int a_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_12 = NULL;
                            t = eval_config_0_0(t);
                            e_12 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_12);
                            t = e_12;
                            ;
                            LocalPopChoice(a_23);
                          }
                        else
                          {
                            t = v_22;
                          }
                      }
                      ;
                      LocalPopChoice(u_22);
                    }
                  else
                    {
                      t = r_22;
                      t = fetch_1_0(s_5, t);
                    }
                  t = z_26;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(p_22);
              }
            else
              {
                t = o_22;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm b_23 = t;
                  int c_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_12 = NULL;
                      t = eval_config_0_0(t);
                      q_12 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), q_12);
                      t = q_12;
                      ;
                      LocalPopChoice(c_23);
                    }
                  else
                    {
                      t = b_23;
                    }
                  t = z_26;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(k_22);
        }
      else
        {
          t = j_22;
          {
            ATerm d_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm u_5 (ATerm t)
                  {
                    if(((q_26 != NULL) && (q_26 != t)))
                      _fail(t);
                    else
                      q_26 = t;
                    return(t);
                  }
                  t = Undefined_1_0(u_5, t);
                  return(t);
                }
                t = fetch_1_0(t_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_26)), term_f_23));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(e_23);
              }
            else
              {
                t = d_23;
              }
          }
        }
      t_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t)
{
  ATerm c_27 = NULL;
  t = parse_options_1_0(i_112, t);
  c_27 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_27);
  t = c_27;
  t = k_112(t);
  {
    ATerm g_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_112, t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = g_23;
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_112(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = if_verbose2_1_0(f_6, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_23;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_12 = NULL;
        t = eval_config_0_0(t);
        z_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_12);
        t = z_12;
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = v_23;
      }
    e_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_27));
    t = d_27;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm z_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_111(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = z_23;
        {
          ATerm c_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_24);
            }
          else
            {
              t = c_24;
              {
                ATerm f_24 = t;
                int g_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_24);
                  }
                else
                  {
                    t = f_24;
                    {
                      ATerm h_24 = t;
                      int i_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_6, b_6, e_6, t);
                          ;
                          LocalPopChoice(i_24);
                        }
                      else
                        {
                          t = h_24;
                          {
                            ATerm j_24 = t;
                            int k_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(k_24);
                              }
                            else
                              {
                                t = j_24;
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
  ATerm y_5 (ATerm t)
  {
    ATerm f_27 = NULL,g_27 = NULL,g_13 = NULL;
    f_27 = t;
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_27 != NULL) && (g_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_6, t);
          ;
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          t = term_n_24;
          g_27 = t;
        }
      t = not_null(g_27);
      t = ReadFromFile_0_0(t);
      g_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_27, g_13);
      t = apply_strategy_1_0(r_111, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(w_5, t_111, x_5, y_5, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = _2_0(_id, j_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = Specification_1_0(k_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = Cons_2_0(m_6, n_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = Cons_2_0(o_6, p_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = Strategies_1_0(s_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = map_1_0(t_6, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = dead_var_elim_0_0(t);
  t = topdown_1_0(u_6, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm o_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_27 = NULL,p_27 = NULL;
      o_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_27);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm t_24 = ATgetFirst((ATermList) t);
          ATerm v_24 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(v_24) != AT_LIST) || !(ATisEmpty(v_24))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_27);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = o_24;
    }
  return(t);
}
ATerm dead_var_elim_io_0_0 (ATerm t)
{
  t = iowrap_3_0(i_6, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_var_elim_io_0_0(t);
  return(t);
}

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
ATerm term_q_23;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_c_21;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_g_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_a_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_b_14;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_p_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_t_10;
ATerm term_j_10;
ATerm term_z_8;
ATerm term_y_8;
void init_constant_terms (void)
{
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__3, term_c_21, term_g_21, term_j_10);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm try_1_0 (ATerm u_82 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm all_rl_1_0 (ATerm h_78 (ATerm), ATerm);
ATerm Match_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm c_78 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_ElimVar_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm b_78 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm mark_build_term_0_0 (ATerm);
ATerm reverse_map_1_0 (ATerm g_86 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm);
ATerm Build_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm MarkBuild_0_0 (ATerm);
ATerm DeclareAlive_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm);
ATerm elim_sdef_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm rewrite_1_0 (ATerm q_92 (ATerm), ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm s_92 (ATerm), ATerm);
ATerm EliminateFromScope_0_0 (ATerm);
ATerm assert_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm DeclareDead_0_0 (ATerm);
ATerm Scope_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm scope_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm);
ATerm elim_scope_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm d_65 (ATerm), ATerm e_65 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm i_65 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm m_65 (ATerm), ATerm);
ATerm _2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_102 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm v_101 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm x_104 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm);
ATerm crush_2_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm v_105 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm o_86 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm v_106 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm y_107 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm x_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm b_105 (ATerm), ATerm);
ATerm dead_var_elim_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_82(t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  t = c_80(t);
  {
    ATerm l_0 (ATerm t)
    {
      t = topdown_1_0(c_80, t);
      return(t);
    }
    t = SRTS_all(l_0, t);
  }
  return(t);
}
ATerm all_rl_1_0 (ATerm h_78 (ATerm), ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL;
  i_0 = t;
  t = SSL_explode_term(i_0);
  if(match_cons(t, sym__2))
    {
      k_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_0;
  t = reverse_map_1_0(h_78, t);
  n_0 = t;
  t = SSL_mkterm(k_0, n_0);
  return(t);
}
ATerm Match_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL,r_0 = NULL,v_0 = NULL;
  v_0 = t;
  if(match_cons(t, sym_Match_1))
    {
      q_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_0);
  o_0 = t;
  t = q_0;
  t = w_69(t);
  r_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, r_0), o_0);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      ATerm y_0 = NULL,a_1 = NULL,b_1 = NULL;
      y_0 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      b_1 = t;
      t = SSLgetAnnotations(y_0);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm u_8 = ATgetFirst((ATermList) t);
          if((ATgetSymbol((ATermAppl) u_8) != ATmakeSymbol("bound", 0, ATtrue)))
            _fail(t);
          {
            ATerm x_8 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_1), term_y_8);
      {
        ATerm t_0 (ATerm t)
        {
          t = term_z_8;
          return(t);
        }
        t = override_key_1_0(t_0, t);
        t = b_1;
      }
      return(t);
    }
    t = alltd_1_0(s_0, t);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm c_1 = NULL,d_1 = NULL;
        c_1 = t;
        if(match_cons(t, sym_Var_1))
          {
            d_1 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_1);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_9 = ATgetFirst((ATermList) t);
            ATerm f_9 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(f_9) != AT_LIST) || !(ATisEmpty(f_9))))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, d_1);
        t = ElimVar_0_0(t);
        return(t);
      }
      t = alltd_1_0(u_0, t);
    }
    return(t);
  }
  t = Match_1_0(p_0, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,m_1 = NULL,o_1 = NULL,q_1 = NULL;
  q_1 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      g_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
      i_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_1);
  e_1 = t;
  t = g_1;
  t = j_70(t);
  j_1 = t;
  t = h_1;
  t = k_70(t);
  m_1 = t;
  t = i_1;
  t = l_70(t);
  o_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, j_1, m_1, o_1), e_1);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm w_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, d_78, _id, t);
      t = GuardedLChoice_3_0(d_78, _id, _id, t);
      return(t);
    }
    ATerm x_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, d_78, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(w_0, x_0, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,w_1 = NULL,z_1 = NULL,b_2 = NULL,h_2 = NULL,i_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      w_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_2);
  u_1 = t;
  t = w_1;
  t = f_70(t);
  b_2 = t;
  t = z_1;
  t = g_70(t);
  h_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, b_2, h_2), u_1);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm c_78 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm z_0 (ATerm t)
    {
      t = LChoice_2_0(c_78, _id, t);
      return(t);
    }
    ATerm f_1 (ATerm t)
    {
      t = LChoice_2_0(_id, c_78, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(z_0, f_1, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      v_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_3);
  u_2 = t;
  t = v_2;
  t = d_69(t);
  y_2 = t;
  t = x_2;
  t = e_69(t);
  z_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, y_2, z_2), u_2);
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      ATerm e_4 (ATerm q_3, ATerm r_3, ATerm t)
      {
        t = r_3;
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), q_3);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_9 = ATgetFirst((ATermList) t);
                  if(match_cons(j_9, sym_Defined_1))
                    {
                      ATerm l_9 = ATgetArgument(j_9, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = r_3;
              ;
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              t = (ATerm) ATmakeAppl(sym__2, q_3, (ATerm) ATinsert(ATempty, term_y_8));
            }
        }
        return(t);
      }
      ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
      y_3 = t;
      if(match_cons(t, sym__2))
        {
          z_3 = ATgetArgument(t, 0);
          a_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_4;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_4 = ATgetFirst((ATermList) t);
                {
                  ATerm p_9 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_9);
            t = b_4;
            {
              ATerm q_9 = t;
              int t_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm u_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_9);
                  t = z_3;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm v_9 = t;
                      int w_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_3;
                          ;
                          LocalPopChoice(w_9);
                        }
                      else
                        {
                          t = v_9;
                          t = e_4(z_3, y_3, t);
                        }
                    }
                  else
                    {
                      t = e_4(z_3, y_3, t);
                    }
                }
              else
                {
                  t = q_9;
                  t = z_3;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = y_3;
                }
            }
          }
        else
          {
            t = n_9;
            t = z_3;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = y_3;
          }
      }
      return(t);
    }
    t = try_1_0(n_1, t);
    return(t);
  }
  t = map_1_0(l_1, t);
  t = restore_ElimVar_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm k_4 = NULL,q_4 = NULL;
      if(match_cons(t, sym__2))
        {
          k_4 = ATgetArgument(t, 0);
          q_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(j_4, k_4, q_4);
      t = (ATerm) ATmakeAppl(sym__3, j_4, k_4, q_4);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  return(t);
}
ATerm restore_ElimVar_0_0 (ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, r_4);
  t = table_putlist_0_0(t);
  t = r_4;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_4 = NULL;
  s_4 = t;
  t = SSL_table_keys(s_4);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm v_4 = NULL,w_4 = NULL;
      v_4 = t;
      t = SSL_table_get(s_4, v_4);
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_4, w_4);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_z_8;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,g_5 = NULL;
  b_5 = t;
  t = save_ElimVar_0_0(t);
  c_5 = t;
  t = b_5;
  t = e_78(t);
  d_5 = t;
  t = save_ElimVar_0_0(t);
  e_5 = t;
  t = c_5;
  t = restore_ElimVar_0_0(t);
  t = d_5;
  t = f_78(t);
  g_5 = t;
  t = e_5;
  t = isect_ElimVar_0_0(t);
  t = g_5;
  return(t);
}
ATerm elim_choice_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm s_1 (ATerm t)
    {
      t = Choice_2_0(b_78, _id, t);
      return(t);
    }
    ATerm t_1 (ATerm t)
    {
      t = Choice_2_0(_id, b_78, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(s_1, t_1, t);
  }
  return(t);
}
ATerm Seq_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym_Seq_2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_5);
  i_5 = t;
  t = l_5;
  t = d_70(t);
  n_5 = t;
  t = m_5;
  t = e_70(t);
  p_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, n_5, p_5), i_5);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,b_6 = NULL,c_6 = NULL;
  if(match_cons(t, sym__3))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
      b_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(x_5, y_5);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_9 = ATgetFirst((ATermList) t);
      c_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(x_5, y_5, (ATerm) ATinsert(CheckATermList(c_6), b_6));
  t = (ATerm) ATmakeAppl(sym__3, x_5, y_5, b_6);
  return(t);
}
ATerm override_key_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm f_6 = NULL,h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_92(t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_6, f_6, h_6);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, f_6, h_6);
  return(t);
}
ATerm alltd_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_81(t);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = SRTS_all(n_6, t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm mark_build_term_0_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm o_6 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        o_6 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_6), term_y_8);
    {
      ATerm x_1 (ATerm t)
      {
        t = term_z_8;
        return(t);
      }
      t = override_key_1_0(x_1, t);
      t = (ATerm) ATmakeAppl(sym_Var_1, o_6);
    }
    return(t);
  }
  t = alltd_1_0(v_1, t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        t = reverse_map_1_0(g_86, t);
        return(t);
      }
      t = Cons_2_0(_id, y_1, t);
      t = Cons_2_0(g_86, _id, t);
      ;
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,t_6 = NULL,u_6 = NULL,x_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
  d_7 = t;
  if(match_cons(t, sym_CallT_3))
    {
      q_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      u_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_7);
  p_6 = t;
  t = q_6;
  t = t_69(t);
  x_6 = t;
  t = t_6;
  t = u_69(t);
  b_7 = t;
  t = u_6;
  t = v_69(t);
  c_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, x_6, b_7, c_7), p_6);
  return(t);
}
ATerm PrimT_3_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm t)
{
  ATerm i_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,t_7 = NULL,u_7 = NULL;
  u_7 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
      o_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_7);
  i_7 = t;
  t = m_7;
  t = v_70(t);
  p_7 = t;
  t = n_7;
  t = w_70(t);
  q_7 = t;
  t = o_7;
  t = x_70(t);
  t_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, p_7, q_7, t_7), i_7);
  return(t);
}
ATerm Build_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,g_8 = NULL,h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_8);
  b_8 = t;
  t = c_8;
  t = x_69(t);
  g_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, g_8), b_8);
  return(t);
}
ATerm MarkBuild_0_0 (ATerm t)
{
  t = Build_1_0(mark_build_term_0_0, t);
  return(t);
}
ATerm DeclareAlive_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, l_8), term_y_8);
  {
    ATerm a_2 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    t = assert_1_0(a_2, t);
    t = l_8;
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,g_9 = NULL,m_9 = NULL,r_9 = NULL,s_9 = NULL;
  s_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      w_8 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
      c_9 = ATgetArgument(t, 2);
      d_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_9);
  v_8 = t;
  t = w_8;
  t = h_72(t);
  e_9 = t;
  t = b_9;
  t = i_72(t);
  g_9 = t;
  t = c_9;
  t = j_72(t);
  m_9 = t;
  t = d_9;
  t = k_72(t);
  r_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, e_9, g_9, m_9, r_9), v_8);
  return(t);
}
ATerm elim_sdef_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      ATerm e_10 = ATgetArgument(t, 1);
      ATerm f_10 = ATgetArgument(t, 2);
      ATerm h_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    ATerm e_2 (ATerm t)
    {
      ATerm f_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm c_10 = NULL,g_10 = NULL;
          c_10 = t;
          if(match_cons(t, sym_VarDec_2))
            {
              g_10 = ATgetArgument(t, 0);
              {
                ATerm i_10 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = g_10;
          t = DeclareAlive_0_0(t);
          t = c_10;
          return(t);
        }
        t = map_1_0(g_2, t);
        return(t);
      }
      t = SDefT_4_0(_id, _id, f_2, i_78, t);
      return(t);
    }
    t = scope_2_0(c_2, e_2, t);
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,a_11 = NULL,k_1 = NULL;
  u_10 = t;
  t = term_j_10;
  t = q_92(t);
  a_11 = t;
  t = SSL_table_get(a_11, u_10);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_1 = ATgetFirst((ATermList) t);
      {
        ATerm k_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_1;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_12;
        {
          ATerm j_2 (ATerm t)
          {
            t = term_z_8;
            return(t);
          }
          t = rewrite_1_0(j_2, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_12;
              {
                ATerm k_2 (ATerm t)
                {
                  t = term_z_8;
                  return(t);
                }
                t = rewrite_1_0(k_2, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
              ;
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
              {
                ATerm q_10 = t;
                int r_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_12;
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = term_z_8;
                        return(t);
                      }
                      t = rewrite_1_0(l_2, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      _fail(t);
                    }
                    ;
                    LocalPopChoice(r_10);
                  }
                else
                  {
                    t = q_10;
                    t = k_12;
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = term_z_8;
                        return(t);
                      }
                      t = rewrite_1_0(m_2, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm s_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) s_10) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_t_10;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm s_92 (ATerm), ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              t = filter_1_0(s_92, t);
              return(t);
            }
            t = Cons_2_0(s_92, n_2, t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm d_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_10 = ATgetFirst((ATermList) t);
                  d_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_13;
              t = filter_1_0(s_92, t);
            }
          }
      }
    }
  return(t);
}
ATerm EliminateFromScope_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      ATerm b_11 = t;
      if((PushChoice() == 0))
        {
          ATerm f_13 = NULL;
          f_13 = t;
          t = (ATerm) ATmakeAppl(sym_Var_1, f_13);
          t = ElimVar_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_11;
        }
      return(t);
    }
    t = filter_1_0(p_2, t);
    return(t);
  }
  t = Scope_2_0(o_2, _id, t);
  return(t);
}
ATerm assert_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_92(t);
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_13, h_13, i_13);
  t = table_push_0_0(t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_13 = ATgetFirst((ATermList) t);
        p_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_13), (ATerm) ATinsert(CheckATermList(o_13), h_13)));
    t = (ATerm) ATmakeAppl(sym__2, h_13, i_13);
  }
  return(t);
}
ATerm DeclareDead_0_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_13), term_f_11);
  {
    ATerm q_2 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    t = assert_1_0(q_2, t);
    t = q_13;
  }
  return(t);
}
ATerm Scope_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,h_14 = NULL;
  h_14 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_14);
  s_13 = t;
  t = v_13;
  t = z_69(t);
  x_13 = t;
  t = w_13;
  t = a_70(t);
  y_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, x_13, y_13), s_13);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm m_14 = NULL,o_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_11 = ATgetArgument(t, 0);
            ATerm j_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_14, o_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_11 = ATgetFirst((ATermList) t);
            d_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_2;
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATempty;
      }
    s_14 = t;
    t = SSL_table_put(m_14, o_14, s_14);
    t = (ATerm) ATmakeAppl(sym__2, m_14, o_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,j_15 = NULL;
  c_15 = t;
  t = l_92(t);
  d_15 = t;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_15 = ATgetFirst((ATermList) t);
        e_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_15, (ATerm)ATmakeAppl(sym_Scopes_0), e_15);
    t = j_15;
    {
      ATerm r_2 (ATerm t)
      {
        ATerm k_15 = NULL;
        k_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_15, k_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_2, t);
      t = c_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_83(t);
      t = k_83(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = k_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  t = k_92(t);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_15, term_p_11);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_11 = ATgetArgument(t, 0);
            ATerm t_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATempty;
      }
    p_15 = t;
    t = SSL_table_put(o_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_15), (ATerm) ATempty));
    t = n_15;
  }
  return(t);
}
ATerm scope_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  t = begin_scope_1_0(m_92, t);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1_0(m_92, t);
      return(t);
    }
    t = restore_always_2_0(n_92, s_2, t);
  }
  return(t);
}
ATerm elim_scope_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  if(match_cons(t, sym_Scope_2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      ATerm v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_3 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm d_3 (ATerm t)
      {
        t = map_1_0(DeclareDead_0_0, t);
        return(t);
      }
      t = Scope_2_0(d_3, j_78, t);
      t = EliminateFromScope_0_0(t);
      return(t);
    }
    t = scope_2_0(a_3, c_3, t);
  }
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = elim_scope_1_0(dead_var_elim_0_0, t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = elim_sdef_1_0(dead_var_elim_0_0, t);
            ;
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
                  t = MarkBuild_0_0(t);
                  ;
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = a_12;
                  {
                    ATerm c_12 = t;
                    int d_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_3 (ATerm t)
                        {
                          t = reverse_map_1_0(dead_var_elim_0_0, t);
                          return(t);
                        }
                        ATerm f_3 (ATerm t)
                        {
                          t = reverse_map_1_0(mark_build_term_0_0, t);
                          return(t);
                        }
                        t = PrimT_3_0(_id, e_3, f_3, t);
                        ;
                        LocalPopChoice(d_12);
                      }
                    else
                      {
                        t = c_12;
                        {
                          ATerm e_12 = t;
                          int f_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_3 (ATerm t)
                              {
                                t = reverse_map_1_0(dead_var_elim_0_0, t);
                                return(t);
                              }
                              ATerm h_3 (ATerm t)
                              {
                                t = reverse_map_1_0(mark_build_term_0_0, t);
                                return(t);
                              }
                              t = CallT_3_0(_id, g_3, h_3, t);
                              ;
                              LocalPopChoice(f_12);
                            }
                          else
                            {
                              t = e_12;
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
                                      ATerm i_12 = t;
                                      int j_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = elim_choice_1_0(dead_var_elim_0_0, t);
                                          ;
                                          LocalPopChoice(j_12);
                                        }
                                      else
                                        {
                                          t = i_12;
                                          {
                                            ATerm l_12 = t;
                                            int m_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = elim_lchoice_1_0(dead_var_elim_0_0, t);
                                                ;
                                                LocalPopChoice(m_12);
                                              }
                                            else
                                              {
                                                t = l_12;
                                                {
                                                  ATerm n_12 = t;
                                                  int o_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = elim_guardedlchoice_1_0(dead_var_elim_0_0, t);
                                                      ;
                                                      LocalPopChoice(o_12);
                                                    }
                                                  else
                                                    {
                                                      t = n_12;
                                                      {
                                                        ATerm p_12 = t;
                                                        int q_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = EliminateFromMatch_0_0(t);
                                                            ;
                                                            LocalPopChoice(q_12);
                                                          }
                                                        else
                                                          {
                                                            t = p_12;
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
ATerm map_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm v_15 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = Cons_2_0(d_86, v_15, t);
      }
    return(t);
  }
  t = v_15(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  z_15 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_15);
  w_15 = t;
  t = x_15;
  t = h_65(t);
  y_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, y_15), w_15);
  return(t);
}
ATerm Cons_2_0 (ATerm d_65 (ATerm), ATerm e_65 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  h_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_16 = ATgetFirst((ATermList) t);
      e_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  c_16 = t;
  t = d_16;
  t = d_65(t);
  f_16 = t;
  t = e_16;
  t = e_65(t);
  g_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_16), f_16), c_16);
  return(t);
}
ATerm Signature_1_0 (ATerm i_65 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  n_16 = t;
  if(match_cons(t, sym_Signature_1))
    {
      l_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_16);
  k_16 = t;
  t = l_16;
  t = i_65(t);
  m_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, m_16), k_16);
  return(t);
}
ATerm Specification_1_0 (ATerm m_65 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  q_16 = t;
  t = r_16;
  t = m_65(t);
  s_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, s_16), q_16);
  return(t);
}
ATerm _2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  b_17 = t;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  w_16 = t;
  t = x_16;
  t = u_63(t);
  z_16 = t;
  t = y_16;
  t = v_63(t);
  a_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, z_16, a_17), w_16);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  e_17 = t;
  t = term_j_10;
  t = whoami_0_0(t);
  f_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_17;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm i_17 = NULL,j_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_17 = ATgetFirst((ATermList) t);
            j_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_17;
        {
          ATerm i_3 (ATerm t)
          {
            t = j_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  t = SSL_explode_term(n_17);
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm p_17 (ATerm t)
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_17, t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_86(t);
      }
    return(t);
  }
  t = p_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_17;
  {
    ATerm j_3 (ATerm t)
    {
      t = q_17;
      return(t);
    }
    t = at_end_1_0(j_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm s_17 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm t_17 = NULL;
    t_17 = t;
    t = SSL_explode_string(t_17);
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm u_17 = NULL;
    u_17 = t;
    t = SSL_explode_string(u_17);
    return(t);
  }
  t = _2_0(k_3, l_3, t);
  t = conc_0_0(t);
  s_17 = t;
  t = SSL_implode_string(s_17);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_18 = NULL;
      a_18 = t;
      t = SSL_is_string(a_18);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm c_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(m_3, t);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = c_13;
            {
              ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
              e_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_18 = ATgetArgument(t, 0);
                  t = f_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_18 = ATgetArgument(t, 0);
                      t = f_18;
                      {
                        ATerm g_13 = t;
                        int j_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_13);
                          }
                        else
                          {
                            t = g_13;
                            {
                              ATerm n_3 (ATerm t)
                              {
                                t = term_k_13;
                                return(t);
                              }
                              t = debug_1_0(n_3, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm k_18 = NULL,l_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_18 = ATgetArgument(t, 0);
                          g_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_18;
                      t = eval_config_0_0(t);
                      k_18 = t;
                      t = g_18;
                      t = eval_config_0_0(t);
                      l_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_18, l_18);
                      t = conc_strings_0_0(t);
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
  ATerm o_18 = NULL;
  o_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_18);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm p_18 = NULL;
      t = eval_config_0_0(t);
      p_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_18, p_18);
      t = p_18;
      return(t);
    }
    t = try_1_0(o_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm q_18 = NULL,r_18 = NULL;
    q_18 = t;
    t = term_l_13;
    t = get_config_0_0(t);
    r_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_18, term_m_13);
    t = geq_0_0(t);
    t = q_18;
    t = z_102(t);
    return(t);
  }
  t = try_1_0(p_3, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm r_13 = ATgetArgument(t, 0);
        if(match_cons(r_13, sym_Stream_1))
          {
            s_18 = ATgetArgument(r_13, 0);
          }
        else
          _fail(t);
        t_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(s_18, t_18);
    u_18 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), u_18);
    v_18 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, v_18);
    return(t);
  }
  t = WriteToFile_1_0(s_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_18, term_t_13);
  t = open_stream_0_0(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_18, x_18);
  t = v_101(t);
  t = fclose_0_0(t);
  t = x_18;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_13 = ATgetArgument(t, 0);
        if(match_cons(u_13, sym_Stream_1))
          {
            z_18 = ATgetArgument(u_13, 0);
          }
        else
          _fail(t);
        a_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(z_18, a_19);
    b_19 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, b_19);
    return(t);
  }
  t = WriteToFile_1_0(t_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  c_19 = t;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                d_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(v_3, t);
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          t = term_b_14;
          d_19 = t;
        }
      return(t);
    }
    t = _2_0(u_3, _id, t);
    t = c_19;
    {
      ATerm w_3 (ATerm t)
      {
        ATerm x_3 (ATerm t)
        {
          t = not_null(d_19);
          return(t);
        }
        t = split_2_0(x_3, _id, t);
        return(t);
      }
      t = _2_0(_id, w_3, t);
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              ATerm d_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(d_4, t);
              return(t);
            }
            t = _2_0(c_4, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  e_19 = t;
  t = dtime_0_0(t);
  t = e_19;
  t = x_104(t);
  f_19 = t;
  t = dtime_0_0(t);
  g_19 = t;
  t = f_19;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_19), (ATerm) ATmakeAppl(sym_Runtime_1, g_19)), i_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_19 (ATerm q_19, ATerm t)
  {
    t = SSL_fclose(q_19);
    return(t);
  }
  ATerm t_19 = NULL,u_19 = NULL;
  u_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_19 = ATgetArgument(t, 0);
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_19);
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            t = w_19(u_19, t);
          }
      }
    }
  else
    {
      t = w_19(u_19, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  t = h_101(t);
  y_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_19), y_19));
  t = x_19;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_19 = NULL;
  t = SSL_stdin_stream();
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_20 = NULL;
  t = SSL_stdout_stream();
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_20 = NULL;
  t = SSL_stderr_stream();
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_20);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_20;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_20;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_20;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      ATerm i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 = NULL,w_2 = NULL;
        t_2 = t;
        t = SSL_explode_term(t_2);
        if(match_cons(t, sym__2))
          {
            ATerm l_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_14 = ATgetArgument(t, 1);
              if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
                {
                  w_2 = ATgetFirst((ATermList) n_14);
                  {
                    ATerm p_14 = (ATerm) ATgetNext((ATermList) n_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
              ATerm f_4 (ATerm t)
              {
                ATerm j_20 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    j_20 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_20;
                return(t);
              }
              t = _2_0(f_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  g_20 = ATgetArgument(t, 0);
                  h_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(g_20, h_20);
              i_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, i_20);
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              {
                ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
                ATerm g_4 (ATerm t)
                {
                  ATerm n_20 = NULL;
                  n_20 = t;
                  t = SSL_is_string(n_20);
                  return(t);
                }
                t = _2_0(g_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    k_20 = ATgetArgument(t, 0);
                    l_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(k_20, l_20);
                m_20 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, m_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_20 = NULL;
      r_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_20, term_v_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm h_4 (ATerm t)
        {
          t = term_w_14;
          return(t);
        }
        t = debug_1_0(h_4, t);
        _fail(t);
      }
    }
  o_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(q_20);
  p_20 = t;
  t = o_20;
  t = fclose_0_0(t);
  t = p_20;
  return(t);
}
ATerm split_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  t = o_83(t);
  u_20 = t;
  t = t_20;
  t = p_83(t);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  w_20 = t;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              x_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(l_4, t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = term_z_14;
        x_20 = t;
      }
    t = w_20;
    {
      ATerm m_4 (ATerm t)
      {
        t = not_null(x_20);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, m_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm z_20 = NULL;
    z_20 = t;
    if(match_string(t, "-k"))
      {
        t = z_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = z_20;
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm a_21 = NULL,b_21 = NULL;
    a_21 = t;
    t = SSL_string_to_int(a_21);
    b_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), b_21);
    t = a_21;
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_a_15;
    return(t);
  }
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_4 (ATerm t)
      {
        ATerm d_21 = NULL;
        d_21 = t;
        if(match_string(t, "-S"))
          {
            t = d_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = d_21;
          }
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_h_15;
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = term_i_15;
        return(t);
      }
      t = Option_3_0(t_4, u_4, x_4, t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = b_15;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              ATerm e_21 = NULL,f_21 = NULL;
              e_21 = t;
              t = SSL_string_to_int(e_21);
              f_21 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_21);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, e_21);
              return(t);
            }
            ATerm a_5 (ATerm t)
            {
              t = term_q_15;
              return(t);
            }
            t = ArgOption_3_0(y_4, z_4, a_5, t);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm f_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm h_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_r_15;
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                t = term_s_15;
                return(t);
              }
              t = Option_3_0(f_5, h_5, j_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm h_21 = NULL;
    h_21 = t;
    if(match_string(t, "-o"))
      {
        t = h_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = h_21;
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    ATerm i_21 = NULL;
    i_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), i_21);
    t = (ATerm) ATmakeAppl(sym_Output_1, i_21);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_a_16;
    return(t);
  }
  t = ArgOption_3_0(k_5, o_5, r_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm b_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = b_16;
      {
        ATerm s_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_16;
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_o_16;
          return(t);
        }
        t = Option_3_0(s_5, t_5, u_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  l_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = l_21;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm t_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_21 = ATgetFirst((ATermList) t);
          n_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_21 = ATgetFirst((ATermList) t);
          p_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_21;
      t = g_0(t);
      t = o_21;
      t = h_0(t);
      t_21 = t;
      t = (ATerm) ATinsert(CheckATermList(p_21), t_21);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm v_21 = NULL;
    v_21 = t;
    if(match_string(t, "-i"))
      {
        t = v_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = v_21;
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm w_21 = NULL;
    w_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), w_21);
    t = (ATerm) ATmakeAppl(sym_Input_1, w_21);
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  t = ArgOption_3_0(v_5, w_5, z_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_10;
  t = whoami_0_0(t);
  x_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), x_21));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm t)
{
  ATerm h_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_91(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = h_17;
      {
        ATerm a_22 = NULL,b_22 = NULL,e_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_22 = ATgetFirst((ATermList) t);
            b_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_22;
        t = foldr_2_0(d_91, e_91, t);
        e_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, e_22);
        t = e_91(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  f_22 = t;
  t = SSL_explode_term(f_22);
  if(match_cons(t, sym__2))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_22;
  t = foldr_2_0(b_89, c_89, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_22 = NULL;
  t = times_0_0(t);
  {
    ATerm a_6 (ATerm t)
    {
      t = term_g_15;
      return(t);
    }
    ATerm d_6 (ATerm t)
    {
      ATerm i_22 = NULL,j_22 = NULL;
      if(match_cons(t, sym__2))
        {
          i_22 = ATgetArgument(t, 0);
          j_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(i_22, j_22);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = m_17;
            t = SSL_addr(i_22, j_22);
          }
      }
      return(t);
    }
    t = crush_2_0(a_6, d_6, t);
    h_22 = t;
    t = SSL_TicksToSeconds(h_22);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_22;
        if((t_22 != t))
          {
            _fail(t);
          }
        t = s_22;
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = s_22;
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_22, u_22);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
              t = SSL_gtr(t_22, u_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm x_22 = NULL,y_22 = NULL;
    x_22 = t;
    t = term_l_13;
    t = get_config_0_0(t);
    y_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_22, term_b_18);
    t = geq_0_0(t);
    t = x_22;
    t = y_102(t);
    return(t);
  }
  t = try_1_0(e_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm a_23 = NULL,b_23 = NULL;
    t = run_time_0_0(t);
    a_23 = t;
    t = term_j_10;
    t = whoami_0_0(t);
    b_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_23), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_23));
    t = (ATerm) ATmakeAppl(sym__2, term_c_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), a_23), term_d_18), b_23));
    return(t);
  }
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm j_6 (ATerm t)
        {
          ATerm n_18 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(j_19);
            }
          else
            {
              t = n_18;
              {
                ATerm k_19 = t;
                int l_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(l_19);
                  }
                else
                  {
                    t = k_19;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(j_6, t);
      }
    }
  t = v_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_23 = ATgetFirst((ATermList) t);
      f_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_23 = NULL,k_23 = NULL;
        t = f_23;
        t = f_0(t);
        j_23 = t;
        t = e_23;
        t = e_0(t);
        k_23 = t;
        t = f_23;
        {
          ATerm k_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_23), k_23);
            return(t);
          }
          t = reverse_acc_2_0(e_0, k_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_10;
      t = f_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, l_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_23);
  l_23 = t;
  t = m_23;
  t = v_77(t);
  n_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_23), l_23);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm m_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(m_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_o_19;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm r_6 (ATerm t)
    {
      ATerm r_23 = NULL;
      r_23 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, r_23), term_p_19);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(r_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_23);
  s_23 = t;
  t = t_23;
  t = w_77(t);
  u_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_23), s_23);
  return(t);
}
ATerm fetch_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm y_23 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_86, _id, t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = Cons_2_0(_id, y_23, t);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  t = fetch_1_0(v_106, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  {
    ATerm v_19 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_20 = ATgetFirst((ATermList) t);
                ATerm f_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_24;
          }
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATinsert(ATempty, a_24);
      }
    b_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_24);
    t = a_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_j_21;
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = term_k_21;
        return(t);
      }
      t = Option_3_0(s_6, v_6, w_6, t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = s_20;
      {
        ATerm y_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_q_21;
          return(t);
        }
        ATerm a_7 (ATerm t)
        {
          t = term_r_21;
          return(t);
        }
        t = Option_3_0(y_6, z_6, a_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__3))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
      j_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
  {
    ATerm s_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_21 = ATgetArgument(t, 0);
            ATerm z_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_24, i_24);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = s_21;
        t = (ATerm) ATempty;
      }
    k_24 = t;
    t = SSL_table_put(h_24, i_24, (ATerm) ATinsert(CheckATermList(k_24), j_24));
    t = (ATerm) ATmakeAppl(sym__3, h_24, i_24, j_24);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm p_24 = NULL;
  t = term_j_10;
  t = a_108(t);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_22, term_d_22, p_24);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_24;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm w_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_24 = ATgetFirst((ATermList) t);
          t_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_24;
      t = a_0(t);
      t = term_j_10;
      t = c_0(t);
      w_24 = t;
      t = (ATerm) ATinsert(CheckATermList(t_24), w_24);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm y_24 = NULL;
    y_24 = t;
    if(match_string(t, "--help"))
      {
        t = y_24;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = y_24;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = y_24;
          }
      }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_k_22;
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = term_l_22;
    return(t);
  }
  t = Option_3_0(e_7, f_7, g_7, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  {
    ATerm h_7 (ATerm t)
    {
      t = term_m_22;
      t = y_107(t);
      return(t);
    }
    t = try_1_0(h_7, t);
    t = c_25;
    {
      ATerm j_7 (ATerm t)
      {
        ATerm d_25 = NULL;
        d_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_25);
        t = (ATerm) ATmakeAppl(sym_Program_1, d_25);
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_22 = t;
            int q_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_22);
              }
            else
              {
                t = p_22;
                t = y_107(t);
                t = Cons_2_0(_id, k_7, t);
              }
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            {
              ATerm f_25 = NULL,g_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_25 = ATgetFirst((ATermList) t);
                  g_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_25), (ATerm) ATmakeAppl(sym_Undefined_1, f_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_7, k_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = m_25;
  {
    ATerm l_7 (ATerm t)
    {
      ATerm r_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_107(t);
          ;
          LocalPopChoice(v_22);
        }
      else
        {
          t = r_22;
          {
            ATerm w_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(z_22);
              }
            else
              {
                t = w_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_7, t);
    {
      ATerm r_7 (ATerm t)
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_25 = NULL;
            t_25 = t;
            {
              ATerm g_23 = t;
              int h_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_25;
                  {
                    ATerm i_23 = t;
                    int p_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_m_18;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(p_23);
                      }
                    else
                      {
                        t = i_23;
                        {
                          ATerm v_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(v_7, t);
                        }
                      }
                    t = t_25;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(h_23);
                }
              else
                {
                  t = g_23;
                  t = term_g_21;
                  t = get_config_0_0(t);
                  t = t_25;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm w_7 (ATerm t)
              {
                ATerm x_7 (ATerm t)
                {
                  n_25 = t;
                  return(t);
                }
                t = Undefined_1_0(x_7, t);
                return(t);
              }
              t = option_defined_1_0(w_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), term_q_23));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(r_7, t);
      o_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm t)
{
  ATerm s_7 = NULL;
  t = parse_options_1_0(x_105, t);
  s_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_7);
  t = s_7;
  t = z_105(t);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_105, t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        {
          ATerm z_23 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_24);
            }
          else
            {
              t = z_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm y_7 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_105(t);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(m_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_7, o_105, p_105, z_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm d_8 (ATerm t)
    {
      ATerm w_25 = NULL,x_25 = NULL;
      w_25 = t;
      t = term_g_17;
      t = get_config_0_0(t);
      x_25 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, x_25));
      t = w_25;
      return(t);
    }
    t = if_verbose2_1_0(d_8, t);
    return(t);
  }
  t = iowrap_4_0(g_105, h_105, i_105, a_8, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  t = iowrap_3_0(e_105, f_105, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    t = _2_0(_id, b_105, t);
    return(t);
  }
  t = iowrap_2_0(e_8, _fail, t);
  return(t);
}
ATerm dead_var_elim_io_0_0 (ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      ATerm j_8 (ATerm t)
      {
        t = Signature_1_0(_id, t);
        return(t);
      }
      ATerm k_8 (ATerm t)
      {
        ATerm m_8 (ATerm t)
        {
          ATerm o_8 (ATerm t)
          {
            ATerm p_8 (ATerm t)
            {
              t = dead_var_elim_0_0(t);
              {
                ATerm q_8 (ATerm t)
                {
                  ATerm r_8 (ATerm t)
                  {
                    ATerm y_25 = NULL,z_25 = NULL;
                    y_25 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        z_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(y_25);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm f_24 = ATgetFirst((ATermList) t);
                        ATerm g_24 = (ATerm) ATgetNext((ATermList) t);
                        if(((ATgetType(g_24) != AT_LIST) || !(ATisEmpty(g_24))))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, z_25);
                    return(t);
                  }
                  t = try_1_0(r_8, t);
                  return(t);
                }
                t = topdown_1_0(q_8, t);
              }
              return(t);
            }
            t = map_1_0(p_8, t);
            return(t);
          }
          t = Strategies_1_0(o_8, t);
          return(t);
        }
        ATerm n_8 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(m_8, n_8, t);
        return(t);
      }
      t = Cons_2_0(j_8, k_8, t);
      return(t);
    }
    t = Specification_1_0(i_8, t);
    return(t);
  }
  t = iowrap_1_0(f_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_var_elim_io_0_0(t);
  return(t);
}

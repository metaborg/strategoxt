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
ATerm term_d_23;
ATerm term_p_21;
ATerm term_j_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_y_17;
ATerm term_t_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_h_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_i_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_i_10;
ATerm term_x_9;
ATerm term_n_8;
ATerm term_l_8;
void init_constant_terms (void)
{
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_10);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__3, term_a_20, term_b_20, term_x_9);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
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
  ATerm z_7 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_82(t);
      ;
      LocalPopChoice(e_8);
    }
  else
    {
      t = z_7;
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
  ATerm i_0 = NULL,k_0 = NULL,o_0 = NULL,p_0 = NULL;
  i_0 = t;
  t = SSL_explode_term(i_0);
  if(match_cons(t, sym__2))
    {
      k_0 = ATgetArgument(t, 0);
      o_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_0;
  t = reverse_map_1_0(h_78, t);
  p_0 = t;
  t = SSL_mkterm(k_0, p_0);
  return(t);
}
ATerm Match_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,w_0 = NULL,x_0 = NULL;
  x_0 = t;
  if(match_cons(t, sym_Match_1))
    {
      s_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_0);
  r_0 = t;
  t = s_0;
  t = w_69(t);
  w_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, w_0), r_0);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      ATerm e_1 = NULL,v_1 = NULL,x_1 = NULL;
      v_1 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_1;
            e_1 = t;
            t = SSLgetAnnotations(v_1);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_8 = ATgetFirst((ATermList) t);
                if((ATgetSymbol((ATermAppl) j_8) != ATmakeSymbol("bound", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm k_8 = (ATerm) ATgetNext((ATermList) t);
                  if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = v_1;
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            t = x_1;
            e_1 = t;
            t = SSLgetAnnotations(v_1);
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_1;
          }
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, e_1), term_l_8);
        {
          ATerm q_0 (ATerm t)
          {
            t = term_n_8;
            return(t);
          }
          t = override_key_1_0(q_0, t);
          t = v_1;
        }
      }
      return(t);
    }
    t = alltd_1_0(n_0, t);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm a_2 = NULL,c_2 = NULL;
        a_2 = t;
        if(match_cons(t, sym_Var_1))
          {
            c_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_8 = ATgetFirst((ATermList) t);
            ATerm p_8 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(p_8) != AT_LIST) || !(ATisEmpty(p_8))))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_2);
        t = ElimVar_0_0(t);
        return(t);
      }
      t = alltd_1_0(t_0, t);
    }
    return(t);
  }
  t = Match_1_0(m_0, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,s_2 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      s_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
      w_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_3);
  o_2 = t;
  t = s_2;
  t = j_70(t);
  y_2 = t;
  t = v_2;
  t = k_70(t);
  z_2 = t;
  t = w_2;
  t = l_70(t);
  a_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, y_2, z_2, a_3), o_2);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm u_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, d_78, _id, t);
      t = GuardedLChoice_3_0(d_78, _id, _id, t);
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, d_78, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(u_0, v_0, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  l_3 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      g_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  f_3 = t;
  t = g_3;
  t = f_70(t);
  j_3 = t;
  t = i_3;
  t = g_70(t);
  k_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, j_3, k_3), f_3);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm c_78 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm y_0 (ATerm t)
    {
      t = LChoice_2_0(c_78, _id, t);
      return(t);
    }
    ATerm z_0 (ATerm t)
    {
      t = LChoice_2_0(_id, c_78, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(y_0, z_0, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL;
  x_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_3);
  r_3 = t;
  t = s_3;
  t = d_69(t);
  u_3 = t;
  t = t_3;
  t = e_69(t);
  v_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, u_3, v_3), r_3);
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm m_5 (ATerm l_4, ATerm r_4, ATerm t)
      {
        t = r_4;
        {
          ATerm q_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), l_4);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_8 = ATgetFirst((ATermList) t);
                  if(match_cons(s_8, sym_Defined_1))
                    {
                      ATerm u_8 = ATgetArgument(s_8, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = r_4;
              ;
              LocalPopChoice(r_8);
            }
          else
            {
              t = q_8;
              t = (ATerm) ATmakeAppl(sym__2, l_4, (ATerm) ATinsert(ATempty, term_l_8));
            }
        }
        return(t);
      }
      ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
      c_5 = t;
      if(match_cons(t, sym__2))
        {
          d_5 = ATgetArgument(t, 0);
          e_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_5;
      {
        ATerm v_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_5 = ATgetFirst((ATermList) t);
                {
                  ATerm z_8 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_8);
            t = f_5;
            {
              ATerm a_9 = t;
              int b_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm g_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_9);
                  t = d_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm i_9 = t;
                      int j_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_5;
                          ;
                          LocalPopChoice(j_9);
                        }
                      else
                        {
                          t = i_9;
                          t = m_5(d_5, c_5, t);
                        }
                    }
                  else
                    {
                      t = m_5(d_5, c_5, t);
                    }
                }
              else
                {
                  t = a_9;
                  t = d_5;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = c_5;
                }
            }
          }
        else
          {
            t = v_8;
            t = d_5;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = c_5;
          }
      }
      return(t);
    }
    t = try_1_0(b_1, t);
    return(t);
  }
  t = map_1_0(a_1, t);
  t = restore_ElimVar_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm o_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm r_5 = NULL,w_5 = NULL;
      if(match_cons(t, sym__2))
        {
          r_5 = ATgetArgument(t, 0);
          w_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(q_5, r_5, w_5);
      t = (ATerm) ATmakeAppl(sym__3, q_5, r_5, w_5);
      return(t);
    }
    t = map_1_0(c_1, t);
  }
  return(t);
}
ATerm restore_ElimVar_0_0 (ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, x_5);
  t = table_putlist_0_0(t);
  t = x_5;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_5 = NULL;
  y_5 = t;
  t = SSL_table_keys(y_5);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm z_5 = NULL,c_6 = NULL;
      z_5 = t;
      t = SSL_table_get(y_5, z_5);
      c_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_5, c_6);
      return(t);
    }
    t = map_1_0(d_1, t);
  }
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_n_8;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t)
{
  ATerm d_6 = NULL,g_6 = NULL,i_6 = NULL,j_6 = NULL,o_6 = NULL;
  d_6 = t;
  t = save_ElimVar_0_0(t);
  g_6 = t;
  t = d_6;
  t = e_78(t);
  i_6 = t;
  t = save_ElimVar_0_0(t);
  j_6 = t;
  t = g_6;
  t = restore_ElimVar_0_0(t);
  t = i_6;
  t = f_78(t);
  o_6 = t;
  t = j_6;
  t = isect_ElimVar_0_0(t);
  t = o_6;
  return(t);
}
ATerm elim_choice_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm f_1 (ATerm t)
    {
      t = Choice_2_0(b_78, _id, t);
      return(t);
    }
    ATerm g_1 (ATerm t)
    {
      t = Choice_2_0(_id, b_78, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(f_1, g_1, t);
  }
  return(t);
}
ATerm Seq_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,u_6 = NULL,v_6 = NULL,y_6 = NULL;
  y_6 = t;
  if(match_cons(t, sym_Seq_2))
    {
      q_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_6);
  p_6 = t;
  t = q_6;
  t = d_70(t);
  u_6 = t;
  t = r_6;
  t = e_70(t);
  v_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, u_6, v_6), p_6);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,i_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__3))
    {
      e_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
      i_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(e_7, f_7);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_9 = ATgetFirst((ATermList) t);
      j_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(e_7, f_7, (ATerm) ATinsert(CheckATermList(j_7), i_7));
  t = (ATerm) ATmakeAppl(sym__3, e_7, f_7, i_7);
  return(t);
}
ATerm override_key_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_92(t);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_7, n_7, o_7);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, n_7, o_7);
  return(t);
}
ATerm alltd_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_81(t);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        t = SRTS_all(q_7, t);
      }
    return(t);
  }
  t = q_7(t);
  return(t);
}
ATerm mark_build_term_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm r_7 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        r_7 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_7), term_l_8);
    {
      ATerm i_1 (ATerm t)
      {
        t = term_n_8;
        return(t);
      }
      t = override_key_1_0(i_1, t);
      t = (ATerm) ATmakeAppl(sym_Var_1, r_7);
    }
    return(t);
  }
  t = alltd_1_0(h_1, t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        t = reverse_map_1_0(g_86, t);
        return(t);
      }
      t = Cons_2_0(_id, j_1, t);
      t = Cons_2_0(g_86, _id, t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,h_8 = NULL,i_8 = NULL;
  i_8 = t;
  if(match_cons(t, sym_CallT_3))
    {
      v_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      b_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_8);
  u_7 = t;
  t = v_7;
  t = t_69(t);
  c_8 = t;
  t = a_8;
  t = u_69(t);
  d_8 = t;
  t = b_8;
  t = v_69(t);
  h_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, c_8, d_8, h_8), u_7);
  return(t);
}
ATerm PrimT_3_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,w_8 = NULL,x_8 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,h_9 = NULL;
  h_9 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
      c_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_9);
  m_8 = t;
  t = w_8;
  t = v_70(t);
  d_9 = t;
  t = x_8;
  t = w_70(t);
  e_9 = t;
  t = c_9;
  t = x_70(t);
  f_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, d_9, e_9, f_9), m_8);
  return(t);
}
ATerm Build_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,v_9 = NULL,w_9 = NULL,d_10 = NULL;
  d_10 = t;
  if(match_cons(t, sym_Build_1))
    {
      v_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_10);
  t_9 = t;
  t = v_9;
  t = x_69(t);
  w_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, w_9), t_9);
  return(t);
}
ATerm MarkBuild_0_0 (ATerm t)
{
  t = Build_1_0(mark_build_term_0_0, t);
  return(t);
}
ATerm DeclareAlive_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_10), term_l_8);
  {
    ATerm k_1 (ATerm t)
    {
      t = term_n_8;
      return(t);
    }
    t = assert_1_0(k_1, t);
    t = j_10;
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,v_10 = NULL,b_11 = NULL,f_11 = NULL,h_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_10 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      f_11 = ATgetArgument(t, 2);
      h_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_11);
  r_10 = t;
  t = v_10;
  t = h_72(t);
  l_11 = t;
  t = b_11;
  t = i_72(t);
  m_11 = t;
  t = f_11;
  t = j_72(t);
  n_11 = t;
  t = h_11;
  t = k_72(t);
  o_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, l_11, m_11, n_11, o_11), r_10);
  return(t);
}
ATerm elim_sdef_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm p_9 = ATgetArgument(t, 0);
      ATerm q_9 = ATgetArgument(t, 1);
      ATerm r_9 = ATgetArgument(t, 2);
      ATerm s_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm l_1 (ATerm t)
    {
      t = term_n_8;
      return(t);
    }
    ATerm m_1 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          ATerm f_12 = NULL,g_12 = NULL;
          f_12 = t;
          if(match_cons(t, sym_VarDec_2))
            {
              g_12 = ATgetArgument(t, 0);
              {
                ATerm u_9 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = g_12;
          t = DeclareAlive_0_0(t);
          t = f_12;
          return(t);
        }
        t = map_1_0(o_1, t);
        return(t);
      }
      t = SDefT_4_0(_id, _id, n_1, i_78, t);
      return(t);
    }
    t = scope_2_0(l_1, m_1, t);
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,q_1 = NULL;
  q_12 = t;
  t = term_x_9;
  t = q_92(t);
  r_12 = t;
  t = SSL_table_get(r_12, q_12);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_1 = ATgetFirst((ATermList) t);
      {
        ATerm y_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_1;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm z_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_13;
        {
          ATerm p_1 (ATerm t)
          {
            t = term_n_8;
            return(t);
          }
          t = rewrite_1_0(p_1, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        {
          ATerm c_10 = t;
          int e_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_13;
              {
                ATerm r_1 (ATerm t)
                {
                  t = term_n_8;
                  return(t);
                }
                t = rewrite_1_0(r_1, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
              ;
              LocalPopChoice(e_10);
            }
          else
            {
              t = c_10;
              {
                ATerm f_10 = t;
                int g_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = q_13;
                    {
                      ATerm s_1 (ATerm t)
                      {
                        t = term_n_8;
                        return(t);
                      }
                      t = rewrite_1_0(s_1, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      _fail(t);
                    }
                    ;
                    LocalPopChoice(g_10);
                  }
                else
                  {
                    t = f_10;
                    t = q_13;
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = term_n_8;
                        return(t);
                      }
                      t = rewrite_1_0(t_1, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm h_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) h_10) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_i_10;
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
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              t = filter_1_0(s_92, t);
              return(t);
            }
            t = Cons_2_0(s_92, u_1, t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            {
              ATerm k_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_10 = ATgetFirst((ATermList) t);
                  k_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_14;
              t = filter_1_0(s_92, t);
            }
          }
      }
    }
  return(t);
}
ATerm EliminateFromScope_0_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm y_1 (ATerm t)
    {
      ATerm p_10 = t;
      if((PushChoice() == 0))
        {
          ATerm m_14 = NULL;
          m_14 = t;
          t = (ATerm) ATmakeAppl(sym_Var_1, m_14);
          t = ElimVar_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_10;
        }
      return(t);
    }
    t = filter_1_0(y_1, t);
    return(t);
  }
  t = Scope_2_0(w_1, _id, t);
  return(t);
}
ATerm assert_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_92(t);
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_14, n_14, p_14);
  t = table_push_0_0(t);
  {
    ATerm q_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = q_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_14 = ATgetFirst((ATermList) t);
        v_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_14), (ATerm) ATinsert(CheckATermList(u_14), n_14)));
    t = (ATerm) ATmakeAppl(sym__2, n_14, p_14);
  }
  return(t);
}
ATerm DeclareDead_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_14), term_u_10);
  {
    ATerm z_1 (ATerm t)
    {
      t = term_n_8;
      return(t);
    }
    t = assert_1_0(z_1, t);
    t = x_14;
  }
  return(t);
}
ATerm Scope_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,k_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_15);
  z_14 = t;
  t = a_15;
  t = z_69(t);
  e_15 = t;
  t = d_15;
  t = a_70(t);
  f_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, e_15, f_15), z_14);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      p_15 = ATgetArgument(t, 0);
      q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_10 = ATgetArgument(t, 0);
            ATerm z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_15, q_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_11 = ATgetFirst((ATermList) t);
            h_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_2;
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATempty;
      }
    r_15 = t;
    t = SSL_table_put(p_15, q_15, r_15);
    t = (ATerm) ATmakeAppl(sym__2, p_15, q_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  x_15 = t;
  t = l_92(t);
  y_15 = t;
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(y_15, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        a_16 = ATgetFirst((ATermList) t);
        z_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(y_15, (ATerm)ATmakeAppl(sym_Scopes_0), z_15);
    t = a_16;
    {
      ATerm b_2 (ATerm t)
      {
        ATerm b_16 = NULL;
        b_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, b_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(b_2, t);
      t = x_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm e_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_83(t);
      t = k_83(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = e_11;
      t = k_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  t = k_92(t);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, term_i_11);
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_11 = ATgetArgument(t, 0);
            ATerm r_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        t = (ATerm) ATempty;
      }
    g_16 = t;
    t = SSL_table_put(f_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(g_16), (ATerm) ATempty));
    t = e_16;
  }
  return(t);
}
ATerm scope_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  t = begin_scope_1_0(m_92, t);
  {
    ATerm d_2 (ATerm t)
    {
      t = end_scope_1_0(m_92, t);
      return(t);
    }
    t = restore_always_2_0(n_92, d_2, t);
  }
  return(t);
}
ATerm elim_scope_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  if(match_cons(t, sym_Scope_2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      ATerm t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_2 (ATerm t)
    {
      t = term_n_8;
      return(t);
    }
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        t = map_1_0(DeclareDead_0_0, t);
        return(t);
      }
      t = Scope_2_0(g_2, j_78, t);
      t = EliminateFromScope_0_0(t);
      return(t);
    }
    t = scope_2_0(e_2, f_2, t);
  }
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = elim_scope_1_0(dead_var_elim_0_0, t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = elim_sdef_1_0(dead_var_elim_0_0, t);
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
                  t = MarkBuild_0_0(t);
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
                        ATerm i_2 (ATerm t)
                        {
                          t = reverse_map_1_0(dead_var_elim_0_0, t);
                          return(t);
                        }
                        ATerm j_2 (ATerm t)
                        {
                          t = reverse_map_1_0(mark_build_term_0_0, t);
                          return(t);
                        }
                        t = PrimT_3_0(_id, i_2, j_2, t);
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
                              ATerm k_2 (ATerm t)
                              {
                                t = reverse_map_1_0(dead_var_elim_0_0, t);
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = reverse_map_1_0(mark_build_term_0_0, t);
                                return(t);
                              }
                              t = CallT_3_0(_id, k_2, l_2, t);
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
                                    t = Seq_2_0(_id, dead_var_elim_0_0, t);
                                    t = Seq_2_0(dead_var_elim_0_0, _id, t);
                                    ;
                                    LocalPopChoice(h_12);
                                  }
                                else
                                  {
                                    t = e_12;
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
                                            ATerm k_12 = t;
                                            int l_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = elim_lchoice_1_0(dead_var_elim_0_0, t);
                                                ;
                                                LocalPopChoice(l_12);
                                              }
                                            else
                                              {
                                                t = k_12;
                                                {
                                                  ATerm m_12 = t;
                                                  int n_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = elim_guardedlchoice_1_0(dead_var_elim_0_0, t);
                                                      ;
                                                      LocalPopChoice(n_12);
                                                    }
                                                  else
                                                    {
                                                      t = m_12;
                                                      {
                                                        ATerm o_12 = t;
                                                        int p_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = EliminateFromMatch_0_0(t);
                                                            ;
                                                            LocalPopChoice(p_12);
                                                          }
                                                        else
                                                          {
                                                            t = o_12;
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
  ATerm m_16 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = Cons_2_0(d_86, m_16, t);
      }
    return(t);
  }
  t = m_16(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  q_16 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_16);
  n_16 = t;
  t = o_16;
  t = h_65(t);
  p_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, p_16), n_16);
  return(t);
}
ATerm Cons_2_0 (ATerm d_65 (ATerm), ATerm e_65 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  y_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_16 = ATgetFirst((ATermList) t);
      v_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  t_16 = t;
  t = u_16;
  t = d_65(t);
  w_16 = t;
  t = v_16;
  t = e_65(t);
  x_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_16), w_16), t_16);
  return(t);
}
ATerm Signature_1_0 (ATerm i_65 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  e_17 = t;
  if(match_cons(t, sym_Signature_1))
    {
      c_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_17);
  b_17 = t;
  t = c_17;
  t = i_65(t);
  d_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, d_17), b_17);
  return(t);
}
ATerm Specification_1_0 (ATerm m_65 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_17);
  h_17 = t;
  t = i_17;
  t = m_65(t);
  j_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, j_17), h_17);
  return(t);
}
ATerm _2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  s_17 = t;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_17);
  n_17 = t;
  t = o_17;
  t = u_63(t);
  q_17 = t;
  t = p_17;
  t = v_63(t);
  r_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_17, r_17), n_17);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  v_17 = t;
  t = term_x_9;
  t = whoami_0_0(t);
  w_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), w_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = v_17;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm z_17 = NULL,a_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_17 = ATgetFirst((ATermList) t);
            a_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_17;
        {
          ATerm m_2 (ATerm t)
          {
            t = a_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  t = SSL_explode_term(e_18);
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_18;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm g_18 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_18, t);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_86(t);
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_18;
  {
    ATerm n_2 (ATerm t)
    {
      t = h_18;
      return(t);
    }
    t = at_end_1_0(n_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  ATerm p_2 (ATerm t)
  {
    ATerm k_18 = NULL;
    k_18 = t;
    t = SSL_explode_string(k_18);
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm l_18 = NULL;
    l_18 = t;
    t = SSL_explode_string(l_18);
    return(t);
  }
  t = _2_0(p_2, q_2, t);
  t = conc_0_0(t);
  j_18 = t;
  t = SSL_implode_string(j_18);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_18 = NULL;
      r_18 = t;
      t = SSL_is_string(r_18);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(r_2, t);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
              v_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_18 = ATgetArgument(t, 0);
                  t = w_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_18 = ATgetArgument(t, 0);
                      t = w_18;
                      {
                        ATerm f_13 = t;
                        int g_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_13);
                          }
                        else
                          {
                            t = f_13;
                            {
                              ATerm t_2 (ATerm t)
                              {
                                t = term_h_13;
                                return(t);
                              }
                              t = debug_1_0(t_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_19 = NULL,c_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_18 = ATgetArgument(t, 0);
                          x_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_18;
                      t = eval_config_0_0(t);
                      b_19 = t;
                      t = x_18;
                      t = eval_config_0_0(t);
                      c_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_19, c_19);
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
  ATerm f_19 = NULL;
  f_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_19);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm g_19 = NULL;
      t = eval_config_0_0(t);
      g_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_19, g_19);
      t = g_19;
      return(t);
    }
    t = try_1_0(u_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm h_19 = NULL,i_19 = NULL;
    h_19 = t;
    t = term_i_13;
    t = get_config_0_0(t);
    i_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_19, term_j_13);
    t = geq_0_0(t);
    t = h_19;
    t = z_102(t);
    return(t);
  }
  t = try_1_0(x_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_13 = ATgetArgument(t, 0);
        if(match_cons(k_13, sym_Stream_1))
          {
            j_19 = ATgetArgument(k_13, 0);
          }
        else
          _fail(t);
        k_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(j_19, k_19);
    l_19 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), l_19);
    m_19 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, m_19);
    return(t);
  }
  t = WriteToFile_1_0(b_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_19, term_l_13);
  t = open_stream_0_0(t);
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_19, o_19);
  t = v_101(t);
  t = fclose_0_0(t);
  t = o_19;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_13 = ATgetArgument(t, 0);
        if(match_cons(m_13, sym_Stream_1))
          {
            q_19 = ATgetArgument(m_13, 0);
          }
        else
          _fail(t);
        r_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(q_19, r_19);
    s_19 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, s_19);
    return(t);
  }
  t = WriteToFile_1_0(d_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  t_19 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(m_3, t);
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          t = term_p_13;
          if(((u_19 != NULL) && (u_19 != t)))
            _fail(t);
          else
            u_19 = t;
        }
      return(t);
    }
    t = _2_0(e_3, _id, t);
    t = t_19;
    {
      ATerm o_3 (ATerm t)
      {
        ATerm p_3 (ATerm t)
        {
          t = not_null(u_19);
          return(t);
        }
        t = split_2_0(p_3, _id, t);
        return(t);
      }
      t = _2_0(_id, o_3, t);
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              ATerm w_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(w_3, t);
              return(t);
            }
            t = _2_0(q_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
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
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  v_19 = t;
  t = dtime_0_0(t);
  t = v_19;
  t = x_104(t);
  w_19 = t;
  t = dtime_0_0(t);
  x_19 = t;
  t = w_19;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_19), (ATerm) ATmakeAppl(sym_Runtime_1, x_19)), z_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_20 (ATerm h_20, ATerm t)
  {
    t = SSL_fclose(h_20);
    return(t);
  }
  ATerm k_20 = NULL,l_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_20 = ATgetArgument(t, 0);
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_20);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = n_20(l_20, t);
          }
      }
    }
  else
    {
      t = n_20(l_20, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  t = h_101(t);
  p_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_20), p_20));
  t = o_20;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  t = SSL_stdin_stream();
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_20 = NULL;
  t = SSL_stdout_stream();
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  t = SSL_stderr_stream();
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_20);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_20;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_20;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_20;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      ATerm w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_3 = NULL,n_3 = NULL;
        h_3 = t;
        t = SSL_explode_term(h_3);
        if(match_cons(t, sym__2))
          {
            ATerm z_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_14 = ATgetArgument(t, 1);
              if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
                {
                  n_3 = ATgetFirst((ATermList) a_14);
                  {
                    ATerm b_14 = (ATerm) ATgetNext((ATermList) a_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
              ATerm y_3 (ATerm t)
              {
                ATerm a_21 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_21 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_21;
                return(t);
              }
              t = _2_0(y_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  x_20 = ATgetArgument(t, 0);
                  y_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(x_20, y_20);
              z_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_20);
              ;
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              {
                ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
                ATerm z_3 (ATerm t)
                {
                  ATerm e_21 = NULL;
                  e_21 = t;
                  t = SSL_is_string(e_21);
                  return(t);
                }
                t = _2_0(z_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_21 = ATgetArgument(t, 0);
                    c_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_21, c_21);
                d_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, term_g_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm a_4 (ATerm t)
        {
          t = term_h_14;
          return(t);
        }
        t = debug_1_0(a_4, t);
        _fail(t);
      }
    }
  f_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_21);
  g_21 = t;
  t = f_21;
  t = fclose_0_0(t);
  t = g_21;
  return(t);
}
ATerm split_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  t = o_83(t);
  l_21 = t;
  t = k_21;
  t = p_83(t);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  n_21 = t;
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((o_21 != NULL) && (o_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(b_4, t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = term_l_14;
        o_21 = t;
      }
    t = n_21;
    {
      ATerm c_4 (ATerm t)
      {
        t = not_null(o_21);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, c_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm q_21 = NULL;
    q_21 = t;
    if(match_string(t, "-k"))
      {
        t = q_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_21;
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm r_21 = NULL,s_21 = NULL;
    r_21 = t;
    t = SSL_string_to_int(r_21);
    s_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_21);
    t = r_21;
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_o_14;
    return(t);
  }
  t = ArgOption_3_0(d_4, e_4, f_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        ATerm u_21 = NULL;
        u_21 = t;
        if(match_string(t, "-S"))
          {
            t = u_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = u_21;
          }
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_w_14;
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = term_y_14;
        return(t);
      }
      t = Option_3_0(g_4, h_4, i_4, t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm k_4 (ATerm t)
            {
              ATerm v_21 = NULL,w_21 = NULL;
              v_21 = t;
              t = SSL_string_to_int(v_21);
              w_21 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_21);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_21);
              return(t);
            }
            ATerm m_4 (ATerm t)
            {
              t = term_g_15;
              return(t);
            }
            t = ArgOption_3_0(j_4, k_4, m_4, t);
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm n_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_h_15;
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = term_i_15;
                return(t);
              }
              t = Option_3_0(n_4, o_4, p_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm j_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = j_15;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm y_21 = NULL;
    y_21 = t;
    if(match_string(t, "-o"))
      {
        t = y_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = y_21;
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm z_21 = NULL;
    z_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_21);
    t = (ATerm) ATmakeAppl(sym_Output_1, z_21);
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_m_15;
    return(t);
  }
  t = ArgOption_3_0(q_4, s_4, t_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm u_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_15;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_t_15;
          return(t);
        }
        t = Option_3_0(u_4, v_4, w_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  c_22 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_22;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm k_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_22 = ATgetFirst((ATermList) t);
          e_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_22 = ATgetFirst((ATermList) t);
          g_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_22;
      t = g_0(t);
      t = f_22;
      t = h_0(t);
      k_22 = t;
      t = (ATerm) ATinsert(CheckATermList(g_22), k_22);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm m_22 = NULL;
    m_22 = t;
    if(match_string(t, "-i"))
      {
        t = m_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = m_22;
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm n_22 = NULL;
    n_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_22);
    t = (ATerm) ATmakeAppl(sym_Input_1, n_22);
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_u_15;
    return(t);
  }
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_9;
  t = whoami_0_0(t);
  o_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), o_22));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_91(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        ATerm r_22 = NULL,s_22 = NULL,v_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_22 = ATgetFirst((ATermList) t);
            s_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_22;
        t = foldr_2_0(d_91, e_91, t);
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_22, v_22);
        t = e_91(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  t = SSL_explode_term(w_22);
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_22;
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
  ATerm y_22 = NULL;
  t = times_0_0(t);
  {
    ATerm a_5 (ATerm t)
    {
      t = term_s_14;
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      ATerm z_22 = NULL,a_23 = NULL;
      if(match_cons(t, sym__2))
        {
          z_22 = ATgetArgument(t, 0);
          a_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm l_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(z_22, a_23);
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = l_16;
            t = SSL_addr(z_22, a_23);
          }
      }
      return(t);
    }
    t = crush_2_0(a_5, b_5, t);
    y_22 = t;
    t = SSL_TicksToSeconds(y_22);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_23;
        if((k_23 != t))
          {
            _fail(t);
          }
        t = j_23;
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = s_16;
        t = j_23;
        {
          ATerm a_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_23, l_23);
              ;
              LocalPopChoice(f_17);
            }
          else
            {
              t = a_17;
              t = SSL_gtr(k_23, l_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_23, l_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm o_23 = NULL,p_23 = NULL;
    o_23 = t;
    t = term_i_13;
    t = get_config_0_0(t);
    p_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_23, term_g_17);
    t = geq_0_0(t);
    t = o_23;
    t = y_102(t);
    return(t);
  }
  t = try_1_0(g_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm r_23 = NULL,s_23 = NULL;
    t = run_time_0_0(t);
    r_23 = t;
    t = term_x_9;
    t = whoami_0_0(t);
    s_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_23), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_23));
    t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_17), r_23), term_m_17), s_23));
    return(t);
  }
  t = if_verbose1_1_0(h_5, t);
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
  ATerm u_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = u_17;
      {
        ATerm i_5 (ATerm t)
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              {
                ATerm d_18 = t;
                int m_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_18);
                  }
                else
                  {
                    t = d_18;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(i_5, t);
      }
    }
  t = v_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_23 = ATgetFirst((ATermList) t);
      w_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_24 = NULL,b_24 = NULL;
        t = w_23;
        t = f_0(t);
        a_24 = t;
        t = v_23;
        t = e_0(t);
        b_24 = t;
        t = w_23;
        {
          ATerm j_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_24), b_24);
            return(t);
          }
          t = reverse_acc_2_0(e_0, j_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_9;
      t = f_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, k_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_24);
  c_24 = t;
  t = d_24;
  t = v_77(t);
  e_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_24), c_24);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm l_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(l_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_p_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm i_24 = NULL;
      i_24 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, i_24), term_q_18);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(n_5, t);
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
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  m_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  j_24 = t;
  t = k_24;
  t = w_77(t);
  l_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_24), j_24);
  return(t);
}
ATerm fetch_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm p_24 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_86, _id, t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = Cons_2_0(_id, p_24, t);
      }
    return(t);
  }
  t = p_24(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  t = fetch_1_0(v_106, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  r_24 = t;
  {
    ATerm u_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_18 = ATgetFirst((ATermList) t);
                ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_24;
          }
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = u_18;
        t = (ATerm) ATinsert(ATempty, r_24);
      }
    s_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), s_24);
    t = r_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_16;
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
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_c_20;
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        t = term_d_20;
        return(t);
      }
      t = Option_3_0(p_5, s_5, t_5, t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
        ATerm u_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_e_20;
          return(t);
        }
        ATerm a_6 (ATerm t)
        {
          t = term_f_20;
          return(t);
        }
        t = Option_3_0(u_5, v_5, a_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__3))
    {
      y_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
      a_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
  {
    ATerm g_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_20 = ATgetArgument(t, 0);
            ATerm m_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_24, z_24);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = g_20;
        t = (ATerm) ATempty;
      }
    b_25 = t;
    t = SSL_table_put(y_24, z_24, (ATerm) ATinsert(CheckATermList(b_25), a_25));
    t = (ATerm) ATmakeAppl(sym__3, y_24, z_24, a_25);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm g_25 = NULL;
  t = term_x_9;
  t = a_108(t);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_20, term_v_20, g_25);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = i_25;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm n_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_25 = ATgetFirst((ATermList) t);
          k_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_25;
      t = a_0(t);
      t = term_x_9;
      t = b_0(t);
      n_25 = t;
      t = (ATerm) ATinsert(CheckATermList(k_25), n_25);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm p_25 = NULL;
    p_25 = t;
    if(match_string(t, "--help"))
      {
        t = p_25;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = p_25;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = p_25;
          }
      }
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_w_20;
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_j_21;
    return(t);
  }
  t = Option_3_0(b_6, e_6, f_6, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm t_25 = NULL;
  t_25 = t;
  {
    ATerm h_6 (ATerm t)
    {
      t = term_p_21;
      t = y_107(t);
      return(t);
    }
    t = try_1_0(h_6, t);
    t = t_25;
    {
      ATerm k_6 (ATerm t)
      {
        ATerm u_25 = NULL;
        u_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_25);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_25);
        return(t);
      }
      ATerm l_6 (ATerm t)
      {
        ATerm t_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_22 = t;
            int b_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_22);
              }
            else
              {
                t = a_22;
                t = y_107(t);
                t = Cons_2_0(_id, l_6, t);
              }
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = t_21;
            {
              ATerm w_25 = NULL,x_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_25 = ATgetFirst((ATermList) t);
                  x_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_25), (ATerm) ATmakeAppl(sym_Undefined_1, w_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_6, l_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = d_26;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm h_22 = t;
      int i_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_107(t);
          ;
          LocalPopChoice(i_22);
        }
      else
        {
          t = h_22;
          {
            ATerm j_22 = t;
            int l_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(l_22);
              }
            else
              {
                t = j_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_6, t);
    {
      ATerm n_6 (ATerm t)
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_26 = NULL;
            k_26 = t;
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_26;
                  {
                    ATerm b_23 = t;
                    int c_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_y_17;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(c_23);
                      }
                    else
                      {
                        t = b_23;
                        {
                          ATerm s_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(s_6, t);
                        }
                      }
                    t = k_26;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  t = term_b_20;
                  t = get_config_0_0(t);
                  t = k_26;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm t_6 (ATerm t)
              {
                ATerm w_6 (ATerm t)
                {
                  if(((e_26 != NULL) && (e_26 != t)))
                    _fail(t);
                  else
                    e_26 = t;
                  return(t);
                }
                t = Undefined_1_0(w_6, t);
                return(t);
              }
              t = option_defined_1_0(t_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_26)), term_d_23));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(n_6, t);
      f_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = f_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm t)
{
  ATerm y_7 = NULL;
  t = parse_options_1_0(x_105, t);
  y_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_7);
  t = y_7;
  t = z_105(t);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_105, t);
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
              t = a_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_23);
            }
          else
            {
              t = g_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm i_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_105(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = i_23;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(m_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(x_6, o_105, p_105, z_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm n_26 = NULL,o_26 = NULL;
      n_26 = t;
      t = term_h_16;
      t = get_config_0_0(t);
      o_26 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_26));
      t = n_26;
      return(t);
    }
    t = if_verbose2_1_0(b_7, t);
    return(t);
  }
  t = iowrap_4_0(g_105, h_105, i_105, a_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  t = iowrap_3_0(e_105, f_105, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    t = _2_0(_id, b_105, t);
    return(t);
  }
  t = iowrap_2_0(c_7, _fail, t);
  return(t);
}
ATerm dead_var_elim_io_0_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      ATerm h_7 (ATerm t)
      {
        t = Signature_1_0(_id, t);
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        ATerm l_7 (ATerm t)
        {
          ATerm s_7 (ATerm t)
          {
            ATerm t_7 (ATerm t)
            {
              t = dead_var_elim_0_0(t);
              {
                ATerm w_7 (ATerm t)
                {
                  ATerm x_7 (ATerm t)
                  {
                    ATerm p_26 = NULL,q_26 = NULL;
                    p_26 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        q_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(p_26);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm n_23 = ATgetFirst((ATermList) t);
                        ATerm q_23 = (ATerm) ATgetNext((ATermList) t);
                        if(((ATgetType(q_23) != AT_LIST) || !(ATisEmpty(q_23))))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, q_26);
                    return(t);
                  }
                  t = try_1_0(x_7, t);
                  return(t);
                }
                t = topdown_1_0(w_7, t);
              }
              return(t);
            }
            t = map_1_0(t_7, t);
            return(t);
          }
          t = Strategies_1_0(s_7, t);
          return(t);
        }
        ATerm m_7 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(l_7, m_7, t);
        return(t);
      }
      t = Cons_2_0(h_7, k_7, t);
      return(t);
    }
    t = Specification_1_0(g_7, t);
    return(t);
  }
  t = iowrap_1_0(d_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_var_elim_io_0_0(t);
  return(t);
}

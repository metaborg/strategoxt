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
ATerm term_x_20;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_h_13;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_s_8;
ATerm term_h_8;
ATerm term_t_6;
ATerm term_q_6;
void init_constant_terms (void)
{
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__3, term_e_18, term_f_18, term_h_8);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm try_1_0 (ATerm m_82 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm Match_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_ElimVar_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm w_69 (ATerm), ATerm x_69 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm mark_build_term_0_0 (ATerm);
ATerm CallT_3_0 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm);
ATerm Build_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm MarkBuild_0_0 (ATerm);
ATerm DeclareAlive_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm);
ATerm elim_sdef_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm rewrite_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm EliminateFromScope_0_0 (ATerm);
ATerm assert_1_0 (ATerm f_92 (ATerm), ATerm);
ATerm DeclareDead_0_0 (ATerm);
ATerm Scope_2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm scope_2_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm);
ATerm elim_scope_1_0 (ATerm b_78 (ATerm), ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm a_65 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm w_64 (ATerm), ATerm x_64 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm b_65 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm f_65 (ATerm), ATerm);
ATerm _2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_101 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm v_100 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm);
ATerm crush_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_105 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm o_77 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm f_86 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm o_107 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_107 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm p_104 (ATerm), ATerm);
ATerm dead_var_elim_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_82(t);
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  t = u_79(t);
  {
    ATerm i_0 (ATerm t)
    {
      t = topdown_1_0(u_79, t);
      return(t);
    }
    t = SRTS_all(i_0, t);
  }
  return(t);
}
ATerm Match_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym_Match_1))
    {
      x_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_3);
  w_2 = t;
  t = x_2;
  t = p_69(t);
  z_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, z_2), w_2);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm k_0 (ATerm t)
  {
    ATerm l_0 (ATerm t)
    {
      ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
      f_3 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      h_3 = t;
      t = SSLgetAnnotations(f_3);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_6 = ATgetFirst((ATermList) t);
          if((ATgetSymbol((ATermAppl) n_6) != ATmakeSymbol("bound", 0, ATtrue)))
            _fail(t);
          {
            ATerm p_6 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_3), term_q_6);
      {
        ATerm m_0 (ATerm t)
        {
          t = term_t_6;
          return(t);
        }
        t = override_key_1_0(m_0, t);
        t = h_3;
      }
      return(t);
    }
    t = alltd_1_0(l_0, t);
    {
      ATerm n_0 (ATerm t)
      {
        ATerm i_3 = NULL,j_3 = NULL;
        i_3 = t;
        if(match_cons(t, sym_Var_1))
          {
            j_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_6 = ATgetFirst((ATermList) t);
            ATerm v_6 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(v_6) != AT_LIST) || !(ATisEmpty(v_6))))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_3);
        t = ElimVar_0_0(t);
        return(t);
      }
      t = alltd_1_0(n_0, t);
    }
    return(t);
  }
  t = Match_1_0(k_0, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL,w_3 = NULL;
  w_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      q_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_3);
  m_3 = t;
  t = o_3;
  t = c_70(t);
  r_3 = t;
  t = p_3;
  t = d_70(t);
  s_3 = t;
  t = q_3;
  t = e_70(t);
  u_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, r_3, s_3, u_3), m_3);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm o_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, w_77, _id, t);
      t = GuardedLChoice_3_0(w_77, _id, _id, t);
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, w_77, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(o_0, p_0, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,g_4 = NULL,h_4 = NULL;
  h_4 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      b_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_4);
  a_4 = t;
  t = b_4;
  t = y_69(t);
  d_4 = t;
  t = c_4;
  t = z_69(t);
  g_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, d_4, g_4), a_4);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm q_0 (ATerm t)
    {
      t = LChoice_2_0(v_77, _id, t);
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      t = LChoice_2_0(_id, v_77, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(q_0, r_0, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym_Choice_2))
    {
      u_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_5);
  t_4 = t;
  t = u_4;
  t = w_68(t);
  a_5 = t;
  t = z_4;
  t = x_68(t);
  b_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, a_5, b_5), t_4);
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      ATerm c_7 (ATerm a_6, ATerm f_6, ATerm t)
      {
        t = f_6;
        {
          ATerm w_6 = t;
          int x_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), a_6);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_6 = ATgetFirst((ATermList) t);
                  if(match_cons(y_6, sym_Defined_1))
                    {
                      ATerm b_7 = ATgetArgument(y_6, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = f_6;
              ;
              LocalPopChoice(x_6);
            }
          else
            {
              t = w_6;
              t = (ATerm) ATmakeAppl(sym__2, a_6, (ATerm) ATinsert(ATempty, term_q_6));
            }
        }
        return(t);
      }
      ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL,z_6 = NULL;
      o_6 = t;
      if(match_cons(t, sym__2))
        {
          r_6 = ATgetArgument(t, 0);
          s_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_6;
      {
        ATerm d_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_6 = ATgetFirst((ATermList) t);
                {
                  ATerm f_7 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_7);
            t = z_6;
            {
              ATerm h_7 = t;
              int i_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm j_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_7);
                  t = r_6;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm k_7 = t;
                      int p_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_6;
                          ;
                          LocalPopChoice(p_7);
                        }
                      else
                        {
                          t = k_7;
                          t = c_7(r_6, o_6, t);
                        }
                    }
                  else
                    {
                      t = c_7(r_6, o_6, t);
                    }
                }
              else
                {
                  t = h_7;
                  t = r_6;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = o_6;
                }
            }
          }
        else
          {
            t = d_7;
            t = r_6;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = o_6;
          }
      }
      return(t);
    }
    t = try_1_0(u_0, t);
    return(t);
  }
  t = map_1_0(t_0, t);
  t = restore_ElimVar_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm g_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm m_7 = NULL,n_7 = NULL;
      if(match_cons(t, sym__2))
        {
          m_7 = ATgetArgument(t, 0);
          n_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(l_7, m_7, n_7);
      t = (ATerm) ATmakeAppl(sym__3, l_7, m_7, n_7);
      return(t);
    }
    t = map_1_0(v_0, t);
  }
  return(t);
}
ATerm restore_ElimVar_0_0 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, o_7);
  t = table_putlist_0_0(t);
  t = o_7;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_table_keys(r_7);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm s_7 = NULL,x_7 = NULL;
      s_7 = t;
      t = SSL_table_get(r_7, s_7);
      x_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_7, x_7);
      return(t);
    }
    t = map_1_0(w_0, t);
  }
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = term_t_6;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,e_8 = NULL,f_8 = NULL;
  y_7 = t;
  t = save_ElimVar_0_0(t);
  z_7 = t;
  t = y_7;
  t = x_77(t);
  a_8 = t;
  t = save_ElimVar_0_0(t);
  e_8 = t;
  t = z_7;
  t = restore_ElimVar_0_0(t);
  t = a_8;
  t = y_77(t);
  f_8 = t;
  t = e_8;
  t = isect_ElimVar_0_0(t);
  t = f_8;
  return(t);
}
ATerm elim_choice_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm x_0 (ATerm t)
    {
      t = Choice_2_0(u_77, _id, t);
      return(t);
    }
    ATerm y_0 (ATerm t)
    {
      t = Choice_2_0(_id, u_77, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(x_0, y_0, t);
  }
  return(t);
}
ATerm Seq_2_0 (ATerm w_69 (ATerm), ATerm x_69 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,i_8 = NULL,t_8 = NULL,u_8 = NULL,z_8 = NULL,a_9 = NULL;
  a_9 = t;
  if(match_cons(t, sym_Seq_2))
    {
      i_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_9);
  g_8 = t;
  t = i_8;
  t = w_69(t);
  u_8 = t;
  t = t_8;
  t = x_69(t);
  z_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, u_8, z_8), g_8);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,s_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__3))
    {
      p_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
      s_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(p_9, q_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_7 = ATgetFirst((ATermList) t);
      a_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(p_9, q_9, (ATerm) ATinsert(CheckATermList(a_10), s_9));
  t = (ATerm) ATmakeAppl(sym__3, p_9, q_9, s_9);
  return(t);
}
ATerm override_key_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_92(t);
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_10, e_10, f_10);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_10, f_10);
  return(t);
}
ATerm alltd_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm o_10 (ATerm t)
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_81(t);
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        t = SRTS_all(o_10, t);
      }
    return(t);
  }
  t = o_10(t);
  return(t);
}
ATerm mark_build_term_0_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm y_10 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        y_10 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_10), term_q_6);
    {
      ATerm a_1 (ATerm t)
      {
        t = term_t_6;
        return(t);
      }
      t = override_key_1_0(a_1, t);
      t = (ATerm) ATmakeAppl(sym_Var_1, y_10);
    }
    return(t);
  }
  t = alltd_1_0(z_0, t);
  return(t);
}
ATerm CallT_3_0 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,e_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,m_11 = NULL,y_11 = NULL,c_12 = NULL;
  c_12 = t;
  if(match_cons(t, sym_CallT_3))
    {
      e_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
      j_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_12);
  c_11 = t;
  t = e_11;
  t = m_69(t);
  k_11 = t;
  t = i_11;
  t = n_69(t);
  m_11 = t;
  t = j_11;
  t = o_69(t);
  y_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, k_11, m_11, y_11), c_11);
  return(t);
}
ATerm PrimT_3_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,u_12 = NULL,v_12 = NULL,x_12 = NULL;
  x_12 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
      p_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_12);
  i_12 = t;
  t = n_12;
  t = o_70(t);
  q_12 = t;
  t = o_12;
  t = p_70(t);
  u_12 = t;
  t = p_12;
  t = q_70(t);
  v_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, q_12, u_12, v_12), i_12);
  return(t);
}
ATerm Build_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_13);
  b_13 = t;
  t = c_13;
  t = q_69(t);
  d_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, d_13), b_13);
  return(t);
}
ATerm MarkBuild_0_0 (ATerm t)
{
  t = Build_1_0(mark_build_term_0_0, t);
  return(t);
}
ATerm DeclareAlive_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_13), term_q_6);
  {
    ATerm b_1 (ATerm t)
    {
      t = term_t_6;
      return(t);
    }
    t = assert_1_0(b_1, t);
    t = i_13;
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
      m_13 = ATgetArgument(t, 2);
      n_13 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_13);
  j_13 = t;
  t = k_13;
  t = a_72(t);
  o_13 = t;
  t = l_13;
  t = b_72(t);
  p_13 = t;
  t = m_13;
  t = c_72(t);
  q_13 = t;
  t = n_13;
  t = d_72(t);
  r_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, o_13, p_13, q_13, r_13), j_13);
  return(t);
}
ATerm elim_sdef_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      ATerm w_7 = ATgetArgument(t, 1);
      ATerm b_8 = ATgetArgument(t, 2);
      ATerm c_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm d_1 (ATerm t)
    {
      t = term_t_6;
      return(t);
    }
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          ATerm w_13 = NULL,x_13 = NULL;
          w_13 = t;
          if(match_cons(t, sym_VarDec_2))
            {
              x_13 = ATgetArgument(t, 0);
              {
                ATerm d_8 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = x_13;
          t = DeclareAlive_0_0(t);
          t = w_13;
          return(t);
        }
        t = map_1_0(g_1, t);
        return(t);
      }
      t = SDefT_4_0(_id, _id, f_1, a_78, t);
      return(t);
    }
    t = scope_2_0(d_1, e_1, t);
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,s_0 = NULL;
  d_14 = t;
  t = term_h_8;
  t = h_92(t);
  e_14 = t;
  t = SSL_table_get(e_14, d_14);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_0 = ATgetFirst((ATermList) t);
      {
        ATerm j_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_0;
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm k_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_14;
        {
          ATerm h_1 (ATerm t)
          {
            t = term_t_6;
            return(t);
          }
          t = rewrite_1_0(h_1, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          ATerm n_8 = t;
          int o_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_14;
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_t_6;
                  return(t);
                }
                t = rewrite_1_0(i_1, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
              ;
              LocalPopChoice(o_8);
            }
          else
            {
              t = n_8;
              {
                ATerm p_8 = t;
                int q_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = s_14;
                    {
                      ATerm j_1 (ATerm t)
                      {
                        t = term_t_6;
                        return(t);
                      }
                      t = rewrite_1_0(j_1, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      _fail(t);
                    }
                    ;
                    LocalPopChoice(q_8);
                  }
                else
                  {
                    t = p_8;
                    t = s_14;
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = term_t_6;
                        return(t);
                      }
                      t = rewrite_1_0(k_1, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm r_8 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_s_8;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = filter_1_0(j_92, t);
              return(t);
            }
            t = Cons_2_0(j_92, l_1, t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            {
              ATerm b_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_9 = ATgetFirst((ATermList) t);
                  b_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_15;
              t = filter_1_0(j_92, t);
            }
          }
      }
    }
  return(t);
}
ATerm EliminateFromScope_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      ATerm c_9 = t;
      if((PushChoice() == 0))
        {
          ATerm d_15 = NULL;
          d_15 = t;
          t = (ATerm) ATmakeAppl(sym_Var_1, d_15);
          t = ElimVar_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_9;
        }
      return(t);
    }
    t = filter_1_0(n_1, t);
    return(t);
  }
  t = Scope_2_0(m_1, _id, t);
  return(t);
}
ATerm assert_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_92(t);
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_15, e_15, f_15);
  t = table_push_0_0(t);
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_15 = ATgetFirst((ATermList) t);
        i_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(i_15), (ATerm) ATinsert(CheckATermList(h_15), e_15)));
    t = (ATerm) ATmakeAppl(sym__2, e_15, f_15);
  }
  return(t);
}
ATerm DeclareDead_0_0 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_15), term_g_9);
  {
    ATerm q_1 (ATerm t)
    {
      t = term_t_6;
      return(t);
    }
    t = assert_1_0(q_1, t);
    t = j_15;
  }
  return(t);
}
ATerm Scope_2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  p_15 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_15);
  k_15 = t;
  t = l_15;
  t = s_69(t);
  n_15 = t;
  t = m_15;
  t = t_69(t);
  o_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, n_15, o_15), k_15);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_9 = ATgetArgument(t, 0);
            ATerm k_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_15, w_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_9 = ATgetFirst((ATermList) t);
            c_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_1;
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = (ATerm) ATempty;
      }
    x_15 = t;
    t = SSL_table_put(v_15, w_15, x_15);
    t = (ATerm) ATmakeAppl(sym__2, v_15, w_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  d_16 = t;
  t = c_92(t);
  e_16 = t;
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_16 = ATgetFirst((ATermList) t);
        f_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_16, (ATerm)ATmakeAppl(sym_Scopes_0), f_16);
    t = g_16;
    {
      ATerm r_1 (ATerm t)
      {
        ATerm h_16 = NULL;
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_16, h_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_1, t);
      t = d_16;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm o_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_83(t);
      t = c_83(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = o_9;
      t = c_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  t = b_92(t);
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_16, term_t_9);
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_9 = ATgetArgument(t, 0);
            ATerm x_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = (ATerm) ATempty;
      }
    m_16 = t;
    t = SSL_table_put(l_16, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_16), (ATerm) ATempty));
    t = k_16;
  }
  return(t);
}
ATerm scope_2_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm t)
{
  t = begin_scope_1_0(d_92, t);
  {
    ATerm s_1 (ATerm t)
    {
      t = end_scope_1_0(d_92, t);
      return(t);
    }
    t = restore_always_2_0(e_92, s_1, t);
  }
  return(t);
}
ATerm elim_scope_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  if(match_cons(t, sym_Scope_2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      ATerm z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_1 (ATerm t)
    {
      t = term_t_6;
      return(t);
    }
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = map_1_0(DeclareDead_0_0, t);
        return(t);
      }
      t = Scope_2_0(v_1, b_78, t);
      t = EliminateFromScope_0_0(t);
      return(t);
    }
    t = scope_2_0(t_1, u_1, t);
  }
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = elim_scope_1_0(dead_var_elim_0_0, t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm d_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = elim_sdef_1_0(dead_var_elim_0_0, t);
            ;
            LocalPopChoice(h_10);
          }
        else
          {
            t = d_10;
            {
              ATerm i_10 = t;
              int j_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MarkBuild_0_0(t);
                  ;
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm k_10 = t;
                    int l_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_1 (ATerm t)
                        {
                          t = map_1_0(dead_var_elim_0_0, t);
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          t = map_1_0(mark_build_term_0_0, t);
                          return(t);
                        }
                        t = PrimT_3_0(_id, w_1, x_1, t);
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
                              ATerm y_1 (ATerm t)
                              {
                                t = map_1_0(dead_var_elim_0_0, t);
                                return(t);
                              }
                              ATerm z_1 (ATerm t)
                              {
                                t = map_1_0(mark_build_term_0_0, t);
                                return(t);
                              }
                              t = CallT_3_0(_id, y_1, z_1, t);
                              ;
                              LocalPopChoice(n_10);
                            }
                          else
                            {
                              t = m_10;
                              {
                                ATerm p_10 = t;
                                int q_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(_id, dead_var_elim_0_0, t);
                                    t = Seq_2_0(dead_var_elim_0_0, _id, t);
                                    ;
                                    LocalPopChoice(q_10);
                                  }
                                else
                                  {
                                    t = p_10;
                                    {
                                      ATerm r_10 = t;
                                      int s_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = elim_choice_1_0(dead_var_elim_0_0, t);
                                          ;
                                          LocalPopChoice(s_10);
                                        }
                                      else
                                        {
                                          t = r_10;
                                          {
                                            ATerm t_10 = t;
                                            int u_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = elim_lchoice_1_0(dead_var_elim_0_0, t);
                                                ;
                                                LocalPopChoice(u_10);
                                              }
                                            else
                                              {
                                                t = t_10;
                                                {
                                                  ATerm v_10 = t;
                                                  int w_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = elim_guardedlchoice_1_0(dead_var_elim_0_0, t);
                                                      ;
                                                      LocalPopChoice(w_10);
                                                    }
                                                  else
                                                    {
                                                      t = v_10;
                                                      {
                                                        ATerm x_10 = t;
                                                        int z_10 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = EliminateFromMatch_0_0(t);
                                                            ;
                                                            LocalPopChoice(z_10);
                                                          }
                                                        else
                                                          {
                                                            t = x_10;
                                                            t = SRTS_all(dead_var_elim_0_0, t);
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
ATerm map_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm s_16 (ATerm t)
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = Cons_2_0(v_85, s_16, t);
      }
    return(t);
  }
  t = s_16(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_16);
  t_16 = t;
  t = u_16;
  t = a_65(t);
  v_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, v_16), t_16);
  return(t);
}
ATerm Cons_2_0 (ATerm w_64 (ATerm), ATerm x_64 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  f_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_17);
  a_17 = t;
  t = b_17;
  t = w_64(t);
  d_17 = t;
  t = c_17;
  t = x_64(t);
  e_17 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(e_17), d_17), a_17);
  return(t);
}
ATerm Signature_1_0 (ATerm b_65 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Signature_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  j_17 = t;
  t = k_17;
  t = b_65(t);
  l_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, l_17), j_17);
  return(t);
}
ATerm Specification_1_0 (ATerm f_65 (ATerm), ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  t_17 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_17);
  q_17 = t;
  t = r_17;
  t = f_65(t);
  s_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, s_17), q_17);
  return(t);
}
ATerm _2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_18);
  x_17 = t;
  t = y_17;
  t = n_63(t);
  a_18 = t;
  t = z_17;
  t = o_63(t);
  b_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, a_18, b_18), x_17);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  h_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), h_18), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = g_18;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = d_11;
      {
        ATerm k_18 = NULL,l_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_18 = ATgetFirst((ATermList) t);
            l_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_18;
        {
          ATerm a_2 (ATerm t)
          {
            t = l_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  p_18 = t;
  t = SSL_explode_term(p_18);
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_18;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm r_18 (ATerm t)
  {
    ATerm h_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_18, t);
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = h_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_86(t);
      }
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_18;
  {
    ATerm b_2 (ATerm t)
    {
      t = s_18;
      return(t);
    }
    t = at_end_1_0(b_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  ATerm c_2 (ATerm t)
  {
    ATerm v_18 = NULL;
    v_18 = t;
    t = SSL_explode_string(v_18);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm w_18 = NULL;
    w_18 = t;
    t = SSL_explode_string(w_18);
    return(t);
  }
  t = _2_0(c_2, d_2, t);
  t = conc_0_0(t);
  u_18 = t;
  t = SSL_implode_string(u_18);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_19 = NULL;
      c_19 = t;
      t = SSL_is_string(c_19);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(e_2, t);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
              g_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_19 = ATgetArgument(t, 0);
                  t = h_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_19 = ATgetArgument(t, 0);
                      t = h_19;
                      {
                        ATerm t_11 = t;
                        int u_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_11);
                          }
                        else
                          {
                            t = t_11;
                            {
                              ATerm f_2 (ATerm t)
                              {
                                t = term_v_11;
                                return(t);
                              }
                              t = debug_1_0(f_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm m_19 = NULL,n_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_19 = ATgetArgument(t, 0);
                          i_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_19;
                      t = eval_config_0_0(t);
                      m_19 = t;
                      t = i_19;
                      t = eval_config_0_0(t);
                      n_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_19, n_19);
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
  ATerm q_19 = NULL;
  q_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_19);
  {
    ATerm g_2 (ATerm t)
    {
      ATerm r_19 = NULL;
      t = eval_config_0_0(t);
      r_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_19, r_19);
      t = r_19;
      return(t);
    }
    t = try_1_0(g_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm s_19 = NULL,t_19 = NULL;
    s_19 = t;
    t = term_w_11;
    t = get_config_0_0(t);
    t_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_19, term_x_11);
    t = geq_0_0(t);
    t = s_19;
    t = n_102(t);
    return(t);
  }
  t = try_1_0(h_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm z_11 = ATgetArgument(t, 0);
        if(match_cons(z_11, sym_Stream_1))
          {
            u_19 = ATgetArgument(z_11, 0);
          }
        else
          _fail(t);
        v_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(u_19, v_19);
    w_19 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), w_19);
    x_19 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, x_19);
    return(t);
  }
  t = WriteToFile_1_0(i_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_19, term_a_12);
  t = open_stream_0_0(t);
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_20, z_19);
  t = j_101(t);
  t = fclose_0_0(t);
  t = z_19;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_12 = ATgetArgument(t, 0);
        if(match_cons(b_12, sym_Stream_1))
          {
            b_20 = ATgetArgument(b_12, 0);
          }
        else
          _fail(t);
        c_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(b_20, c_20);
    d_20 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_20);
    return(t);
  }
  t = WriteToFile_1_0(j_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  e_20 = t;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm d_12 = t;
      int e_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                f_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(l_2, t);
          ;
          LocalPopChoice(e_12);
        }
      else
        {
          t = d_12;
          t = term_f_12;
          f_20 = t;
        }
      return(t);
    }
    t = _2_0(k_2, _id, t);
    t = e_20;
    {
      ATerm m_2 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          t = not_null(f_20);
          return(t);
        }
        t = split_2_0(n_2, _id, t);
        return(t);
      }
      t = _2_0(_id, m_2, t);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm p_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(p_2, t);
              return(t);
            }
            t = _2_0(o_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
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
ATerm apply_strategy_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  g_20 = t;
  t = dtime_0_0(t);
  t = g_20;
  t = l_104(t);
  h_20 = t;
  t = dtime_0_0(t);
  i_20 = t;
  t = h_20;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_20), (ATerm) ATmakeAppl(sym_Runtime_1, i_20)), k_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_20 (ATerm s_20, ATerm t)
  {
    t = SSL_fclose(s_20);
    return(t);
  }
  ATerm v_20 = NULL,w_20 = NULL;
  w_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_20 = ATgetArgument(t, 0);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_20);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = y_20(w_20, t);
          }
      }
    }
  else
    {
      t = y_20(w_20, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm v_100 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  t = v_100(t);
  a_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_20), a_21));
  t = z_20;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_21 = NULL;
  t = SSL_stdin_stream();
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_21 = NULL;
  t = SSL_stdout_stream();
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_21 = NULL;
  t = SSL_stderr_stream();
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_21);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm f_21 = NULL;
  f_21 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      ATerm m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_1 = NULL,p_1 = NULL;
        o_1 = t;
        t = SSL_explode_term(o_1);
        if(match_cons(t, sym__2))
          {
            ATerm t_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_12 = ATgetArgument(t, 1);
              if(((ATgetType(w_12) == AT_LIST) && !(ATisEmpty(w_12))))
                {
                  p_1 = ATgetFirst((ATermList) w_12);
                  {
                    ATerm y_12 = (ATerm) ATgetNext((ATermList) w_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm z_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
              ATerm q_2 (ATerm t)
              {
                ATerm l_21 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    l_21 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_21;
                return(t);
              }
              t = _2_0(q_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_21 = ATgetArgument(t, 0);
                  j_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(i_21, j_21);
              k_21 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_21);
              ;
              LocalPopChoice(a_13);
            }
          else
            {
              t = z_12;
              {
                ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
                ATerm r_2 (ATerm t)
                {
                  ATerm p_21 = NULL;
                  p_21 = t;
                  t = SSL_is_string(p_21);
                  return(t);
                }
                t = _2_0(r_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    m_21 = ATgetArgument(t, 0);
                    n_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_21, n_21);
                o_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_21 = NULL;
      t_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_21, term_h_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      {
        ATerm s_2 (ATerm t)
        {
          t = term_t_13;
          return(t);
        }
        t = debug_1_0(s_2, t);
        _fail(t);
      }
    }
  q_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(s_21);
  r_21 = t;
  t = q_21;
  t = fclose_0_0(t);
  t = r_21;
  return(t);
}
ATerm split_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  t = g_83(t);
  w_21 = t;
  t = v_21;
  t = h_83(t);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  y_21 = t;
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              z_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(t_2, t);
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = term_y_13;
        z_21 = t;
      }
    t = y_21;
    {
      ATerm u_2 (ATerm t)
      {
        t = not_null(z_21);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, u_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm b_22 = NULL;
    b_22 = t;
    if(match_string(t, "-k"))
      {
        t = b_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_22;
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm c_22 = NULL,d_22 = NULL;
    c_22 = t;
    t = SSL_string_to_int(c_22);
    d_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_22);
    t = c_22;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_z_13;
    return(t);
  }
  t = ArgOption_3_0(v_2, y_2, b_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm f_22 = NULL;
        f_22 = t;
        if(match_string(t, "-S"))
          {
            t = f_22;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_22;
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_f_14;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_g_14;
        return(t);
      }
      t = Option_3_0(c_3, d_3, e_3, t);
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              ATerm g_22 = NULL,h_22 = NULL;
              g_22 = t;
              t = SSL_string_to_int(g_22);
              h_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_22);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_22);
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_j_14;
              return(t);
            }
            t = ArgOption_3_0(k_3, l_3, n_3, t);
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm t_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm v_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_k_14;
                return(t);
              }
              ATerm x_3 (ATerm t)
              {
                t = term_l_14;
                return(t);
              }
              t = Option_3_0(t_3, v_3, x_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm j_22 = NULL;
    j_22 = t;
    if(match_string(t, "-o"))
      {
        t = j_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = j_22;
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm k_22 = NULL;
    k_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_22);
    t = (ATerm) ATmakeAppl(sym_Output_1, k_22);
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_o_14;
    return(t);
  }
  t = ArgOption_3_0(y_3, z_3, e_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm f_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_r_14;
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          t = term_t_14;
          return(t);
        }
        t = Option_3_0(f_4, i_4, j_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  n_22 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_22;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm v_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_22 = ATgetFirst((ATermList) t);
          p_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_22 = ATgetFirst((ATermList) t);
          r_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_22;
      t = g_0(t);
      t = q_22;
      t = h_0(t);
      v_22 = t;
      t = (ATerm) ATinsert(CheckATermList(r_22), v_22);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm x_22 = NULL;
    x_22 = t;
    if(match_string(t, "-i"))
      {
        t = x_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = x_22;
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm y_22 = NULL;
    y_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_22);
    t = (ATerm) ATmakeAppl(sym_Input_1, y_22);
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_u_14;
    return(t);
  }
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_8;
  t = whoami_0_0(t);
  z_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_22));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t)
{
  ATerm a_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_90(t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = a_15;
      {
        ATerm c_23 = NULL,d_23 = NULL,g_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_23 = ATgetFirst((ATermList) t);
            d_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_23;
        t = foldr_2_0(u_90, v_90, t);
        g_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_23, g_23);
        t = v_90(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  t = SSL_explode_term(h_23);
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_23;
  t = foldr_2_0(s_88, t_88, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = times_0_0(t);
  {
    ATerm n_4 (ATerm t)
    {
      t = term_c_14;
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm k_23 = NULL,l_23 = NULL;
      if(match_cons(t, sym__2))
        {
          k_23 = ATgetArgument(t, 0);
          l_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_23, l_23);
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            t = SSL_addr(k_23, l_23);
          }
      }
      return(t);
    }
    t = crush_2_0(n_4, o_4, t);
    j_23 = t;
    t = SSL_TicksToSeconds(j_23);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_23;
        if((v_23 != t))
          {
            _fail(t);
          }
        t = u_23;
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        t = u_23;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_23, w_23);
              ;
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              t = SSL_gtr(v_23, w_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm z_23 = NULL,a_24 = NULL;
    z_23 = t;
    t = term_w_11;
    t = get_config_0_0(t);
    a_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_24, term_a_16);
    t = geq_0_0(t);
    t = z_23;
    t = m_102(t);
    return(t);
  }
  t = try_1_0(p_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm c_24 = NULL,d_24 = NULL;
    t = run_time_0_0(t);
    c_24 = t;
    t = term_h_8;
    t = whoami_0_0(t);
    d_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_24), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_24));
    t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), c_24), term_c_16), d_24));
    return(t);
  }
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm j_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = j_16;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm p_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = p_16;
              {
                ATerm r_16 = t;
                int x_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(x_16);
                  }
                else
                  {
                    t = r_16;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(r_4, t);
      }
    }
  t = j_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_24 = ATgetFirst((ATermList) t);
      h_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_24 = NULL,m_24 = NULL;
        t = h_24;
        t = f_0(t);
        l_24 = t;
        t = g_24;
        t = e_0(t);
        m_24 = t;
        t = h_24;
        {
          ATerm s_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_24), m_24);
            return(t);
          }
          t = reverse_acc_2_0(e_0, s_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_8;
      t = f_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, v_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  q_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_24);
  n_24 = t;
  t = o_24;
  t = o_77(t);
  p_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_24), n_24);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm w_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(w_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_g_17;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm u_24 = NULL;
      u_24 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, u_24), term_h_17);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(x_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  y_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_24);
  v_24 = t;
  t = w_24;
  t = p_77(t);
  x_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, x_24), v_24);
  return(t);
}
ATerm fetch_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm c_25 (ATerm t)
  {
    ATerm i_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(f_86, _id, t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = i_17;
        t = Cons_2_0(_id, c_25, t);
      }
    return(t);
  }
  t = c_25(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  t = fetch_1_0(j_106, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  e_25 = t;
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_17 = ATgetFirst((ATermList) t);
                ATerm v_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_25;
          }
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = (ATerm) ATinsert(ATempty, e_25);
      }
    f_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), f_25);
    t = e_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_14;
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
  ATerm w_17 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_i_18;
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_j_18;
        return(t);
      }
      t = Option_3_0(y_4, d_5, e_5, t);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = w_17;
      {
        ATerm f_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_18;
          return(t);
        }
        ATerm h_5 (ATerm t)
        {
          t = term_n_18;
          return(t);
        }
        t = Option_3_0(f_5, g_5, h_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__3))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
      n_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_25, m_25);
  {
    ATerm o_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            ATerm z_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_25, m_25);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = o_18;
        t = (ATerm) ATempty;
      }
    o_25 = t;
    t = SSL_table_put(l_25, m_25, (ATerm) ATinsert(CheckATermList(o_25), n_25));
    t = (ATerm) ATmakeAppl(sym__3, l_25, m_25, n_25);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm t_25 = NULL;
  t = term_h_8;
  t = o_107(t);
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_19, term_b_19, t_25);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_25;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm a_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_25 = ATgetFirst((ATermList) t);
          x_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_25;
      t = a_0(t);
      t = term_h_8;
      t = b_0(t);
      a_26 = t;
      t = (ATerm) ATinsert(CheckATermList(x_25), a_26);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm c_26 = NULL;
    c_26 = t;
    if(match_string(t, "--help"))
      {
        t = c_26;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = c_26;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = c_26;
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_d_19;
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_e_19;
    return(t);
  }
  t = Option_3_0(i_5, j_5, k_5, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  {
    ATerm l_5 (ATerm t)
    {
      t = term_f_19;
      t = m_107(t);
      return(t);
    }
    t = try_1_0(l_5, t);
    t = g_26;
    {
      ATerm n_5 (ATerm t)
      {
        ATerm h_26 = NULL;
        h_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_26);
        t = (ATerm) ATmakeAppl(sym_Program_1, h_26);
        return(t);
      }
      ATerm o_5 (ATerm t)
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_19);
              }
            else
              {
                t = l_19;
                t = m_107(t);
                t = Cons_2_0(_id, o_5, t);
              }
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm j_26 = NULL,k_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_26 = ATgetFirst((ATermList) t);
                  k_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_26), (ATerm) ATmakeAppl(sym_Undefined_1, j_26));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_5, o_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  q_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = q_26;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm p_19 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_107(t);
          ;
          LocalPopChoice(l_20);
        }
      else
        {
          t = p_19;
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_5, t);
    {
      ATerm q_5 (ATerm t)
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_26 = NULL;
            x_26 = t;
            {
              ATerm q_20 = t;
              int r_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_26;
                  {
                    ATerm t_20 = t;
                    int u_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_o_16;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(u_20);
                      }
                    else
                      {
                        t = t_20;
                        {
                          ATerm r_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(r_5, t);
                        }
                      }
                    t = x_26;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(r_20);
                }
              else
                {
                  t = q_20;
                  t = term_f_18;
                  t = get_config_0_0(t);
                  t = x_26;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  r_26 = t;
                  return(t);
                }
                t = Undefined_1_0(t_5, t);
                return(t);
              }
              t = option_defined_1_0(s_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_26)), term_x_20));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(q_5, t);
      s_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = s_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm t)
{
  ATerm m_5 = NULL;
  t = parse_options_1_0(l_105, t);
  m_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), m_5);
  t = m_5;
  t = n_105(t);
  {
    ATerm e_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_105, t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = e_21;
        {
          ATerm h_21 = t;
          int u_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_21);
            }
          else
            {
              t = h_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm a_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_105(t);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = a_22;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(a_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(u_5, c_105, d_105, v_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm a_27 = NULL,b_27 = NULL;
      a_27 = t;
      t = term_z_14;
      t = get_config_0_0(t);
      b_27 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_27));
      t = a_27;
      return(t);
    }
    t = if_verbose2_1_0(x_5, t);
    return(t);
  }
  t = iowrap_4_0(u_104, v_104, w_104, w_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm t)
{
  t = iowrap_3_0(s_104, t_104, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    t = _2_0(_id, p_104, t);
    return(t);
  }
  t = iowrap_2_0(y_5, _fail, t);
  return(t);
}
ATerm dead_var_elim_io_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        t = Signature_1_0(_id, t);
        return(t);
      }
      ATerm d_6 (ATerm t)
      {
        ATerm e_6 (ATerm t)
        {
          ATerm h_6 (ATerm t)
          {
            ATerm i_6 (ATerm t)
            {
              t = dead_var_elim_0_0(t);
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm k_6 (ATerm t)
                  {
                    ATerm c_27 = NULL,d_27 = NULL;
                    c_27 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        d_27 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(c_27);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm i_22 = ATgetFirst((ATermList) t);
                        ATerm l_22 = (ATerm) ATgetNext((ATermList) t);
                        if(((ATgetType(l_22) != AT_LIST) || !(ATisEmpty(l_22))))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_27);
                    return(t);
                  }
                  t = try_1_0(k_6, t);
                  return(t);
                }
                t = topdown_1_0(j_6, t);
              }
              return(t);
            }
            t = map_1_0(i_6, t);
            return(t);
          }
          t = Strategies_1_0(h_6, t);
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(e_6, g_6, t);
        return(t);
      }
      t = Cons_2_0(c_6, d_6, t);
      return(t);
    }
    t = Specification_1_0(b_6, t);
    return(t);
  }
  t = iowrap_1_0(z_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_var_elim_io_0_0(t);
  return(t);
}

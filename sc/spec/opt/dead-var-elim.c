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
ATerm term_f_24;
ATerm term_d_24;
ATerm term_f_23;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_j_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_a_14;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_q_11;
ATerm term_l_10;
ATerm term_r_7;
ATerm term_m_7;
ATerm term_g_7;
void init_constant_terms (void)
{
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__3, term_c_21, term_d_21, term_g_7);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm topdown_1_0 (ATerm o_86 (ATerm), ATerm);
ATerm all_rl_1_0 (ATerm t_84 (ATerm), ATerm);
ATerm Match_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm EliminateFromMatch_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm);
ATerm elim_guardedlchoice_1_0 (ATerm p_84 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm);
ATerm elim_lchoice_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm);
ATerm isect_ElimVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm save_ElimVar_0_0 (ATerm);
ATerm elim_abstract_choice_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm);
ATerm elim_choice_1_0 (ATerm n_84 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm alltd_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm reverse_map_1_0 (ATerm s_92 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm);
ATerm Build_1_0 (ATerm j_76 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm);
ATerm elim_sdef_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm ElimVar_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm);
ATerm assert_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm x_98 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm scope_2_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm t_71 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm _2_0 (ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm h_108 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm j_111 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_93 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_109 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm h_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_84 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm k_114 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm j_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm);
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
  t = term_g_7;
  t = whoami_0_0(t);
  k_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_0;
  return(t);
}
ATerm topdown_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  t = o_86(t);
  {
    ATerm l_0 (ATerm t)
    {
      t = topdown_1_0(o_86, t);
      return(t);
    }
    t = SRTS_all(l_0, t);
  }
  return(t);
}
ATerm all_rl_1_0 (ATerm t_84 (ATerm), ATerm t)
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
  t = reverse_map_1_0(t_84, t);
  w_0 = t;
  t = SSL_mkterm(p_0, w_0);
  return(t);
}
ATerm Match_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL;
  e_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_1);
  x_0 = t;
  t = c_1;
  t = i_76(t);
  d_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, d_1), x_0);
  return(t);
}
ATerm EliminateFromMatch_0_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      ATerm p_1 = NULL,r_1 = NULL,v_2 = NULL,w_2 = NULL;
      v_2 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_2;
            p_1 = t;
            t = SSLgetAnnotations(v_2);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_7 = ATgetFirst((ATermList) t);
                if((ATgetSymbol((ATermAppl) k_7) != ATmakeSymbol("bound", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm l_7 = (ATerm) ATgetNext((ATermList) t);
                  if(((ATgetType(l_7) != AT_LIST) || !(ATisEmpty(l_7))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = v_2;
            ;
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            t = w_2;
            p_1 = t;
            t = SSLgetAnnotations(v_2);
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_2;
          }
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_m_7, (ATerm)ATmakeAppl(sym_Var_1, p_1), term_r_7);
        t = table_replace_0_0(t);
        t = r_1;
      }
      return(t);
    }
    t = alltd_1_0(n_0, t);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm y_2 = NULL,z_2 = NULL;
        y_2 = t;
        if(match_cons(t, sym_Var_1))
          {
            z_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_7 = ATgetFirst((ATermList) t);
            ATerm u_7 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(u_7) != AT_LIST) || !(ATisEmpty(u_7))))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, z_2);
        t = ElimVar_0_0(t);
        return(t);
      }
      t = alltd_1_0(q_0, t);
    }
    return(t);
  }
  t = Match_1_0(m_0, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  m_3 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
      i_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  d_3 = t;
  t = f_3;
  t = v_76(t);
  j_3 = t;
  t = g_3;
  t = w_76(t);
  k_3 = t;
  t = i_3;
  t = x_76(t);
  l_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, j_3, k_3, l_3), d_3);
  return(t);
}
ATerm elim_guardedlchoice_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm r_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, p_84, _id, t);
      t = GuardedLChoice_3_0(p_84, _id, _id, t);
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, p_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(r_0, t_0, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  c_4 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      v_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  u_3 = t;
  t = v_3;
  t = r_76(t);
  a_4 = t;
  t = z_3;
  t = s_76(t);
  b_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, a_4, b_4), u_3);
  return(t);
}
ATerm elim_lchoice_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm u_0 (ATerm t)
    {
      t = LChoice_2_0(o_84, _id, t);
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      t = LChoice_2_0(_id, o_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(u_0, v_0, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,j_4 = NULL,k_4 = NULL,n_4 = NULL,z_4 = NULL,a_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_Choice_2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_5);
  g_4 = t;
  t = j_4;
  t = p_75(t);
  n_4 = t;
  t = k_4;
  t = q_75(t);
  z_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, n_4, z_4), g_4);
  return(t);
}
ATerm isect_ElimVar_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  ATerm y_0 (ATerm t)
  {
    ATerm v_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 (ATerm z_5, ATerm a_6, ATerm t)
        {
          t = a_6;
          {
            ATerm y_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), z_5);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm a_8 = ATgetFirst((ATermList) t);
                    if(match_cons(a_8, sym_Defined_1))
                      {
                        ATerm f_8 = ATgetArgument(a_8, 0);
                      }
                    else
                      _fail(t);
                    {
                      ATerm e_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = a_6;
                ;
                LocalPopChoice(z_7);
              }
            else
              {
                t = y_7;
                t = (ATerm) ATmakeAppl(sym__2, z_5, (ATerm) ATinsert(ATempty, term_r_7));
              }
          }
          return(t);
        }
        ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
        l_6 = t;
        if(match_cons(t, sym__2))
          {
            m_6 = ATgetArgument(t, 0);
            n_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_6;
        {
          ATerm j_8 = t;
          int k_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_6 = ATgetFirst((ATermList) t);
                  {
                    ATerm n_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(k_8);
              t = o_6;
              {
                ATerm o_8 = t;
                int s_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm t_8 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_8);
                    t = m_6;
                    if(match_cons(t, sym_Scopes_0))
                      {
                        ATerm u_8 = t;
                        int v_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = l_6;
                            ;
                            LocalPopChoice(v_8);
                          }
                        else
                          {
                            t = u_8;
                            t = b_7(m_6, l_6, t);
                          }
                      }
                    else
                      {
                        t = b_7(m_6, l_6, t);
                      }
                  }
                else
                  {
                    t = o_8;
                    t = m_6;
                    if(!(match_cons(t, sym_Scopes_0)))
                      _fail(t);
                    t = l_6;
                  }
              }
            }
          else
            {
              t = j_8;
              t = m_6;
              if(!(match_cons(t, sym_Scopes_0)))
                _fail(t);
              t = l_6;
            }
        }
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = v_7;
      }
    return(t);
  }
  t = map_1_0(y_0, t);
  w_5 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, w_5);
  t = table_putlist_0_0(t);
  t = w_5;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym__2))
    {
      o_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm p_7 = NULL,t_7 = NULL;
      if(match_cons(t, sym__2))
        {
          p_7 = ATgetArgument(t, 0);
          t_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(o_7, p_7, t_7);
      t = (ATerm) ATmakeAppl(sym__3, o_7, p_7, t_7);
      return(t);
    }
    t = map_1_0(z_0, t);
  }
  return(t);
}
ATerm save_ElimVar_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  {
    ATerm a_1 (ATerm t)
    {
      ATerm o_1 = NULL,q_1 = NULL;
      o_1 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), o_1);
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_1, q_1);
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm elim_abstract_choice_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,g_8 = NULL,h_8 = NULL;
  b_8 = t;
  t = save_ElimVar_0_0(t);
  c_8 = t;
  t = b_8;
  t = q_84(t);
  d_8 = t;
  t = save_ElimVar_0_0(t);
  g_8 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, c_8);
  t = table_putlist_0_0(t);
  t = d_8;
  t = r_84(t);
  h_8 = t;
  t = g_8;
  t = isect_ElimVar_0_0(t);
  t = h_8;
  return(t);
}
ATerm elim_choice_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm b_1 (ATerm t)
    {
      t = Choice_2_0(n_84, _id, t);
      return(t);
    }
    ATerm f_1 (ATerm t)
    {
      t = Choice_2_0(_id, n_84, t);
      return(t);
    }
    t = elim_abstract_choice_2_0(b_1, f_1, t);
  }
  return(t);
}
ATerm Seq_2_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,l_8 = NULL,m_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  r_8 = t;
  if(match_cons(t, sym_Seq_2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_8);
  i_8 = t;
  t = l_8;
  t = p_76(t);
  p_8 = t;
  t = m_8;
  t = q_76(t);
  q_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, p_8, q_8), i_8);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__3))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
      b_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(z_8, a_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_8 = ATgetFirst((ATermList) t);
      d_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(z_8, a_9, (ATerm) ATinsert(CheckATermList(d_9), b_9));
  t = (ATerm) ATmakeAppl(sym__3, z_8, a_9, b_9);
  return(t);
}
ATerm alltd_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm k_9 (ATerm t)
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_88(t);
        ;
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        t = SRTS_all(k_9, t);
      }
    return(t);
  }
  t = k_9(t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm s_92 (ATerm), ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        t = reverse_map_1_0(s_92, t);
        return(t);
      }
      t = Cons_2_0(_id, g_1, t);
      t = Cons_2_0(s_92, _id, t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  b_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
      t_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_10);
  n_9 = t;
  t = o_9;
  t = f_76(t);
  u_9 = t;
  t = r_9;
  t = g_76(t);
  z_9 = t;
  t = t_9;
  t = h_76(t);
  a_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, u_9, z_9, a_10), n_9);
  return(t);
}
ATerm PrimT_3_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,j_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,t_10 = NULL,u_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      j_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
      o_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_10);
  g_10 = t;
  t = j_10;
  t = h_77(t);
  p_10 = t;
  t = n_10;
  t = i_77(t);
  q_10 = t;
  t = o_10;
  t = j_77(t);
  t_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, p_10, q_10, t_10), g_10);
  return(t);
}
ATerm Build_1_0 (ATerm j_76 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,f_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym_Build_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_11);
  a_11 = t;
  t = b_11;
  t = j_76(t);
  c_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, c_11), a_11);
  return(t);
}
ATerm SDefT_4_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,w_11 = NULL,b_12 = NULL,f_12 = NULL,h_12 = NULL,j_12 = NULL,n_12 = NULL;
  n_12 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
      o_11 = ATgetArgument(t, 2);
      w_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  l_11 = t;
  t = m_11;
  t = t_78(t);
  b_12 = t;
  t = n_11;
  t = u_78(t);
  f_12 = t;
  t = o_11;
  t = v_78(t);
  h_12 = t;
  t = w_11;
  t = w_78(t);
  j_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, b_12, f_12, h_12, j_12), l_11);
  return(t);
}
ATerm elim_sdef_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm g_9 = ATgetArgument(t, 0);
      ATerm h_9 = ATgetArgument(t, 1);
      ATerm i_9 = ATgetArgument(t, 2);
      ATerm j_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm h_1 (ATerm t)
    {
      t = term_m_7;
      return(t);
    }
    ATerm i_1 (ATerm t)
    {
      ATerm j_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm v_12 = NULL,w_12 = NULL;
          v_12 = t;
          if(match_cons(t, sym_VarDec_2))
            {
              w_12 = ATgetArgument(t, 0);
              {
                ATerm l_9 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_12), term_r_7);
          {
            ATerm l_1 (ATerm t)
            {
              t = term_m_7;
              return(t);
            }
            t = assert_1_0(l_1, t);
            t = v_12;
          }
          return(t);
        }
        t = map_1_0(k_1, t);
        return(t);
      }
      t = SDefT_4_0(_id, _id, j_1, u_84, t);
      return(t);
    }
    t = scope_2_0(h_1, i_1, t);
  }
  return(t);
}
ATerm ElimVar_0_0 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm m_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), u_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_1 = ATgetFirst((ATermList) t);
            {
              ATerm v_9 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = w_1;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = q_9;
        {
          ATerm x_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_1 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), u_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_1 = ATgetFirst((ATermList) t);
                  {
                    ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = z_1;
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
                ATerm e_10 = t;
                int f_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_2 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), u_13);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        d_2 = ATgetFirst((ATermList) t);
                        {
                          ATerm h_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = d_2;
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(f_10);
                  }
                else
                  {
                    t = e_10;
                    {
                      ATerm g_2 = NULL;
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue)), u_13);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          g_2 = ATgetFirst((ATermList) t);
                          {
                            ATerm i_10 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = g_2;
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm k_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) k_10) != ATmakeSymbol("c_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = term_l_10;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm m_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = m_10;
      {
        ATerm s_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = filter_1_0(e_99, t);
              return(t);
            }
            t = Cons_2_0(e_99, m_1, t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = s_10;
            {
              ATerm e_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_10 = ATgetFirst((ATermList) t);
                  e_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_14;
              t = filter_1_0(e_99, t);
            }
          }
      }
    }
  return(t);
}
ATerm Scope_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,j_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  n_14 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_14);
  g_14 = t;
  t = h_14;
  t = l_76(t);
  l_14 = t;
  t = j_14;
  t = m_76(t);
  m_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, l_14, m_14), g_14);
  return(t);
}
ATerm assert_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      q_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_99(t);
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_14, q_14, r_14);
  t = table_push_0_0(t);
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_14 = ATgetFirst((ATermList) t);
        u_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_14), (ATerm) ATinsert(CheckATermList(t_14), q_14)));
    t = (ATerm) ATmakeAppl(sym__2, q_14, r_14);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_10 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_11 = ATgetArgument(t, 0);
            ATerm g_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_14, y_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_11 = ATgetFirst((ATermList) t);
            k_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_2;
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATempty;
      }
    z_14 = t;
    t = SSL_table_put(x_14, y_14, z_14);
    t = (ATerm) ATmakeAppl(sym__2, x_14, y_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  f_15 = t;
  t = x_98(t);
  g_15 = t;
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_15 = ATgetFirst((ATermList) t);
        h_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_15, (ATerm)ATmakeAppl(sym_Scopes_0), h_15);
    t = i_15;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm j_15 = NULL;
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_15, j_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(n_1, t);
      t = f_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm k_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_89(t);
      t = w_89(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = k_11;
      t = w_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  t = w_98(t);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_15, term_q_11);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_11 = ATgetArgument(t, 0);
            ATerm u_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATempty;
      }
    o_15 = t;
    t = SSL_table_put(n_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_15), (ATerm) ATempty));
    t = m_15;
  }
  return(t);
}
ATerm scope_2_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t)
{
  t = begin_scope_1_0(y_98, t);
  {
    ATerm s_1 (ATerm t)
    {
      t = end_scope_1_0(y_98, t);
      return(t);
    }
    t = restore_always_2_0(z_98, s_1, t);
  }
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm v_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_15 = NULL;
      x_15 = t;
      if(match_cons(t, sym_Scope_2))
        {
          ATerm y_11 = ATgetArgument(t, 0);
          ATerm z_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_15;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_m_7;
          return(t);
        }
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm a_16 = NULL;
              a_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_16), term_c_12);
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_m_7;
                  return(t);
                }
                t = assert_1_0(y_1, t);
                t = a_16;
              }
              return(t);
            }
            t = map_1_0(x_1, t);
            return(t);
          }
          t = Scope_2_0(v_1, dead_var_elim_0_0, t);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                ATerm d_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_16 = NULL;
                    e_16 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_16);
                    t = ElimVar_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_12;
                  }
                return(t);
              }
              t = filter_1_0(b_2, t);
              return(t);
            }
            t = Scope_2_0(a_2, _id, t);
          }
          return(t);
        }
        t = scope_2_0(t_1, u_1, t);
      }
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = v_11;
      {
        ATerm e_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = elim_sdef_1_0(dead_var_elim_0_0, t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = e_12;
            {
              ATerm i_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 (ATerm t)
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm f_16 = NULL;
                      if(match_cons(t, sym_Var_1))
                        {
                          f_16 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__3, term_m_7, (ATerm)ATmakeAppl(sym_Var_1, f_16), term_r_7);
                      t = table_replace_0_0(t);
                      t = (ATerm) ATmakeAppl(sym_Var_1, f_16);
                      return(t);
                    }
                    t = alltd_1_0(e_2, t);
                    return(t);
                  }
                  t = Build_1_0(c_2, t);
                  ;
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = i_12;
                  {
                    ATerm l_12 = t;
                    int m_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_2 (ATerm t)
                        {
                          t = reverse_map_1_0(dead_var_elim_0_0, t);
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm i_2 (ATerm t)
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm g_16 = NULL;
                              if(match_cons(t, sym_Var_1))
                                {
                                  g_16 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__3, term_m_7, (ATerm)ATmakeAppl(sym_Var_1, g_16), term_r_7);
                              t = table_replace_0_0(t);
                              t = (ATerm) ATmakeAppl(sym_Var_1, g_16);
                              return(t);
                            }
                            t = alltd_1_0(j_2, t);
                            return(t);
                          }
                          t = reverse_map_1_0(i_2, t);
                          return(t);
                        }
                        t = PrimT_3_0(_id, f_2, h_2, t);
                        ;
                        LocalPopChoice(m_12);
                      }
                    else
                      {
                        t = l_12;
                        {
                          ATerm o_12 = t;
                          int p_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_2 (ATerm t)
                              {
                                t = reverse_map_1_0(dead_var_elim_0_0, t);
                                return(t);
                              }
                              ATerm m_2 (ATerm t)
                              {
                                ATerm n_2 (ATerm t)
                                {
                                  ATerm o_2 (ATerm t)
                                  {
                                    ATerm h_16 = NULL;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        h_16 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__3, term_m_7, (ATerm)ATmakeAppl(sym_Var_1, h_16), term_r_7);
                                    t = table_replace_0_0(t);
                                    t = (ATerm) ATmakeAppl(sym_Var_1, h_16);
                                    return(t);
                                  }
                                  t = alltd_1_0(o_2, t);
                                  return(t);
                                }
                                t = reverse_map_1_0(n_2, t);
                                return(t);
                              }
                              t = CallT_3_0(_id, l_2, m_2, t);
                              ;
                              LocalPopChoice(p_12);
                            }
                          else
                            {
                              t = o_12;
                              {
                                ATerm q_12 = t;
                                int r_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(_id, dead_var_elim_0_0, t);
                                    t = Seq_2_0(dead_var_elim_0_0, _id, t);
                                    ;
                                    LocalPopChoice(r_12);
                                  }
                                else
                                  {
                                    t = q_12;
                                    {
                                      ATerm s_12 = t;
                                      int t_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = elim_choice_1_0(dead_var_elim_0_0, t);
                                          ;
                                          LocalPopChoice(t_12);
                                        }
                                      else
                                        {
                                          t = s_12;
                                          {
                                            ATerm u_12 = t;
                                            int x_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = elim_lchoice_1_0(dead_var_elim_0_0, t);
                                                ;
                                                LocalPopChoice(x_12);
                                              }
                                            else
                                              {
                                                t = u_12;
                                                {
                                                  ATerm y_12 = t;
                                                  int z_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = elim_guardedlchoice_1_0(dead_var_elim_0_0, t);
                                                      ;
                                                      LocalPopChoice(z_12);
                                                    }
                                                  else
                                                    {
                                                      t = y_12;
                                                      {
                                                        ATerm a_13 = t;
                                                        int b_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = EliminateFromMatch_0_0(t);
                                                            ;
                                                            LocalPopChoice(b_13);
                                                          }
                                                        else
                                                          {
                                                            t = a_13;
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
ATerm map_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm j_16 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = Cons_2_0(p_92, j_16, t);
      }
    return(t);
  }
  t = j_16(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  o_16 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_16);
  k_16 = t;
  t = m_16;
  t = t_71(t);
  n_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, n_16), k_16);
  return(t);
}
ATerm Cons_2_0 (ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  w_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_16 = ATgetFirst((ATermList) t);
      t_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_16);
  r_16 = t;
  t = s_16;
  t = p_71(t);
  u_16 = t;
  t = t_16;
  t = q_71(t);
  v_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(v_16), u_16), r_16);
  return(t);
}
ATerm Signature_1_0 (ATerm u_71 (ATerm), ATerm t)
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
  t = u_71(t);
  f_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, f_17), d_17);
  return(t);
}
ATerm Specification_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  n_17 = t;
  t = o_17;
  t = y_71(t);
  p_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, p_17), n_17);
  return(t);
}
ATerm _2_0 (ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  y_17 = t;
  if(match_cons(t, sym__2))
    {
      u_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_17);
  t_17 = t;
  t = u_17;
  t = a_67(t);
  w_17 = t;
  t = v_17;
  t = b_67(t);
  x_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, w_17, x_17), t_17);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_18, term_e_13);
  t = open_stream_0_0(t);
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_18, c_18);
  t = h_108(t);
  t = fclose_0_0(t);
  t = c_18;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm f_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((f_18 != NULL) && (f_18 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_2, t);
          ;
          LocalPopChoice(g_13);
        }
      else
        {
          t = f_13;
          t = term_h_13;
          if(((f_18 != NULL) && (f_18 != t)))
            _fail(t);
          else
            f_18 = t;
        }
      return(t);
    }
    t = _2_0(p_2, _id, t);
    t = e_18;
    {
      ATerm r_2 (ATerm t)
      {
        ATerm o_3 = NULL;
        o_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), o_3);
        return(t);
      }
      t = _2_0(_id, r_2, t);
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm u_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(u_2, t);
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              ATerm x_2 (ATerm t)
              {
                ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm k_13 = ATgetArgument(t, 0);
                    if(match_cons(k_13, sym_Stream_1))
                      {
                        g_18 = ATgetArgument(k_13, 0);
                      }
                    else
                      _fail(t);
                    h_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(g_18, h_18);
                i_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_18);
                return(t);
              }
              t = WriteToFile_1_0(x_2, t);
              return(t);
            }
            t = _2_0(s_2, t_2, t);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm a_3 (ATerm t)
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm l_13 = ATgetArgument(t, 0);
                      if(match_cons(l_13, sym_Stream_1))
                        {
                          j_18 = ATgetArgument(l_13, 0);
                        }
                      else
                        _fail(t);
                      k_18 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(j_18, k_18);
                  l_18 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), l_18);
                  m_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, m_18);
                  return(t);
                }
                t = WriteToFile_1_0(b_3, t);
                return(t);
              }
              t = _2_0(_id, a_3, t);
            }
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
ATerm apply_strategy_1_0 (ATerm j_111 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  n_18 = t;
  t = dtime_0_0(t);
  t = n_18;
  t = j_111(t);
  o_18 = t;
  t = dtime_0_0(t);
  p_18 = t;
  t = o_18;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_18), (ATerm) ATmakeAppl(sym_Runtime_1, p_18)), r_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_19 (ATerm z_18, ATerm t)
  {
    t = SSL_fclose(z_18);
    return(t);
  }
  ATerm c_19 = NULL,d_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_19 = ATgetArgument(t, 0);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_19);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            t = f_19(d_19, t);
          }
      }
    }
  else
    {
      t = f_19(d_19, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_19 = NULL;
  t = SSL_stdin_stream();
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_19 = NULL;
  t = SSL_stdout_stream();
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_19 = NULL;
  t = SSL_stderr_stream();
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_19);
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
        ATerm m_4 = NULL,o_4 = NULL;
        m_4 = t;
        t = SSL_explode_term(m_4);
        if(match_cons(t, sym__2))
          {
            ATerm s_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_13 = ATgetArgument(t, 1);
              if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
                {
                  o_4 = ATgetFirst((ATermList) t_13);
                  {
                    ATerm v_13 = (ATerm) ATgetNext((ATermList) t_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_4;
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
              ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
              ATerm c_3 (ATerm t)
              {
                ATerm q_19 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    q_19 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = q_19;
                return(t);
              }
              t = _2_0(c_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_19 = ATgetArgument(t, 0);
                  o_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(n_19, o_19);
              p_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_19);
              ;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              {
                ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
                ATerm e_3 (ATerm t)
                {
                  ATerm u_19 = NULL;
                  u_19 = t;
                  t = SSL_is_string(u_19);
                  return(t);
                }
                t = _2_0(e_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_19 = ATgetArgument(t, 0);
                    s_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_19, s_19);
                t_19 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_19 = NULL;
      y_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_19, term_a_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm p_4 = NULL;
        p_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_4;
        _fail(t);
      }
    }
  v_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_19);
  w_19 = t;
  t = v_19;
  t = fclose_0_0(t);
  t = w_19;
  return(t);
}
ATerm fetch_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm d_20 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_93, _id, t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = Cons_2_0(_id, d_20, t);
      }
    return(t);
  }
  t = d_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_14 = t;
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
      t = d_14;
      {
        ATerm g_20 = NULL,h_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_20 = ATgetFirst((ATermList) t);
            h_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_20;
        {
          ATerm h_3 (ATerm t)
          {
            t = h_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm o_20 (ATerm t)
  {
    ATerm i_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_20, t);
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = i_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_93(t);
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  ATerm n_3 (ATerm t)
  {
    ATerm r_20 = NULL;
    r_20 = t;
    t = SSL_explode_string(r_20);
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm s_20 = NULL;
    s_20 = t;
    t = SSL_explode_string(s_20);
    return(t);
  }
  t = _2_0(n_3, p_3, t);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL,v_20 = NULL;
        if(match_cons(t, sym__2))
          {
            u_20 = ATgetArgument(t, 0);
            v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_20;
        {
          ATerm q_3 (ATerm t)
          {
            t = v_20;
            return(t);
          }
          t = at_end_1_0(q_3, t);
        }
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm u_4 = NULL,v_4 = NULL;
          u_4 = t;
          t = SSL_explode_term(u_4);
          if(match_cons(t, sym__2))
            {
              ATerm v_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_4;
          t = concat_0_0(t);
        }
      }
    q_20 = t;
    t = SSL_implode_string(q_20);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL;
      f_21 = t;
      t = SSL_is_string(f_21);
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = w_14;
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              ATerm d_15 = t;
              int e_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(e_15);
                }
              else
                {
                  t = d_15;
                }
              return(t);
            }
            t = map_1_0(r_3, t);
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
              j_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_21 = ATgetArgument(t, 0);
                  t = k_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_21 = ATgetArgument(t, 0);
                      t = k_21;
                      {
                        ATerm k_15 = t;
                        int l_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_21);
                            {
                              ATerm p_15 = t;
                              int q_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_5 = NULL;
                                  t = eval_config_0_0(t);
                                  p_5 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_21, p_5);
                                  t = p_5;
                                  ;
                                  LocalPopChoice(q_15);
                                }
                              else
                                {
                                  t = p_15;
                                }
                            }
                            ;
                            LocalPopChoice(l_15);
                          }
                        else
                          {
                            t = k_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_21), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = k_21;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_21 = NULL,q_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_21 = ATgetArgument(t, 0);
                          l_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_21;
                      t = eval_config_0_0(t);
                      p_21 = t;
                      t = l_21;
                      t = eval_config_0_0(t);
                      q_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_109 (ATerm), ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_21 = NULL,x_21 = NULL;
      v_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL;
            t = eval_config_0_0(t);
            x_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_5);
            t = x_5;
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
          }
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_21, term_v_15);
        t = geq_0_0(t);
        t = v_21;
        t = l_109(t);
      }
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
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
  ATerm t_3 (ATerm t)
  {
    ATerm d_22 = NULL,e_22 = NULL;
    d_22 = t;
    t = SSL_string_to_int(d_22);
    e_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), e_22);
    t = d_22;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_w_15;
    return(t);
  }
  t = ArgOption_3_0(s_3, t_3, w_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm i_22 = NULL;
        i_22 = t;
        if(match_string(t, "-S"))
          {
            t = i_22;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_22;
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_c_16;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_d_16;
        return(t);
      }
      t = Option_3_0(x_3, y_3, d_4, t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm i_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              ATerm j_22 = NULL,l_22 = NULL;
              j_22 = t;
              t = SSL_string_to_int(j_22);
              l_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_22);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_22);
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              t = term_p_16;
              return(t);
            }
            t = ArgOption_3_0(e_4, f_4, h_4, t);
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = i_16;
            {
              ATerm i_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm l_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_q_16;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_x_16;
                return(t);
              }
              t = Option_3_0(i_4, l_4, q_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_22 = NULL;
      t = term_g_7;
      t = d_0(t);
      r_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_16, term_z_16, r_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm u_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_22 = ATgetFirst((ATermList) t);
          q_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_22;
      t = a_0(t);
      t = term_g_7;
      t = b_0(t);
      u_22 = t;
      t = (ATerm) ATinsert(CheckATermList(q_22), u_22);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm w_22 = NULL;
    w_22 = t;
    if(match_string(t, "-o"))
      {
        t = w_22;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = w_22;
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm x_22 = NULL;
    x_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), x_22);
    t = (ATerm) ATmakeAppl(sym_Output_1, x_22);
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  if(match_cons(t, sym__3))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
      c_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_23, b_23);
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
        t = SSL_table_get(a_23, b_23);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = (ATerm) ATempty;
      }
    d_23 = t;
    t = SSL_table_put(a_23, b_23, (ATerm) ATinsert(CheckATermList(d_23), c_23));
    t = (ATerm) ATmakeAppl(sym__3, a_23, b_23, c_23);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_23 = NULL;
      t = term_g_7;
      t = j_0(t);
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_16, term_z_16, p_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_23 = ATgetFirst((ATermList) t);
          m_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_23 = ATgetFirst((ATermList) t);
          o_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_23;
      t = g_0(t);
      t = n_23;
      t = h_0(t);
      t_23 = t;
      t = (ATerm) ATinsert(CheckATermList(o_23), t_23);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm v_23 = NULL;
    v_23 = t;
    if(match_string(t, "-i"))
      {
        t = v_23;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = v_23;
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm w_23 = NULL;
    w_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), w_23);
    t = (ATerm) ATmakeAppl(sym_Input_1, w_23);
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_j_17;
    return(t);
  }
  t = ArgOption_3_0(w_4, x_4, y_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_7;
  t = whoami_0_0(t);
  x_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), x_23));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL;
        t = eval_config_0_0(t);
        e_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_6);
        t = e_6;
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm m_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_97(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = m_17;
      {
        ATerm a_24 = NULL,b_24 = NULL,e_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_24 = ATgetFirst((ATermList) t);
            b_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_24;
        t = foldr_2_0(p_97, q_97, t);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_24, e_24);
        t = q_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_24 = NULL,h_6 = NULL,i_6 = NULL;
  t = times_0_0(t);
  h_6 = t;
  t = SSL_explode_term(h_6);
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6;
  {
    ATerm b_5 (ATerm t)
    {
      t = term_b_16;
      return(t);
    }
    ATerm c_5 (ATerm t)
    {
      ATerm q_6 = NULL,r_6 = NULL;
      if(match_cons(t, sym__2))
        {
          q_6 = ATgetArgument(t, 0);
          r_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(q_6, r_6);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = SSL_addr(q_6, r_6);
          }
      }
      return(t);
    }
    t = foldr_2_0(b_5, c_5, t);
    h_24 = t;
    t = SSL_TicksToSeconds(h_24);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_24;
        if((t_24 != t))
          {
            _fail(t);
          }
        t = s_24;
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = s_24;
        {
          ATerm u_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_24, u_24);
              ;
              LocalPopChoice(v_18);
            }
          else
            {
              t = u_18;
              t = SSL_gtr(t_24, u_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_24, u_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = NULL,z_24 = NULL;
      x_24 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            t = eval_config_0_0(t);
            e_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_7);
            t = e_7;
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = y_18;
          }
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_24, term_b_19);
        t = geq_0_0(t);
        t = x_24;
        t = k_109(t);
      }
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm b_25 = NULL,c_25 = NULL;
    t = run_time_0_0(t);
    b_25 = t;
    t = term_g_7;
    t = whoami_0_0(t);
    c_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), b_25), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), c_25));
    t = (ATerm) ATmakeAppl(sym__2, term_e_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_19), b_25), term_j_19), c_25));
    return(t);
  }
  t = if_verbose1_1_0(d_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_7 = NULL;
            t = eval_config_0_0(t);
            j_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), j_7);
            t = j_7;
            ;
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
          }
      }
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              {
                ATerm e_20 = t;
                int f_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(f_20);
                  }
                else
                  {
                    t = e_20;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(e_5, t);
      }
    }
  t = h_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_25 = ATgetFirst((ATermList) t);
      f_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_25 = NULL,k_25 = NULL;
        t = f_25;
        t = f_0(t);
        j_25 = t;
        t = e_25;
        t = e_0(t);
        k_25 = t;
        t = f_25;
        {
          ATerm f_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_25), k_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, f_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_7;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_25);
  l_25 = t;
  t = m_25;
  t = h_84(t);
  n_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_25), l_25);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL;
            t = eval_config_0_0(t);
            q_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_7);
            t = q_7;
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
          }
      }
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm g_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(g_5, t);
      }
    }
  t = term_m_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm h_5 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, h_5, t);
    {
      ATerm i_5 (ATerm t)
      {
        ATerm r_25 = NULL;
        r_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_25), term_n_20);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(i_5, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,v_25 = NULL,w_25 = NULL;
  w_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_25);
  s_25 = t;
  t = t_25;
  t = i_84(t);
  v_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_25), s_25);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  a_26 = t;
  {
    ATerm p_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_26;
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
            t = a_26;
          }
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATinsert(ATempty, a_26);
      }
    b_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_26);
    t = a_26;
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
        ATerm w_7 = NULL;
        t = eval_config_0_0(t);
        w_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_7);
        t = w_7;
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
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_e_21;
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_g_21;
        return(t);
      }
      t = Option_3_0(j_5, k_5, l_5, t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm m_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_h_21;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_i_21;
          return(t);
        }
        t = Option_3_0(m_5, n_5, o_5, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_21;
        t = k_114(t);
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
      }
    t = g_26;
    {
      ATerm q_5 (ATerm t)
      {
        ATerm h_26 = NULL;
        h_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_26);
        t = (ATerm) ATmakeAppl(sym_Program_1, h_26);
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_21 = t;
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
                t = t_21;
                t = k_114(t);
                t = Cons_2_0(_id, r_5, t);
              }
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
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
      t = Cons_2_0(q_5, r_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = r_26;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm w_21 = t;
      int y_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_114(t);
          ;
          LocalPopChoice(y_21);
        }
      else
        {
          t = w_21;
          {
            ATerm z_21 = t;
            int a_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_5 (ATerm t)
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
                ATerm u_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_c_22;
                  return(t);
                }
                ATerm v_5 (ATerm t)
                {
                  t = term_f_22;
                  return(t);
                }
                t = Option_3_0(t_5, u_5, v_5, t);
                ;
                LocalPopChoice(a_22);
              }
            else
              {
                t = z_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_26 = NULL;
          z_26 = t;
          {
            ATerm k_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_26;
                {
                  ATerm n_22 = t;
                  int o_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm s_22 = t;
                        int t_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_9 = NULL;
                            t = eval_config_0_0(t);
                            c_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), c_9);
                            t = c_9;
                            ;
                            LocalPopChoice(t_22);
                          }
                        else
                          {
                            t = s_22;
                          }
                      }
                      ;
                      LocalPopChoice(o_22);
                    }
                  else
                    {
                      t = n_22;
                      {
                        ATerm y_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(y_5, t);
                      }
                    }
                  t = z_26;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_22);
              }
            else
              {
                t = k_22;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_22 = t;
                  int y_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_9 = NULL;
                      t = eval_config_0_0(t);
                      p_9 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), p_9);
                      t = p_9;
                      ;
                      LocalPopChoice(y_22);
                    }
                  else
                    {
                      t = v_22;
                    }
                  t = z_26;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          {
            ATerm z_22 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_6 (ATerm t)
                {
                  ATerm c_6 (ATerm t)
                  {
                    if(((s_26 != NULL) && (s_26 != t)))
                      _fail(t);
                    else
                      s_26 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_6, t);
                  return(t);
                }
                t = fetch_1_0(b_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_e_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_26)), term_f_23));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(e_23);
              }
            else
              {
                t = z_22;
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
ATerm option_wrap_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  ATerm c_27 = NULL;
  t = parse_options_1_0(j_112, t);
  c_27 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_27);
  t = c_27;
  t = l_112(t);
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_112, t);
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
              t = m_112(t);
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
ATerm iowrap_3_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm k_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_111(t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = k_23;
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              {
                ATerm u_23 = t;
                int y_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(y_23);
                  }
                else
                  {
                    t = u_23;
                    {
                      ATerm z_23 = t;
                      int c_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_6 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm k_6 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_d_24;
                            return(t);
                          }
                          ATerm p_6 (ATerm t)
                          {
                            t = term_f_24;
                            return(t);
                          }
                          t = Option_3_0(j_6, k_6, p_6, t);
                          ;
                          LocalPopChoice(c_24);
                        }
                      else
                        {
                          t = z_23;
                          {
                            ATerm g_24 = t;
                            int i_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(i_24);
                              }
                            else
                              {
                                t = g_24;
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
  ATerm f_6 (ATerm t)
  {
    ATerm s_6 (ATerm t)
    {
      ATerm d_27 = NULL,e_27 = NULL;
      d_27 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_9 = NULL;
            t = eval_config_0_0(t);
            w_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_9);
            t = w_9;
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
          }
        e_27 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_27));
        t = d_27;
      }
      return(t);
    }
    t = if_verbose2_1_0(s_6, t);
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm h_27 = NULL,i_27 = NULL,d_10 = NULL;
    h_27 = t;
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_27 != NULL) && (i_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_6, t);
          ;
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          t = term_n_24;
          i_27 = t;
        }
      t = not_null(i_27);
      t = ReadFromFile_0_0(t);
      d_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_27, d_10);
      t = apply_strategy_1_0(s_111, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(d_6, u_111, f_6, g_6, t);
  return(t);
}
ATerm dead_var_elim_io_0_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      ATerm w_6 (ATerm t)
      {
        ATerm x_6 (ATerm t)
        {
          t = Signature_1_0(_id, t);
          return(t);
        }
        ATerm y_6 (ATerm t)
        {
          ATerm z_6 (ATerm t)
          {
            ATerm c_7 (ATerm t)
            {
              ATerm d_7 (ATerm t)
              {
                t = dead_var_elim_0_0(t);
                {
                  ATerm f_7 (ATerm t)
                  {
                    ATerm o_24 = t;
                    int p_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_27 = NULL,q_27 = NULL;
                        p_27 = t;
                        if(match_cons(t, sym_Var_1))
                          {
                            q_27 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_27);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm q_24 = ATgetFirst((ATermList) t);
                            ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
                            if(((ATgetType(r_24) != AT_LIST) || !(ATisEmpty(r_24))))
                              _fail(t);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Var_1, q_27);
                        ;
                        LocalPopChoice(p_24);
                      }
                    else
                      {
                        t = o_24;
                      }
                    return(t);
                  }
                  t = topdown_1_0(f_7, t);
                }
                return(t);
              }
              t = map_1_0(d_7, t);
              return(t);
            }
            t = Strategies_1_0(c_7, t);
            return(t);
          }
          ATerm a_7 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(z_6, a_7, t);
          return(t);
        }
        t = Cons_2_0(x_6, y_6, t);
        return(t);
      }
      t = Specification_1_0(w_6, t);
      return(t);
    }
    t = _2_0(_id, v_6, t);
    return(t);
  }
  t = iowrap_3_0(u_6, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = dead_var_elim_io_0_0(t);
  return(t);
}

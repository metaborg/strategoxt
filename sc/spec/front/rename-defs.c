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
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_List_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Path_2;
Symbol sym_Mod_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
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
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_z_18;
ATerm term_y_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_j_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_q_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_j_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_p_6;
ATerm term_l_6;
ATerm term_u_5;
void init_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_7);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__3, term_u_16, term_v_16, term_l_6);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm RenameVar_0_0 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm assert_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm rewrite_1_0 (ATerm b_109 (ATerm), ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Cify_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm c_97 (ATerm (ATerm), ATerm), ATerm);
ATerm cify_0_0 (ATerm);
ATerm NameMod_0_0 (ATerm);
ATerm foldr_3_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm n_66 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm j_66 (ATerm), ATerm k_66 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm s_66 (ATerm), ATerm);
ATerm _2_0 (ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_103 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_105 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm q_101 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_103 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm e_106 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm v_74 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_74 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm e_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_108 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm k_105 (ATerm), ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm u_1 (ATerm i_1, ATerm t)
  {
    ATerm k_1 = NULL;
    t = i_1;
    {
      ATerm n_0 (ATerm t)
      {
        t = term_u_5;
        return(t);
      }
      t = rewrite_1_0(n_0, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm v_5 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) v_5) != ATmakeSymbol("b_0", 0, ATtrue)))
            _fail(t);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_1;
    }
    return(t);
  }
  ATerm o_1 = NULL,s_1 = NULL;
  o_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_5 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_1;
  {
    ATerm x_5 = t;
    int y_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_5 = ATgetArgument(t, 0);
            ATerm a_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(y_5);
        {
          ATerm b_6 = t;
          int c_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL;
              t = o_1;
              {
                ATerm o_0 (ATerm t)
                {
                  t = term_u_5;
                  return(t);
                }
                t = rewrite_1_0(o_0, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm d_6 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_6) != ATmakeSymbol("i_0", 0, ATtrue)))
                      _fail(t);
                    q_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_0;
              }
              ;
              LocalPopChoice(c_6);
            }
          else
            {
              t = b_6;
              t = u_1(o_1, t);
            }
        }
      }
    else
      {
        t = x_5;
        t = u_1(o_1, t);
      }
  }
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm n_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  q_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      s_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
      n_3 = ATgetArgument(t, 2);
      {
        ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL;
        t = s_3;
        if(match_cons(t, sym_SVar_1))
          {
            t_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_3;
        t = length_0_0(t);
        y_0 = t;
        t = n_3;
        t = length_0_0(t);
        z_0 = t;
        {
          ATerm e_6 = t;
          int f_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, t_3, (ATerm) ATmakeAppl(sym__2, y_0, z_0));
              t = RenameVar_0_0(t);
              a_1 = t;
              ;
              LocalPopChoice(f_6);
            }
          else
            {
              t = e_6;
              t = t_3;
              t = HoArg_0_0(t);
              a_1 = t;
            }
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_1), u_3, n_3);
        }
      }
    }
  else
    {
      ATerm p_1 = NULL,r_1 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          s_3 = ATgetArgument(t, 0);
          u_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_3;
      if(match_cons(t, sym_SVar_1))
        {
          t_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_3;
      t = length_0_0(t);
      p_1 = t;
      {
        ATerm g_6 = t;
        int i_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, t_3, p_1);
            t = RenameVar_0_0(t);
            r_1 = t;
            ;
            LocalPopChoice(i_6);
          }
        else
          {
            t = g_6;
            t = t_3;
            t = HoArg_0_0(t);
            r_1 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_1), u_3);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  t = z_80(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1_0(z_80, t);
      return(t);
    }
    t = SRTS_all(p_0, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_108(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_4, y_3, a_4);
  t = table_push_0_0(t);
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(b_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_4 = ATgetFirst((ATermList) t);
        d_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(b_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATinsert(CheckATermList(c_4), y_3)));
    t = (ATerm) ATmakeAppl(sym__2, y_3, a_4);
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,k_4 = NULL,a_2 = NULL;
  h_4 = t;
  t = term_l_6;
  t = b_109(t);
  k_4 = t;
  t = SSL_table_get(k_4, h_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_2 = ATgetFirst((ATermList) t);
      {
        ATerm m_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_2;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm h_6 = NULL;
  h_6 = t;
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_6;
        {
          ATerm r_0 (ATerm t)
          {
            t = term_p_6;
            return(t);
          }
          t = rewrite_1_0(r_0, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        {
          ATerm q_6 = t;
          int r_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_2 = NULL;
              t = h_6;
              {
                ATerm s_0 (ATerm t)
                {
                  t = term_p_6;
                  return(t);
                }
                t = rewrite_1_0(s_0, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm s_6 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) s_6) != ATmakeSymbol("m_0", 0, ATtrue)))
                      _fail(t);
                    f_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_2;
              }
              ;
              LocalPopChoice(r_6);
            }
          else
            {
              t = q_6;
              {
                ATerm t_6 = t;
                int u_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = h_6;
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = term_p_6;
                        return(t);
                      }
                      t = rewrite_1_0(t_0, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      _fail(t);
                    }
                    ;
                    LocalPopChoice(u_6);
                  }
                else
                  {
                    t = t_6;
                    {
                      ATerm l_2 = NULL;
                      t = h_6;
                      {
                        ATerm u_0 (ATerm t)
                        {
                          t = term_p_6;
                          return(t);
                        }
                        t = rewrite_1_0(u_0, t);
                        if(match_cons(t, sym_Defined_2))
                          {
                            ATerm v_6 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) v_6) != ATmakeSymbol("g_0", 0, ATtrue)))
                              _fail(t);
                            l_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = l_2;
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
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm x_6 = NULL;
    x_6 = t;
    t = SSL_explode_string(x_6);
    return(t);
  }
  t = map_1_0(v_0, t);
  t = concat_0_0(t);
  w_6 = t;
  t = SSL_implode_string(w_6);
  return(t);
}
ATerm Cify_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_7 = ATgetFirst((ATermList) t);
      c_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_7;
  if(match_int(t, 95))
    {
      ATerm e_7 = NULL;
      t = c_7;
      t = l_0(t);
      e_7 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(e_7), term_y_6), term_y_6);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm g_7 = NULL;
          t = c_7;
          t = l_0(t);
          g_7 = t;
          t = (ATerm) ATinsert(CheckATermList(g_7), term_y_6);
        }
      else
        {
          ATerm i_7 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = c_7;
          t = l_0(t);
          i_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(i_7), term_y_6), term_z_6), term_y_6);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm c_97 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL;
  m_7 = t;
  t = SSL_explode_string(m_7);
  {
    ATerm o_7 (ATerm t)
    {
      ATerm a_7 = t;
      int d_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_97(o_7, t);
          ;
          LocalPopChoice(d_7);
        }
      else
        {
          t = a_7;
          {
            ATerm f_7 = t;
            int h_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, o_7, t);
                ;
                LocalPopChoice(h_7);
              }
            else
              {
                t = f_7;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = o_7(t);
    n_7 = t;
    t = SSL_implode_string(n_7);
  }
  return(t);
}
ATerm cify_0_0 (ATerm t)
{
  t = escape_1_0(Cify_1_0, t);
  return(t);
}
ATerm NameMod_0_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym_Mod_2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_7), term_j_7), p_7);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm foldr_3_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_92(t);
      ;
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm u_7 = NULL,v_7 = NULL,y_7 = NULL,c_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_7 = ATgetFirst((ATermList) t);
            v_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_7;
        t = d_92(t);
        y_7 = t;
        t = v_7;
        t = foldr_3_0(b_92, c_92, d_92, t);
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_7, c_8);
        t = c_92(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    t = term_r_7;
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm d_8 = NULL,e_8 = NULL;
    if(match_cons(t, sym__2))
      {
        d_8 = ATgetArgument(t, 0);
        e_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm s_7 = t;
      int t_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(d_8, e_8);
          ;
          LocalPopChoice(t_7);
        }
      else
        {
          t = s_7;
          t = SSL_addr(d_8, e_8);
        }
    }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    t = term_w_7;
    return(t);
  }
  t = foldr_3_0(w_0, x_0, b_1, t);
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,a_10 = NULL,b_10 = NULL;
  w_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      x_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
      b_10 = ATgetArgument(t, 2);
      v_9 = ATgetArgument(t, 3);
      {
        ATerm c_3 = NULL,i_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,x_3 = NULL;
        t = a_10;
        t = length_0_0(t);
        c_3 = t;
        t = b_10;
        t = length_0_0(t);
        i_3 = t;
        t = x_9;
        t = try_1_0(NameMod_0_0, t);
        t = cify_0_0(t);
        o_3 = t;
        t = SSL_int_to_string(c_3);
        p_3 = t;
        t = SSL_int_to_string(i_3);
        r_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_3), term_x_7), p_3), term_x_7), o_3);
        t = concat_strings_0_0(t);
        x_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_9, (ATerm) ATmakeAppl(sym__2, c_3, i_3)), (ATerm) ATmakeAppl(sym_Defined_2, term_z_7, x_3));
        {
          ATerm c_1 (ATerm t)
          {
            t = term_u_5;
            return(t);
          }
          t = assert_1_0(c_1, t);
          t = x_3;
          {
            ATerm a_8 = t;
            int b_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_3 = NULL;
                t = x_9;
                t = HoArg_0_0(t);
                z_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_9, term_f_8);
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = term_p_6;
                    return(t);
                  }
                  t = assert_1_0(d_1, t);
                  t = z_3;
                }
                ;
                LocalPopChoice(b_8);
              }
            else
              {
                t = a_8;
                t = (ATerm) ATmakeAppl(sym__2, x_9, (ATerm) ATmakeAppl(sym_Defined_2, term_g_8, x_3));
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = term_p_6;
                    return(t);
                  }
                  t = assert_1_0(e_1, t);
                  t = x_3;
                }
              }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_3, a_10, b_10, v_9);
          }
        }
      }
    }
  else
    {
      ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          x_9 = ATgetArgument(t, 0);
          a_10 = ATgetArgument(t, 1);
          b_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_10;
      t = length_0_0(t);
      q_4 = t;
      t = x_9;
      t = try_1_0(NameMod_0_0, t);
      t = cify_0_0(t);
      r_4 = t;
      t = SSL_int_to_string(q_4);
      s_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_4), term_x_7), r_4);
      t = concat_strings_0_0(t);
      t_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_9, q_4), (ATerm) ATmakeAppl(sym_Defined_2, term_h_8, t_4));
      {
        ATerm f_1 (ATerm t)
        {
          t = term_u_5;
          return(t);
        }
        t = assert_1_0(f_1, t);
        t = t_4;
        {
          ATerm i_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 = NULL;
              t = x_9;
              t = HoArg_0_0(t);
              u_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_9, term_f_8);
              {
                ATerm g_1 (ATerm t)
                {
                  t = term_p_6;
                  return(t);
                }
                t = assert_1_0(g_1, t);
                t = u_4;
              }
              ;
              LocalPopChoice(j_8);
            }
          else
            {
              t = i_8;
              t = (ATerm) ATmakeAppl(sym__2, x_9, (ATerm) ATmakeAppl(sym_Defined_2, term_k_8, t_4));
              {
                ATerm h_1 (ATerm t)
                {
                  t = term_p_6;
                  return(t);
                }
                t = assert_1_0(h_1, t);
                t = t_4;
              }
            }
          t = (ATerm) ATmakeAppl(sym_SDef_3, t_4, a_10, b_10);
        }
      }
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  {
    ATerm j_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = try_1_0(RenameCall_0_0, t);
        return(t);
      }
      t = topdown_1_0(l_1, t);
      return(t);
    }
    t = map_1_0(j_1, t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm n_66 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  h_10 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_10);
  e_10 = t;
  t = f_10;
  t = n_66(t);
  g_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, g_10), e_10);
  return(t);
}
ATerm Cons_2_0 (ATerm j_66 (ATerm), ATerm k_66 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_10 = ATgetFirst((ATermList) t);
      n_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_10);
  l_10 = t;
  t = m_10;
  t = j_66(t);
  o_10 = t;
  t = n_10;
  t = k_66(t);
  p_10 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_10), o_10), l_10);
  return(t);
}
ATerm Specification_1_0 (ATerm s_66 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  x_10 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_10);
  u_10 = t;
  t = v_10;
  t = s_66(t);
  w_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, w_10), u_10);
  return(t);
}
ATerm _2_0 (ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym__2))
    {
      c_11 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_11);
  b_11 = t;
  t = c_11;
  t = a_65(t);
  e_11 = t;
  t = d_11;
  t = b_65(t);
  f_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, e_11, f_11), b_11);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  t = term_l_6;
  t = whoami_0_0(t);
  l_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_11), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_11;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm o_11 = NULL,p_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_11 = ATgetFirst((ATermList) t);
            p_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_11;
        {
          ATerm m_1 (ATerm t)
          {
            t = p_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  t = SSL_explode_term(t_11);
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_11, t);
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_87(t);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      x_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11;
  {
    ATerm n_1 (ATerm t)
    {
      t = w_11;
      return(t);
    }
    t = at_end_1_0(n_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_11 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm z_11 = NULL;
    z_11 = t;
    t = SSL_explode_string(z_11);
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm a_12 = NULL;
    a_12 = t;
    t = SSL_explode_string(a_12);
    return(t);
  }
  t = _2_0(q_1, t_1, t);
  t = conc_0_0(t);
  y_11 = t;
  t = SSL_implode_string(y_11);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_12 = NULL;
      i_12 = t;
      t = SSL_is_string(i_12);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_1, t);
            ;
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            {
              ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
              m_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_12 = ATgetArgument(t, 0);
                  t = n_12;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_12 = ATgetArgument(t, 0);
                      t = n_12;
                      {
                        ATerm w_8 = t;
                        int x_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_8);
                          }
                        else
                          {
                            t = w_8;
                            {
                              ATerm w_1 (ATerm t)
                              {
                                t = term_y_8;
                                return(t);
                              }
                              t = debug_1_0(w_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_12 = NULL,t_12 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_12 = ATgetArgument(t, 0);
                          o_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_12;
                      t = eval_config_0_0(t);
                      s_12 = t;
                      t = o_12;
                      t = eval_config_0_0(t);
                      t_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_12, t_12);
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
  ATerm w_12 = NULL;
  w_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_12);
  {
    ATerm x_1 (ATerm t)
    {
      ATerm x_12 = NULL;
      t = eval_config_0_0(t);
      x_12 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_12, x_12);
      t = x_12;
      return(t);
    }
    t = try_1_0(x_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm y_12 = NULL,z_12 = NULL;
    y_12 = t;
    t = term_z_8;
    t = get_config_0_0(t);
    z_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_12, term_a_9);
    t = geq_0_0(t);
    t = y_12;
    t = i_103(t);
    return(t);
  }
  t = try_1_0(y_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_9 = ATgetArgument(t, 0);
        if(match_cons(b_9, sym_Stream_1))
          {
            a_13 = ATgetArgument(b_9, 0);
          }
        else
          _fail(t);
        b_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(a_13, b_13);
    c_13 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), c_13);
    d_13 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_13);
    return(t);
  }
  t = WriteToFile_1_0(z_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_13, term_c_9);
  t = open_stream_0_0(t);
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_13, f_13);
  t = e_102(t);
  t = fclose_0_0(t);
  t = f_13;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_9 = ATgetArgument(t, 0);
        if(match_cons(d_9, sym_Stream_1))
          {
            h_13 = ATgetArgument(d_9, 0);
          }
        else
          _fail(t);
        i_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(h_13, i_13);
    j_13 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, j_13);
    return(t);
  }
  t = WriteToFile_1_0(b_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                l_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(d_2, t);
          ;
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
          t = term_g_9;
          l_13 = t;
        }
      return(t);
    }
    t = _2_0(c_2, _id, t);
    t = k_13;
    {
      ATerm e_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          t = not_null(l_13);
          return(t);
        }
        t = split_2_0(g_2, _id, t);
        return(t);
      }
      t = _2_0(_id, e_2, t);
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm i_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(i_2, t);
              return(t);
            }
            t = _2_0(h_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
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
ATerm apply_strategy_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  m_13 = t;
  t = dtime_0_0(t);
  t = m_13;
  t = g_105(t);
  n_13 = t;
  t = dtime_0_0(t);
  o_13 = t;
  t = n_13;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_13), (ATerm) ATmakeAppl(sym_Runtime_1, o_13)), q_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_14 (ATerm y_13, ATerm t)
  {
    t = SSL_fclose(y_13);
    return(t);
  }
  ATerm b_14 = NULL,c_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_14 = ATgetArgument(t, 0);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_14);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            t = e_14(c_14, t);
          }
      }
    }
  else
    {
      t = e_14(c_14, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  t = q_101(t);
  g_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_14), g_14));
  t = f_14;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  t = SSL_stdin_stream();
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_14 = NULL;
  t = SSL_stdout_stream();
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_14 = NULL;
  t = SSL_stderr_stream();
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_14);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_9 = ATgetArgument(t, 0);
      ATerm m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_5 = NULL,n_5 = NULL;
        m_5 = t;
        t = SSL_explode_term(m_5);
        if(match_cons(t, sym__2))
          {
            ATerm p_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_9 = ATgetArgument(t, 1);
              if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
                {
                  n_5 = ATgetFirst((ATermList) q_9);
                  {
                    ATerm r_9 = (ATerm) ATgetNext((ATermList) q_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_5;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
              ATerm j_2 (ATerm t)
              {
                ATerm r_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    r_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_14;
                return(t);
              }
              t = _2_0(j_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_14 = ATgetArgument(t, 0);
                  p_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(o_14, p_14);
              q_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
              ;
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              {
                ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
                ATerm k_2 (ATerm t)
                {
                  ATerm v_14 = NULL;
                  v_14 = t;
                  t = SSL_is_string(v_14);
                  return(t);
                }
                t = _2_0(k_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_14 = ATgetArgument(t, 0);
                    t_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(s_14, t_14);
                u_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  ATerm u_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_14 = NULL;
      z_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_14, term_z_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = u_9;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_c_10;
          return(t);
        }
        t = debug_1_0(m_2, t);
        _fail(t);
      }
    }
  w_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_14);
  x_14 = t;
  t = w_14;
  t = fclose_0_0(t);
  t = x_14;
  return(t);
}
ATerm split_2_0 (ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  t = l_84(t);
  c_15 = t;
  t = b_15;
  t = m_84(t);
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_15, d_15);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  e_15 = t;
  {
    ATerm d_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              f_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(n_2, t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = d_10;
        t = term_j_10;
        f_15 = t;
      }
    t = e_15;
    {
      ATerm o_2 (ATerm t)
      {
        t = not_null(f_15);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, o_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm h_15 = NULL;
    h_15 = t;
    if(match_string(t, "-k"))
      {
        t = h_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = h_15;
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm i_15 = NULL,j_15 = NULL;
    i_15 = t;
    t = SSL_string_to_int(i_15);
    j_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_15);
    t = i_15;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_k_10;
    return(t);
  }
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm l_15 = NULL;
        l_15 = t;
        if(match_string(t, "-S"))
          {
            t = l_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = l_15;
          }
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_t_10;
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_y_10;
        return(t);
      }
      t = Option_3_0(s_2, t_2, u_2, t);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              ATerm m_15 = NULL,n_15 = NULL;
              m_15 = t;
              t = SSL_string_to_int(m_15);
              n_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, m_15);
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              t = term_h_11;
              return(t);
            }
            t = ArgOption_3_0(v_2, w_2, x_2, t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            {
              ATerm y_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_i_11;
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_j_11;
                return(t);
              }
              t = Option_3_0(y_2, z_2, a_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm p_15 = NULL;
    p_15 = t;
    if(match_string(t, "-o"))
      {
        t = p_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = p_15;
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm q_15 = NULL;
    q_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, q_15);
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = ArgOption_3_0(b_3, d_3, e_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm f_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_12;
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_c_12;
          return(t);
        }
        t = Option_3_0(f_3, g_3, h_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  t_15 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_15;
      t = register_usage_1_0(k_0, t);
    }
  else
    {
      ATerm b_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_15 = ATgetFirst((ATermList) t);
          v_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_15 = ATgetFirst((ATermList) t);
          x_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_15;
      t = h_0(t);
      t = w_15;
      t = j_0(t);
      b_16 = t;
      t = (ATerm) ATinsert(CheckATermList(x_15), b_16);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm d_16 = NULL;
    d_16 = t;
    if(match_string(t, "-i"))
      {
        t = d_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = d_16;
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm e_16 = NULL;
    e_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_16);
    t = (ATerm) ATmakeAppl(sym_Input_1, e_16);
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_d_12;
    return(t);
  }
  t = ArgOption_3_0(j_3, k_3, l_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_6;
  t = whoami_0_0(t);
  f_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), f_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_91(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm i_16 = NULL,j_16 = NULL,m_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_16 = ATgetFirst((ATermList) t);
            j_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_16;
        t = foldr_2_0(z_91, a_92, t);
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_16, m_16);
        t = a_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  n_16 = t;
  t = SSL_explode_term(n_16);
  if(match_cons(t, sym__2))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_16;
  t = foldr_2_0(x_89, y_89, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  t = times_0_0(t);
  {
    ATerm m_3 (ATerm t)
    {
      t = term_r_7;
      return(t);
    }
    ATerm v_3 (ATerm t)
    {
      ATerm q_16 = NULL,r_16 = NULL;
      if(match_cons(t, sym__2))
        {
          q_16 = ATgetArgument(t, 0);
          r_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(q_16, r_16);
            ;
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            t = SSL_addr(q_16, r_16);
          }
      }
      return(t);
    }
    t = crush_2_0(m_3, v_3, t);
    p_16 = t;
    t = SSL_TicksToSeconds(p_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_17;
        if((b_17 != t))
          {
            _fail(t);
          }
        t = a_17;
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = a_17;
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_17, c_17);
              ;
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              t = SSL_gtr(b_17, c_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_17, c_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm f_17 = NULL,g_17 = NULL;
    f_17 = t;
    t = term_z_8;
    t = get_config_0_0(t);
    g_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_17, term_w_7);
    t = geq_0_0(t);
    t = f_17;
    t = h_103(t);
    return(t);
  }
  t = try_1_0(w_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm i_17 = NULL,j_17 = NULL;
    t = run_time_0_0(t);
    i_17 = t;
    t = term_l_6;
    t = whoami_0_0(t);
    j_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), i_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), j_17));
    t = (ATerm) ATmakeAppl(sym__2, term_u_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), i_17), term_v_13), j_17));
    return(t);
  }
  t = if_verbose1_1_0(e_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm x_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = x_13;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm d_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(k_14);
            }
          else
            {
              t = d_14;
              {
                ATerm m_14 = t;
                int n_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(n_14);
                  }
                else
                  {
                    t = m_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_4, t);
      }
    }
  t = e_106(t);
  return(t);
}
ATerm map_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm l_17 (ATerm t)
  {
    ATerm a_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = a_15;
        t = Cons_2_0(a_87, l_17, t);
      }
    return(t);
  }
  t = l_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_17 = ATgetFirst((ATermList) t);
      o_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_17 = NULL,t_17 = NULL;
        t = o_17;
        t = f_0(t);
        s_17 = t;
        t = n_17;
        t = e_0(t);
        t_17 = t;
        t = o_17;
        {
          ATerm g_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_17), t_17);
            return(t);
          }
          t = reverse_acc_2_0(e_0, g_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_6;
      t = f_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, i_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm v_74 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  x_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_17);
  u_17 = t;
  t = v_17;
  t = v_74(t);
  w_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, w_17), u_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = k_15;
      {
        ATerm j_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(j_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_r_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm l_4 (ATerm t)
    {
      ATerm b_18 = NULL;
      b_18 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, b_18), term_s_15);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(l_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      d_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  c_18 = t;
  t = d_18;
  t = w_74(t);
  e_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, e_18), c_18);
  return(t);
}
ATerm fetch_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm j_18 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_87, _id, t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = Cons_2_0(_id, j_18, t);
      }
    return(t);
  }
  t = j_18(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  t = fetch_1_0(e_107, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  {
    ATerm a_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_16 = ATgetFirst((ATermList) t);
                ATerm h_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_18;
          }
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = a_16;
        t = (ATerm) ATinsert(ATempty, l_18);
      }
    m_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_18);
    t = l_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_83(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_16;
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_x_16;
        return(t);
      }
      t = Option_3_0(m_4, n_4, o_4, t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        ATerm p_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_16;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_z_16;
          return(t);
        }
        t = Option_3_0(p_4, v_4, w_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__3))
    {
      s_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
      u_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_18, t_18);
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_17 = ATgetArgument(t, 0);
            ATerm k_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_18, t_18);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = (ATerm) ATempty;
      }
    v_18 = t;
    t = SSL_table_put(s_18, t_18, (ATerm) ATinsert(CheckATermList(v_18), u_18));
    t = (ATerm) ATmakeAppl(sym__3, s_18, t_18, u_18);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm a_19 = NULL;
  t = term_l_6;
  t = j_108(t);
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_17, term_p_17, a_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm h_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_19 = ATgetFirst((ATermList) t);
          e_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_19;
      t = a_0(t);
      t = term_l_6;
      t = c_0(t);
      h_19 = t;
      t = (ATerm) ATinsert(CheckATermList(e_19), h_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm j_19 = NULL;
    j_19 = t;
    if(match_string(t, "--help"))
      {
        t = j_19;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = j_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = j_19;
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_q_17;
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  t = Option_3_0(x_4, y_4, z_4, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  {
    ATerm a_5 (ATerm t)
    {
      t = term_y_17;
      t = h_108(t);
      return(t);
    }
    t = try_1_0(a_5, t);
    t = n_19;
    {
      ATerm b_5 (ATerm t)
      {
        ATerm o_19 = NULL;
        o_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_19);
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_18);
              }
            else
              {
                t = g_18;
                t = h_108(t);
                t = Cons_2_0(_id, c_5, t);
              }
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            {
              ATerm q_19 = NULL,r_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_19 = ATgetFirst((ATermList) t);
                  r_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_19), (ATerm) ATmakeAppl(sym_Undefined_1, q_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_5, c_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_19;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm i_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_108(t);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = i_18;
          {
            ATerm n_18 = t;
            int o_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(o_18);
              }
            else
              {
                t = n_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_5, t);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_20 = NULL;
            e_20 = t;
            {
              ATerm r_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_20;
                  {
                    ATerm x_18 = t;
                    int y_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_a_14;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(y_18);
                      }
                    else
                      {
                        t = x_18;
                        {
                          ATerm f_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(f_5, t);
                        }
                      }
                    t = e_20;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(w_18);
                }
              else
                {
                  t = r_18;
                  t = term_v_16;
                  t = get_config_0_0(t);
                  t = e_20;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm g_5 (ATerm t)
              {
                ATerm h_5 (ATerm t)
                {
                  y_19 = t;
                  return(t);
                }
                t = Undefined_1_0(h_5, t);
                return(t);
              }
              t = option_defined_1_0(g_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_u_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_19)), term_z_18));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(e_5, t);
      z_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t)
{
  ATerm t_13 = NULL;
  t = parse_options_1_0(g_106, t);
  t_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), t_13);
  t = t_13;
  t = i_106(t);
  {
    ATerm b_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_106, t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = b_19;
        {
          ATerm g_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = g_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_105(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(v_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(i_5, x_105, y_105, j_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm l_5 (ATerm t)
    {
      ATerm h_20 = NULL,i_20 = NULL;
      h_20 = t;
      t = term_j_12;
      t = get_config_0_0(t);
      i_20 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_20));
      t = h_20;
      return(t);
    }
    t = if_verbose2_1_0(l_5, t);
    return(t);
  }
  t = iowrap_4_0(p_105, q_105, r_105, k_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm t)
{
  t = iowrap_3_0(n_105, o_105, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    t = _2_0(_id, k_105, t);
    return(t);
  }
  t = iowrap_2_0(o_5, _fail, t);
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
      {
        ATerm s_5 (ATerm t)
        {
          t = Strategies_1_0(rename_sdefs_0_0, t);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(s_5, t_5, t);
        return(t);
      }
      t = Cons_2_0(_id, r_5, t);
      return(t);
    }
    t = Specification_1_0(q_5, t);
    return(t);
  }
  t = iowrap_1_0(p_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = rename_defs_0_0(t);
  return(t);
}

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
ATerm term_j_19;
ATerm term_k_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_15;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_d_14;
ATerm term_j_13;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_z_6;
ATerm term_t_6;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
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
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_7);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__3, term_c_17, term_f_17, term_t_6);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm RenameVar_0_0 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm assert_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm rewrite_1_0 (ATerm m_109 (ATerm), ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Cify_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm k_97 (ATerm (ATerm), ATerm), ATerm);
ATerm cify_0_0 (ATerm);
ATerm NameMod_0_0 (ATerm);
ATerm foldr_3_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm u_66 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_66 (ATerm), ATerm);
ATerm _2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_103 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm b_102 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_103 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm p_106 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm c_75 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm d_75 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm u_108 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_108 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm r_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm v_105 (ATerm), ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm d_1 (ATerm u_0, ATerm t)
  {
    ATerm w_0 = NULL;
    t = u_0;
    {
      ATerm n_0 (ATerm t)
      {
        t = term_v_5;
        return(t);
      }
      t = rewrite_1_0(n_0, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm w_5 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) w_5) != ATmakeSymbol("b_0", 0, ATtrue)))
            _fail(t);
          w_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_0;
    }
    return(t);
  }
  ATerm z_0 = NULL,b_1 = NULL;
  z_0 = t;
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_1;
  {
    ATerm a_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_6 = ATgetArgument(t, 0);
            ATerm g_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(e_6);
        {
          ATerm i_6 = t;
          int j_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL;
              t = z_0;
              {
                ATerm o_0 (ATerm t)
                {
                  t = term_v_5;
                  return(t);
                }
                t = rewrite_1_0(o_0, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm l_6 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) l_6) != ATmakeSymbol("i_0", 0, ATtrue)))
                      _fail(t);
                    q_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_0;
              }
              ;
              LocalPopChoice(j_6);
            }
          else
            {
              t = i_6;
              t = d_1(z_0, t);
            }
        }
      }
    else
      {
        t = a_6;
        t = d_1(z_0, t);
      }
  }
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL,e_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      b_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
      z_2 = ATgetArgument(t, 2);
      {
        ATerm n_1 = NULL,p_1 = NULL,r_1 = NULL;
        t = b_3;
        if(match_cons(t, sym_SVar_1))
          {
            d_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_3;
        t = length_0_0(t);
        n_1 = t;
        t = z_2;
        t = length_0_0(t);
        p_1 = t;
        {
          ATerm m_6 = t;
          int n_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, d_3, (ATerm) ATmakeAppl(sym__2, n_1, p_1));
              t = RenameVar_0_0(t);
              r_1 = t;
              ;
              LocalPopChoice(n_6);
            }
          else
            {
              t = m_6;
              t = d_3;
              t = HoArg_0_0(t);
              r_1 = t;
            }
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_1), e_3, z_2);
        }
      }
    }
  else
    {
      ATerm e_2 = NULL,f_2 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          b_3 = ATgetArgument(t, 0);
          e_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_3;
      if(match_cons(t, sym_SVar_1))
        {
          d_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_3;
      t = length_0_0(t);
      e_2 = t;
      {
        ATerm o_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, d_3, e_2);
            t = RenameVar_0_0(t);
            f_2 = t;
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = o_6;
            t = d_3;
            t = HoArg_0_0(t);
            f_2 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_2), e_3);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  t = g_81(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1_0(g_81, t);
      return(t);
    }
    t = SRTS_all(p_0, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      h_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_109(t);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_3, h_3, j_3);
  t = table_push_0_0(t);
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(k_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_3 = ATgetFirst((ATermList) t);
        m_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(k_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_3), (ATerm) ATinsert(CheckATermList(l_3), h_3)));
    t = (ATerm) ATmakeAppl(sym__2, h_3, j_3);
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,n_2 = NULL;
  t_3 = t;
  t = term_t_6;
  t = m_109(t);
  u_3 = t;
  t = SSL_table_get(u_3, t_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_2 = ATgetFirst((ATermList) t);
      {
        ATerm u_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_2;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm s_4 = NULL;
  s_4 = t;
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_4;
        {
          ATerm r_0 (ATerm t)
          {
            t = term_z_6;
            return(t);
          }
          t = rewrite_1_0(r_0, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        {
          ATerm c_7 = t;
          int d_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_2 = NULL;
              t = s_4;
              {
                ATerm s_0 (ATerm t)
                {
                  t = term_z_6;
                  return(t);
                }
                t = rewrite_1_0(s_0, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm f_7 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("m_0", 0, ATtrue)))
                      _fail(t);
                    u_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_2;
              }
              ;
              LocalPopChoice(d_7);
            }
          else
            {
              t = c_7;
              {
                ATerm g_7 = t;
                int h_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = s_4;
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = term_z_6;
                        return(t);
                      }
                      t = rewrite_1_0(t_0, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      _fail(t);
                    }
                    ;
                    LocalPopChoice(h_7);
                  }
                else
                  {
                    t = g_7;
                    {
                      ATerm o_3 = NULL;
                      t = s_4;
                      {
                        ATerm v_0 (ATerm t)
                        {
                          t = term_z_6;
                          return(t);
                        }
                        t = rewrite_1_0(v_0, t);
                        if(match_cons(t, sym_Defined_2))
                          {
                            ATerm i_7 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("g_0", 0, ATtrue)))
                              _fail(t);
                            o_3 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_3;
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
  ATerm d_5 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm e_5 = NULL;
    e_5 = t;
    t = SSL_explode_string(e_5);
    return(t);
  }
  t = map_1_0(x_0, t);
  t = concat_0_0(t);
  d_5 = t;
  t = SSL_implode_string(d_5);
  return(t);
}
ATerm Cify_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_5 = ATgetFirst((ATermList) t);
      y_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_5;
  if(match_int(t, 95))
    {
      ATerm c_6 = NULL;
      t = y_5;
      t = l_0(t);
      c_6 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(c_6), term_j_7), term_j_7);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm h_6 = NULL;
          t = y_5;
          t = l_0(t);
          h_6 = t;
          t = (ATerm) ATinsert(CheckATermList(h_6), term_j_7);
        }
      else
        {
          ATerm k_6 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = y_5;
          t = l_0(t);
          k_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_6), term_j_7), term_k_7), term_j_7);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm k_97 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_6 = NULL,v_6 = NULL;
  p_6 = t;
  t = SSL_explode_string(p_6);
  {
    ATerm w_6 (ATerm t)
    {
      ATerm l_7 = t;
      int n_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_97(w_6, t);
          ;
          LocalPopChoice(n_7);
        }
      else
        {
          t = l_7;
          {
            ATerm o_7 = t;
            int p_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, w_6, t);
                ;
                LocalPopChoice(p_7);
              }
            else
              {
                t = o_7;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = w_6(t);
    v_6 = t;
    t = SSL_implode_string(v_6);
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
  ATerm a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym_Mod_2))
    {
      a_7 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_7), term_q_7), a_7);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm t_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_92(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = t_7;
      {
        ATerm e_7 = NULL,m_7 = NULL,r_7 = NULL,s_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_7 = ATgetFirst((ATermList) t);
            m_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_7;
        t = l_92(t);
        r_7 = t;
        t = m_7;
        t = foldr_3_0(j_92, k_92, l_92, t);
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, s_7);
        t = k_92(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    t = term_x_7;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm u_7 = NULL,v_7 = NULL;
    if(match_cons(t, sym__2))
      {
        u_7 = ATgetArgument(t, 0);
        v_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm y_7 = t;
      int z_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(u_7, v_7);
          ;
          LocalPopChoice(z_7);
        }
      else
        {
          t = y_7;
          t = SSL_addr(u_7, v_7);
        }
    }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_a_8;
    return(t);
  }
  t = foldr_3_0(y_0, a_1, c_1, t);
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  n_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
      q_9 = ATgetArgument(t, 2);
      m_9 = ATgetArgument(t, 3);
      {
        ATerm j_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
        t = p_9;
        t = length_0_0(t);
        j_4 = t;
        t = q_9;
        t = length_0_0(t);
        n_4 = t;
        t = o_9;
        t = try_1_0(NameMod_0_0, t);
        t = cify_0_0(t);
        o_4 = t;
        t = SSL_int_to_string(j_4);
        p_4 = t;
        t = SSL_int_to_string(n_4);
        q_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_4), term_b_8), p_4), term_b_8), o_4);
        t = concat_strings_0_0(t);
        r_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_9, (ATerm) ATmakeAppl(sym__2, j_4, n_4)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_8, r_4));
        {
          ATerm e_1 (ATerm t)
          {
            t = term_v_5;
            return(t);
          }
          t = assert_1_0(e_1, t);
          t = r_4;
          {
            ATerm d_8 = t;
            int e_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_4 = NULL;
                t = o_9;
                t = HoArg_0_0(t);
                t_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_9, term_f_8);
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = term_z_6;
                    return(t);
                  }
                  t = assert_1_0(f_1, t);
                  t = t_4;
                }
                ;
                LocalPopChoice(e_8);
              }
            else
              {
                t = d_8;
                t = (ATerm) ATmakeAppl(sym__2, o_9, (ATerm) ATmakeAppl(sym_Defined_2, term_g_8, r_4));
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = term_z_6;
                    return(t);
                  }
                  t = assert_1_0(g_1, t);
                  t = r_4;
                }
              }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_4, p_9, q_9, m_9);
          }
        }
      }
    }
  else
    {
      ATerm h_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          o_9 = ATgetArgument(t, 0);
          p_9 = ATgetArgument(t, 1);
          q_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_9;
      t = length_0_0(t);
      h_5 = t;
      t = o_9;
      t = try_1_0(NameMod_0_0, t);
      t = cify_0_0(t);
      i_5 = t;
      t = SSL_int_to_string(h_5);
      k_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_5), term_b_8), i_5);
      t = concat_strings_0_0(t);
      l_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_9, h_5), (ATerm) ATmakeAppl(sym_Defined_2, term_h_8, l_5));
      {
        ATerm h_1 (ATerm t)
        {
          t = term_v_5;
          return(t);
        }
        t = assert_1_0(h_1, t);
        t = l_5;
        {
          ATerm i_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 = NULL;
              t = o_9;
              t = HoArg_0_0(t);
              m_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_9, term_f_8);
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_z_6;
                  return(t);
                }
                t = assert_1_0(i_1, t);
                t = m_5;
              }
              ;
              LocalPopChoice(j_8);
            }
          else
            {
              t = i_8;
              t = (ATerm) ATmakeAppl(sym__2, o_9, (ATerm) ATmakeAppl(sym_Defined_2, term_k_8, l_5));
              {
                ATerm j_1 (ATerm t)
                {
                  t = term_z_6;
                  return(t);
                }
                t = assert_1_0(j_1, t);
                t = l_5;
              }
            }
          t = (ATerm) ATmakeAppl(sym_SDef_3, l_5, p_9, q_9);
        }
      }
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = try_1_0(RenameCall_0_0, t);
        return(t);
      }
      t = topdown_1_0(l_1, t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm u_66 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,a_10 = NULL,b_10 = NULL;
  b_10 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_10);
  w_9 = t;
  t = x_9;
  t = u_66(t);
  a_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, a_10), w_9);
  return(t);
}
ATerm Cons_2_0 (ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  j_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_10 = ATgetFirst((ATermList) t);
      g_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_10);
  e_10 = t;
  t = f_10;
  t = q_66(t);
  h_10 = t;
  t = g_10;
  t = r_66(t);
  i_10 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_10), h_10), e_10);
  return(t);
}
ATerm Specification_1_0 (ATerm z_66 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_10);
  m_10 = t;
  t = n_10;
  t = z_66(t);
  o_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, o_10), m_10);
  return(t);
}
ATerm _2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  x_10 = t;
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_10);
  s_10 = t;
  t = t_10;
  t = h_65(t);
  v_10 = t;
  t = u_10;
  t = i_65(t);
  w_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, v_10, w_10), s_10);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  a_11 = t;
  t = term_t_6;
  t = whoami_0_0(t);
  b_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), b_11), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = a_11;
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
        ATerm e_11 = NULL,f_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_11 = ATgetFirst((ATermList) t);
            f_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_11;
        {
          ATerm m_1 (ATerm t)
          {
            t = f_11;
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
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  t = SSL_explode_term(j_11);
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_11, t);
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_87(t);
      }
    return(t);
  }
  t = l_11(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11;
  {
    ATerm o_1 (ATerm t)
    {
      t = m_11;
      return(t);
    }
    t = at_end_1_0(o_1, t);
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
  ATerm o_11 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm p_11 = NULL;
    p_11 = t;
    t = SSL_explode_string(p_11);
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    ATerm q_11 = NULL;
    q_11 = t;
    t = SSL_explode_string(q_11);
    return(t);
  }
  t = _2_0(q_1, s_1, t);
  t = conc_0_0(t);
  o_11 = t;
  t = SSL_implode_string(o_11);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_11 = NULL;
      w_11 = t;
      t = SSL_is_string(w_11);
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
            ATerm t_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(t_1, t);
            ;
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            {
              ATerm a_12 = NULL,d_12 = NULL,e_12 = NULL;
              a_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_12 = ATgetArgument(t, 0);
                  t = d_12;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_12 = ATgetArgument(t, 0);
                      t = d_12;
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
                              ATerm u_1 (ATerm t)
                              {
                                t = term_y_8;
                                return(t);
                              }
                              t = debug_1_0(u_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm i_12 = NULL,j_12 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_12 = ATgetArgument(t, 0);
                          e_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_12;
                      t = eval_config_0_0(t);
                      i_12 = t;
                      t = e_12;
                      t = eval_config_0_0(t);
                      j_12 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
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
  ATerm m_12 = NULL;
  m_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_12);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm n_12 = NULL;
      t = eval_config_0_0(t);
      n_12 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_12, n_12);
      t = n_12;
      return(t);
    }
    t = try_1_0(v_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm o_12 = NULL,p_12 = NULL;
    o_12 = t;
    t = term_z_8;
    t = get_config_0_0(t);
    p_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_12, term_a_9);
    t = geq_0_0(t);
    t = o_12;
    t = t_103(t);
    return(t);
  }
  t = try_1_0(w_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_9 = ATgetArgument(t, 0);
        if(match_cons(b_9, sym_Stream_1))
          {
            q_12 = ATgetArgument(b_9, 0);
          }
        else
          _fail(t);
        r_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(q_12, r_12);
    s_12 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), s_12);
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_12);
    return(t);
  }
  t = WriteToFile_1_0(x_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_12, term_c_9);
  t = open_stream_0_0(t);
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_12, v_12);
  t = p_102(t);
  t = fclose_0_0(t);
  t = v_12;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_9 = ATgetArgument(t, 0);
        if(match_cons(d_9, sym_Stream_1))
          {
            x_12 = ATgetArgument(d_9, 0);
          }
        else
          _fail(t);
        y_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(x_12, y_12);
    z_12 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_12);
    return(t);
  }
  t = WriteToFile_1_0(y_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                b_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(a_2, t);
          ;
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
          t = term_g_9;
          b_13 = t;
        }
      return(t);
    }
    t = _2_0(z_1, _id, t);
    t = a_13;
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = not_null(b_13);
          return(t);
        }
        t = split_2_0(c_2, _id, t);
        return(t);
      }
      t = _2_0(_id, b_2, t);
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm g_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(g_2, t);
              return(t);
            }
            t = _2_0(d_2, WriteToBinaryFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  c_13 = t;
  t = dtime_0_0(t);
  t = c_13;
  t = r_105(t);
  d_13 = t;
  t = dtime_0_0(t);
  e_13 = t;
  t = d_13;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_13), (ATerm) ATmakeAppl(sym_Runtime_1, e_13)), g_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_13 (ATerm o_13, ATerm t)
  {
    t = SSL_fclose(o_13);
    return(t);
  }
  ATerm r_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_13 = ATgetArgument(t, 0);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_13);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            t = u_13(s_13, t);
          }
      }
    }
  else
    {
      t = u_13(s_13, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm b_102 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  t = b_102(t);
  w_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_13), w_13));
  t = v_13;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_13 = NULL;
  t = SSL_stdin_stream();
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  t = SSL_stdout_stream();
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_stderr_stream();
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_14;
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
      ATerm r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL,d_6 = NULL;
        b_6 = t;
        t = SSL_explode_term(b_6);
        if(match_cons(t, sym__2))
          {
            ATerm u_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_9 = ATgetArgument(t, 1);
              if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
                {
                  d_6 = ATgetFirst((ATermList) v_9);
                  {
                    ATerm y_9 = (ATerm) ATgetNext((ATermList) v_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_6;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        {
          ATerm z_9 = t;
          int c_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
              ATerm h_2 (ATerm t)
              {
                ATerm h_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    h_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = h_14;
                return(t);
              }
              t = _2_0(h_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_14 = ATgetArgument(t, 0);
                  f_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_14, f_14);
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, g_14);
              ;
              LocalPopChoice(c_10);
            }
          else
            {
              t = z_9;
              {
                ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
                ATerm i_2 (ATerm t)
                {
                  ATerm l_14 = NULL;
                  l_14 = t;
                  t = SSL_is_string(l_14);
                  return(t);
                }
                t = _2_0(i_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_14 = ATgetArgument(t, 0);
                    j_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(i_14, j_14);
                k_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  ATerm d_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = NULL;
      p_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_14, term_l_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = d_10;
      {
        ATerm j_2 (ATerm t)
        {
          t = term_q_10;
          return(t);
        }
        t = debug_1_0(j_2, t);
        _fail(t);
      }
    }
  m_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(o_14);
  n_14 = t;
  t = m_14;
  t = fclose_0_0(t);
  t = n_14;
  return(t);
}
ATerm split_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  t = s_84(t);
  s_14 = t;
  t = r_14;
  t = t_84(t);
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  u_14 = t;
  {
    ATerm r_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              v_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(k_2, t);
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = r_10;
        t = term_z_10;
        v_14 = t;
      }
    t = u_14;
    {
      ATerm l_2 (ATerm t)
      {
        t = not_null(v_14);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, l_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm x_14 = NULL;
    x_14 = t;
    if(match_string(t, "-k"))
      {
        t = x_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = x_14;
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm y_14 = NULL,z_14 = NULL;
    y_14 = t;
    t = SSL_string_to_int(y_14);
    z_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_14);
    t = y_14;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_c_11;
    return(t);
  }
  t = ArgOption_3_0(m_2, o_2, p_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm b_15 = NULL;
        b_15 = t;
        if(match_string(t, "-S"))
          {
            t = b_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = b_15;
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_h_11;
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_i_11;
        return(t);
      }
      t = Option_3_0(q_2, r_2, s_2, t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = d_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              ATerm c_15 = NULL,d_15 = NULL;
              c_15 = t;
              t = SSL_string_to_int(c_15);
              d_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, c_15);
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              t = term_t_11;
              return(t);
            }
            t = ArgOption_3_0(t_2, v_2, w_2, t);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm x_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_11;
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_v_11;
                return(t);
              }
              t = Option_3_0(x_2, y_2, c_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm f_15 = NULL;
    f_15 = t;
    if(match_string(t, "-o"))
      {
        t = f_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_15;
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm g_15 = NULL;
    g_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_15);
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_z_11;
    return(t);
  }
  t = ArgOption_3_0(f_3, g_3, i_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm n_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_f_12;
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_g_12;
          return(t);
        }
        t = Option_3_0(n_3, p_3, q_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  j_15 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = j_15;
      t = register_usage_1_0(k_0, t);
    }
  else
    {
      ATerm r_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_15 = ATgetFirst((ATermList) t);
          l_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_15 = ATgetFirst((ATermList) t);
          n_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_15;
      t = h_0(t);
      t = m_15;
      t = j_0(t);
      r_15 = t;
      t = (ATerm) ATinsert(CheckATermList(n_15), r_15);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm t_15 = NULL;
    t_15 = t;
    if(match_string(t, "-i"))
      {
        t = t_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_15;
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm u_15 = NULL;
    u_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_15);
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_h_12;
    return(t);
  }
  t = ArgOption_3_0(r_3, s_3, v_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_6;
  t = whoami_0_0(t);
  v_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_92(t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm y_15 = NULL,z_15 = NULL,c_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_15 = ATgetFirst((ATermList) t);
            z_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_15;
        t = foldr_2_0(h_92, i_92, t);
        c_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, c_16);
        t = i_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  t = SSL_explode_term(d_16);
  if(match_cons(t, sym__2))
    {
      ATerm m_13 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_16;
  t = foldr_2_0(f_90, g_90, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_16 = NULL;
  t = times_0_0(t);
  {
    ATerm w_3 (ATerm t)
    {
      t = term_x_7;
      return(t);
    }
    ATerm x_3 (ATerm t)
    {
      ATerm g_16 = NULL,h_16 = NULL;
      if(match_cons(t, sym__2))
        {
          g_16 = ATgetArgument(t, 0);
          h_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(g_16, h_16);
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = n_13;
            t = SSL_addr(g_16, h_16);
          }
      }
      return(t);
    }
    t = crush_2_0(w_3, x_3, t);
    f_16 = t;
    t = SSL_TicksToSeconds(f_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_16;
        if((r_16 != t))
          {
            _fail(t);
          }
        t = q_16;
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = q_13;
        t = q_16;
        {
          ATerm a_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_16, s_16);
              ;
              LocalPopChoice(c_14);
            }
          else
            {
              t = a_14;
              t = SSL_gtr(r_16, s_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_16, s_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm v_16 = NULL,w_16 = NULL;
    v_16 = t;
    t = term_z_8;
    t = get_config_0_0(t);
    w_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_16, term_a_8);
    t = geq_0_0(t);
    t = v_16;
    t = s_103(t);
    return(t);
  }
  t = try_1_0(y_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm y_16 = NULL,z_16 = NULL;
    t = run_time_0_0(t);
    y_16 = t;
    t = term_t_6;
    t = whoami_0_0(t);
    z_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_16));
    t = (ATerm) ATmakeAppl(sym__2, term_d_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_14), y_16), term_q_14), z_16));
    return(t);
  }
  t = if_verbose1_1_0(z_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  ATerm a_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = a_15;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm o_15 = t;
          int p_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(p_15);
            }
          else
            {
              t = o_15;
              {
                ATerm q_15 = t;
                int s_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = q_15;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(a_4, t);
      }
    }
  t = p_106(t);
  return(t);
}
ATerm map_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm b_17 (ATerm t)
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = Cons_2_0(h_87, b_17, t);
      }
    return(t);
  }
  t = b_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_17 = ATgetFirst((ATermList) t);
      e_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_17 = NULL,j_17 = NULL;
        t = e_17;
        t = f_0(t);
        i_17 = t;
        t = d_17;
        t = e_0(t);
        j_17 = t;
        t = e_17;
        {
          ATerm b_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_17), j_17);
            return(t);
          }
          t = reverse_acc_2_0(e_0, b_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_6;
      t = f_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, c_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm c_75 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  n_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_17);
  k_17 = t;
  t = l_17;
  t = c_75(t);
  m_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_17), k_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm d_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(d_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_i_16;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm e_4 (ATerm t)
    {
      ATerm q_17 = NULL;
      q_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_17), term_j_16);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(e_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm d_75 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_17);
  r_17 = t;
  t = s_17;
  t = d_75(t);
  t_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_17), r_17);
  return(t);
}
ATerm fetch_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm x_17 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_87, _id, t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = Cons_2_0(_id, x_17, t);
      }
    return(t);
  }
  t = x_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  t = fetch_1_0(p_107, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_16 = ATgetFirst((ATermList) t);
                ATerm p_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_17;
          }
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        t = (ATerm) ATinsert(ATempty, z_17);
      }
    a_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_18);
    t = z_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_83(t);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_g_17;
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_h_17;
        return(t);
      }
      t = Option_3_0(f_4, g_4, h_4, t);
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = x_16;
      {
        ATerm i_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_17;
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_p_17;
          return(t);
        }
        t = Option_3_0(i_4, k_4, l_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__3))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      i_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_18, h_18);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_17 = ATgetArgument(t, 0);
            ATerm b_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_18, h_18);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = (ATerm) ATempty;
      }
    j_18 = t;
    t = SSL_table_put(g_18, h_18, (ATerm) ATinsert(CheckATermList(j_18), i_18));
    t = (ATerm) ATmakeAppl(sym__3, g_18, h_18, i_18);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm o_18 = NULL;
  t = term_t_6;
  t = u_108(t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_18, term_d_18, o_18);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_18;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm v_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_18 = ATgetFirst((ATermList) t);
          s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_18;
      t = a_0(t);
      t = term_t_6;
      t = c_0(t);
      v_18 = t;
      t = (ATerm) ATinsert(CheckATermList(s_18), v_18);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm x_18 = NULL;
    x_18 = t;
    if(match_string(t, "--help"))
      {
        t = x_18;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = x_18;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = x_18;
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_e_18;
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  t = Option_3_0(m_4, u_4, v_4, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  {
    ATerm w_4 (ATerm t)
    {
      t = term_k_18;
      t = s_108(t);
      return(t);
    }
    t = try_1_0(w_4, t);
    t = b_19;
    {
      ATerm x_4 (ATerm t)
      {
        ATerm c_19 = NULL;
        c_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, c_19);
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_18 = t;
            int p_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_18);
              }
            else
              {
                t = n_18;
                t = s_108(t);
                t = Cons_2_0(_id, y_4, t);
              }
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm e_19 = NULL,f_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_19 = ATgetFirst((ATermList) t);
                  f_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_19), (ATerm) ATmakeAppl(sym_Undefined_1, e_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_4, y_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_19;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_108(t);
          ;
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          {
            ATerm w_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(y_18);
              }
            else
              {
                t = w_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_4, t);
    {
      ATerm a_5 (ATerm t)
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_19 = NULL;
            s_19 = t;
            {
              ATerm d_19 = t;
              int g_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_19;
                  {
                    ATerm h_19 = t;
                    int i_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_h_15;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(i_19);
                      }
                    else
                      {
                        t = h_19;
                        {
                          ATerm b_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(b_5, t);
                        }
                      }
                    t = s_19;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(g_19);
                }
              else
                {
                  t = d_19;
                  t = term_f_17;
                  t = get_config_0_0(t);
                  t = s_19;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            {
              ATerm c_5 (ATerm t)
              {
                ATerm f_5 (ATerm t)
                {
                  m_19 = t;
                  return(t);
                }
                t = Undefined_1_0(f_5, t);
                return(t);
              }
              t = option_defined_1_0(c_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_d_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_19)), term_j_19));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(a_5, t);
      n_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = n_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t)
{
  ATerm i_15 = NULL;
  t = parse_options_1_0(r_106, t);
  i_15 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_15);
  t = i_15;
  t = t_106(t);
  {
    ATerm k_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_106, t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = k_19;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm r_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_106(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = r_19;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(g_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_5, i_106, j_106, j_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm v_19 = NULL,w_19 = NULL;
      v_19 = t;
      t = term_j_13;
      t = get_config_0_0(t);
      w_19 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, w_19));
      t = v_19;
      return(t);
    }
    t = if_verbose2_1_0(o_5, t);
    return(t);
  }
  t = iowrap_4_0(a_106, b_106, c_106, n_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  t = iowrap_3_0(y_105, z_105, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    t = _2_0(_id, v_105, t);
    return(t);
  }
  t = iowrap_2_0(p_5, _fail, t);
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        ATerm t_5 (ATerm t)
        {
          t = Strategies_1_0(rename_sdefs_0_0, t);
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(t_5, u_5, t);
        return(t);
      }
      t = Cons_2_0(_id, s_5, t);
      return(t);
    }
    t = Specification_1_0(r_5, t);
    return(t);
  }
  t = iowrap_1_0(q_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = rename_defs_0_0(t);
  return(t);
}

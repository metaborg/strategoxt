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
Symbol sym_ObsoleteWarning_1;
Symbol sym_DebugWarning_1;
Symbol sym_Undefined_0;
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
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_SVar_1;
Symbol sym_CallT_3;
Symbol sym_Build_1;
Symbol sym_Path_2;
Symbol sym_SDef_3;
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
  sym_ObsoleteWarning_1 = ATmakeSymbol("ObsoleteWarning", 1, ATfalse);
  ATprotectSymbol(sym_ObsoleteWarning_1);
  sym_DebugWarning_1 = ATmakeSymbol("DebugWarning", 1, ATfalse);
  ATprotectSymbol(sym_DebugWarning_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_r_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_w_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_o_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_n_16;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_j_7;
void init_constant_terms (void)
{
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  debug(", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")\n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: obsolete strategy or rule invoked from \"", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\":\n  ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": \"", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_9);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__3, term_m_8, term_s_21, term_j_7);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm stratego_warnings_options_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm mk_warning_0_0 (ATerm);
ATerm print_warnings_0_0 (ATerm);
ATerm SDef_3_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm);
ATerm sdef_with_property_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm s_72 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm);
ATerm caller_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm get_strategy_callers_0_0 (ATerm);
ATerm map_apply_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm strategy_invokation_warning_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm Str_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm Build_1_0 (ATerm b_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm o_87 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm strategy_argument_warning_1_0 (ATerm u_75 (ATerm), ATerm);
ATerm debug_with_incorrect_string_0_0 (ATerm);
ATerm Warning_1_0 (ATerm s_75 (ATerm), ATerm);
ATerm filter_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm Stratego_warnings_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm a_96 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm _2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm a_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_68 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_68 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_102 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  b_0 = t;
  t = term_j_7;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_0;
  {
    ATerm q_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_0);
        {
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_0 = NULL;
              t = eval_config_0_0(t);
              u_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_0, u_0);
              t = u_0;
              ;
              LocalPopChoice(x_7);
            }
          else
            {
              t = w_7;
            }
        }
        ;
        LocalPopChoice(t_7);
      }
    else
      {
        t = q_7;
        t = (ATerm) ATempty;
      }
    q_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_0, q_0);
    {
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm f_8 = ATgetArgument(t, 0);
              ATerm g_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_0;
          {
            ATerm k_0 (ATerm t)
            {
              t = q_0;
              return(t);
            }
            t = at_end_1_0(k_0, t);
          }
          ;
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
          {
            ATerm e_1 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_0, q_0));
            if(match_cons(t, sym__2))
              {
                ATerm h_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                e_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_1;
            t = concat_0_0(t);
          }
        }
      s_0 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_0, s_0);
      t = (ATerm) ATmakeAppl(sym__3, term_m_8, o_0, s_0);
    }
  }
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm y_0 = NULL;
    y_0 = t;
    if(match_string(t, "--warning"))
      {
        t = y_0;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
          _fail(t);
        t = y_0;
      }
    return(t);
  }
  ATerm m_0 (ATerm t)
  {
    ATerm z_0 = NULL;
    z_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATempty, z_0));
    t = extend_config_0_0(t);
    t = term_j_7;
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    t = term_p_8;
    return(t);
  }
  t = ArgOption_3_0(l_0, m_0, n_0, t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm a_1 = NULL;
  ATerm r_0 (ATerm t)
  {
    ATerm b_1 = NULL;
    b_1 = t;
    t = SSL_explode_string(b_1);
    return(t);
  }
  t = map_1_0(r_0, t);
  t = concat_0_0(t);
  a_1 = t;
  t = SSL_implode_string(a_1);
  return(t);
}
ATerm mk_warning_0_0 (ATerm t)
{
  ATerm z_1 = NULL,f_2 = NULL,j_2 = NULL,m_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
      {
        ATerm r_2 = NULL,h_1 = NULL,k_1 = NULL;
        t = j_2;
        if(match_cons(t, sym_DebugWarning_1))
          {
            z_1 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSL_explode_string(z_1);
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_1), term_r_8), (ATerm) ATinsert(ATempty, term_r_8));
        {
          ATerm s_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm w_8 = ATgetArgument(t, 0);
                  ATerm x_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_1), term_r_8);
              {
                ATerm t_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_r_8);
                  return(t);
                }
                t = at_end_1_0(t_0, t);
              }
              ;
              LocalPopChoice(t_8);
            }
          else
            {
              t = s_8;
              {
                ATerm r_1 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_1), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                if(match_cons(t, sym__2))
                  {
                    ATerm z_8 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_8) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    r_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_1;
                t = concat_0_0(t);
              }
            }
          h_1 = t;
          t = SSL_implode_string(h_1);
          r_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), r_2), term_g_9), term_f_9), f_2), term_d_9);
          t = concat_strings_0_0(t);
        }
      }
    }
  else
    {
      if(match_cons(t, sym__3))
        {
          f_2 = ATgetArgument(t, 0);
          j_2 = ATgetArgument(t, 1);
          m_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_2;
      if(match_cons(t, sym_ObsoleteWarning_1))
        {
          n_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_9), n_2), term_o_9), j_2), term_n_9), f_2), term_m_9);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm print_warnings_0_0 (ATerm t)
{
  ATerm c_3 = NULL;
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm d_3 = NULL;
        t = map_1_0(mk_warning_0_0, t);
        d_3 = t;
        {
          ATerm v_0 (ATerm t)
          {
            t = term_r_9;
            return(t);
          }
          ATerm w_0 (ATerm t)
          {
            ATerm f_3 = NULL,i_3 = NULL;
            if(match_cons(t, sym__2))
              {
                f_3 = ATgetArgument(t, 0);
                i_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm t_9 = t;
              int w_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(f_3, i_3);
                  ;
                  LocalPopChoice(w_9);
                }
              else
                {
                  t = t_9;
                  t = SSL_addr(f_3, i_3);
                }
            }
            return(t);
          }
          ATerm x_0 (ATerm t)
          {
            t = term_x_9;
            return(t);
          }
          t = foldr_3_0(v_0, w_0, x_0, t);
          c_3 = t;
          t = SSL_print((ATerm)ATmakeAppl(sym_stderr_0), d_3);
          t = SSL_print((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue))), c_3), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), c_3), term_c_10));
        }
      }
    }
  return(t);
}
ATerm SDef_3_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  u_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
      q_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_3);
  k_3 = t;
  t = l_3;
  t = h_75(t);
  r_3 = t;
  t = m_3;
  t = i_75(t);
  s_3 = t;
  t = q_3;
  t = j_75(t);
  t_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, r_3, s_3, t_3), k_3);
  return(t);
}
ATerm sdef_with_property_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  ATerm c_1 (ATerm t)
  {
    if(((b_4 != NULL) && (b_4 != t)))
      _fail(t);
    else
      b_4 = t;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    if(((a_4 != NULL) && (a_4 != t)))
      _fail(t);
    else
      a_4 = t;
    return(t);
  }
  t = SDef_3_0(c_1, _id, d_1, t);
  t = not_null(a_4);
  t = collect_om_1_0(w_75, t);
  {
    ATerm j_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_10;
      }
    {
      ATerm f_1 (ATerm t)
      {
        ATerm k_4 = NULL;
        k_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_4), k_4);
        return(t);
      }
      t = map_1_0(f_1, t);
    }
  }
  return(t);
}
ATerm SVar_1_0 (ATerm s_72 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,r_4 = NULL,s_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym_SVar_1))
    {
      m_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_4);
  l_4 = t;
  t = m_4;
  t = s_72(t);
  r_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, r_4), l_4);
  return(t);
}
ATerm CallT_3_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm t)
{
  ATerm x_4 = NULL,g_5 = NULL,p_5 = NULL,y_5 = NULL,f_6 = NULL,i_6 = NULL,l_6 = NULL,m_6 = NULL;
  m_6 = t;
  if(match_cons(t, sym_CallT_3))
    {
      g_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
      y_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  x_4 = t;
  t = g_5;
  t = x_72(t);
  f_6 = t;
  t = p_5;
  t = y_72(t);
  i_6 = t;
  t = y_5;
  t = z_72(t);
  l_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, f_6, i_6, l_6), x_4);
  return(t);
}
ATerm caller_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      w_6 = ATgetArgument(t, 0);
      {
        ATerm l_10 = ATgetArgument(t, 1);
      }
      x_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_75(t);
  y_6 = t;
  t = x_6;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          if((y_6 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = SVar_1_0(j_1, t);
        return(t);
      }
      t = CallT_3_0(i_1, _id, _id, t);
      t = y_6;
      return(t);
    }
    t = collect_om_1_0(g_1, t);
    {
      ATerm y_10 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_10;
        }
      t = w_6;
    }
  }
  return(t);
}
ATerm get_strategy_callers_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      {
        ATerm z_10 = ATgetArgument(t, 1);
        if(match_cons(z_10, sym__2))
          {
            a_7 = ATgetArgument(z_10, 0);
            b_7 = ATgetArgument(z_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_6;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm c_7 = NULL;
      ATerm m_1 (ATerm t)
      {
        t = a_7;
        return(t);
      }
      t = caller_1_0(m_1, t);
      {
        ATerm a_11 = t;
        if((PushChoice() == 0))
          {
            if((a_7 != t))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_11;
          }
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym__3, c_7, a_7, b_7);
      }
      return(t);
    }
    t = collect_om_1_0(l_1, t);
  }
  return(t);
}
ATerm map_apply_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL,v_1 = NULL;
        ATerm n_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, n_1, t);
        u_1 = t;
        t = SSL_explode_term(u_1);
        if(match_cons(t, sym__2))
          {
            ATerm d_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_11 = ATgetArgument(t, 1);
              if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
                {
                  v_1 = ATgetFirst((ATermList) e_11);
                  {
                    ATerm g_11 = (ATerm) ATgetNext((ATermList) e_11);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_1;
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
          if(match_cons(t, sym__2))
            {
              k_7 = ATgetArgument(t, 0);
              l_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_7;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_7 = ATgetFirst((ATermList) t);
              n_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, k_7, m_7);
          t = x_75(t);
          o_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_7, n_7);
          t = p_7(t);
        }
      }
    return(t);
  }
  t = p_7(t);
  return(t);
}
ATerm strategy_invokation_warning_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm h_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 = NULL,y_1 = NULL;
      w_1 = t;
      t = collect_om_1_0(t_75, t);
      t = concat_0_0(t);
      {
        ATerm p_11 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_11;
          }
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_1, y_1);
        t = map_apply_1_0(get_strategy_callers_0_0, t);
      }
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = h_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm Str_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,u_7 = NULL,v_7 = NULL;
  v_7 = t;
  if(match_cons(t, sym_Str_1))
    {
      s_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_7);
  r_7 = t;
  t = s_7;
  t = p_69(t);
  u_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, u_7), r_7);
  return(t);
}
ATerm oncetd_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm y_7 (ATerm t)
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_78(t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = SRTS_one(y_7, t);
      }
    return(t);
  }
  t = y_7(t);
  return(t);
}
ATerm Build_1_0 (ATerm b_73 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  c_8 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_8);
  z_7 = t;
  t = a_8;
  t = b_73(t);
  b_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, b_8), z_7);
  return(t);
}
ATerm union_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8;
  {
    ATerm k_8 (ATerm t)
    {
      ATerm t_11 = t;
      int u_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_8;
          ;
          LocalPopChoice(u_11);
        }
      else
        {
          t = t_11;
          {
            ATerm v_11 = t;
            int c_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_2 = NULL,e_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_2 = ATgetFirst((ATermList) t);
                    e_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_8;
                {
                  ATerm o_1 (ATerm t)
                  {
                    ATerm g_2 = NULL;
                    g_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_2, g_2);
                    t = o_87(t);
                    return(t);
                  }
                  t = fetch_1_0(o_1, t);
                  t = e_2;
                  t = k_8(t);
                }
                ;
                LocalPopChoice(c_12);
              }
            else
              {
                t = v_11;
                t = Cons_2_0(_id, k_8, t);
              }
          }
        }
      return(t);
    }
    t = k_8(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_89(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm n_8 = NULL,q_8 = NULL,u_8 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_8 = ATgetFirst((ATermList) t);
            q_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_8;
        t = q_89(t);
        u_8 = t;
        t = q_8;
        t = foldr_3_0(o_89, p_89, q_89, t);
        v_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_8, v_8);
        t = p_89(t);
      }
    }
  return(t);
}
ATerm collect_om_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 = NULL;
      t = k_88(t);
      y_8 = t;
      t = (ATerm) ATinsert(ATempty, y_8);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm k_2 = NULL,l_2 = NULL;
        k_2 = t;
        t = SSL_explode_term(k_2);
        if(match_cons(t, sym__2))
          {
            ATerm n_12 = ATgetArgument(t, 0);
            l_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_2;
        {
          ATerm p_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm q_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm y_2 = NULL;
              if(match_cons(t, sym__2))
                {
                  y_2 = ATgetArgument(t, 0);
                  if((y_2 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(t_1, t);
            return(t);
          }
          ATerm s_1 (ATerm t)
          {
            t = collect_om_1_0(k_88, t);
            return(t);
          }
          t = foldr_3_0(p_1, q_1, s_1, t);
        }
      }
    }
  return(t);
}
ATerm strategy_argument_warning_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  t = collect_om_1_0(u_75, t);
  t = concat_0_0(t);
  return(t);
}
ATerm debug_with_incorrect_string_0_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      ATerm a_9 = NULL,b_9 = NULL;
      if(match_cons(t, sym_CallT_3))
        {
          ATerm o_12 = ATgetArgument(t, 0);
          if(match_cons(o_12, sym_SVar_1))
            {
              ATerm v_12 = ATgetArgument(o_12, 0);
              if((ATgetSymbol((ATermAppl) v_12) != ATmakeSymbol("debug", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm p_12 = ATgetArgument(t, 1);
            if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
              {
                a_9 = ATgetFirst((ATermList) p_12);
                {
                  ATerm w_12 = (ATerm) ATgetNext((ATermList) p_12);
                  if(((ATgetType(w_12) != AT_LIST) || !(ATisEmpty(w_12))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
          {
            ATerm s_12 = ATgetArgument(t, 2);
            if(((ATgetType(s_12) != AT_LIST) || !(ATisEmpty(s_12))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = a_9;
      {
        ATerm x_12 = t;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = Str_1_0(_id, t);
              return(t);
            }
            t = Build_1_0(b_2, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_12;
          }
        {
          ATerm c_2 (ATerm t)
          {
            ATerm h_2 (ATerm t)
            {
              if(((b_9 != NULL) && (b_9 != t)))
                _fail(t);
              else
                b_9 = t;
              return(t);
            }
            t = Str_1_0(h_2, t);
            return(t);
          }
          t = oncetd_1_0(c_2, t);
          t = (ATerm) ATmakeAppl(sym_DebugWarning_1, not_null(b_9));
        }
      }
      return(t);
    }
    t = sdef_with_property_1_0(a_2, t);
    return(t);
  }
  t = strategy_argument_warning_1_0(x_1, t);
  return(t);
}
ATerm Warning_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  ATerm k_9 (ATerm e_9, ATerm t)
  {
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue))));
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm h_9 = NULL;
  h_9 = t;
  if(match_string(t, "debug-arguments"))
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_9;
          t = s_75(t);
          t = debug_with_incorrect_string_0_0(t);
          ;
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          t = k_9(h_9, t);
        }
    }
  else
    {
      if(match_string(t, "obsolete-strategy-calls"))
        {
          ATerm a_13 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_9;
              t = s_75(t);
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm o_2 (ATerm t)
                  {
                    ATerm j_9 = NULL;
                    if(match_cons(t, sym_CallT_3))
                      {
                        ATerm c_13 = ATgetArgument(t, 0);
                        if(match_cons(c_13, sym_SVar_1))
                          {
                            ATerm n_13 = ATgetArgument(c_13, 0);
                            if((ATgetSymbol((ATermAppl) n_13) != ATmakeSymbol("obsolete", 0, ATtrue)))
                              _fail(t);
                          }
                        else
                          _fail(t);
                        {
                          ATerm i_13 = ATgetArgument(t, 1);
                          if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
                            {
                              ATerm p_13 = ATgetFirst((ATermList) i_13);
                              if(match_cons(p_13, sym_Build_1))
                                {
                                  ATerm r_13 = ATgetArgument(p_13, 0);
                                  if(match_cons(r_13, sym_Str_1))
                                    {
                                      j_9 = ATgetArgument(r_13, 0);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                              {
                                ATerm q_13 = (ATerm) ATgetNext((ATermList) i_13);
                                if(((ATgetType(q_13) != AT_LIST) || !(ATisEmpty(q_13))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                        }
                        {
                          ATerm j_13 = ATgetArgument(t, 2);
                          if(((ATgetType(j_13) != AT_LIST) || !(ATisEmpty(j_13))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, j_9);
                    return(t);
                  }
                  t = sdef_with_property_1_0(o_2, t);
                  return(t);
                }
                t = strategy_invokation_warning_1_0(i_2, t);
              }
              ;
              LocalPopChoice(b_13);
            }
          else
            {
              t = a_13;
              t = k_9(h_9, t);
            }
        }
      else
        {
          t = k_9(h_9, t);
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm v_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = v_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              t = filter_1_0(p_90, t);
              return(t);
            }
            t = Cons_2_0(p_90, p_2, t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            {
              ATerm s_9 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_14 = ATgetFirst((ATermList) t);
                  s_9 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_9;
              t = filter_1_0(p_90, t);
            }
          }
      }
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm u_9 = NULL;
  ATerm q_2 (ATerm t)
  {
    t = x_83(t);
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    return(t);
  }
  t = fetch_1_0(q_2, t);
  t = not_null(u_9);
  return(t);
}
ATerm listtd_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    t = u_84(t);
    {
      ATerm c_14 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(d_14);
        }
      else
        {
          t = c_14;
          t = Cons_2_0(_id, v_9, t);
        }
    }
    return(t);
  }
  t = v_9(t);
  return(t);
}
ATerm Stratego_warnings_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm y_9 = NULL;
    y_9 = t;
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
          {
            ATerm g_14 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_3 = NULL;
                t = eval_config_0_0(t);
                j_3 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), j_3);
                t = j_3;
                ;
                LocalPopChoice(i_14);
              }
            else
              {
                t = g_14;
              }
            {
              ATerm t_2 (ATerm t)
              {
                ATerm j_14 = t;
                int k_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_10 = NULL,b_10 = NULL,e_10 = NULL;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        a_10 = ATgetFirst((ATermList) t);
                        b_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = b_10;
                    {
                      ATerm u_2 (ATerm t)
                      {
                        ATerm o_14 = t;
                        if((PushChoice() == 0))
                          {
                            if((a_10 != t))
                              {
                                _fail(t);
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = o_14;
                          }
                        return(t);
                      }
                      t = filter_1_0(u_2, t);
                      e_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_10), a_10);
                    }
                    ;
                    LocalPopChoice(k_14);
                  }
                else
                  {
                    t = j_14;
                  }
                return(t);
              }
              t = listtd_1_0(t_2, t);
            }
          }
          ;
          LocalPopChoice(f_14);
        }
      else
        {
          t = e_14;
          t = (ATerm) ATempty;
        }
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            t = fetch_elem_1_0(v_2, t);
            t = (ATerm) ATinsert(ATinsert(ATempty, term_u_14), term_t_14);
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
          }
        {
          ATerm w_2 (ATerm t)
          {
            ATerm x_2 (ATerm t)
            {
              t = y_9;
              return(t);
            }
            t = Warning_1_0(x_2, t);
            return(t);
          }
          t = filter_1_0(w_2, t);
          t = concat_0_0(t);
          t = print_warnings_0_0(t);
          t = y_9;
        }
      }
    }
    return(t);
  }
  t = _2_0(_id, s_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_10, term_v_14);
  t = open_stream_0_0(t);
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_10, g_10);
  t = a_96(t);
  t = fclose_0_0(t);
  t = g_10;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_10 = NULL,k_10 = NULL;
  i_10 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm w_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((k_10 != NULL) && (k_10 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_3, t);
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = w_14;
          t = term_a_15;
          if(((k_10 != NULL) && (k_10 != t)))
            _fail(t);
          else
            k_10 = t;
        }
      return(t);
    }
    t = _2_0(z_2, _id, t);
    t = i_10;
    {
      ATerm b_3 (ATerm t)
      {
        ATerm n_3 = NULL;
        n_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_10), n_3);
        return(t);
      }
      t = _2_0(_id, b_3, t);
      {
        ATerm e_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 (ATerm t)
            {
              ATerm h_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(h_3, t);
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              ATerm o_3 (ATerm t)
              {
                ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm j_15 = ATgetArgument(t, 0);
                    if(match_cons(j_15, sym_Stream_1))
                      {
                        m_10 = ATgetArgument(j_15, 0);
                      }
                    else
                      _fail(t);
                    n_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(m_10, n_10);
                o_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_10);
                return(t);
              }
              t = WriteToFile_1_0(o_3, t);
              return(t);
            }
            t = _2_0(e_3, g_3, t);
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = e_15;
            {
              ATerm p_3 (ATerm t)
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm n_15 = ATgetArgument(t, 0);
                      if(match_cons(n_15, sym_Stream_1))
                        {
                          p_10 = ATgetArgument(n_15, 0);
                        }
                      else
                        _fail(t);
                      q_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(p_10, q_10);
                  r_10 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), r_10);
                  s_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
                  return(t);
                }
                t = WriteToFile_1_0(v_3, t);
                return(t);
              }
              t = _2_0(_id, p_3, t);
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
ATerm apply_strategy_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  t_10 = t;
  t = dtime_0_0(t);
  t = t_10;
  t = c_99(t);
  u_10 = t;
  t = dtime_0_0(t);
  v_10 = t;
  t = u_10;
  if(match_cons(t, sym__2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_10), (ATerm) ATmakeAppl(sym_Runtime_1, v_10)), x_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_11 (ATerm f_11, ATerm t)
  {
    t = SSL_fclose(f_11);
    return(t);
  }
  ATerm i_11 = NULL,j_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_11 = ATgetArgument(t, 0);
      {
        ATerm o_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_11);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = o_15;
            t = l_11(j_11, t);
          }
      }
    }
  else
    {
      t = l_11(j_11, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_11 = NULL;
  t = SSL_stdin_stream();
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_stdout_stream();
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  t = SSL_stderr_stream();
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_15 = ATgetArgument(t, 0);
      ATerm u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL,i_4 = NULL;
        h_4 = t;
        t = SSL_explode_term(h_4);
        if(match_cons(t, sym__2))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_16 = ATgetArgument(t, 1);
              if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
                {
                  i_4 = ATgetFirst((ATermList) c_16);
                  {
                    ATerm d_16 = (ATerm) ATgetNext((ATermList) c_16);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        {
          ATerm e_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
              ATerm w_3 (ATerm t)
              {
                ATerm z_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    z_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_11;
                return(t);
              }
              t = _2_0(w_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_11 = ATgetArgument(t, 0);
                  x_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_11, x_11);
              y_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_11);
              ;
              LocalPopChoice(f_16);
            }
          else
            {
              t = e_16;
              {
                ATerm a_12 = NULL,b_12 = NULL,f_12 = NULL;
                ATerm x_3 (ATerm t)
                {
                  ATerm g_12 = NULL;
                  g_12 = t;
                  t = SSL_is_string(g_12);
                  return(t);
                }
                t = _2_0(x_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_12 = ATgetArgument(t, 0);
                    b_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_12, b_12);
                f_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_12 = NULL;
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_12, term_n_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        ATerm j_4 = NULL;
        j_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = j_4;
        _fail(t);
      }
    }
  h_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_12);
  i_12 = t;
  t = h_12;
  t = fclose_0_0(t);
  t = i_12;
  return(t);
}
ATerm fetch_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm q_12 (ATerm t)
  {
    ATerm o_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_83, _id, t);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = o_16;
        t = Cons_2_0(_id, q_12, t);
      }
    return(t);
  }
  t = q_12(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm t_12 = NULL,u_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_12 = ATgetFirst((ATermList) t);
            u_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_12;
        {
          ATerm y_3 (ATerm t)
          {
            t = u_12;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm e_13 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_13, t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_84(t);
      }
    return(t);
  }
  t = e_13(t);
  return(t);
}
ATerm _2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,l_13 = NULL,m_13 = NULL,o_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_13);
  f_13 = t;
  t = g_13;
  t = h_61(t);
  l_13 = t;
  t = h_13;
  t = i_61(t);
  m_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_13, m_13), f_13);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm z_3 (ATerm t)
  {
    ATerm t_13 = NULL;
    t_13 = t;
    t = SSL_explode_string(t_13);
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    ATerm u_13 = NULL;
    u_13 = t;
    t = SSL_explode_string(u_13);
    return(t);
  }
  t = _2_0(z_3, c_4, t);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_13 = NULL,x_13 = NULL;
        if(match_cons(t, sym__2))
          {
            w_13 = ATgetArgument(t, 0);
            x_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_13;
        {
          ATerm d_4 (ATerm t)
          {
            t = x_13;
            return(t);
          }
          t = at_end_1_0(d_4, t);
        }
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm v_4 = NULL,w_4 = NULL;
          v_4 = t;
          t = SSL_explode_term(v_4);
          if(match_cons(t, sym__2))
            {
              ATerm e_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_17) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_4;
          t = concat_0_0(t);
        }
      }
    s_13 = t;
    t = SSL_implode_string(s_13);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_14 = NULL;
      h_14 = t;
      t = SSL_is_string(h_14);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm j_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(k_17);
                }
              else
                {
                  t = j_17;
                }
              return(t);
            }
            t = map_1_0(e_4, t);
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            {
              ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
              l_14 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_14 = ATgetArgument(t, 0);
                  t = m_14;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_14 = ATgetArgument(t, 0);
                      t = m_14;
                      {
                        ATerm l_17 = t;
                        int m_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_14);
                            {
                              ATerm n_17 = t;
                              int r_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm o_5 = NULL;
                                  t = eval_config_0_0(t);
                                  o_5 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_14, o_5);
                                  t = o_5;
                                  ;
                                  LocalPopChoice(r_17);
                                }
                              else
                                {
                                  t = n_17;
                                }
                            }
                            ;
                            LocalPopChoice(m_17);
                          }
                        else
                          {
                            t = l_17;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_14), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = m_14;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_14 = NULL,s_14 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_14 = ATgetArgument(t, 0);
                          n_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_14;
                      t = eval_config_0_0(t);
                      r_14 = t;
                      t = n_14;
                      t = eval_config_0_0(t);
                      s_14 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_14, s_14);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm s_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_14 = NULL,z_14 = NULL;
      x_14 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 = NULL;
            t = eval_config_0_0(t);
            w_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_5);
            t = w_5;
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = w_17;
          }
        z_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_14, term_b_18);
        t = geq_0_0(t);
        t = x_14;
        t = e_97(t);
      }
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = s_17;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm b_15 = NULL;
    b_15 = t;
    if(match_string(t, "-k"))
      {
        t = b_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_15;
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm c_15 = NULL,d_15 = NULL;
    c_15 = t;
    t = SSL_string_to_int(c_15);
    d_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_15);
    t = c_15;
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  t = ArgOption_3_0(f_4, g_4, n_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 (ATerm t)
      {
        ATerm f_15 = NULL;
        f_15 = t;
        if(match_string(t, "-S"))
          {
            t = f_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_15;
          }
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_h_18;
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        t = term_i_18;
        return(t);
      }
      t = Option_3_0(o_4, p_4, q_4, t);
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = d_18;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              ATerm g_15 = NULL,h_15 = NULL;
              g_15 = t;
              t = SSL_string_to_int(g_15);
              h_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_15);
              return(t);
            }
            ATerm y_4 (ATerm t)
            {
              t = term_l_18;
              return(t);
            }
            t = ArgOption_3_0(t_4, u_4, y_4, t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm z_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm a_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_18;
                return(t);
              }
              ATerm b_5 (ATerm t)
              {
                t = term_t_18;
                return(t);
              }
              t = Option_3_0(z_4, a_5, b_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_15 = NULL;
      t = term_j_7;
      t = d_0(t);
      m_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_18, term_a_19, m_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_15 = ATgetFirst((ATermList) t);
          l_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_15;
      t = a_0(t);
      t = term_j_7;
      t = c_0(t);
      p_15 = t;
      t = (ATerm) ATinsert(CheckATermList(l_15), p_15);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm r_15 = NULL;
    r_15 = t;
    if(match_string(t, "-o"))
      {
        t = r_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = r_15;
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm s_15 = NULL;
    s_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, s_15);
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_b_19;
    return(t);
  }
  t = ArgOption_3_0(c_5, d_5, e_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__3))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
      x_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_15, w_15);
  {
    ATerm c_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            ATerm h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_15, w_15);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATempty;
      }
    y_15 = t;
    t = SSL_table_put(v_15, w_15, (ATerm) ATinsert(CheckATermList(y_15), x_15));
    t = (ATerm) ATmakeAppl(sym__3, v_15, w_15, x_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_16 = NULL;
      t = term_j_7;
      t = j_0(t);
      k_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_18, term_a_19, k_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_16 = ATgetFirst((ATermList) t);
          h_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_16 = ATgetFirst((ATermList) t);
          j_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_16;
      t = h_0(t);
      t = i_16;
      t = i_0(t);
      p_16 = t;
      t = (ATerm) ATinsert(CheckATermList(j_16), p_16);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm r_16 = NULL;
    r_16 = t;
    if(match_string(t, "-i"))
      {
        t = r_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = r_16;
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm s_16 = NULL;
    s_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_16);
    t = (ATerm) ATmakeAppl(sym_Input_1, s_16);
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_o_19;
    return(t);
  }
  t = ArgOption_3_0(f_5, h_5, i_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_7;
  t = whoami_0_0(t);
  t_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), t_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        t = eval_config_0_0(t);
        b_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_6);
        t = b_6;
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm t)
{
  ATerm t_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_89(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = t_19;
      {
        ATerm w_16 = NULL,x_16 = NULL,a_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_16 = ATgetFirst((ATermList) t);
            x_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_16;
        t = foldr_2_0(m_89, n_89, t);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_16, a_17);
        t = n_89(t);
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
  ATerm d_17 = NULL,c_6 = NULL,d_6 = NULL;
  t = times_0_0(t);
  c_6 = t;
  t = SSL_explode_term(c_6);
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6;
  {
    ATerm j_5 (ATerm t)
    {
      t = term_r_9;
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm h_6 = NULL,j_6 = NULL;
      if(match_cons(t, sym__2))
        {
          h_6 = ATgetArgument(t, 0);
          j_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_6, j_6);
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = y_19;
            t = SSL_addr(h_6, j_6);
          }
      }
      return(t);
    }
    t = foldr_2_0(j_5, k_5, t);
    d_17 = t;
    t = SSL_TicksToSeconds(d_17);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_17;
        if((p_17 != t))
          {
            _fail(t);
          }
        t = o_17;
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = o_17;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_17, q_17);
              ;
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              t = SSL_gtr(p_17, q_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_17, q_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_17 = NULL,v_17 = NULL;
      t_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            t = eval_config_0_0(t);
            e_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_7);
            t = e_7;
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
          }
        v_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_17, term_x_9);
        t = geq_0_0(t);
        t = t_17;
        t = d_97(t);
      }
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL;
    t = run_time_0_0(t);
    x_17 = t;
    t = term_j_7;
    t = whoami_0_0(t);
    y_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), x_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), y_17));
    t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_20), x_17), term_s_20), y_17));
    return(t);
  }
  t = if_verbose1_1_0(l_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_8 = NULL;
            t = eval_config_0_0(t);
            l_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), l_8);
            t = l_8;
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
          }
      }
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              {
                ATerm a_21 = t;
                int b_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_21);
                  }
                else
                  {
                    t = a_21;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(m_5, t);
      }
    }
  t = a_100(t);
  return(t);
}
ATerm map_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm z_17 (ATerm t)
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = Cons_2_0(k_83, z_17, t);
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_18 = ATgetFirst((ATermList) t);
      f_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_18 = NULL,o_18 = NULL;
        t = f_18;
        t = g_0(t);
        m_18 = t;
        t = e_18;
        t = e_0(t);
        o_18 = t;
        t = f_18;
        {
          ATerm n_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_18), o_18);
            return(t);
          }
          t = reverse_acc_2_0(e_0, n_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_68 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  s_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_18);
  p_18 = t;
  t = q_18;
  t = i_68(t);
  r_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, r_18), p_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL;
            t = eval_config_0_0(t);
            c_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_9);
            t = c_9;
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
          }
      }
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm q_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(q_5, t);
      }
    }
  t = term_i_21;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm r_5 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, r_5, t);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm v_18 = NULL;
        v_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, v_18), term_j_21);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(s_5, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm j_68 (ATerm), ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  w_18 = t;
  t = x_18;
  t = j_68(t);
  y_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, y_18), w_18);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  d_19 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_21 = ATgetFirst((ATermList) t);
                ATerm n_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_19;
          }
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATinsert(ATempty, d_19);
      }
    e_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), e_19);
    t = d_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL;
        t = eval_config_0_0(t);
        l_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_9);
        t = l_9;
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_t_21;
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = term_u_21;
        return(t);
      }
      t = Option_3_0(t_5, u_5, v_5, t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm x_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_21;
          return(t);
        }
        ATerm a_6 (ATerm t)
        {
          t = term_w_21;
          return(t);
        }
        t = Option_3_0(x_5, z_5, a_6, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  n_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_19 = ATgetFirst((ATermList) t);
      k_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  i_19 = t;
  t = j_19;
  t = q_62(t);
  l_19 = t;
  t = k_19;
  t = r_62(t);
  m_19 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_19), l_19), i_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_21;
        t = d_102(t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
      }
    t = r_19;
    {
      ATerm e_6 (ATerm t)
      {
        ATerm s_19 = NULL;
        s_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, s_19);
        return(t);
      }
      ATerm g_6 (ATerm t)
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                t = d_102(t);
                t = Cons_2_0(_id, g_6, t);
              }
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm u_19 = NULL,v_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_19 = ATgetFirst((ATermList) t);
                  v_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_19), (ATerm) ATmakeAppl(sym_Undefined_1, u_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(e_6, g_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = c_20;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm e_22 = t;
      int f_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_102(t);
          ;
          LocalPopChoice(f_22);
        }
      else
        {
          t = e_22;
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm f_20 = NULL;
                  f_20 = t;
                  if(match_string(t, "--help"))
                    {
                      t = f_20;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = f_20;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = f_20;
                        }
                    }
                  return(t);
                }
                ATerm o_6 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_i_22;
                  return(t);
                }
                ATerm p_6 (ATerm t)
                {
                  t = term_j_22;
                  return(t);
                }
                t = Option_3_0(n_6, o_6, p_6, t);
                ;
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_6, t);
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_20 = NULL;
          k_20 = t;
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_20;
                {
                  ATerm o_22 = t;
                  int p_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm q_22 = t;
                        int r_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_11 = NULL;
                            t = eval_config_0_0(t);
                            s_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_11);
                            t = s_11;
                            ;
                            LocalPopChoice(r_22);
                          }
                        else
                          {
                            t = q_22;
                          }
                      }
                      ;
                      LocalPopChoice(p_22);
                    }
                  else
                    {
                      t = o_22;
                      {
                        ATerm q_6 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(q_6, t);
                      }
                    }
                  t = k_20;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm s_22 = t;
                  int t_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_12 = NULL;
                      t = eval_config_0_0(t);
                      r_12 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), r_12);
                      t = r_12;
                      ;
                      LocalPopChoice(t_22);
                    }
                  else
                    {
                      t = s_22;
                    }
                  t = k_20;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm u_22 = t;
            int v_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_6 (ATerm t)
                {
                  ATerm s_6 (ATerm t)
                  {
                    if(((d_20 != NULL) && (d_20 != t)))
                      _fail(t);
                    else
                      d_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(s_6, t);
                  return(t);
                }
                t = fetch_1_0(r_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_20)), term_w_22));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_22);
              }
            else
              {
                t = u_22;
              }
          }
        }
      e_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = e_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t)
{
  ATerm n_20 = NULL;
  t = parse_options_1_0(c_100, t);
  n_20 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), n_20);
  t = n_20;
  t = e_100(t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_100, t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          ATerm z_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_100(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_99(t);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              {
                ATerm f_23 = t;
                int g_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_23);
                  }
                else
                  {
                    t = f_23;
                    {
                      ATerm h_23 = t;
                      int i_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_7 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm f_7 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_j_23;
                            return(t);
                          }
                          ATerm g_7 (ATerm t)
                          {
                            t = term_k_23;
                            return(t);
                          }
                          t = Option_3_0(d_7, f_7, g_7, t);
                          ;
                          LocalPopChoice(i_23);
                        }
                      else
                        {
                          t = h_23;
                          {
                            ATerm l_23 = t;
                            int m_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_23);
                              }
                            else
                              {
                                t = l_23;
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
  ATerm u_6 (ATerm t)
  {
    ATerm h_7 (ATerm t)
    {
      ATerm o_20 = NULL,p_20 = NULL;
      o_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_13 = NULL;
            t = eval_config_0_0(t);
            d_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_13);
            t = d_13;
            ;
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
          }
        p_20 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, p_20));
        t = o_20;
      }
      return(t);
    }
    t = if_verbose2_1_0(h_7, t);
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    ATerm q_20 = NULL,r_20 = NULL,k_13 = NULL;
    q_20 = t;
    {
      ATerm p_23 = t;
      int q_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_7, t);
          ;
          LocalPopChoice(q_23);
        }
      else
        {
          t = p_23;
          t = term_r_23;
          r_20 = t;
        }
      t = not_null(r_20);
      t = ReadFromFile_0_0(t);
      k_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_20, k_13);
      t = apply_strategy_1_0(l_99, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_6, n_99, u_6, v_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(Stratego_warnings_0_0, stratego_warnings_options_0_0, default_usage_0_0, t);
  return(t);
}

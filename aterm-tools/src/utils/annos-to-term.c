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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_g_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_f_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_o_10;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_c_9;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_j_8;
ATerm term_f_8;
ATerm term_b_8;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_c_6;
ATerm term_t_5;
ATerm term_r_5;
ATerm term_l_5;
ATerm term_d_5;
ATerm term_i_4;
void init_constant_terms (void)
{
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__3, term_v_12, term_y_12, term_i_4);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm has_annotation_0_0 (ATerm);
ATerm catch_annos_0_0 (ATerm);
ATerm _2_0 (ATerm o_52 (ATerm), ATerm p_52 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_67 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm l_79 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_82 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm);
ATerm crush_2_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm l_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_67 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm l_59 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_59 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm o_67 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm t_59 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm q_85 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_85 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm annos_to_term_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm has_annotation_0_0 (ATerm t)
{
  ATerm z_0 = NULL;
  z_0 = t;
  t = SSLgetAnnotations(z_0);
  {
    ATerm s_1 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_1;
      }
    t = z_0;
  }
  return(t);
}
ATerm catch_annos_0_0 (ATerm t)
{
  ATerm q_2 = t;
  int h_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_annotation_0_0(t);
      LocalPopChoice(h_4);
      {
        ATerm g_1 = NULL,l_1 = NULL,p_1 = NULL;
        g_1 = t;
        t = ATremoveAnnotations(g_1);
        t = SRTS_all(catch_annos_0_0, t);
        l_1 = t;
        t = SSLgetAnnotations(g_1);
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, l_1, p_1);
      }
    }
  else
    {
      t = q_2;
      t = SRTS_all(catch_annos_0_0, t);
    }
  return(t);
}
ATerm _2_0 (ATerm o_52 (ATerm), ATerm p_52 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_2);
  t_1 = t;
  t = v_1;
  t = o_52(t);
  x_1 = t;
  t = w_1;
  t = p_52(t);
  z_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_1, z_1), t_1);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL;
  f_2 = t;
  t = term_i_4;
  t = whoami_0_0(t);
  g_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), g_2), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = f_2;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm j_2 = NULL,m_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_2 = ATgetFirst((ATermList) t);
            m_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_2;
        {
          ATerm c_0 (ATerm t)
          {
            t = m_2;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_0, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  r_2 = t;
  t = SSL_explode_term(r_2);
  if(match_cons(t, sym__2))
    {
      ATerm l_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_2;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_67 (ATerm), ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm m_4 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_2, t);
        ;
        LocalPopChoice(n_4);
      }
    else
      {
        t = m_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_67(t);
      }
    return(t);
  }
  t = u_2(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      x_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_2;
  {
    ATerm e_0 (ATerm t)
    {
      t = w_2;
      return(t);
    }
    t = at_end_1_0(e_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_4 = t;
  int p_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(p_4);
    }
  else
    {
      t = o_4;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_2 = NULL;
  ATerm k_0 (ATerm t)
  {
    ATerm z_2 = NULL;
    z_2 = t;
    t = SSL_explode_string(z_2);
    return(t);
  }
  ATerm l_0 (ATerm t)
  {
    ATerm a_3 = NULL;
    a_3 = t;
    t = SSL_explode_string(a_3);
    return(t);
  }
  t = _2_0(k_0, l_0, t);
  t = conc_0_0(t);
  y_2 = t;
  t = SSL_implode_string(y_2);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_4 = t;
  int r_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 = NULL;
      o_3 = t;
      t = SSL_is_string(o_3);
      ;
      LocalPopChoice(r_4);
    }
  else
    {
      t = q_4;
      {
        ATerm s_4 = t;
        int v_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(m_0, t);
            ;
            LocalPopChoice(v_4);
          }
        else
          {
            t = s_4;
            {
              ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
              y_3 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_3 = ATgetArgument(t, 0);
                  t = z_3;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_3 = ATgetArgument(t, 0);
                      t = z_3;
                      {
                        ATerm w_4 = t;
                        int b_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_5);
                          }
                        else
                          {
                            t = w_4;
                            {
                              ATerm n_0 (ATerm t)
                              {
                                t = term_d_5;
                                return(t);
                              }
                              t = debug_1_0(n_0, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm t_4 = NULL,u_4 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_3 = ATgetArgument(t, 0);
                          a_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_3;
                      t = eval_config_0_0(t);
                      t_4 = t;
                      t = a_4;
                      t = eval_config_0_0(t);
                      u_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
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
  ATerm x_4 = NULL;
  x_4 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_4);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm y_4 = NULL;
      t = eval_config_0_0(t);
      y_4 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_4, y_4);
      t = y_4;
      return(t);
    }
    t = try_1_0(o_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm z_4 = NULL,a_5 = NULL;
    z_4 = t;
    t = term_l_5;
    t = get_config_0_0(t);
    a_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_5, term_r_5);
    t = geq_0_0(t);
    t = z_4;
    t = p_80(t);
    return(t);
  }
  t = try_1_0(p_0, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_5 = ATgetArgument(t, 0);
        if(match_cons(s_5, sym_Stream_1))
          {
            e_5 = ATgetArgument(s_5, 0);
          }
        else
          _fail(t);
        f_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(e_5, f_5);
    g_5 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), g_5);
    h_5 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, h_5);
    return(t);
  }
  t = WriteToFile_1_0(q_0, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_5, term_t_5);
  t = open_stream_0_0(t);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, j_5);
  t = l_79(t);
  t = fclose_0_0(t);
  t = j_5;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm z_5 = ATgetArgument(t, 0);
        if(match_cons(z_5, sym_Stream_1))
          {
            m_5 = ATgetArgument(z_5, 0);
          }
        else
          _fail(t);
        n_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(m_5, n_5);
    o_5 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, o_5);
    return(t);
  }
  t = WriteToFile_1_0(r_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  p_5 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm a_6 = t;
      int b_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                q_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(t_0, t);
          ;
          LocalPopChoice(b_6);
        }
      else
        {
          t = a_6;
          t = term_c_6;
          q_5 = t;
        }
      return(t);
    }
    t = _2_0(s_0, _id, t);
    t = p_5;
    {
      ATerm u_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          t = not_null(q_5);
          return(t);
        }
        t = split_2_0(x_0, _id, t);
        return(t);
      }
      t = _2_0(_id, u_0, t);
      {
        ATerm d_6 = t;
        int e_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm a_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(a_1, t);
              return(t);
            }
            t = _2_0(y_0, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(e_6);
          }
        else
          {
            t = d_6;
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
ATerm apply_strategy_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
  u_5 = t;
  t = dtime_0_0(t);
  t = u_5;
  t = n_82(t);
  v_5 = t;
  t = dtime_0_0(t);
  w_5 = t;
  t = v_5;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_5), (ATerm) ATmakeAppl(sym_Runtime_1, w_5)), y_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_6 (ATerm j_6, ATerm t)
  {
    t = SSL_fclose(j_6);
    return(t);
  }
  ATerm n_6 = NULL,o_6 = NULL;
  o_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_6 = ATgetArgument(t, 0);
      {
        ATerm f_6 = t;
        int g_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_6);
            ;
            LocalPopChoice(g_6);
          }
        else
          {
            t = f_6;
            t = t_6(o_6, t);
          }
      }
    }
  else
    {
      t = t_6(o_6, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  v_6 = t;
  t = x_78(t);
  w_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_6), w_6));
  t = v_6;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_stdin_stream();
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_6 = NULL;
  t = SSL_stdout_stream();
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_6 = NULL;
  t = SSL_stderr_stream();
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_6);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
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
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_6 = ATgetArgument(t, 0);
      ATerm i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        v_0 = t;
        t = SSL_explode_term(v_0);
        if(match_cons(t, sym__2))
          {
            ATerm m_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_6 = ATgetArgument(t, 1);
              if(((ATgetType(p_6) == AT_LIST) && !(ATisEmpty(p_6))))
                {
                  w_0 = ATgetFirst((ATermList) p_6);
                  {
                    ATerm q_6 = (ATerm) ATgetNext((ATermList) p_6);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_0;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(l_6);
      }
    else
      {
        t = k_6;
        {
          ATerm r_6 = t;
          int s_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
              ATerm b_1 (ATerm t)
              {
                ATerm h_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    h_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = h_7;
                return(t);
              }
              t = _2_0(b_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_7 = ATgetArgument(t, 0);
                  f_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_7, f_7);
              g_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, g_7);
              ;
              LocalPopChoice(s_6);
            }
          else
            {
              t = r_6;
              {
                ATerm i_7 = NULL,l_7 = NULL,n_7 = NULL;
                ATerm c_1 (ATerm t)
                {
                  ATerm o_7 = NULL;
                  o_7 = t;
                  t = SSL_is_string(o_7);
                  return(t);
                }
                t = _2_0(c_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_7 = ATgetArgument(t, 0);
                    l_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(i_7, l_7);
                n_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_7 = NULL,s_7 = NULL,t_7 = NULL;
  ATerm u_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_7 = NULL;
      u_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_7, term_c_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_7);
    }
  else
    {
      t = u_6;
      {
        ATerm d_1 (ATerm t)
        {
          t = term_d_7;
          return(t);
        }
        t = debug_1_0(d_1, t);
        _fail(t);
      }
    }
  p_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(t_7);
  s_7 = t;
  t = p_7;
  t = fclose_0_0(t);
  t = s_7;
  return(t);
}
ATerm split_2_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  t = u_74(t);
  x_7 = t;
  t = w_7;
  t = v_74(t);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, y_7);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  z_7 = t;
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              a_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(e_1, t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        t = term_m_7;
        a_8 = t;
      }
    t = z_7;
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(a_8);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, f_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm c_8 = NULL;
    c_8 = t;
    if(match_string(t, "-k"))
      {
        t = c_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = c_8;
      }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm d_8 = NULL,e_8 = NULL;
    d_8 = t;
    t = SSL_string_to_int(d_8);
    e_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), e_8);
    t = d_8;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_q_7;
    return(t);
  }
  t = ArgOption_3_0(h_1, i_1, j_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm g_8 = NULL;
        g_8 = t;
        if(match_string(t, "-S"))
          {
            t = g_8;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = g_8;
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_f_8;
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_j_8;
        return(t);
      }
      t = Option_3_0(k_1, m_1, n_1, t);
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = r_7;
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm h_8 = NULL,i_8 = NULL;
              h_8 = t;
              t = SSL_string_to_int(h_8);
              i_8 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_8);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, h_8);
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_t_8;
              return(t);
            }
            t = ArgOption_3_0(o_1, q_1, r_1, t);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            {
              ATerm u_1 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_8;
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = term_v_8;
                return(t);
              }
              t = Option_3_0(u_1, y_1, b_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm x_8 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = x_8;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm k_8 = NULL;
    k_8 = t;
    if(match_string(t, "-o"))
      {
        t = k_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = k_8;
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm l_8 = NULL;
    l_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), l_8);
    t = (ATerm) ATmakeAppl(sym_Output_1, l_8);
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm h_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_n_9;
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          t = term_o_9;
          return(t);
        }
        t = Option_3_0(h_2, i_2, k_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  o_8 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = o_8;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm w_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_8 = ATgetFirst((ATermList) t);
          q_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_8;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_8 = ATgetFirst((ATermList) t);
          s_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_8;
      t = h_0(t);
      t = r_8;
      t = i_0(t);
      w_8 = t;
      t = (ATerm) ATinsert(CheckATermList(s_8), w_8);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm y_8 = NULL;
    y_8 = t;
    if(match_string(t, "-i"))
      {
        t = y_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = y_8;
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm z_8 = NULL;
    z_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), z_8);
    t = (ATerm) ATmakeAppl(sym_Input_1, z_8);
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_p_9;
    return(t);
  }
  t = ArgOption_3_0(l_2, n_2, o_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_4;
  t = whoami_0_0(t);
  a_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), a_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_9;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_73(t);
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm d_9 = NULL,e_9 = NULL,h_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_9 = ATgetFirst((ATermList) t);
            e_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_9;
        t = foldr_2_0(f_73, g_73, t);
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_9, h_9);
        t = g_73(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL;
  i_9 = t;
  t = SSL_explode_term(i_9);
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9;
  t = foldr_2_0(y_76, z_76, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_9 = NULL;
  t = times_0_0(t);
  {
    ATerm p_2 (ATerm t)
    {
      t = term_b_8;
      return(t);
    }
    ATerm t_2 (ATerm t)
    {
      ATerm l_9 = NULL,m_9 = NULL;
      if(match_cons(t, sym__2))
        {
          l_9 = ATgetArgument(t, 0);
          m_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm b_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(l_9, m_9);
            ;
            LocalPopChoice(e_10);
          }
        else
          {
            t = b_10;
            t = SSL_addr(l_9, m_9);
          }
      }
      return(t);
    }
    t = crush_2_0(p_2, t_2, t);
    k_9 = t;
    t = SSL_TicksToSeconds(k_9);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_9;
        if((y_9 != t))
          {
            _fail(t);
          }
        t = x_9;
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
        t = x_9;
        {
          ATerm m_10 = t;
          int n_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_9, z_9);
              ;
              LocalPopChoice(n_10);
            }
          else
            {
              t = m_10;
              t = SSL_gtr(y_9, z_9);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm c_10 = NULL,d_10 = NULL;
    c_10 = t;
    t = term_l_5;
    t = get_config_0_0(t);
    d_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_10, term_o_10);
    t = geq_0_0(t);
    t = c_10;
    t = o_80(t);
    return(t);
  }
  t = try_1_0(v_2, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm f_10 = NULL,g_10 = NULL;
    t = run_time_0_0(t);
    f_10 = t;
    t = term_i_4;
    t = whoami_0_0(t);
    g_10 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), f_10), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), g_10));
    t = (ATerm) ATmakeAppl(sym__2, term_v_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_10), f_10), term_w_10), g_10));
    return(t);
  }
  t = if_verbose1_1_0(b_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm h_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(k_11);
            }
          else
            {
              t = h_11;
              {
                ATerm l_11 = t;
                int m_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_11);
                  }
                else
                  {
                    t = l_11;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(c_3, t);
      }
    }
  t = l_83(t);
  return(t);
}
ATerm map_1_0 (ATerm e_67 (ATerm), ATerm t)
{
  ATerm i_10 (ATerm t)
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = Cons_2_0(e_67, i_10, t);
      }
    return(t);
  }
  t = i_10(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_10 = ATgetFirst((ATermList) t);
      l_10 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_10 = NULL,q_10 = NULL;
        t = l_10;
        t = g_0(t);
        p_10 = t;
        t = k_10;
        t = f_0(t);
        q_10 = t;
        t = l_10;
        {
          ATerm d_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_10), q_10);
            return(t);
          }
          t = reverse_acc_2_0(f_0, d_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_4;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, e_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm l_59 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_10);
  r_10 = t;
  t = s_10;
  t = l_59(t);
  t_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, t_10), r_10);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm f_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(f_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_v_11;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm g_3 (ATerm t)
    {
      ATerm y_10 = NULL;
      y_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, y_10), term_w_11);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(g_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm m_59 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_11);
  z_10 = t;
  t = a_11;
  t = m_59(t);
  b_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_11), z_10);
  return(t);
}
ATerm fetch_1_0 (ATerm o_67 (ATerm), ATerm t)
{
  ATerm g_11 (ATerm t)
  {
    ATerm y_11 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_67, _id, t);
        ;
        LocalPopChoice(c_12);
      }
    else
      {
        t = y_11;
        t = Cons_2_0(_id, g_11, t);
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  t = fetch_1_0(l_84, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  {
    ATerm d_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_11;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_12 = ATgetFirst((ATermList) t);
                ATerm o_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_11;
          }
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = d_12;
        t = (ATerm) ATinsert(ATempty, i_11);
      }
    j_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), j_11);
    t = i_11;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_9;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm t_59 (ATerm), ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_59(t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_z_12;
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_a_13;
        return(t);
      }
      t = Option_3_0(h_3, i_3, j_3, t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm k_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_13;
          return(t);
        }
        ATerm m_3 (ATerm t)
        {
          t = term_c_13;
          return(t);
        }
        t = Option_3_0(k_3, l_3, m_3, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  if(match_cons(t, sym__3))
    {
      p_11 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
      r_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_11, q_11);
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_13 = ATgetArgument(t, 0);
            ATerm j_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_11, q_11);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = (ATerm) ATempty;
      }
    s_11 = t;
    t = SSL_table_put(p_11, q_11, (ATerm) ATinsert(CheckATermList(s_11), r_11));
    t = (ATerm) ATmakeAppl(sym__3, p_11, q_11, r_11);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm q_85 (ATerm), ATerm t)
{
  ATerm x_11 = NULL;
  t = term_i_4;
  t = q_85(t);
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_13, term_m_13, x_11);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_11;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm e_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_12 = ATgetFirst((ATermList) t);
          b_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_12;
      t = a_0(t);
      t = term_i_4;
      t = b_0(t);
      e_12 = t;
      t = (ATerm) ATinsert(CheckATermList(b_12), e_12);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm g_12 = NULL;
    g_12 = t;
    if(match_string(t, "--help"))
      {
        t = g_12;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = g_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = g_12;
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_p_13;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  t = Option_3_0(n_3, p_3, q_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  m_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_12 = ATgetFirst((ATermList) t);
      j_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_12);
  h_12 = t;
  t = i_12;
  t = x_53(t);
  k_12 = t;
  t = j_12;
  t = y_53(t);
  l_12 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(l_12), k_12), h_12);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_85 (ATerm), ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  {
    ATerm r_3 (ATerm t)
    {
      t = term_r_13;
      t = o_85(t);
      return(t);
    }
    t = try_1_0(r_3, t);
    t = t_12;
    {
      ATerm s_3 (ATerm t)
      {
        ATerm u_12 = NULL;
        u_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_12);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_12);
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                t = o_85(t);
                t = Cons_2_0(_id, t_3, t);
              }
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm w_12 = NULL,x_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_12 = ATgetFirst((ATermList) t);
                  x_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_12), (ATerm) ATmakeAppl(sym_Undefined_1, w_12));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_3, t_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = d_13;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_85(t);
          ;
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_3, t);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 = NULL;
            k_13 = t;
            {
              ATerm c_14 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_13;
                  {
                    ATerm e_14 = t;
                    int f_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_f_11;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(f_14);
                      }
                    else
                      {
                        t = e_14;
                        {
                          ATerm w_3 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(w_3, t);
                        }
                      }
                    t = k_13;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(d_14);
                }
              else
                {
                  t = c_14;
                  t = term_y_12;
                  t = get_config_0_0(t);
                  t = k_13;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm x_3 (ATerm t)
              {
                ATerm b_4 (ATerm t)
                {
                  e_13 = t;
                  return(t);
                }
                t = Undefined_1_0(b_4, t);
                return(t);
              }
              t = option_defined_1_0(x_3, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_v_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_13)), term_g_14));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(v_3, t);
      f_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = f_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm c_5 = NULL;
  t = parse_options_1_0(n_83, t);
  c_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_5);
  t = c_5;
  t = p_83(t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_83, t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_83(t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(c_83, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(c_4, e_83, f_83, d_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm n_13 = NULL,o_13 = NULL;
      n_13 = t;
      t = term_u_9;
      t = get_config_0_0(t);
      o_13 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_13));
      t = n_13;
      return(t);
    }
    t = if_verbose2_1_0(f_4, t);
    return(t);
  }
  t = iowrap_4_0(w_82, x_82, y_82, e_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  t = iowrap_3_0(u_82, v_82, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = _2_0(_id, r_82, t);
    return(t);
  }
  t = iowrap_2_0(g_4, _fail, t);
  return(t);
}
ATerm annos_to_term_0_0 (ATerm t)
{
  t = iowrap_1_0(catch_annos_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = annos_to_term_0_0(t);
  return(t);
}

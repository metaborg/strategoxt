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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_o_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_d_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_n_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_c_8;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_l_6;
ATerm term_e_6;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_4;
ATerm term_k_4;
void init_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__3, term_f_13, term_g_13, term_o_4);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm foldr_3_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm);
ATerm crush_3_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm);
ATerm term_size_0_0 (ATerm);
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
ATerm if_verbose2_1_0 (ATerm u_80 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_82 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm c_79 (ATerm), ATerm);
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
ATerm if_verbose1_1_0 (ATerm t_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_67 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm n_59 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_59 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm o_67 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm q_84 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm t_59 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_85 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_3_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t)
{
  ATerm x_2 = t;
  int i_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_73(t);
      ;
      LocalPopChoice(i_4);
    }
  else
    {
      t = x_2;
      {
        ATerm z_0 = NULL,g_1 = NULL,s_1 = NULL,t_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_0 = ATgetFirst((ATermList) t);
            g_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_0;
        t = j_73(t);
        s_1 = t;
        t = g_1;
        t = foldr_3_0(h_73, i_73, j_73, t);
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_1, t_1);
        t = i_73(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL;
  v_1 = t;
  t = SSL_explode_term(v_1);
  if(match_cons(t, sym__2))
    {
      ATerm j_4 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_1;
  t = foldr_3_0(a_77, b_77, c_77, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_k_4;
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    ATerm x_1 = NULL,z_1 = NULL;
    if(match_cons(t, sym__2))
      {
        x_1 = ATgetArgument(t, 0);
        z_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm m_4 = t;
      int n_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(x_1, z_1);
          ;
          LocalPopChoice(n_4);
        }
      else
        {
          t = m_4;
          t = SSL_addr(x_1, z_1);
        }
    }
    return(t);
  }
  t = crush_3_0(b_0, f_0, term_size_0_0, t);
  return(t);
}
ATerm _2_0 (ATerm o_52 (ATerm), ATerm p_52 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL;
  g_2 = t;
  if(match_cons(t, sym__2))
    {
      b_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_2);
  a_2 = t;
  t = b_2;
  t = o_52(t);
  d_2 = t;
  t = c_2;
  t = p_52(t);
  f_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, d_2, f_2), a_2);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL;
  m_2 = t;
  t = term_o_4;
  t = whoami_0_0(t);
  o_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_2), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_2;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_4 = t;
  int q_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_4);
    }
  else
    {
      t = p_4;
      {
        ATerm r_2 = NULL,s_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_2 = ATgetFirst((ATermList) t);
            s_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_2;
        {
          ATerm k_0 (ATerm t)
          {
            t = s_2;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_0, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  t = SSL_explode_term(y_2);
  if(match_cons(t, sym__2))
    {
      ATerm r_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_2;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_67 (ATerm), ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm s_4 = t;
    int v_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_3, t);
        ;
        LocalPopChoice(v_4);
      }
    else
      {
        t = s_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_67(t);
      }
    return(t);
  }
  t = a_3(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_3;
  {
    ATerm l_0 (ATerm t)
    {
      t = b_3;
      return(t);
    }
    t = at_end_1_0(l_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(y_4);
    }
  else
    {
      t = x_4;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm g_3 = NULL;
    g_3 = t;
    t = SSL_explode_string(g_3);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    ATerm h_3 = NULL;
    h_3 = t;
    t = SSL_explode_string(h_3);
    return(t);
  }
  t = _2_0(m_0, n_0, t);
  t = conc_0_0(t);
  d_3 = t;
  t = SSL_implode_string(d_3);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_5 = t;
  int b_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 = NULL;
      l_4 = t;
      t = SSL_is_string(l_4);
      ;
      LocalPopChoice(b_5);
    }
  else
    {
      t = a_5;
      {
        ATerm c_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_0, t);
            ;
            LocalPopChoice(f_5);
          }
        else
          {
            t = c_5;
            {
              ATerm t_4 = NULL,u_4 = NULL,w_4 = NULL;
              t_4 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_4 = ATgetArgument(t, 0);
                  t = u_4;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_4 = ATgetArgument(t, 0);
                      t = u_4;
                      {
                        ATerm g_5 = t;
                        int j_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_5);
                          }
                        else
                          {
                            t = g_5;
                            {
                              ATerm p_0 (ATerm t)
                              {
                                t = term_p_5;
                                return(t);
                              }
                              t = debug_1_0(p_0, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm d_5 = NULL,e_5 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_4 = ATgetArgument(t, 0);
                          w_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_4;
                      t = eval_config_0_0(t);
                      d_5 = t;
                      t = w_4;
                      t = eval_config_0_0(t);
                      e_5 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_5, e_5);
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
  ATerm h_5 = NULL;
  h_5 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_5);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm i_5 = NULL;
      t = eval_config_0_0(t);
      i_5 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_5, i_5);
      t = i_5;
      return(t);
    }
    t = try_1_0(q_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm k_5 = NULL,l_5 = NULL;
    k_5 = t;
    t = term_q_5;
    t = get_config_0_0(t);
    l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, term_r_5);
    t = geq_0_0(t);
    t = k_5;
    t = u_80(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,s_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_6 = ATgetArgument(t, 0);
        if(match_cons(d_6, sym_Stream_1))
          {
            m_5 = ATgetArgument(d_6, 0);
          }
        else
          _fail(t);
        n_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(m_5, n_5);
    o_5 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), o_5);
    s_5 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, s_5);
    return(t);
  }
  t = WriteToFile_1_0(s_0, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_5, term_e_6);
  t = open_stream_0_0(t);
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, u_5);
  t = q_79(t);
  t = fclose_0_0(t);
  t = u_5;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_6 = ATgetArgument(t, 0);
        if(match_cons(f_6, sym_Stream_1))
          {
            w_5 = ATgetArgument(f_6, 0);
          }
        else
          _fail(t);
        x_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(w_5, x_5);
    y_5 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, y_5);
    return(t);
  }
  t = WriteToFile_1_0(t_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  z_5 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm i_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                a_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(x_0, t);
          ;
          LocalPopChoice(k_6);
        }
      else
        {
          t = i_6;
          t = term_l_6;
          a_6 = t;
        }
      return(t);
    }
    t = _2_0(u_0, _id, t);
    t = z_5;
    {
      ATerm y_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          t = not_null(a_6);
          return(t);
        }
        t = split_2_0(a_1, _id, t);
        return(t);
      }
      t = _2_0(_id, y_0, t);
      {
        ATerm m_6 = t;
        int n_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(c_1, t);
              return(t);
            }
            t = _2_0(b_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(n_6);
          }
        else
          {
            t = m_6;
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
ATerm apply_strategy_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL;
  b_6 = t;
  t = dtime_0_0(t);
  t = b_6;
  t = s_82(t);
  c_6 = t;
  t = dtime_0_0(t);
  g_6 = t;
  t = c_6;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_6), (ATerm) ATmakeAppl(sym_Runtime_1, g_6)), j_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_7 (ATerm v_6, ATerm t)
  {
    t = SSL_fclose(v_6);
    return(t);
  }
  ATerm y_6 = NULL,z_6 = NULL;
  z_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_6 = ATgetArgument(t, 0);
      {
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_6);
            ;
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
            t = b_7(z_6, t);
          }
      }
    }
  else
    {
      t = b_7(z_6, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  t = c_79(t);
  d_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_7), d_7));
  t = c_7;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  t = SSL_stdin_stream();
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  t = SSL_stdout_stream();
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_7 = NULL;
  t = SSL_stderr_stream();
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_7);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_7 = NULL;
  l_7 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      ATerm r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        v_0 = t;
        t = SSL_explode_term(v_0);
        if(match_cons(t, sym__2))
          {
            ATerm u_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_6 = ATgetArgument(t, 1);
              if(((ATgetType(w_6) == AT_LIST) && !(ATisEmpty(w_6))))
                {
                  w_0 = ATgetFirst((ATermList) w_6);
                  {
                    ATerm x_6 = (ATerm) ATgetNext((ATermList) w_6);
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
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        {
          ATerm a_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
              ATerm d_1 (ATerm t)
              {
                ATerm t_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    t_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_7;
                return(t);
              }
              t = _2_0(d_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_7 = ATgetArgument(t, 0);
                  r_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_7, r_7);
              s_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_7);
              ;
              LocalPopChoice(h_7);
            }
          else
            {
              t = a_7;
              {
                ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
                ATerm e_1 (ATerm t)
                {
                  ATerm x_7 = NULL;
                  x_7 = t;
                  t = SSL_is_string(x_7);
                  return(t);
                }
                t = _2_0(e_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_7 = ATgetArgument(t, 0);
                    v_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_7, v_7);
                w_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL;
      b_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_8, term_k_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm f_1 (ATerm t)
        {
          t = term_m_7;
          return(t);
        }
        t = debug_1_0(f_1, t);
        _fail(t);
      }
    }
  y_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_8);
  z_7 = t;
  t = y_7;
  t = fclose_0_0(t);
  t = z_7;
  return(t);
}
ATerm split_2_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  t = u_74(t);
  e_8 = t;
  t = d_8;
  t = v_74(t);
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, f_8);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              h_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(h_1, t);
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        t = term_p_7;
        h_8 = t;
      }
    t = g_8;
    {
      ATerm i_1 (ATerm t)
      {
        t = not_null(h_8);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, i_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm j_8 = NULL;
    j_8 = t;
    if(match_string(t, "-k"))
      {
        t = j_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = j_8;
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm k_8 = NULL,l_8 = NULL;
    k_8 = t;
    t = SSL_string_to_int(k_8);
    l_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), l_8);
    t = k_8;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_c_8;
    return(t);
  }
  t = ArgOption_3_0(j_1, k_1, l_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_8 = NULL;
        n_8 = t;
        if(match_string(t, "-S"))
          {
            t = n_8;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = n_8;
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_t_8;
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_u_8;
        return(t);
      }
      t = Option_3_0(m_1, n_1, o_1, t);
      ;
      LocalPopChoice(m_8);
    }
  else
    {
      t = i_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm o_8 = NULL,p_8 = NULL;
              o_8 = t;
              t = SSL_string_to_int(o_8);
              p_8 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_8);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, o_8);
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_c_9;
              return(t);
            }
            t = ArgOption_3_0(p_1, q_1, r_1, t);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
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
                t = term_e_9;
                return(t);
              }
              ATerm e_2 (ATerm t)
              {
                t = term_i_9;
                return(t);
              }
              t = Option_3_0(u_1, y_1, e_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm j_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = j_9;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm r_8 = NULL;
    r_8 = t;
    if(match_string(t, "-o"))
      {
        t = r_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = r_8;
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm s_8 = NULL;
    s_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_8);
    t = (ATerm) ATmakeAppl(sym_Output_1, s_8);
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_n_9;
    return(t);
  }
  t = ArgOption_3_0(h_2, i_2, j_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm k_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_9;
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_x_9;
          return(t);
        }
        t = Option_3_0(k_2, l_2, n_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  v_8 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_8;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm d_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_8 = ATgetFirst((ATermList) t);
          x_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_8;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_8 = ATgetFirst((ATermList) t);
          z_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_8;
      t = h_0(t);
      t = y_8;
      t = i_0(t);
      d_9 = t;
      t = (ATerm) ATinsert(CheckATermList(z_8), d_9);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm f_9 = NULL;
    f_9 = t;
    if(match_string(t, "-i"))
      {
        t = f_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = f_9;
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm g_9 = NULL;
    g_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_9);
    t = (ATerm) ATmakeAppl(sym_Input_1, g_9);
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_y_9;
    return(t);
  }
  t = ArgOption_3_0(p_2, q_2, t_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_4;
  t = whoami_0_0(t);
  h_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_73(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm k_9 = NULL,l_9 = NULL,o_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_9 = ATgetFirst((ATermList) t);
            l_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_9;
        t = foldr_2_0(f_73, g_73, t);
        o_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_9, o_9);
        t = g_73(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  p_9 = t;
  t = SSL_explode_term(p_9);
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9;
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
  ATerm t_9 = NULL;
  t = times_0_0(t);
  {
    ATerm u_2 (ATerm t)
    {
      t = term_q_8;
      return(t);
    }
    ATerm v_2 (ATerm t)
    {
      ATerm u_9 = NULL,v_9 = NULL;
      if(match_cons(t, sym__2))
        {
          u_9 = ATgetArgument(t, 0);
          v_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(u_9, v_9);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = o_10;
            t = SSL_addr(u_9, v_9);
          }
      }
      return(t);
    }
    t = crush_2_0(u_2, v_2, t);
    t_9 = t;
    t = SSL_TicksToSeconds(t_9);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_10;
        if((f_10 != t))
          {
            _fail(t);
          }
        t = e_10;
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        t = e_10;
        {
          ATerm v_10 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_10, g_10);
              ;
              LocalPopChoice(c_11);
            }
          else
            {
              t = v_10;
              t = SSL_gtr(f_10, g_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_10, g_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_80 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm j_10 = NULL,k_10 = NULL;
    j_10 = t;
    t = term_q_5;
    t = get_config_0_0(t);
    k_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_10, term_k_4);
    t = geq_0_0(t);
    t = j_10;
    t = t_80(t);
    return(t);
  }
  t = try_1_0(w_2, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm m_10 = NULL,n_10 = NULL;
    t = run_time_0_0(t);
    m_10 = t;
    t = term_o_4;
    t = whoami_0_0(t);
    n_10 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), m_10), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), n_10));
    t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_11), m_10), term_e_11), n_10));
    return(t);
  }
  t = if_verbose1_1_0(e_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm r_11 = t;
          int s_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(s_11);
            }
          else
            {
              t = r_11;
              {
                ATerm t_11 = t;
                int u_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(u_11);
                  }
                else
                  {
                    t = t_11;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_3, t);
      }
    }
  t = q_83(t);
  return(t);
}
ATerm map_1_0 (ATerm e_67 (ATerm), ATerm t)
{
  ATerm p_10 (ATerm t)
  {
    ATerm v_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = v_11;
        t = Cons_2_0(e_67, p_10, t);
      }
    return(t);
  }
  t = p_10(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_10 = ATgetFirst((ATermList) t);
      s_10 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_10 = NULL,x_10 = NULL;
        t = s_10;
        t = g_0(t);
        w_10 = t;
        t = r_10;
        t = e_0(t);
        x_10 = t;
        t = s_10;
        {
          ATerm i_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_10), x_10);
            return(t);
          }
          t = reverse_acc_2_0(e_0, i_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_4;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, j_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm n_59 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_11);
  y_10 = t;
  t = z_10;
  t = n_59(t);
  a_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, a_11), y_10);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm k_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(k_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_d_12;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm l_3 (ATerm t)
    {
      ATerm f_11 = NULL;
      f_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_11), term_f_12);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(l_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_59 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_11);
  g_11 = t;
  t = h_11;
  t = o_59(t);
  i_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, i_11), g_11);
  return(t);
}
ATerm fetch_1_0 (ATerm o_67 (ATerm), ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_67, _id, t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = Cons_2_0(_id, n_11, t);
      }
    return(t);
  }
  t = n_11(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  t = fetch_1_0(q_84, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  {
    ATerm m_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_11;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_12 = ATgetFirst((ATermList) t);
                ATerm w_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_11;
          }
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATinsert(ATempty, p_11);
      }
    q_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_11);
    t = p_11;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_10;
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
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_59(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_12 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_h_13;
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = term_i_13;
        return(t);
      }
      t = Option_3_0(m_3, n_3, o_3, t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = z_12;
      {
        ATerm p_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_13;
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_n_13;
          return(t);
        }
        t = Option_3_0(p_3, q_3, r_3, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__3))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
      y_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_11, x_11);
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_13 = ATgetArgument(t, 0);
            ATerm s_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_11, x_11);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = (ATerm) ATempty;
      }
    z_11 = t;
    t = SSL_table_put(w_11, x_11, (ATerm) ATinsert(CheckATermList(z_11), y_11));
    t = (ATerm) ATmakeAppl(sym__3, w_11, x_11, y_11);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm e_12 = NULL;
  t = term_o_4;
  t = v_85(t);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_13, term_w_13, e_12);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  g_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = g_12;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm l_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_12 = ATgetFirst((ATermList) t);
          i_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_12;
      t = a_0(t);
      t = term_o_4;
      t = c_0(t);
      l_12 = t;
      t = (ATerm) ATinsert(CheckATermList(i_12), l_12);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm n_12 = NULL;
    n_12 = t;
    if(match_string(t, "--help"))
      {
        t = n_12;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = n_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = n_12;
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_x_13;
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_y_13;
    return(t);
  }
  t = Option_3_0(s_3, t_3, u_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  t_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_12 = ATgetFirst((ATermList) t);
      q_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_12);
  o_12 = t;
  t = p_12;
  t = x_53(t);
  r_12 = t;
  t = q_12;
  t = y_53(t);
  s_12 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(s_12), r_12), o_12);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  {
    ATerm v_3 (ATerm t)
    {
      t = term_z_13;
      t = t_85(t);
      return(t);
    }
    t = try_1_0(v_3, t);
    t = a_13;
    {
      ATerm w_3 (ATerm t)
      {
        ATerm b_13 = NULL;
        b_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_13);
        t = (ATerm) ATmakeAppl(sym_Program_1, b_13);
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
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
                t = t_85(t);
                t = Cons_2_0(_id, x_3, t);
              }
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm d_13 = NULL,e_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_13 = ATgetFirst((ATermList) t);
                  e_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_13), (ATerm) ATmakeAppl(sym_Undefined_1, d_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_3, x_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = k_13;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_85(t);
          ;
          LocalPopChoice(f_14);
        }
      else
        {
          t = e_14;
          {
            ATerm g_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_14);
              }
            else
              {
                t = g_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_3, t);
    {
      ATerm z_3 (ATerm t)
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_13 = NULL;
            r_13 = t;
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_13;
                  {
                    ATerm m_14 = t;
                    int n_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_o_11;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(n_14);
                      }
                    else
                      {
                        t = m_14;
                        {
                          ATerm a_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(a_4, t);
                        }
                      }
                    t = r_13;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  t = term_g_13;
                  t = get_config_0_0(t);
                  t = r_13;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            {
              ATerm b_4 (ATerm t)
              {
                ATerm c_4 (ATerm t)
                {
                  l_13 = t;
                  return(t);
                }
                t = Undefined_1_0(c_4, t);
                return(t);
              }
              t = option_defined_1_0(b_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_13)), term_o_14));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(z_3, t);
      m_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = m_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm t)
{
  ATerm z_4 = NULL;
  t = parse_options_1_0(s_83, t);
  z_4 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_4);
  t = z_4;
  t = u_83(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_83, t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_83(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(h_83, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(d_4, j_83, k_83, e_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      ATerm u_13 = NULL,v_13 = NULL;
      u_13 = t;
      t = term_d_10;
      t = get_config_0_0(t);
      v_13 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, v_13));
      t = u_13;
      return(t);
    }
    t = if_verbose2_1_0(g_4, t);
    return(t);
  }
  t = iowrap_4_0(b_83, c_83, d_83, f_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm t)
{
  t = iowrap_3_0(z_82, a_83, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    t = _2_0(_id, w_82, t);
    return(t);
  }
  t = iowrap_2_0(h_4, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_1_0(term_size_0_0, t);
  return(t);
}

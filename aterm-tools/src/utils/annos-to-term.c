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
ATerm term_g_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_l_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_9;
ATerm term_m_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_j_8;
ATerm term_u_6;
ATerm term_q_5;
ATerm term_n_5;
ATerm term_z_0;
void init_constant_terms (void)
{
  ATprotect(&(term_z_0));
  term_z_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__3, term_g_13, term_h_13, term_z_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm catch_annos_0_0 (ATerm);
ATerm _2_0 (ATerm v_52 (ATerm), ATerm w_52 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_79 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_67 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_68 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_81 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_67 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_59 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_59 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_85 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_0 = NULL,m_0 = NULL;
  k_0 = t;
  t = term_z_0;
  t = whoami_0_0(t);
  m_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_0;
  return(t);
}
ATerm catch_annos_0_0 (ATerm t)
{
  ATerm h_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_0 = NULL;
      o_0 = t;
      t = SSLgetAnnotations(o_0);
      {
        ATerm k_5 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_5;
          }
        t = o_0;
      }
      LocalPopChoice(j_5);
      {
        ATerm p_0 = NULL,q_0 = NULL,x_0 = NULL;
        p_0 = t;
        t = ATremoveAnnotations(p_0);
        t = SRTS_all(catch_annos_0_0, t);
        q_0 = t;
        t = SSLgetAnnotations(p_0);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_0, x_0);
      }
    }
  else
    {
      t = h_5;
      t = SRTS_all(catch_annos_0_0, t);
    }
  return(t);
}
ATerm _2_0 (ATerm v_52 (ATerm), ATerm w_52 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,l_1 = NULL,p_1 = NULL,s_1 = NULL,t_1 = NULL,v_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_1);
  g_1 = t;
  t = l_1;
  t = v_52(t);
  s_1 = t;
  t = p_1;
  t = w_52(t);
  t_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_1, t_1), g_1);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_1, term_n_5);
  t = open_stream_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, a_2);
  t = w_79(t);
  t = fclose_0_0(t);
  t = a_2;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_2 = NULL,f_2 = NULL;
  d_2 = t;
  {
    ATerm f_0 (ATerm t)
    {
      ATerm o_5 = t;
      int p_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((f_2 != NULL) && (f_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_0, t);
          ;
          LocalPopChoice(p_5);
        }
      else
        {
          t = o_5;
          t = term_q_5;
          if(((f_2 != NULL) && (f_2 != t)))
            _fail(t);
          else
            f_2 = t;
        }
      return(t);
    }
    t = _2_0(f_0, _id, t);
    t = d_2;
    {
      ATerm n_0 (ATerm t)
      {
        ATerm b_0 = NULL;
        b_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_2), b_0);
        return(t);
      }
      t = _2_0(_id, n_0, t);
      {
        ATerm s_5 = t;
        int t_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(t_0, t);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm v_5 = ATgetArgument(t, 0);
                    if(match_cons(v_5, sym_Stream_1))
                      {
                        g_2 = ATgetArgument(v_5, 0);
                      }
                    else
                      _fail(t);
                    h_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(g_2, h_2);
                i_2 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_2);
                return(t);
              }
              t = WriteToFile_1_0(u_0, t);
              return(t);
            }
            t = _2_0(r_0, s_0, t);
            ;
            LocalPopChoice(t_5);
          }
        else
          {
            t = s_5;
            {
              ATerm v_0 (ATerm t)
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm j_2 = NULL,m_2 = NULL,o_2 = NULL,q_2 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm z_5 = ATgetArgument(t, 0);
                      if(match_cons(z_5, sym_Stream_1))
                        {
                          j_2 = ATgetArgument(z_5, 0);
                        }
                      else
                        _fail(t);
                      m_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(j_2, m_2);
                  o_2 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), o_2);
                  q_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, q_2);
                  return(t);
                }
                t = WriteToFile_1_0(w_0, t);
                return(t);
              }
              t = _2_0(_id, v_0, t);
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
ATerm apply_strategy_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  r_2 = t;
  t = dtime_0_0(t);
  t = r_2;
  t = y_82(t);
  s_2 = t;
  t = dtime_0_0(t);
  w_2 = t;
  t = s_2;
  if(match_cons(t, sym__2))
    {
      x_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_2), (ATerm) ATmakeAppl(sym_Runtime_1, w_2)), y_2);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_4 (ATerm u_3, ATerm t)
  {
    t = SSL_fclose(u_3);
    return(t);
  }
  ATerm a_4 = NULL,b_4 = NULL;
  b_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_4 = ATgetArgument(t, 0);
      {
        ATerm c_6 = t;
        int d_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_4);
            ;
            LocalPopChoice(d_6);
          }
        else
          {
            t = c_6;
            t = d_4(b_4, t);
          }
      }
    }
  else
    {
      t = d_4(b_4, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_4 = NULL;
  t = SSL_stdin_stream();
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_4);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_4 = NULL;
  t = SSL_stdout_stream();
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_4);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_4 = NULL;
  t = SSL_stderr_stream();
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_4);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_6 = ATgetArgument(t, 0);
      ATerm f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,c_1 = NULL;
        b_1 = t;
        t = SSL_explode_term(b_1);
        if(match_cons(t, sym__2))
          {
            ATerm j_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_6 = ATgetArgument(t, 1);
              if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
                {
                  c_1 = ATgetFirst((ATermList) k_6);
                  {
                    ATerm m_6 = (ATerm) ATgetNext((ATermList) k_6);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_6);
      }
    else
      {
        t = g_6;
        {
          ATerm n_6 = t;
          int o_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_4 = NULL,n_4 = NULL,p_4 = NULL;
              ATerm y_0 (ATerm t)
              {
                ATerm q_4 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    q_4 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = q_4;
                return(t);
              }
              t = _2_0(y_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_4 = ATgetArgument(t, 0);
                  n_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_4, n_4);
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_4);
              ;
              LocalPopChoice(o_6);
            }
          else
            {
              t = n_6;
              {
                ATerm t_4 = NULL,v_4 = NULL,x_4 = NULL;
                ATerm a_1 (ATerm t)
                {
                  ATerm y_4 = NULL;
                  y_4 = t;
                  t = SSL_is_string(y_4);
                  return(t);
                }
                t = _2_0(a_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_4 = ATgetArgument(t, 0);
                    v_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_4, v_4);
                x_4 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, x_4);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 = NULL;
      c_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_5, term_u_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm d_1 = NULL;
        d_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = d_1;
        _fail(t);
      }
    }
  z_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(b_5);
  a_5 = t;
  t = z_4;
  t = fclose_0_0(t);
  t = a_5;
  return(t);
}
ATerm fetch_1_0 (ATerm w_67 (ATerm), ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_67, _id, t);
        ;
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        t = Cons_2_0(_id, i_5, t);
      }
    return(t);
  }
  t = i_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_7);
    }
  else
    {
      t = y_6;
      {
        ATerm l_5 = NULL,m_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_5 = ATgetFirst((ATermList) t);
            m_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_5;
        {
          ATerm e_1 (ATerm t)
          {
            t = m_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_68 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_5, t);
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_68(t);
      }
    return(t);
  }
  t = u_5(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm x_5 = NULL;
    x_5 = t;
    t = SSL_explode_string(x_5);
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm y_5 = NULL;
    y_5 = t;
    t = SSL_explode_string(y_5);
    return(t);
  }
  t = _2_0(f_1, h_1, t);
  {
    ATerm d_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 = NULL,b_6 = NULL;
        if(match_cons(t, sym__2))
          {
            a_6 = ATgetArgument(t, 0);
            b_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_6;
        {
          ATerm i_1 (ATerm t)
          {
            t = b_6;
            return(t);
          }
          t = at_end_1_0(i_1, t);
        }
        ;
        LocalPopChoice(f_7);
      }
    else
      {
        t = d_7;
        {
          ATerm j_1 = NULL,k_1 = NULL;
          j_1 = t;
          t = SSL_explode_term(j_1);
          if(match_cons(t, sym__2))
            {
              ATerm i_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_1;
          t = concat_0_0(t);
        }
      }
    w_5 = t;
    t = SSL_implode_string(w_5);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_6 = NULL;
      l_6 = t;
      t = SSL_is_string(l_6);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm o_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm t_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = t_7;
                }
              return(t);
            }
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = o_7;
            {
              ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
              p_6 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_6 = ATgetArgument(t, 0);
                  t = q_6;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_6 = ATgetArgument(t, 0);
                      t = q_6;
                      {
                        ATerm y_7 = t;
                        int z_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_6);
                            {
                              ATerm b_8 = t;
                              int e_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_2 = NULL;
                                  t = eval_config_0_0(t);
                                  v_2 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_6, v_2);
                                  t = v_2;
                                  ;
                                  LocalPopChoice(e_8);
                                }
                              else
                                {
                                  t = b_8;
                                }
                            }
                            ;
                            LocalPopChoice(z_7);
                          }
                        else
                          {
                            t = y_7;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_6), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = q_6;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_6 = NULL,z_6 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_6 = ATgetArgument(t, 0);
                          r_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_6;
                      t = eval_config_0_0(t);
                      v_6 = t;
                      t = r_6;
                      t = eval_config_0_0(t);
                      z_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_6, z_6);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_7 = NULL,g_7 = NULL;
      e_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 = NULL;
            t = eval_config_0_0(t);
            i_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_3);
            t = i_3;
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
          }
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_7, term_j_8);
        t = geq_0_0(t);
        t = e_7;
        t = a_81(t);
      }
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm l_7 = NULL;
    l_7 = t;
    if(match_string(t, "-k"))
      {
        t = l_7;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = l_7;
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm m_7 = NULL,n_7 = NULL;
    m_7 = t;
    t = SSL_string_to_int(m_7);
    n_7 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_7);
    t = m_7;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_p_8;
    return(t);
  }
  t = ArgOption_3_0(n_1, o_1, q_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm p_7 = NULL;
        p_7 = t;
        if(match_string(t, "-S"))
          {
            t = p_7;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = p_7;
          }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_t_8;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_u_8;
        return(t);
      }
      t = Option_3_0(r_1, u_1, w_1, t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm q_7 = NULL,r_7 = NULL;
              q_7 = t;
              t = SSL_string_to_int(q_7);
              r_7 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_7);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, q_7);
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = term_x_8;
              return(t);
            }
            t = ArgOption_3_0(x_1, y_1, b_2, t);
            ;
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            {
              ATerm e_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm k_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_y_8;
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_e_9;
                return(t);
              }
              t = Option_3_0(e_2, k_2, l_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_7 = NULL;
      t = term_z_0;
      t = d_0(t);
      x_7 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_9, term_g_9, x_7);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_7 = ATgetFirst((ATermList) t);
          w_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_7;
      t = a_0(t);
      t = term_z_0;
      t = c_0(t);
      a_8 = t;
      t = (ATerm) ATinsert(CheckATermList(w_7), a_8);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm c_8 = NULL;
    c_8 = t;
    if(match_string(t, "-o"))
      {
        t = c_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = c_8;
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm d_8 = NULL;
    d_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), d_8);
    t = (ATerm) ATmakeAppl(sym_Output_1, d_8);
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_m_9;
    return(t);
  }
  t = ArgOption_3_0(n_2, p_2, t_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__3))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
      m_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_8, l_8);
  {
    ATerm n_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_9 = ATgetArgument(t, 0);
            ATerm t_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_8, l_8);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = n_9;
        t = (ATerm) ATempty;
      }
    n_8 = t;
    t = SSL_table_put(k_8, l_8, (ATerm) ATinsert(CheckATermList(n_8), m_8));
    t = (ATerm) ATmakeAppl(sym__3, k_8, l_8, m_8);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_9 = NULL;
      t = term_z_0;
      t = j_0(t);
      d_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_9, term_g_9, d_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_8 = ATgetFirst((ATermList) t);
          a_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_9 = ATgetFirst((ATermList) t);
          c_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_8;
      t = h_0(t);
      t = b_9;
      t = i_0(t);
      h_9 = t;
      t = (ATerm) ATinsert(CheckATermList(c_9), h_9);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm j_9 = NULL;
    j_9 = t;
    if(match_string(t, "-i"))
      {
        t = j_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = j_9;
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm k_9 = NULL;
    k_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_9);
    t = (ATerm) ATmakeAppl(sym_Input_1, k_9);
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_u_9;
    return(t);
  }
  t = ArgOption_3_0(u_2, z_2, a_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_0;
  t = whoami_0_0(t);
  l_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL;
        t = eval_config_0_0(t);
        m_3 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_3);
        t = m_3;
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_73(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm o_9 = NULL,p_9 = NULL,s_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_9 = ATgetFirst((ATermList) t);
            p_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_9;
        t = foldr_2_0(n_73, o_73, t);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, s_9);
        t = o_73(t);
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
  ATerm v_9 = NULL,o_3 = NULL,p_3 = NULL;
  t = times_0_0(t);
  o_3 = t;
  t = SSL_explode_term(o_3);
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  {
    ATerm b_3 (ATerm t)
    {
      t = term_s_8;
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm s_3 = NULL,t_3 = NULL;
      if(match_cons(t, sym__2))
        {
          s_3 = ATgetArgument(t, 0);
          t_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(s_3, t_3);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            t = SSL_addr(s_3, t_3);
          }
      }
      return(t);
    }
    t = foldr_2_0(b_3, c_3, t);
    v_9 = t;
    t = SSL_TicksToSeconds(v_9);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_10;
        if((h_10 != t))
          {
            _fail(t);
          }
        t = g_10;
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = g_10;
        {
          ATerm f_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_10, i_10);
              ;
              LocalPopChoice(j_10);
            }
          else
            {
              t = f_10;
              t = SSL_gtr(h_10, i_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm k_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL,n_10 = NULL;
      l_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 = NULL;
            t = eval_config_0_0(t);
            w_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_4);
            t = w_4;
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = o_10;
          }
        n_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_10, term_w_10);
        t = geq_0_0(t);
        t = l_10;
        t = z_80(t);
      }
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = k_10;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL;
    t = run_time_0_0(t);
    p_10 = t;
    t = term_z_0;
    t = whoami_0_0(t);
    q_10 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_10), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), q_10));
    t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_11), p_10), term_e_11), q_10));
    return(t);
  }
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm n_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 = NULL;
            t = eval_config_0_0(t);
            r_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_5);
            t = r_5;
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = n_11;
          }
      }
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm e_3 (ATerm t)
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
                ATerm u_11 = t;
                int a_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(a_12);
                  }
                else
                  {
                    t = u_11;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(e_3, t);
      }
    }
  t = w_83(t);
  return(t);
}
ATerm map_1_0 (ATerm l_67 (ATerm), ATerm t)
{
  ATerm r_10 (ATerm t)
  {
    ATerm b_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = b_12;
        t = Cons_2_0(l_67, r_10, t);
      }
    return(t);
  }
  t = r_10(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_10 = ATgetFirst((ATermList) t);
      u_10 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_10 = NULL,z_10 = NULL;
        t = u_10;
        t = g_0(t);
        y_10 = t;
        t = t_10;
        t = e_0(t);
        z_10 = t;
        t = u_10;
        {
          ATerm f_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_10), z_10);
            return(t);
          }
          t = reverse_acc_2_0(e_0, f_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_0;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_59 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
  d_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_11);
  a_11 = t;
  t = b_11;
  t = s_59(t);
  c_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_11), a_11);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 = NULL;
            t = eval_config_0_0(t);
            i_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_6);
            t = i_6;
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
          }
      }
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm g_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(g_3, t);
      }
    }
  t = term_m_12;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm h_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, h_3, t);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm g_11 = NULL;
        g_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, g_11), term_n_12);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(j_3, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm t_59 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_11);
  h_11 = t;
  t = i_11;
  t = t_59(t);
  j_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, j_11), h_11);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  o_11 = t;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_11;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_12 = ATgetFirst((ATermList) t);
                ATerm v_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_11;
          }
        ;
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = (ATerm) ATinsert(ATempty, o_11);
      }
    p_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_11);
    t = o_11;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 = NULL;
        t = eval_config_0_0(t);
        h_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_7);
        t = h_7;
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_i_13;
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        t = term_j_13;
        return(t);
      }
      t = Option_3_0(k_3, l_3, n_3, t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      {
        ATerm q_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_k_13;
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_l_13;
          return(t);
        }
        t = Option_3_0(q_3, r_3, v_3, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  z_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_11 = ATgetFirst((ATermList) t);
      w_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_11);
  t_11 = t;
  t = v_11;
  t = e_54(t);
  x_11 = t;
  t = w_11;
  t = f_54(t);
  y_11 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(y_11), x_11), t_11);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_85 (ATerm), ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_13;
        t = z_85(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
      }
    t = d_12;
    {
      ATerm w_3 (ATerm t)
      {
        ATerm e_12 = NULL;
        e_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_12);
        t = (ATerm) ATmakeAppl(sym_Program_1, e_12);
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_13);
              }
            else
              {
                t = r_13;
                t = z_85(t);
                t = Cons_2_0(_id, x_3, t);
              }
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm g_12 = NULL,h_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_12 = ATgetFirst((ATermList) t);
                  h_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_12), (ATerm) ATmakeAppl(sym_Undefined_1, g_12));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_3, x_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_12;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_85(t);
          ;
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm r_12 = NULL;
                  r_12 = t;
                  if(match_string(t, "--help"))
                    {
                      t = r_12;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = r_12;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = r_12;
                        }
                    }
                  return(t);
                }
                ATerm c_4 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_x_13;
                  return(t);
                }
                ATerm h_4 (ATerm t)
                {
                  t = term_y_13;
                  return(t);
                }
                t = Option_3_0(z_3, c_4, h_4, t);
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_3, t);
    {
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = NULL;
          w_12 = t;
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_12;
                {
                  ATerm d_14 = t;
                  int e_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm f_14 = t;
                        int g_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_8 = NULL;
                            t = eval_config_0_0(t);
                            o_8 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_8);
                            t = o_8;
                            ;
                            LocalPopChoice(g_14);
                          }
                        else
                          {
                            t = f_14;
                          }
                      }
                      ;
                      LocalPopChoice(e_14);
                    }
                  else
                    {
                      t = d_14;
                      {
                        ATerm i_4 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(i_4, t);
                      }
                    }
                  t = w_12;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(c_14);
              }
            else
              {
                t = b_14;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm h_14 = t;
                  int i_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_9 = NULL;
                      t = eval_config_0_0(t);
                      i_9 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), i_9);
                      t = i_9;
                      ;
                      LocalPopChoice(i_14);
                    }
                  else
                    {
                      t = h_14;
                    }
                  t = w_12;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm k_4 (ATerm t)
                  {
                    if(((p_12 != NULL) && (p_12 != t)))
                      _fail(t);
                    else
                      p_12 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_4, t);
                  return(t);
                }
                t = fetch_1_0(j_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_12)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_12)), term_l_14));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
              }
          }
        }
      q_12 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_12;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm z_12 = NULL;
  t = parse_options_1_0(y_83, t);
  z_12 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_12);
  t = z_12;
  t = a_84(t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_83, t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_83(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              {
                ATerm u_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_14);
                  }
                else
                  {
                    t = u_14;
                    {
                      ATerm w_14 = t;
                      int x_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_4 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm u_4 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_y_14;
                            return(t);
                          }
                          ATerm d_5 (ATerm t)
                          {
                            t = term_z_14;
                            return(t);
                          }
                          t = Option_3_0(s_4, u_4, d_5, t);
                          ;
                          LocalPopChoice(x_14);
                        }
                      else
                        {
                          t = w_14;
                          {
                            ATerm a_15 = t;
                            int b_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_15);
                              }
                            else
                              {
                                t = a_15;
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
  ATerm o_4 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      ATerm a_13 = NULL,b_13 = NULL;
      a_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_10 = NULL;
            t = eval_config_0_0(t);
            s_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_10);
            t = s_10;
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
          }
        b_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_13));
        t = a_13;
      }
      return(t);
    }
    t = if_verbose2_1_0(e_5, t);
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm c_13 = NULL,d_13 = NULL,c_12 = NULL;
    c_13 = t;
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_13 != NULL) && (d_13 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_5, t);
          ;
          LocalPopChoice(f_15);
        }
      else
        {
          t = e_15;
          t = term_g_15;
          d_13 = t;
        }
      t = not_null(d_13);
      t = ReadFromFile_0_0(t);
      c_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_13, c_12);
      t = apply_strategy_1_0(h_83, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_4, j_83, o_4, r_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    t = _2_0(_id, catch_annos_0_0, t);
    return(t);
  }
  t = iowrap_3_0(g_5, _fail, default_usage_0_0, t);
  return(t);
}

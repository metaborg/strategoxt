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
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_o_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_k_12;
ATerm term_d_12;
ATerm term_d_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_r_6;
ATerm term_u_5;
ATerm term_m_5;
ATerm term_t_0;
void init_constant_terms (void)
{
  ATprotect(&(term_t_0));
  term_t_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__3, term_w_12, term_x_12, term_t_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm catch_annos_0_0 (ATerm);
ATerm _2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm p_3 (ATerm g_3, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_74 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm m_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm need_help_1_0 (ATerm h_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm d_66 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_66 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm k_92 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm parse_options_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm iowrap_3_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm);
ATerm h_5 (ATerm);
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
  t = term_t_0;
  t = whoami_0_0(t);
  m_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_0;
  return(t);
}
ATerm catch_annos_0_0 (ATerm t)
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_0 = NULL;
      o_0 = t;
      t = SSLgetAnnotations(o_0);
      {
        ATerm l_5 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_5;
          }
        t = o_0;
      }
      LocalPopChoice(k_5);
      {
        ATerm p_0 = NULL,q_0 = NULL,s_0 = NULL;
        p_0 = t;
        t = ATremoveAnnotations(p_0);
        t = SRTS_all(catch_annos_0_0, t);
        q_0 = t;
        t = SSLgetAnnotations(p_0);
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_0, s_0);
      }
    }
  else
    {
      t = j_5;
      t = SRTS_all(catch_annos_0_0, t);
    }
  return(t);
}
ATerm _2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,b_1 = NULL,e_1 = NULL,k_1 = NULL,l_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym__2))
    {
      v_0 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_1);
  u_0 = t;
  t = v_0;
  t = a_56(t);
  e_1 = t;
  t = b_1;
  t = b_56(t);
  k_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, e_1, k_1), u_0);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_1, term_m_5);
  t = open_stream_0_0(t);
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_2, y_1);
  t = h_86(t);
  t = fclose_0_0(t);
  t = y_1;
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = fetch_1_0(x_0, t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = WriteToFile_1_0(y_0, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_5 = ATgetArgument(t, 0);
      if(match_cons(n_5, sym_Stream_1))
        {
          e_2 = ATgetArgument(n_5, 0);
        }
      else
        _fail(t);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(e_2, f_2);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_2);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = WriteToFile_1_0(a_1, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_5 = ATgetArgument(t, 0);
      if(match_cons(o_5, sym_Stream_1))
        {
          i_2 = ATgetArgument(o_5, 0);
        }
      else
        _fail(t);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(i_2, k_2);
  l_2 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), l_2);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_2);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL;
  b_2 = t;
  {
    ATerm e_0 (ATerm t)
    {
      ATerm p_5 = t;
      int r_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_2 != NULL) && (c_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_0, t);
          ;
          LocalPopChoice(r_5);
        }
      else
        {
          t = p_5;
          t = term_u_5;
          if(((c_2 != NULL) && (c_2 != t)))
            _fail(t);
          else
            c_2 = t;
        }
      return(t);
    }
    t = _2_0(e_0, _id, t);
    t = b_2;
    {
      ATerm n_0 (ATerm t)
      {
        ATerm c_0 = NULL;
        c_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_2), c_0);
        return(t);
      }
      t = _2_0(_id, n_0, t);
      {
        ATerm w_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(r_0, w_0, t);
            ;
            LocalPopChoice(z_5);
          }
        else
          {
            t = w_5;
            t = _2_0(_id, z_0, t);
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
ATerm apply_strategy_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,s_2 = NULL;
  n_2 = t;
  t = dtime_0_0(t);
  t = n_2;
  t = j_89(t);
  o_2 = t;
  t = dtime_0_0(t);
  p_2 = t;
  t = o_2;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_2), (ATerm) ATmakeAppl(sym_Runtime_1, p_2)), s_2);
  return(t);
}
ATerm p_3 (ATerm g_3, ATerm t)
{
  t = SSL_fclose(g_3);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL;
  l_3 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_3 = ATgetArgument(t, 0);
      {
        ATerm a_6 = t;
        int b_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_3);
            ;
            LocalPopChoice(b_6);
          }
        else
          {
            t = a_6;
            t = p_3(l_3, t);
          }
      }
    }
  else
    {
      t = p_3(l_3, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  t = SSL_stdin_stream();
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_3);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  t = SSL_stdout_stream();
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_3);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_4 = NULL;
  t = SSL_stderr_stream();
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_4);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm n_4 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  t = SSL_is_string(r_4);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_6 = ATgetArgument(t, 0);
      ATerm d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_6 = t;
    int f_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL,i_1 = NULL;
        h_1 = t;
        t = SSL_explode_term(h_1);
        if(match_cons(t, sym__2))
          {
            ATerm g_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_6 = ATgetArgument(t, 1);
              if(((ATgetType(h_6) == AT_LIST) && !(ATisEmpty(h_6))))
                {
                  i_1 = ATgetFirst((ATermList) h_6);
                  {
                    ATerm i_6 = (ATerm) ATgetNext((ATermList) h_6);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_6);
      }
    else
      {
        t = e_6;
        {
          ATerm j_6 = t;
          int l_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
              t = _2_0(c_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_4 = ATgetArgument(t, 0);
                  l_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_4, l_4);
              m_4 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_4);
              ;
              LocalPopChoice(l_6);
            }
          else
            {
              t = j_6;
              {
                ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
                t = _2_0(d_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_4 = ATgetArgument(t, 0);
                    p_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_4, p_4);
                q_4 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_4);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 = NULL;
      v_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_4, term_r_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      {
        ATerm j_1 = NULL;
        j_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = j_1;
        _fail(t);
      }
    }
  s_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_4);
  t_4 = t;
  t = s_4;
  t = fclose_0_0(t);
  t = t_4;
  return(t);
}
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_74, _id, t);
        ;
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        t = Cons_2_0(_id, c_5, t);
      }
    return(t);
  }
  t = c_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
        ATerm f_5 = NULL,i_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_5 = ATgetFirst((ATermList) t);
            i_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_5;
        {
          ATerm f_1 (ATerm t)
          {
            t = i_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_5, t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_74(t);
      }
    return(t);
  }
  t = q_5(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  t = SSL_explode_string(t_5);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  t = SSL_explode_string(v_5);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  t = _2_0(g_1, m_1, t);
  {
    ATerm b_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL,y_5 = NULL;
        if(match_cons(t, sym__2))
          {
            x_5 = ATgetArgument(t, 0);
            y_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5;
        {
          ATerm n_1 (ATerm t)
          {
            t = y_5;
            return(t);
          }
          t = at_end_1_0(n_1, t);
        }
        ;
        LocalPopChoice(h_7);
      }
    else
      {
        t = b_7;
        {
          ATerm r_1 = NULL,s_1 = NULL;
          r_1 = t;
          t = SSL_explode_term(r_1);
          if(match_cons(t, sym__2))
            {
              ATerm l_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_1;
          t = concat_0_0(t);
        }
      }
    s_5 = t;
    t = SSL_implode_string(s_5);
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 = NULL;
      k_6 = t;
      t = SSL_is_string(k_6);
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = p_7;
      {
        ATerm u_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_1, t);
            ;
            LocalPopChoice(w_7);
          }
        else
          {
            t = u_7;
            {
              ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
              o_6 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_6 = ATgetArgument(t, 0);
                  t = p_6;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_6 = ATgetArgument(t, 0);
                      t = p_6;
                      {
                        ATerm z_7 = t;
                        int b_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_6);
                            {
                              ATerm c_8 = t;
                              int d_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_3 = NULL;
                                  t = eval_config_0_0(t);
                                  n_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_6, n_3);
                                  t = n_3;
                                  ;
                                  LocalPopChoice(d_8);
                                }
                              else
                                {
                                  t = c_8;
                                }
                            }
                            ;
                            LocalPopChoice(b_8);
                          }
                        else
                          {
                            t = z_7;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_6), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = p_6;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_6 = NULL,v_6 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_6 = ATgetArgument(t, 0);
                          q_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_6;
                      t = eval_config_0_0(t);
                      u_6 = t;
                      t = q_6;
                      t = eval_config_0_0(t);
                      v_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_6, v_6);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_7 = NULL,c_7 = NULL;
      a_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 = NULL;
            t = eval_config_0_0(t);
            x_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_3);
            t = x_3;
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
          }
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_7, term_n_8);
        t = geq_0_0(t);
        t = a_7;
        t = s_87(t);
      }
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = i_8;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  if(match_string(t, "-k"))
    {
      t = e_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_7;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL;
  f_7 = t;
  t = SSL_string_to_int(f_7);
  g_7 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_7);
  t = f_7;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_1, q_1, t_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  if(match_string(t, "-S"))
    {
      t = i_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_7;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_v_8;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  j_7 = t;
  t = SSL_string_to_int(j_7);
  k_7 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_7);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_7);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm j_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_8;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, v_1, w_1, t);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm d_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_1, d_2, g_2, t);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = d_9;
            t = Option_3_0(j_2, r_2, t_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_7 = NULL;
      t = term_t_0;
      t = d_0(t);
      s_7 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_9, term_h_9, s_7);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_7 = ATgetFirst((ATermList) t);
          r_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_7;
      t = a_0(t);
      t = term_t_0;
      t = b_0(t);
      v_7 = t;
      t = (ATerm) ATinsert(CheckATermList(r_7), v_7);
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  if(match_string(t, "-o"))
    {
      t = x_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_7;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm y_7 = NULL;
  y_7 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), y_7);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_7);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  if(match_cons(t, sym__3))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      g_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_8, f_8);
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_9 = ATgetArgument(t, 0);
            ATerm q_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_8, f_8);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        t = (ATerm) ATempty;
      }
    h_8 = t;
    t = SSL_table_put(e_8, f_8, (ATerm) ATinsert(CheckATermList(h_8), g_8));
    t = (ATerm) ATmakeAppl(sym__3, e_8, f_8, g_8);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_8 = NULL;
      t = term_t_0;
      t = j_0(t);
      u_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_9, term_h_9, u_8);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_8 = ATgetFirst((ATermList) t);
          r_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_8;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_8 = ATgetFirst((ATermList) t);
          t_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_8;
      t = h_0(t);
      t = s_8;
      t = i_0(t);
      c_9 = t;
      t = (ATerm) ATinsert(CheckATermList(t_8), c_9);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm e_9 = NULL;
  e_9 = t;
  if(match_string(t, "-i"))
    {
      t = e_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_9;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), i_9);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_9);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_0;
  t = whoami_0_0(t);
  j_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), j_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 = NULL;
        t = eval_config_0_0(t);
        b_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_4);
        t = b_4;
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_79(t);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm n_9 = NULL,o_9 = NULL,r_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_9 = ATgetFirst((ATermList) t);
            o_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_9;
        t = foldr_2_0(y_79, z_79, t);
        r_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_9, r_9);
        t = z_79(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm z_4 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_4, b_5);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = SSL_addr(z_4, b_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_9 = NULL,c_4 = NULL,e_4 = NULL;
  t = times_0_0(t);
  c_4 = t;
  t = SSL_explode_term(c_4);
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4;
  t = foldr_2_0(a_3, b_3, t);
  u_9 = t;
  t = SSL_TicksToSeconds(u_9);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
  f_10 = t;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_10;
        if((g_10 != t))
          {
            _fail(t);
          }
        t = f_10;
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        t = f_10;
        {
          ATerm d_10 = t;
          int e_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_10, h_10);
              ;
              LocalPopChoice(e_10);
            }
          else
            {
              t = d_10;
              t = SSL_gtr(g_10, h_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_10, h_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_10 = NULL,m_10 = NULL;
      k_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_7 = NULL;
            t = eval_config_0_0(t);
            d_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_7);
            t = d_7;
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = l_10;
          }
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_10, term_u_10);
        t = geq_0_0(t);
        t = k_10;
        t = r_87(t);
      }
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  t = run_time_0_0(t);
  o_10 = t;
  t = term_t_0;
  t = whoami_0_0(t);
  p_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_10), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), p_10));
  t = (ATerm) ATmakeAppl(sym__2, term_v_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_11), o_10), term_w_10), p_10));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm e_11 = t;
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
      t = e_11;
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
ATerm need_help_1_0 (ATerm h_90 (ATerm), ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm r_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL;
            t = eval_config_0_0(t);
            o_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_7);
            t = o_7;
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = r_11;
          }
      }
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = fetch_1_0(d_3, t);
    }
  t = h_90(t);
  return(t);
}
ATerm map_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm q_10 (ATerm t)
  {
    ATerm z_11 = t;
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
        t = z_11;
        t = Cons_2_0(w_73, q_10, t);
      }
    return(t);
  }
  t = q_10(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_10 = ATgetFirst((ATermList) t);
      t_10 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_10 = NULL,y_10 = NULL;
        t = t_10;
        t = g_0(t);
        x_10 = t;
        t = s_10;
        t = f_0(t);
        y_10 = t;
        t = t_10;
        {
          ATerm e_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_10), y_10);
            return(t);
          }
          t = reverse_acc_2_0(f_0, e_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_0;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm d_66 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_11);
  z_10 = t;
  t = a_11;
  t = d_66(t);
  b_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_11), z_10);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_11), term_d_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 = NULL;
            t = eval_config_0_0(t);
            a_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_8);
            t = a_8;
            ;
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
          }
      }
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = fetch_1_0(f_3, t);
    }
  t = term_k_12;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, h_3, t);
  t = map_1_0(i_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_66 (ATerm), ATerm t)
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
  t = e_66(t);
  i_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, i_11), g_11);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  n_11 = t;
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_11;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_12 = ATgetFirst((ATermList) t);
                ATerm s_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_11;
          }
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = (ATerm) ATinsert(ATempty, n_11);
      }
    o_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), o_11);
    t = n_11;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL;
        t = eval_config_0_0(t);
        j_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_8);
        t = j_8;
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_13;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_13;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_3, m_3, o_3, t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = j_13;
      t = Option_3_0(r_3, s_3, t_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  x_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_11 = ATgetFirst((ATermList) t);
      u_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_11);
  s_11 = t;
  t = t_11;
  t = p_60(t);
  v_11 = t;
  t = u_11;
  t = q_60(t);
  w_11 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(w_11), v_11), s_11);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_12);
  t = (ATerm) ATmakeAppl(sym_Program_1, c_12);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_13;
        t = k_92(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
      }
    t = b_12;
    {
      ATerm w_3 (ATerm t)
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
                t = k_92(t);
                t = Cons_2_0(_id, w_3, t);
              }
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm e_12 = NULL,f_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_12 = ATgetFirst((ATermList) t);
                  f_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATmakeAppl(sym_Undefined_1, e_12));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_3, w_3, t);
    }
  }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  if(match_string(t, "--help"))
    {
      t = q_12;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_12;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_12;
        }
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_13;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_12;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_92(t);
          ;
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          {
            ATerm x_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_3, a_4, f_4, t);
                ;
                LocalPopChoice(y_13);
              }
            else
              {
                t = x_13;
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
          ATerm v_12 = NULL;
          v_12 = t;
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_12;
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
                            ATerm r_10 = NULL;
                            t = eval_config_0_0(t);
                            r_10 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_10);
                            t = r_10;
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
                      t = fetch_1_0(g_4, t);
                    }
                  t = v_12;
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
                      ATerm d_13 = NULL;
                      t = eval_config_0_0(t);
                      d_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), d_13);
                      t = d_13;
                      ;
                      LocalPopChoice(i_14);
                    }
                  else
                    {
                      t = h_14;
                    }
                  t = v_12;
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
                ATerm h_4 (ATerm t)
                {
                  ATerm i_4 (ATerm t)
                  {
                    if(((o_12 != NULL) && (o_12 != t)))
                      _fail(t);
                    else
                      o_12 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_4, t);
                  return(t);
                }
                t = fetch_1_0(h_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_12)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_v_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_12)), term_l_14));
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
      p_12 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = p_12;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  t = parse_options_1_0(j_90, t);
  y_12 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_12);
  t = y_12;
  t = l_90(t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_90, t);
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
              t = m_90(t);
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
ATerm w_4 (ATerm t)
{
  t = if_verbose2_1_0(e_5, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_14;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_r_14;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  z_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_13 = NULL;
        t = eval_config_0_0(t);
        h_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_13);
        t = h_13;
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
      }
    a_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, a_13));
    t = z_12;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_89(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_14);
            }
          else
            {
              t = w_14;
              {
                ATerm y_14 = t;
                int z_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_14);
                  }
                else
                  {
                    t = y_14;
                    {
                      ATerm a_15 = t;
                      int b_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_4, a_5, d_5, t);
                          ;
                          LocalPopChoice(b_15);
                        }
                      else
                        {
                          t = a_15;
                          {
                            ATerm c_15 = t;
                            int d_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(d_15);
                              }
                            else
                              {
                                t = c_15;
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
  ATerm x_4 (ATerm t)
  {
    ATerm b_13 = NULL,c_13 = NULL,k_13 = NULL;
    b_13 = t;
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_13 != NULL) && (c_13 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_5, t);
          ;
          LocalPopChoice(f_15);
        }
      else
        {
          t = e_15;
          t = term_g_15;
          c_13 = t;
        }
      t = not_null(c_13);
      t = ReadFromFile_0_0(t);
      k_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_13, k_13);
      t = apply_strategy_1_0(s_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_4, u_89, w_4, x_4, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = _2_0(_id, catch_annos_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_5, _fail, default_usage_0_0, t);
  return(t);
}

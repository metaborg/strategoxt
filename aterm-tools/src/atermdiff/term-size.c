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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_o_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_r_12;
ATerm term_i_12;
ATerm term_k_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_c_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_a_7;
ATerm term_e_6;
ATerm term_u_5;
ATerm term_m_5;
ATerm term_j_5;
void init_constant_terms (void)
{
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__3, term_d_13, term_e_13, term_j_5);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm foldr_3_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm _2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_89 (ATerm), ATerm);
ATerm h_4 (ATerm l_3, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_74 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm need_help_1_0 (ATerm m_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm f_66 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_66 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_92 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm parse_options_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm v_4 (ATerm);
ATerm iowrap_3_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm);
ATerm i_5 (ATerm);
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
  t = term_j_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm foldr_3_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm t)
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_80(t);
      ;
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
        ATerm m_0 = NULL,o_0 = NULL,s_0 = NULL,u_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_0 = ATgetFirst((ATermList) t);
            o_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_0;
        t = c_80(t);
        s_0 = t;
        t = o_0;
        t = foldr_3_0(a_80, b_80, c_80, t);
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_0, u_0);
        t = b_80(t);
      }
    }
  return(t);
}
ATerm k_0 (ATerm t)
{
  t = term_m_5;
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_5 = t;
    int p_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(b_1, c_1);
        ;
        LocalPopChoice(p_5);
      }
    else
      {
        t = o_5;
        t = SSL_addr(b_1, c_1);
      }
  }
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm p_0 = NULL,t_0 = NULL;
  p_0 = t;
  t = SSL_explode_term(p_0);
  if(match_cons(t, sym__2))
    {
      ATerm t_5 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_0;
  t = foldr_3_0(k_0, l_0, term_size_0_0, t);
  return(t);
}
ATerm _2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,m_1 = NULL,n_1 = NULL,s_1 = NULL,w_1 = NULL,z_1 = NULL;
  z_1 = t;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_1);
  g_1 = t;
  t = m_1;
  t = a_56(t);
  s_1 = t;
  t = n_1;
  t = b_56(t);
  w_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_1, w_1), g_1);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_2, term_u_5);
  t = open_stream_0_0(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, e_2);
  t = m_86(t);
  t = fclose_0_0(t);
  t = e_2;
  return(t);
}
ATerm v_0 (ATerm t)
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
  ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_5 = ATgetArgument(t, 0);
      if(match_cons(v_5, sym_Stream_1))
        {
          k_2 = ATgetArgument(v_5, 0);
        }
      else
        _fail(t);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(k_2, m_2);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_2);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = WriteToFile_1_0(a_1, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_5 = ATgetArgument(t, 0);
      if(match_cons(w_5, sym_Stream_1))
        {
          o_2 = ATgetArgument(w_5, 0);
        }
      else
        _fail(t);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(o_2, p_2);
  q_2 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), q_2);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_2);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL;
  h_2 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm x_5 = t;
      int c_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((j_2 != NULL) && (j_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_0, t);
          ;
          LocalPopChoice(c_6);
        }
      else
        {
          t = x_5;
          t = term_e_6;
          if(((j_2 != NULL) && (j_2 != t)))
            _fail(t);
          else
            j_2 = t;
        }
      return(t);
    }
    t = _2_0(n_0, _id, t);
    t = h_2;
    {
      ATerm r_0 (ATerm t)
      {
        ATerm d_1 = NULL;
        d_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_2), d_1);
        return(t);
      }
      t = _2_0(_id, r_0, t);
      {
        ATerm f_6 = t;
        int i_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(v_0, w_0, t);
            ;
            LocalPopChoice(i_6);
          }
        else
          {
            t = f_6;
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
ATerm apply_strategy_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL;
  s_2 = t;
  t = dtime_0_0(t);
  t = s_2;
  t = o_89(t);
  v_2 = t;
  t = dtime_0_0(t);
  x_2 = t;
  t = v_2;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_2), (ATerm) ATmakeAppl(sym_Runtime_1, x_2)), a_3);
  return(t);
}
ATerm h_4 (ATerm l_3, ATerm t)
{
  t = SSL_fclose(l_3);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  s_3 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_3 = ATgetArgument(t, 0);
      {
        ATerm j_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_3);
            ;
            LocalPopChoice(k_6);
          }
        else
          {
            t = j_6;
            t = h_4(s_3, t);
          }
      }
    }
  else
    {
      t = h_4(s_3, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_4 = NULL;
  t = SSL_stdin_stream();
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_4);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_4 = NULL;
  t = SSL_stdout_stream();
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_4);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  t = SSL_stderr_stream();
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_4);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm u_4 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      u_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  t = SSL_is_string(a_5);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_6 = ATgetArgument(t, 0);
      ATerm m_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL,x_1 = NULL;
        v_1 = t;
        t = SSL_explode_term(v_1);
        if(match_cons(t, sym__2))
          {
            ATerm p_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_6 = ATgetArgument(t, 1);
              if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
                {
                  x_1 = ATgetFirst((ATermList) q_6);
                  {
                    ATerm s_6 = (ATerm) ATgetNext((ATermList) q_6);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        {
          ATerm t_6 = t;
          int u_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              t = _2_0(e_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  r_4 = ATgetArgument(t, 0);
                  s_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(r_4, s_4);
              t_4 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_4);
              ;
              LocalPopChoice(u_6);
            }
          else
            {
              t = t_6;
              {
                ATerm w_4 = NULL,y_4 = NULL,z_4 = NULL;
                t = _2_0(f_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    w_4 = ATgetArgument(t, 0);
                    y_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(w_4, y_4);
                z_4 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_4);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_5 = NULL,e_5 = NULL,f_5 = NULL;
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 = NULL;
      g_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, term_a_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm y_1 = NULL;
        y_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = y_1;
        _fail(t);
      }
    }
  b_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(f_5);
  e_5 = t;
  t = b_5;
  t = fclose_0_0(t);
  t = e_5;
  return(t);
}
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_74, _id, t);
        ;
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        t = Cons_2_0(_id, n_5, t);
      }
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
        ATerm r_5 = NULL,s_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_5 = ATgetFirst((ATermList) t);
            s_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_5;
        {
          ATerm h_1 (ATerm t)
          {
            t = s_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_5, t);
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_74(t);
      }
    return(t);
  }
  t = y_5(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm b_6 = NULL;
  b_6 = t;
  t = SSL_explode_string(b_6);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  t = SSL_explode_string(d_6);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_6 = NULL;
  t = _2_0(i_1, j_1, t);
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 = NULL,h_6 = NULL;
        if(match_cons(t, sym__2))
          {
            g_6 = ATgetArgument(t, 0);
            h_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_6;
        {
          ATerm k_1 (ATerm t)
          {
            t = h_6;
            return(t);
          }
          t = at_end_1_0(k_1, t);
        }
        ;
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          ATerm t_2 = NULL,u_2 = NULL;
          t_2 = t;
          t = SSL_explode_term(t_2);
          if(match_cons(t, sym__2))
            {
              ATerm n_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_2;
          t = concat_0_0(t);
        }
      }
    a_6 = t;
    t = SSL_implode_string(a_6);
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm r_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = r_7;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_6 = NULL;
      r_6 = t;
      t = SSL_is_string(r_6);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = w_7;
      {
        ATerm z_7 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_1, t);
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = z_7;
            {
              ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
              v_6 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_6 = ATgetArgument(t, 0);
                  t = w_6;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_6 = ATgetArgument(t, 0);
                      t = w_6;
                      {
                        ATerm e_8 = t;
                        int f_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_6);
                            {
                              ATerm h_8 = t;
                              int l_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm b_4 = NULL;
                                  t = eval_config_0_0(t);
                                  b_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_6, b_4);
                                  t = b_4;
                                  ;
                                  LocalPopChoice(l_8);
                                }
                              else
                                {
                                  t = h_8;
                                }
                            }
                            ;
                            LocalPopChoice(f_8);
                          }
                        else
                          {
                            t = e_8;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_6), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = w_6;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_7 = NULL,c_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_6 = ATgetArgument(t, 0);
                          x_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_6;
                      t = eval_config_0_0(t);
                      b_7 = t;
                      t = x_6;
                      t = eval_config_0_0(t);
                      c_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_7, c_7);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 = NULL,m_7 = NULL;
      h_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 = NULL;
            t = eval_config_0_0(t);
            m_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_4);
            t = m_4;
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = s_8;
          }
        m_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_7, term_v_8);
        t = geq_0_0(t);
        t = h_7;
        t = x_87(t);
      }
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  if(match_string(t, "-k"))
    {
      t = o_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_7;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  p_7 = t;
  t = SSL_string_to_int(p_7);
  q_7 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_7);
  t = p_7;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_1, p_1, q_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  if(match_string(t, "-S"))
    {
      t = s_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_7;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_y_8;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  t = SSL_string_to_int(t_7);
  u_7 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_7);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_7);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_9;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_1, t_1, u_1, t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = g_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_2, b_2, c_2, t);
            ;
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            t = Option_3_0(f_2, i_2, l_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_8 = NULL;
      t = term_j_5;
      t = d_0(t);
      c_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_9, term_s_9, c_8);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_8 = ATgetFirst((ATermList) t);
          b_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_8;
      t = a_0(t);
      t = term_j_5;
      t = c_0(t);
      g_8 = t;
      t = (ATerm) ATinsert(CheckATermList(b_8), g_8);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm i_8 = NULL;
  i_8 = t;
  if(match_string(t, "-o"))
    {
      t = i_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_8;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm j_8 = NULL;
  j_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_8);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_8);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, y_2, b_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__3))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      o_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_8, n_8);
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            ATerm a_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_8, n_8);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = (ATerm) ATempty;
      }
    p_8 = t;
    t = SSL_table_put(m_8, n_8, (ATerm) ATinsert(CheckATermList(p_8), o_8));
    t = (ATerm) ATmakeAppl(sym__3, m_8, n_8, o_8);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,h_9 = NULL,i_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_9 = NULL;
      t = term_j_5;
      t = j_0(t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_9, term_s_9, j_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_9 = ATgetFirst((ATermList) t);
          f_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_9 = ATgetFirst((ATermList) t);
          i_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_9;
      t = h_0(t);
      t = h_9;
      t = i_0(t);
      n_9 = t;
      t = (ATerm) ATinsert(CheckATermList(i_9), n_9);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  if(match_string(t, "-i"))
    {
      t = p_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_9;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_9);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_9);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, d_3, e_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_5;
  t = whoami_0_0(t);
  r_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL;
        t = eval_config_0_0(t);
        c_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_5);
        t = c_5;
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_79(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm u_9 = NULL,v_9 = NULL,y_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_9 = ATgetFirst((ATermList) t);
            v_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_9;
        t = foldr_2_0(y_79, z_79, t);
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, y_9);
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
ATerm f_3 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm q_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_5, z_5);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = SSL_addr(q_5, z_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_10 = NULL,d_5 = NULL,h_5 = NULL;
  t = times_0_0(t);
  d_5 = t;
  t = SSL_explode_term(d_5);
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5;
  t = foldr_2_0(f_3, g_3, t);
  b_10 = t;
  t = SSL_TicksToSeconds(b_10);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_10;
        if((n_10 != t))
          {
            _fail(t);
          }
        t = m_10;
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = m_10;
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_10, o_10);
              ;
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
              t = SSL_gtr(n_10, o_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_10, o_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm s_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10 = NULL,t_10 = NULL;
      r_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_10 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_7 = NULL;
            t = eval_config_0_0(t);
            x_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_7);
            t = x_7;
            ;
            LocalPopChoice(b_11);
          }
        else
          {
            t = y_10;
          }
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_10, term_m_5);
        t = geq_0_0(t);
        t = r_10;
        t = w_87(t);
      }
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = s_10;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  t = run_time_0_0(t);
  v_10 = t;
  t = term_j_5;
  t = whoami_0_0(t);
  w_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), v_10), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), w_10));
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_11), v_10), term_d_11), w_10));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm l_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = l_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm y_11 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL;
            t = eval_config_0_0(t);
            k_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), k_8);
            t = k_8;
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = y_11;
          }
      }
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      t = fetch_1_0(i_3, t);
    }
  t = m_90(t);
  return(t);
}
ATerm map_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm x_10 (ATerm t)
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = Cons_2_0(w_73, x_10, t);
      }
    return(t);
  }
  t = x_10(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_10 = ATgetFirst((ATermList) t);
      a_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_11 = NULL,f_11 = NULL;
        t = a_11;
        t = g_0(t);
        e_11 = t;
        t = z_10;
        t = e_0(t);
        f_11 = t;
        t = a_11;
        {
          ATerm j_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_11), f_11);
            return(t);
          }
          t = reverse_acc_2_0(e_0, j_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_5;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm f_66 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_11);
  g_11 = t;
  t = h_11;
  t = f_66(t);
  i_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_11), g_11);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_11), term_i_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_8 = NULL;
            t = eval_config_0_0(t);
            t_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_8);
            t = t_8;
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
          }
      }
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = l_12;
      t = fetch_1_0(k_3, t);
    }
  t = term_r_12;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, m_3, t);
  t = map_1_0(n_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm g_66 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  n_11 = t;
  t = o_11;
  t = g_66(t);
  p_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_11), n_11);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_11;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_12 = ATgetFirst((ATermList) t);
                ATerm z_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_11;
          }
        ;
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = (ATerm) ATinsert(ATempty, u_11);
      }
    v_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_11);
    t = u_11;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_9 = NULL;
        t = eval_config_0_0(t);
        b_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_9);
        t = b_9;
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_13;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_13;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, p_3, q_3, t);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = Option_3_0(t_3, u_3, v_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  e_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_12 = ATgetFirst((ATermList) t);
      b_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_12);
  z_11 = t;
  t = a_12;
  t = p_60(t);
  c_12 = t;
  t = b_12;
  t = q_60(t);
  d_12 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_12), c_12), z_11);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_12);
  t = (ATerm) ATmakeAppl(sym_Program_1, k_12);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_13;
        t = p_92(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
      }
    t = j_12;
    {
      ATerm x_3 (ATerm t)
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                t = p_92(t);
                t = Cons_2_0(_id, x_3, t);
              }
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm m_12 = NULL,n_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_12 = ATgetFirst((ATermList) t);
                  n_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_12), (ATerm) ATmakeAppl(sym_Undefined_1, m_12));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_3, x_3, t);
    }
  }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  if(match_string(t, "--help"))
    {
      t = x_12;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_12;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_12;
        }
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_14;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = u_12;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm d_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_92(t);
          ;
          LocalPopChoice(e_14);
        }
      else
        {
          t = d_14;
          {
            ATerm f_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_3, a_4, c_4, t);
                ;
                LocalPopChoice(g_14);
              }
            else
              {
                t = f_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_3, t);
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_13 = NULL;
          c_13 = t;
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_13;
                {
                  ATerm l_14 = t;
                  int m_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm n_14 = t;
                        int o_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_13 = NULL;
                            t = eval_config_0_0(t);
                            k_13 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), k_13);
                            t = k_13;
                            ;
                            LocalPopChoice(o_14);
                          }
                        else
                          {
                            t = n_14;
                          }
                      }
                      ;
                      LocalPopChoice(m_14);
                    }
                  else
                    {
                      t = l_14;
                      t = fetch_1_0(d_4, t);
                    }
                  t = c_13;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm p_14 = t;
                  int q_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_13 = NULL;
                      t = eval_config_0_0(t);
                      r_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), r_13);
                      t = r_13;
                      ;
                      LocalPopChoice(q_14);
                    }
                  else
                    {
                      t = p_14;
                    }
                  t = c_13;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm f_4 (ATerm t)
                  {
                    if(((v_12 != NULL) && (v_12 != t)))
                      _fail(t);
                    else
                      v_12 = t;
                    return(t);
                  }
                  t = Undefined_1_0(f_4, t);
                  return(t);
                }
                t = fetch_1_0(e_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_12)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_12)), term_t_14));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
              }
          }
        }
      w_12 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = w_12;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm t)
{
  ATerm f_13 = NULL;
  t = parse_options_1_0(o_90, t);
  f_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), f_13);
  t = f_13;
  t = q_90(t);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_90, t);
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
              t = r_90(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_14);
            }
          else
            {
              t = w_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = if_verbose2_1_0(v_4, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_14;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 = NULL;
        t = eval_config_0_0(t);
        v_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_13);
        t = v_13;
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
      }
    h_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_13));
    t = g_13;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_89(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              {
                ATerm g_15 = t;
                int h_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(h_15);
                  }
                else
                  {
                    t = g_15;
                    {
                      ATerm i_15 = t;
                      int j_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_4, p_4, q_4, t);
                          ;
                          LocalPopChoice(j_15);
                        }
                      else
                        {
                          t = i_15;
                          {
                            ATerm k_15 = t;
                            int l_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_15);
                              }
                            else
                              {
                                t = k_15;
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
  ATerm n_4 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL,y_13 = NULL;
    i_13 = t;
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_13 != NULL) && (j_13 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_4, t);
          ;
          LocalPopChoice(n_15);
        }
      else
        {
          t = m_15;
          t = term_o_15;
          j_13 = t;
        }
      t = not_null(j_13);
      t = ReadFromFile_0_0(t);
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_13, y_13);
      t = apply_strategy_1_0(x_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_4, z_89, k_4, n_4, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = _2_0(_id, term_size_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_5, _fail, default_usage_0_0, t);
  return(t);
}

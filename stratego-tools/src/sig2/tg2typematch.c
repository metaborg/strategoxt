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
Symbol sym_Module_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Choice_2;
Symbol sym_Id_0;
Symbol sym_Match_1;
Symbol sym_Path_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_Id_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_a_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_e_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_a_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_m_11;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_i_7;
ATerm term_j_6;
ATerm term_f_6;
ATerm term_a_6;
ATerm term_v_5;
ATerm term_i_5;
void init_constant_terms (void)
{
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__3, term_q_13, term_s_13, term_i_5);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm to_TypeMatch_Strat_0_0 (ATerm);
ATerm to_TypeMatch_SDef_0_0 (ATerm);
ATerm map_1_0 (ATerm c_82 (ATerm), ATerm);
ATerm _2_0 (ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_75 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_74 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_75 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_94 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm p_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm);
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
  t = term_i_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm to_TypeMatch_Strat_0_0 (ATerm t)
{
  ATerm r_0 = NULL,z_0 = NULL,g_1 = NULL,h_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_1 = ATgetFirst((ATermList) t);
      h_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_0 = ATgetFirst((ATermList) t);
      z_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_1 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL;
        t = g_1;
        if(match_cons(t, sym_Prod_2))
          {
            ATerm u_5 = ATgetArgument(t, 0);
            if(match_cons(u_5, sym_Id_1))
              {
                q_0 = ATgetArgument(u_5, 0);
              }
            else
              _fail(t);
            s_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_0;
        {
          ATerm k_0 (ATerm t)
          {
            t = term_v_5;
            return(t);
          }
          t = map_1_0(k_0, t);
          t_0 = t;
          t = (ATerm) ATinsert(CheckATermList(z_0), r_0);
          t = to_TypeMatch_Strat_0_0(t);
          w_1 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, q_0, t_0)), w_1);
        }
      }
    }
  else
    {
      ATerm x_0 = NULL,y_0 = NULL,b_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_1;
      if(match_cons(t, sym_Prod_2))
        {
          ATerm w_5 = ATgetArgument(t, 0);
          if(match_cons(w_5, sym_Id_1))
            {
              x_0 = ATgetArgument(w_5, 0);
            }
          else
            _fail(t);
          y_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_0;
      {
        ATerm l_0 (ATerm t)
        {
          t = term_v_5;
          return(t);
        }
        t = map_1_0(l_0, t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, x_0, b_1));
      }
    }
  return(t);
}
ATerm to_TypeMatch_SDef_0_0 (ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      if(match_cons(x_5, sym_Id_1))
        {
          y_1 = ATgetArgument(x_5, 0);
        }
      else
        _fail(t);
      {
        ATerm z_5 = ATgetArgument(t, 1);
      }
      a_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_6, y_1);
  t = conc_strings_0_0(t);
  b_2 = t;
  t = a_2;
  t = to_TypeMatch_Strat_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, b_2, d_2);
  return(t);
}
ATerm map_1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm f_11 (ATerm t)
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        t = Cons_2_0(c_82, f_11, t);
      }
    return(t);
  }
  t = f_11(t);
  return(t);
}
ATerm _2_0 (ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,p_2 = NULL,q_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_2);
  h_2 = t;
  t = i_2;
  t = c_61(t);
  k_2 = t;
  t = j_2;
  t = d_61(t);
  p_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_2, p_2), h_2);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,x_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_2, term_f_6);
  t = open_stream_0_0(t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, x_2);
  t = j_92(t);
  t = fclose_0_0(t);
  t = x_2;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  z_2 = t;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm g_6 = t;
      int h_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_3 != NULL) && (a_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_0, t);
          ;
          LocalPopChoice(h_6);
        }
      else
        {
          t = g_6;
          t = term_j_6;
          if(((a_3 != NULL) && (a_3 != t)))
            _fail(t);
          else
            a_3 = t;
        }
      return(t);
    }
    t = _2_0(m_0, _id, t);
    t = z_2;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm c_1 = NULL;
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), c_1);
        return(t);
      }
      t = _2_0(_id, o_0, t);
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(v_0, t);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                ATerm b_3 = NULL,d_3 = NULL,e_3 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm p_6 = ATgetArgument(t, 0);
                    if(match_cons(p_6, sym_Stream_1))
                      {
                        b_3 = ATgetArgument(p_6, 0);
                      }
                    else
                      _fail(t);
                    d_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(b_3, d_3);
                e_3 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_3);
                return(t);
              }
              t = WriteToFile_1_0(w_0, t);
              return(t);
            }
            t = _2_0(p_0, u_0, t);
            ;
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            {
              ATerm a_1 (ATerm t)
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm h_3 = NULL,i_3 = NULL,p_3 = NULL,t_3 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm q_6 = ATgetArgument(t, 0);
                      if(match_cons(q_6, sym_Stream_1))
                        {
                          h_3 = ATgetArgument(q_6, 0);
                        }
                      else
                        _fail(t);
                      i_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(h_3, i_3);
                  p_3 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), p_3);
                  t_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, t_3);
                  return(t);
                }
                t = WriteToFile_1_0(d_1, t);
                return(t);
              }
              t = _2_0(_id, a_1, t);
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
ATerm apply_strategy_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,x_3 = NULL,c_4 = NULL,e_4 = NULL;
  u_3 = t;
  t = dtime_0_0(t);
  t = u_3;
  t = u_75(t);
  v_3 = t;
  t = dtime_0_0(t);
  x_3 = t;
  t = v_3;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_4), (ATerm) ATmakeAppl(sym_Runtime_1, x_3)), e_4);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_4 (ATerm r_4, ATerm t)
  {
    t = SSL_fclose(r_4);
    return(t);
  }
  ATerm v_4 = NULL,w_4 = NULL;
  w_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_4 = ATgetArgument(t, 0);
      {
        ATerm t_6 = t;
        int u_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_4);
            ;
            LocalPopChoice(u_6);
          }
        else
          {
            t = t_6;
            t = y_4(w_4, t);
          }
      }
    }
  else
    {
      t = y_4(w_4, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_4 = NULL;
  t = SSL_stdin_stream();
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_4);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_5 = NULL;
  t = SSL_stdout_stream();
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_5 = NULL;
  t = SSL_stderr_stream();
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_5);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      ATerm w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,s_1 = NULL;
        r_1 = t;
        t = SSL_explode_term(r_1);
        if(match_cons(t, sym__2))
          {
            ATerm z_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_7 = ATgetArgument(t, 1);
              if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
                {
                  s_1 = ATgetFirst((ATermList) b_7);
                  {
                    ATerm c_7 = (ATerm) ATgetNext((ATermList) b_7);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = s_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = s_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = s_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        {
          ATerm d_7 = t;
          int e_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL,j_5 = NULL,k_5 = NULL;
              ATerm e_1 (ATerm t)
              {
                ATerm l_5 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    l_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_5;
                return(t);
              }
              t = _2_0(e_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_5 = ATgetArgument(t, 0);
                  j_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_5, j_5);
              k_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_5);
              ;
              LocalPopChoice(e_7);
            }
          else
            {
              t = d_7;
              {
                ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
                ATerm f_1 (ATerm t)
                {
                  ATerm p_5 = NULL;
                  p_5 = t;
                  t = SSL_is_string(p_5);
                  return(t);
                }
                t = _2_0(f_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    m_5 = ATgetArgument(t, 0);
                    n_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_5, n_5);
                o_5 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_5);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL;
      t_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_5, term_i_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm v_1 = NULL;
        v_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = v_1;
        _fail(t);
      }
    }
  q_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(s_5);
  r_5 = t;
  t = q_5;
  t = fclose_0_0(t);
  t = r_5;
  return(t);
}
ATerm fetch_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm j_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_82, _id, t);
        ;
        LocalPopChoice(n_7);
      }
    else
      {
        t = j_7;
        t = Cons_2_0(_id, y_5, t);
      }
    return(t);
  }
  t = y_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm b_6 = NULL,c_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_6 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_6;
        {
          ATerm i_1 (ATerm t)
          {
            t = c_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_6, t);
        ;
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_82(t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  ATerm j_1 (ATerm t)
  {
    ATerm l_6 = NULL;
    l_6 = t;
    t = SSL_explode_string(l_6);
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm m_6 = NULL;
    m_6 = t;
    t = SSL_explode_string(m_6);
    return(t);
  }
  t = _2_0(j_1, k_1, t);
  {
    ATerm u_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 = NULL,s_6 = NULL;
        if(match_cons(t, sym__2))
          {
            r_6 = ATgetArgument(t, 0);
            s_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_6;
        {
          ATerm l_1 (ATerm t)
          {
            t = s_6;
            return(t);
          }
          t = at_end_1_0(l_1, t);
        }
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = u_7;
        {
          ATerm m_2 = NULL,n_2 = NULL;
          m_2 = t;
          t = SSL_explode_term(m_2);
          if(match_cons(t, sym__2))
            {
              ATerm x_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_2;
          t = concat_0_0(t);
        }
      }
    k_6 = t;
    t = SSL_implode_string(k_6);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_7 = NULL;
      f_7 = t;
      t = SSL_is_string(f_7);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = y_7;
      {
        ATerm b_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm g_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(h_8);
                }
              else
                {
                  t = g_8;
                }
              return(t);
            }
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = b_8;
            {
              ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
              k_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_7 = ATgetArgument(t, 0);
                  t = l_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_7 = ATgetArgument(t, 0);
                      t = l_7;
                      {
                        ATerm l_8 = t;
                        int p_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_7);
                            {
                              ATerm q_8 = t;
                              int u_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_3 = NULL;
                                  t = eval_config_0_0(t);
                                  s_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_7, s_3);
                                  t = s_3;
                                  ;
                                  LocalPopChoice(u_8);
                                }
                              else
                                {
                                  t = q_8;
                                }
                            }
                            ;
                            LocalPopChoice(p_8);
                          }
                        else
                          {
                            t = l_8;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_7), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = l_7;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_7 = NULL,r_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_7 = ATgetArgument(t, 0);
                          m_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_7;
                      t = eval_config_0_0(t);
                      q_7 = t;
                      t = m_7;
                      t = eval_config_0_0(t);
                      r_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_7, r_7);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm v_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 = NULL,c_8 = NULL;
      z_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 = NULL;
            t = eval_config_0_0(t);
            f_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_4);
            t = f_4;
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
          }
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_8, term_g_9);
        t = geq_0_0(t);
        t = z_7;
        t = l_102(t);
      }
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = v_8;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm e_8 = NULL;
    e_8 = t;
    if(match_string(t, "-k"))
      {
        t = e_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_8;
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm i_8 = NULL,j_8 = NULL;
    i_8 = t;
    t = SSL_string_to_int(i_8);
    j_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_8);
    t = i_8;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_h_9;
    return(t);
  }
  t = ArgOption_3_0(n_1, o_1, p_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm m_8 = NULL;
        m_8 = t;
        if(match_string(t, "-S"))
          {
            t = m_8;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = m_8;
          }
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_l_9;
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_m_9;
        return(t);
      }
      t = Option_3_0(q_1, t_1, u_1, t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              ATerm n_8 = NULL,o_8 = NULL;
              n_8 = t;
              t = SSL_string_to_int(n_8);
              o_8 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_8);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, n_8);
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_u_9;
              return(t);
            }
            t = ArgOption_3_0(x_1, z_1, c_2, t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            {
              ATerm e_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_w_9;
                return(t);
              }
              ATerm g_2 (ATerm t)
              {
                t = term_a_10;
                return(t);
              }
              t = Option_3_0(e_2, f_2, g_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_8 = NULL;
      t = term_i_5;
      t = d_0(t);
      t_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_e_10, t_8);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm w_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_8 = ATgetFirst((ATermList) t);
          s_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_8;
      t = a_0(t);
      t = term_i_5;
      t = c_0(t);
      w_8 = t;
      t = (ATerm) ATinsert(CheckATermList(s_8), w_8);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm y_8 = NULL;
    y_8 = t;
    if(match_string(t, "-o"))
      {
        t = y_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = y_8;
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm z_8 = NULL;
    z_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_8);
    t = (ATerm) ATmakeAppl(sym_Output_1, z_8);
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_f_10;
    return(t);
  }
  t = ArgOption_3_0(l_2, o_2, r_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__3))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
      e_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_9, d_9);
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_10 = ATgetArgument(t, 0);
            ATerm l_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_9, d_9);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = (ATerm) ATempty;
      }
    f_9 = t;
    t = SSL_table_put(c_9, d_9, (ATerm) ATinsert(CheckATermList(f_9), e_9));
    t = (ATerm) ATmakeAppl(sym__3, c_9, d_9, e_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_9 = NULL;
      t = term_i_5;
      t = j_0(t);
      r_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_e_10, r_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_9 = ATgetFirst((ATermList) t);
          o_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_9 = ATgetFirst((ATermList) t);
          q_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_9;
      t = h_0(t);
      t = p_9;
      t = i_0(t);
      v_9 = t;
      t = (ATerm) ATinsert(CheckATermList(q_9), v_9);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm x_9 = NULL;
    x_9 = t;
    if(match_string(t, "-i"))
      {
        t = x_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = x_9;
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm y_9 = NULL;
    y_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_9);
    t = (ATerm) ATmakeAppl(sym_Input_1, y_9);
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_m_10;
    return(t);
  }
  t = ArgOption_3_0(s_2, u_2, v_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_5;
  t = whoami_0_0(t);
  z_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL;
        t = eval_config_0_0(t);
        j_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_4);
        t = j_4;
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_88(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm c_10 = NULL,d_10 = NULL,g_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_10 = ATgetFirst((ATermList) t);
            d_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_10;
        t = foldr_2_0(t_88, u_88, t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, g_10);
        t = u_88(t);
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
  ATerm j_10 = NULL,k_4 = NULL,l_4 = NULL;
  t = times_0_0(t);
  k_4 = t;
  t = SSL_explode_term(k_4);
  if(match_cons(t, sym__2))
    {
      ATerm r_10 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4;
  {
    ATerm w_2 (ATerm t)
    {
      t = term_k_9;
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm e_5 = NULL,g_5 = NULL;
      if(match_cons(t, sym__2))
        {
          e_5 = ATgetArgument(t, 0);
          g_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_5, g_5);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = SSL_addr(e_5, g_5);
          }
      }
      return(t);
    }
    t = foldr_2_0(w_2, c_3, t);
    j_10 = t;
    t = SSL_TicksToSeconds(j_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym__2))
    {
      v_10 = ATgetArgument(t, 0);
      w_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_10;
        if((v_10 != t))
          {
            _fail(t);
          }
        t = u_10;
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = u_10;
        {
          ATerm a_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_10, w_10);
              ;
              LocalPopChoice(c_11);
            }
          else
            {
              t = a_11;
              t = SSL_gtr(v_10, w_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm g_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL,b_11 = NULL;
      z_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_7 = NULL;
            t = eval_config_0_0(t);
            a_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_7);
            t = a_7;
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
          }
        b_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_11, term_m_11);
        t = geq_0_0(t);
        t = z_10;
        t = k_102(t);
      }
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = g_11;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm d_11 = NULL,e_11 = NULL;
    t = run_time_0_0(t);
    d_11 = t;
    t = term_i_5;
    t = whoami_0_0(t);
    e_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), d_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), e_11));
    t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_12), d_11), term_u_11), e_11));
    return(t);
  }
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm b_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 = NULL;
            t = eval_config_0_0(t);
            v_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_7);
            t = v_7;
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
          }
      }
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = b_12;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm o_12 = t;
          int p_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(p_12);
            }
          else
            {
              t = o_12;
              {
                ATerm q_12 = t;
                int t_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(t_12);
                  }
                else
                  {
                    t = q_12;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(g_3, t);
      }
    }
  t = s_76(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_11 = ATgetFirst((ATermList) t);
      i_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_11 = NULL,o_11 = NULL;
        t = i_11;
        t = g_0(t);
        n_11 = t;
        t = h_11;
        t = e_0(t);
        o_11 = t;
        t = i_11;
        {
          ATerm j_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_11), o_11);
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
      t = term_i_5;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm z_74 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  s_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_11);
  p_11 = t;
  t = q_11;
  t = z_74(t);
  r_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, r_11), p_11);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 = NULL;
            t = eval_config_0_0(t);
            d_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_8);
            t = d_8;
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
          }
      }
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm k_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(k_3, t);
      }
    }
  t = term_a_13;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm l_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, l_3, t);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm v_11 = NULL;
        v_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, v_11), term_b_13);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(m_3, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  z_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_11);
  w_11 = t;
  t = x_11;
  t = a_75(t);
  y_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, y_11), w_11);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  d_12 = t;
  {
    ATerm c_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_13 = ATgetFirst((ATermList) t);
                ATerm g_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_12;
          }
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATinsert(ATempty, d_12);
      }
    e_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), e_12);
    t = d_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL;
        t = eval_config_0_0(t);
        k_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_8);
        t = k_8;
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = k_13;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_t_13;
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = term_z_13;
        return(t);
      }
      t = Option_3_0(n_3, o_3, q_3, t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm r_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm w_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_14;
          return(t);
        }
        ATerm y_3 (ATerm t)
        {
          t = term_c_14;
          return(t);
        }
        t = Option_3_0(r_3, w_3, y_3, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  n_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_12 = ATgetFirst((ATermList) t);
      k_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  i_12 = t;
  t = j_12;
  t = l_62(t);
  l_12 = t;
  t = k_12;
  t = m_62(t);
  m_12 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_12), l_12), i_12);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm r_12 = NULL;
  r_12 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_14;
        t = q_94(t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
      }
    t = r_12;
    {
      ATerm z_3 (ATerm t)
      {
        ATerm s_12 = NULL;
        s_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_12);
        t = (ATerm) ATmakeAppl(sym_Program_1, s_12);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
                t = q_94(t);
                t = Cons_2_0(_id, a_4, t);
              }
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            {
              ATerm u_12 = NULL,v_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_12 = ATgetFirst((ATermList) t);
                  v_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_12), (ATerm) ATmakeAppl(sym_Undefined_1, u_12));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_3, a_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,j_13 = NULL,l_13 = NULL;
  h_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_13;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_94(t);
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
                ATerm d_4 (ATerm t)
                {
                  ATerm m_13 = NULL;
                  m_13 = t;
                  if(match_string(t, "--help"))
                    {
                      t = m_13;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = m_13;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = m_13;
                        }
                    }
                  return(t);
                }
                ATerm g_4 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_q_14;
                  return(t);
                }
                ATerm h_4 (ATerm t)
                {
                  t = term_r_14;
                  return(t);
                }
                t = Option_3_0(d_4, g_4, h_4, t);
                ;
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_4, t);
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_13 = NULL;
          r_13 = t;
          {
            ATerm u_14 = t;
            int v_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_13;
                {
                  ATerm w_14 = t;
                  int x_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_14 = t;
                        int z_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_12 = NULL;
                            t = eval_config_0_0(t);
                            c_12 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), c_12);
                            t = c_12;
                            ;
                            LocalPopChoice(z_14);
                          }
                        else
                          {
                            t = y_14;
                          }
                      }
                      ;
                      LocalPopChoice(x_14);
                    }
                  else
                    {
                      t = w_14;
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
                  t = r_13;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(v_14);
              }
            else
              {
                t = u_14;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_15 = t;
                  int b_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_13 = NULL;
                      t = eval_config_0_0(t);
                      d_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), d_13);
                      t = d_13;
                      ;
                      LocalPopChoice(b_15);
                    }
                  else
                    {
                      t = a_15;
                    }
                  t = r_13;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
          {
            ATerm c_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm n_4 (ATerm t)
                  {
                    if(((j_13 != NULL) && (j_13 != t)))
                      _fail(t);
                    else
                      j_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(n_4, t);
                  return(t);
                }
                t = fetch_1_0(m_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_13)), term_e_15));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_15);
              }
            else
              {
                t = c_15;
              }
          }
        }
      l_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = l_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm t)
{
  ATerm u_13 = NULL;
  t = parse_options_1_0(u_76, t);
  u_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), u_13);
  t = u_13;
  t = w_76(t);
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_76, t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_76(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_76(t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm l_15 = t;
          int m_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_15);
            }
          else
            {
              t = l_15;
              {
                ATerm n_15 = t;
                int o_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(o_15);
                  }
                else
                  {
                    t = n_15;
                    {
                      ATerm p_15 = t;
                      int q_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_4 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm t_4 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_r_15;
                            return(t);
                          }
                          ATerm u_4 (ATerm t)
                          {
                            t = term_s_15;
                            return(t);
                          }
                          t = Option_3_0(s_4, t_4, u_4, t);
                          ;
                          LocalPopChoice(q_15);
                        }
                      else
                        {
                          t = p_15;
                          {
                            ATerm t_15 = t;
                            int u_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_15);
                              }
                            else
                              {
                                t = t_15;
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
  ATerm p_4 (ATerm t)
  {
    ATerm x_4 (ATerm t)
    {
      ATerm v_13 = NULL,w_13 = NULL;
      v_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_13 = NULL;
            t = eval_config_0_0(t);
            i_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_13);
            t = i_13;
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
          }
        w_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, w_13));
        t = v_13;
      }
      return(t);
    }
    t = if_verbose2_1_0(x_4, t);
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    ATerm x_13 = NULL,y_13 = NULL,a_14 = NULL;
    x_13 = t;
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_13 != NULL) && (y_13 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_5, t);
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          t = term_z_15;
          y_13 = t;
        }
      t = not_null(y_13);
      t = ReadFromFile_0_0(t);
      a_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_13, a_14);
      t = apply_strategy_1_0(d_76, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_4, f_76, p_4, q_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm f_14 = NULL,g_14 = NULL;
      if(match_cons(t, sym_TreeGrammar_1))
        {
          f_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_14;
      t = map_1_0(to_TypeMatch_SDef_0_0, t);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym_Module_2, term_a_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, g_14)));
      return(t);
    }
    t = _2_0(_id, f_5, t);
    return(t);
  }
  t = iowrap_3_0(d_5, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_k_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_a_13;
ATerm term_t_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_a_9;
ATerm term_k_7;
ATerm term_j_6;
ATerm term_d_6;
ATerm term_u_5;
ATerm term_d_5;
ATerm term_c_5;
void init_constant_terms (void)
{
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__3, term_m_13, term_p_13, term_c_5);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm to_TypeMatch_Strat_0_0 (ATerm);
ATerm to_TypeMatch_SDef_0_0 (ATerm);
ATerm map_1_0 (ATerm n_88 (ATerm), ATerm);
ATerm _2_0 (ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm u_0 (ATerm);
ATerm x_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_82 (ATerm), ATerm);
ATerm s_4 (ATerm l_4, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm need_help_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_101 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm parse_options_1_0 (ATerm a_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm iowrap_3_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_c_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm k_0 (ATerm t)
{
  t = term_d_5;
  return(t);
}
ATerm l_0 (ATerm t)
{
  t = term_d_5;
  return(t);
}
ATerm to_TypeMatch_Strat_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,v_0 = NULL,w_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_0 = ATgetFirst((ATermList) t);
      w_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_0;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_0 = ATgetFirst((ATermList) t);
      s_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_1 = NULL,t_0 = NULL,y_0 = NULL,z_0 = NULL;
        t = v_0;
        if(match_cons(t, sym_Prod_2))
          {
            ATerm f_5 = ATgetArgument(t, 0);
            if(match_cons(f_5, sym_Id_1))
              {
                t_0 = ATgetArgument(f_5, 0);
              }
            else
              _fail(t);
            y_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_0;
        t = map_1_0(k_0, t);
        z_0 = t;
        t = (ATerm) ATinsert(CheckATermList(s_0), r_0);
        t = to_TypeMatch_Strat_0_0(t);
        n_1 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, t_0, z_0)), n_1);
      }
    }
  else
    {
      ATerm d_1 = NULL,f_1 = NULL,h_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_0;
      if(match_cons(t, sym_Prod_2))
        {
          ATerm m_5 = ATgetArgument(t, 0);
          if(match_cons(m_5, sym_Id_1))
            {
              d_1 = ATgetArgument(m_5, 0);
            }
          else
            _fail(t);
          f_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_1;
      t = map_1_0(l_0, t);
      h_1 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, d_1, h_1));
    }
  return(t);
}
ATerm to_TypeMatch_SDef_0_0 (ATerm t)
{
  ATerm w_1 = NULL,z_1 = NULL,a_2 = NULL,c_2 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm s_5 = ATgetArgument(t, 0);
      if(match_cons(s_5, sym_Id_1))
        {
          w_1 = ATgetArgument(s_5, 0);
        }
      else
        _fail(t);
      {
        ATerm t_5 = ATgetArgument(t, 1);
      }
      z_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, w_1);
  t = conc_strings_0_0(t);
  a_2 = t;
  t = z_1;
  t = to_TypeMatch_Strat_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, a_2, c_2);
  return(t);
}
ATerm map_1_0 (ATerm n_88 (ATerm), ATerm t)
{
  ATerm f_11 (ATerm t)
  {
    ATerm v_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_5);
      }
    else
      {
        t = v_5;
        t = Cons_2_0(n_88, f_11, t);
      }
    return(t);
  }
  t = f_11(t);
  return(t);
}
ATerm _2_0 (ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,m_2 = NULL,n_2 = NULL;
  n_2 = t;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_2);
  g_2 = t;
  t = h_2;
  t = h_64(t);
  k_2 = t;
  t = j_2;
  t = i_64(t);
  m_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_2, m_2), g_2);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_2, term_d_6);
  t = open_stream_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, r_2);
  t = u_98(t);
  t = fclose_0_0(t);
  t = r_2;
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = fetch_1_0(u_0, t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = WriteToFile_1_0(x_0, t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_6 = ATgetArgument(t, 0);
      if(match_cons(e_6, sym_Stream_1))
        {
          z_2 = ATgetArgument(e_6, 0);
        }
      else
        _fail(t);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(z_2, a_3);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_3);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = WriteToFile_1_0(b_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,h_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_6 = ATgetArgument(t, 0);
      if(match_cons(f_6, sym_Stream_1))
        {
          c_3 = ATgetArgument(f_6, 0);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(c_3, d_3);
  h_3 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), h_3);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_3);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_2 = NULL,x_2 = NULL;
  v_2 = t;
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
                if(((x_2 != NULL) && (x_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_2 = ATgetArgument(t, 0);
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
          if(((x_2 != NULL) && (x_2 != t)))
            _fail(t);
          else
            x_2 = t;
        }
      return(t);
    }
    t = _2_0(m_0, _id, t);
    t = v_2;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm i_1 = NULL;
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), i_1);
        return(t);
      }
      t = _2_0(_id, o_0, t);
      {
        ATerm n_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(p_0, q_0, t);
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = n_6;
            t = _2_0(_id, a_1, t);
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
ATerm apply_strategy_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL;
  j_3 = t;
  t = dtime_0_0(t);
  t = j_3;
  t = f_82(t);
  k_3 = t;
  t = dtime_0_0(t);
  l_3 = t;
  t = k_3;
  if(match_cons(t, sym__2))
    {
      n_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_3), (ATerm) ATmakeAppl(sym_Runtime_1, l_3)), o_3);
  return(t);
}
ATerm s_4 (ATerm l_4, ATerm t)
{
  t = SSL_fclose(l_4);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  p_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_4 = ATgetArgument(t, 0);
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_4);
            ;
            LocalPopChoice(s_6);
          }
        else
          {
            t = r_6;
            t = s_4(p_4, t);
          }
      }
    }
  else
    {
      t = s_4(p_4, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_4 = NULL;
  t = SSL_stdin_stream();
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_4);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_4 = NULL;
  t = SSL_stdout_stream();
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_4);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_4 = NULL;
  t = SSL_stderr_stream();
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_4);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm i_5 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm n_5 = NULL;
  n_5 = t;
  t = SSL_is_string(n_5);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      ATerm u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,f_2 = NULL;
        b_2 = t;
        t = SSL_explode_term(b_2);
        if(match_cons(t, sym__2))
          {
            ATerm a_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_7 = ATgetArgument(t, 1);
              if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
                {
                  f_2 = ATgetFirst((ATermList) b_7);
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
        t = f_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = f_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = f_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_2;
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
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_5 = NULL,g_5 = NULL,h_5 = NULL;
              t = _2_0(c_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_5 = ATgetArgument(t, 0);
                  g_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_5, g_5);
              h_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_5);
              ;
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
              {
                ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
                t = _2_0(e_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_5 = ATgetArgument(t, 0);
                    k_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_5, k_5);
                l_5 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_5);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  ATerm h_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 = NULL;
      r_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_5, term_k_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = h_7;
      {
        ATerm i_2 = NULL;
        i_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = i_2;
        _fail(t);
      }
    }
  o_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(q_5);
  p_5 = t;
  t = o_5;
  t = fclose_0_0(t);
  t = p_5;
  return(t);
}
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm l_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_88, _id, t);
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = l_7;
        t = Cons_2_0(_id, w_5, t);
      }
    return(t);
  }
  t = w_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
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
          ATerm g_1 (ATerm t)
          {
            t = c_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(g_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_6, t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_89(t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
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
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  t = _2_0(j_1, k_1, t);
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6 = NULL,p_6 = NULL;
        if(match_cons(t, sym__2))
          {
            o_6 = ATgetArgument(t, 0);
            p_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_6;
        {
          ATerm l_1 (ATerm t)
          {
            t = p_6;
            return(t);
          }
          t = at_end_1_0(l_1, t);
        }
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm y_2 = NULL,e_3 = NULL;
          y_2 = t;
          t = SSL_explode_term(y_2);
          if(match_cons(t, sym__2))
            {
              ATerm w_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              e_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_3;
          t = concat_0_0(t);
        }
      }
    k_6 = t;
    t = SSL_implode_string(k_6);
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm y_7 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = y_7;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_6 = NULL;
      z_6 = t;
      t = SSL_is_string(z_6);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = d_8;
      {
        ATerm i_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = i_8;
            {
              ATerm d_7 = NULL,e_7 = NULL,i_7 = NULL;
              d_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_7 = ATgetArgument(t, 0);
                  t = e_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_7 = ATgetArgument(t, 0);
                      t = e_7;
                      {
                        ATerm n_8 = t;
                        int o_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_7);
                            {
                              ATerm q_8 = t;
                              int s_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_4 = NULL;
                                  t = eval_config_0_0(t);
                                  i_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_7, i_4);
                                  t = i_4;
                                  ;
                                  LocalPopChoice(s_8);
                                }
                              else
                                {
                                  t = q_8;
                                }
                            }
                            ;
                            LocalPopChoice(o_8);
                          }
                        else
                          {
                            t = n_8;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_7), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = e_7;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_7 = NULL,n_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_7 = ATgetArgument(t, 0);
                          i_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_7;
                      t = eval_config_0_0(t);
                      m_7 = t;
                      t = i_7;
                      t = eval_config_0_0(t);
                      n_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_7, n_7);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm t_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 = NULL,x_7 = NULL;
      v_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_5 = NULL;
            t = eval_config_0_0(t);
            b_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_5);
            t = b_5;
            ;
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
          }
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_7, term_a_9);
        t = geq_0_0(t);
        t = v_7;
        t = d_109(t);
      }
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = t_8;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm z_7 = NULL;
  z_7 = t;
  if(match_string(t, "-k"))
    {
      t = z_7;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_7;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm a_8 = NULL,c_8 = NULL;
  a_8 = t;
  t = SSL_string_to_int(a_8);
  c_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_8);
  t = a_8;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_1, p_1, q_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm e_8 = NULL;
  e_8 = t;
  if(match_string(t, "-S"))
    {
      t = e_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_8;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_i_9;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm u_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  t = SSL_string_to_int(f_8);
  g_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_8);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_8);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm y_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_9;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_1, s_1, t_1, t);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      {
        ATerm u_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_1, v_1, x_1, t);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = u_9;
            t = Option_3_0(y_1, d_2, e_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_8 = NULL;
      t = term_c_5;
      t = d_0(t);
      l_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_e_10, l_8);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_8 = ATgetFirst((ATermList) t);
          k_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_8;
      t = a_0(t);
      t = term_c_5;
      t = b_0(t);
      r_8 = t;
      t = (ATerm) ATinsert(CheckATermList(k_8), r_8);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  if(match_string(t, "-o"))
    {
      t = u_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_8;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_8);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_8);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, o_2, p_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__3))
    {
      b_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
      e_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_9, d_9);
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
        t = SSL_table_get(b_9, d_9);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = (ATerm) ATempty;
      }
    f_9 = t;
    t = SSL_table_put(b_9, d_9, (ATerm) ATinsert(CheckATermList(f_9), e_9));
    t = (ATerm) ATmakeAppl(sym__3, b_9, d_9, e_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_9 = NULL;
      t = term_c_5;
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
ATerm t_2 (ATerm t)
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
ATerm w_2 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, w_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_5;
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
        ATerm x_5 = NULL;
        t = eval_config_0_0(t);
        x_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_5);
        t = x_5;
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
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_95(t);
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
        t = foldr_2_0(e_95, f_95, t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, g_10);
        t = f_95(t);
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
  t = term_h_9;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_6, w_6);
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = SSL_addr(v_6, w_6);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_10 = NULL,y_5 = NULL,a_6 = NULL;
  t = times_0_0(t);
  y_5 = t;
  t = SSL_explode_term(y_5);
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6;
  t = foldr_2_0(f_3, g_3, t);
  j_10 = t;
  t = SSL_TicksToSeconds(j_10);
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
ATerm if_verbose1_1_0 (ATerm c_109 (ATerm), ATerm t)
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
            ATerm p_8 = NULL;
            t = eval_config_0_0(t);
            p_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_8);
            t = p_8;
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
          }
        b_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_11, term_s_11);
        t = geq_0_0(t);
        t = z_10;
        t = c_109(t);
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
ATerm m_3 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  t = run_time_0_0(t);
  d_11 = t;
  t = term_c_5;
  t = whoami_0_0(t);
  e_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), d_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), e_11));
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_12), d_11), term_z_11), e_11));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm b_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = b_12;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm h_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_8 = NULL;
            t = eval_config_0_0(t);
            x_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), x_8);
            t = x_8;
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
      t = h_12;
      t = fetch_1_0(p_3, t);
    }
  t = d_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_11 = ATgetFirst((ATermList) t);
      i_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_11 = NULL,n_11 = NULL;
        t = i_11;
        t = g_0(t);
        m_11 = t;
        t = h_11;
        t = f_0(t);
        n_11 = t;
        t = i_11;
        {
          ATerm q_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_11), n_11);
            return(t);
          }
          t = reverse_acc_2_0(f_0, q_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_5;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_11);
  o_11 = t;
  t = p_11;
  t = k_81(t);
  q_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, q_11), o_11);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_11), term_t_12);
  t = echo_0_0(t);
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
            ATerm c_9 = NULL;
            t = eval_config_0_0(t);
            c_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_9);
            t = c_9;
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
      t = fetch_1_0(r_3, t);
    }
  t = term_a_13;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, s_3, t);
  t = map_1_0(t_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  y_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_11);
  v_11 = t;
  t = w_11;
  t = l_81(t);
  x_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, x_11), v_11);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_12 = NULL,e_12 = NULL;
  c_12 = t;
  {
    ATerm b_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_13 = ATgetFirst((ATermList) t);
                ATerm i_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_12;
          }
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = b_13;
        t = (ATerm) ATinsert(ATempty, c_12);
      }
    e_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), e_12);
    t = c_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_10 = NULL;
        t = eval_config_0_0(t);
        a_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_10);
        t = a_10;
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = j_13;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_13;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_13;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      t = Option_3_0(x_3, y_3, z_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm t)
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
  t = w_68(t);
  l_12 = t;
  t = k_12;
  t = x_68(t);
  m_12 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_12), l_12), i_12);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm s_12 = NULL;
  s_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_12);
  t = (ATerm) ATmakeAppl(sym_Program_1, s_12);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm r_12 = NULL;
  r_12 = t;
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_14;
        t = b_101(t);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
      }
    t = r_12;
    {
      ATerm b_4 (ATerm t)
      {
        ATerm d_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_14);
              }
            else
              {
                t = g_14;
                t = b_101(t);
                t = Cons_2_0(_id, b_4, t);
              }
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = d_14;
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
      t = Cons_2_0(a_4, b_4, t);
    }
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  if(match_string(t, "--help"))
    {
      t = f_13;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_13;
        }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_14;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = c_13;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_101(t);
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
                t = Option_3_0(d_4, e_4, f_4, t);
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
    t = parse_options_p__1_0(c_4, t);
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_13 = NULL;
          k_13 = t;
          {
            ATerm u_14 = t;
            int v_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_13;
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
                            ATerm x_13 = NULL;
                            t = eval_config_0_0(t);
                            x_13 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), x_13);
                            t = x_13;
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
                      t = fetch_1_0(g_4, t);
                    }
                  t = k_13;
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
                      ATerm e_14 = NULL;
                      t = eval_config_0_0(t);
                      e_14 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_14);
                      t = e_14;
                      ;
                      LocalPopChoice(b_15);
                    }
                  else
                    {
                      t = a_15;
                    }
                  t = k_13;
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
                ATerm h_4 (ATerm t)
                {
                  ATerm j_4 (ATerm t)
                  {
                    if(((d_13 != NULL) && (d_13 != t)))
                      _fail(t);
                    else
                      d_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_4, t);
                  return(t);
                }
                t = fetch_1_0(h_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_13)), term_e_15));
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
      e_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = e_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t)
{
  ATerm n_13 = NULL;
  t = parse_options_1_0(f_83, t);
  n_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), n_13);
  t = n_13;
  t = h_83(t);
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_83, t);
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
              t = i_83(t);
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
ATerm m_4 (ATerm t)
{
  t = if_verbose2_1_0(x_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_15;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm o_13 = NULL,r_13 = NULL;
  o_13 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL;
        t = eval_config_0_0(t);
        i_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_14);
        t = i_14;
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
      }
    r_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, r_13));
    t = o_13;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_82(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              {
                ATerm r_15 = t;
                int s_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = r_15;
                    {
                      ATerm t_15 = t;
                      int u_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_4, r_4, t_4, t);
                          ;
                          LocalPopChoice(u_15);
                        }
                      else
                        {
                          t = t_15;
                          {
                            ATerm v_15 = t;
                            int w_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_15);
                              }
                            else
                              {
                                t = v_15;
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
    ATerm t_13 = NULL,u_13 = NULL,l_14 = NULL;
    t_13 = t;
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_13 != NULL) && (u_13 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_4, t);
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          t = term_z_15;
          u_13 = t;
        }
      t = not_null(u_13);
      t = ReadFromFile_0_0(t);
      l_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_13, l_14);
      t = apply_strategy_1_0(o_82, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_4, q_82, m_4, n_4, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = _2_0(_id, a_5, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      q_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_14;
  t = map_1_0(to_TypeMatch_SDef_0_0, t);
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_a_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, r_14)));
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_4, _fail, default_usage_0_0, t);
  return(t);
}

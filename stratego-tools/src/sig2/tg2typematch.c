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
ATerm term_v_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_t_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_k_6;
ATerm term_a_6;
ATerm term_q_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__3, term_m_13, term_n_13, term_t_4);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm create_call_0_0 (ATerm);
ATerm to_TypeMatch_Strat_0_0 (ATerm);
ATerm to_TypeMatch_SDef_0_0 (ATerm);
ATerm tg_to_stratego_typematch_0_0 (ATerm);
ATerm _2_0 (ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_102 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_75 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm n_91 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_74 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm f_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_94 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm r_75 (ATerm), ATerm);
ATerm io_tg2typematch_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm create_call_0_0 (ATerm t)
{
  ATerm t_0 = NULL,v_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym_Prod_2))
    {
      ATerm i_3 = ATgetArgument(t, 0);
      if(match_cons(i_3, sym_Id_1))
        {
          t_0 = ATgetArgument(i_3, 0);
        }
      else
        _fail(t);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_0;
  {
    ATerm c_0 (ATerm t)
    {
      t = term_n_4;
      return(t);
    }
    t = map_1_0(c_0, t);
    y_0 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, t_0, y_0));
  }
  return(t);
}
ATerm to_TypeMatch_Strat_0_0 (ATerm t)
{
  ATerm h_1 = NULL,m_1 = NULL,t_1 = NULL,u_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_1 = ATgetFirst((ATermList) t);
      u_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_1 = ATgetFirst((ATermList) t);
      m_1 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_2 = NULL,b_2 = NULL;
        t = t_1;
        t = create_call_0_0(t);
        a_2 = t;
        t = (ATerm) ATinsert(CheckATermList(m_1), h_1);
        t = to_TypeMatch_Strat_0_0(t);
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, a_2, b_2);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_1;
      t = create_call_0_0(t);
    }
  return(t);
}
ATerm to_TypeMatch_SDef_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm p_4 = ATgetArgument(t, 0);
      if(match_cons(p_4, sym_Id_1))
        {
          d_2 = ATgetArgument(p_4, 0);
        }
      else
        _fail(t);
      {
        ATerm q_4 = ATgetArgument(t, 1);
      }
      e_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_4, d_2);
  t = conc_strings_0_0(t);
  g_2 = t;
  t = e_2;
  t = to_TypeMatch_Strat_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, g_2, h_2);
  return(t);
}
ATerm tg_to_stratego_typematch_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      i_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_2;
  t = map_1_0(to_TypeMatch_SDef_0_0, t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_s_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, j_2)));
  return(t);
}
ATerm _2_0 (ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_2);
  k_2 = t;
  t = n_2;
  t = v_60(t);
  q_2 = t;
  t = p_2;
  t = w_60(t);
  r_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_2, r_2), k_2);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  t = term_t_4;
  t = whoami_0_0(t);
  z_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = y_2;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_4);
    }
  else
    {
      t = u_4;
      {
        ATerm c_3 = NULL,d_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_3 = ATgetFirst((ATermList) t);
            d_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_3;
        {
          ATerm e_0 (ATerm t)
          {
            t = d_3;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_0, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm p_3 = NULL,t_3 = NULL;
  p_3 = t;
  t = SSL_explode_term(p_3);
  if(match_cons(t, sym__2))
    {
      ATerm w_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm x_4 = t;
    int z_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_3, t);
        ;
        LocalPopChoice(z_4);
      }
    else
      {
        t = x_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_82(t);
      }
    return(t);
  }
  t = u_3(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  {
    ATerm k_0 (ATerm t)
    {
      t = v_3;
      return(t);
    }
    t = at_end_1_0(k_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(c_5);
    }
  else
    {
      t = b_5;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm i_4 = NULL;
  ATerm l_0 (ATerm t)
  {
    ATerm j_4 = NULL;
    j_4 = t;
    t = SSL_explode_string(j_4);
    return(t);
  }
  ATerm m_0 (ATerm t)
  {
    ATerm o_4 = NULL;
    o_4 = t;
    t = SSL_explode_string(o_4);
    return(t);
  }
  t = _2_0(l_0, m_0, t);
  t = conc_0_0(t);
  i_4 = t;
  t = SSL_implode_string(i_4);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_5 = t;
  int g_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 = NULL;
      a_5 = t;
      t = SSL_is_string(a_5);
      ;
      LocalPopChoice(g_5);
    }
  else
    {
      t = d_5;
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(n_0, t);
            ;
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            {
              ATerm e_5 = NULL,f_5 = NULL,h_5 = NULL;
              e_5 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_5 = ATgetArgument(t, 0);
                  t = f_5;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_5 = ATgetArgument(t, 0);
                      t = f_5;
                      {
                        ATerm k_5 = t;
                        int m_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_5);
                          }
                        else
                          {
                            t = k_5;
                            {
                              ATerm o_0 (ATerm t)
                              {
                                t = term_n_5;
                                return(t);
                              }
                              t = debug_1_0(o_0, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm l_5 = NULL,p_5 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_5 = ATgetArgument(t, 0);
                          h_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_5;
                      t = eval_config_0_0(t);
                      l_5 = t;
                      t = h_5;
                      t = eval_config_0_0(t);
                      p_5 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_5, p_5);
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
  ATerm s_5 = NULL;
  s_5 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_5);
  {
    ATerm p_0 (ATerm t)
    {
      ATerm t_5 = NULL;
      t = eval_config_0_0(t);
      t_5 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_5, t_5);
      t = t_5;
      return(t);
    }
    t = try_1_0(p_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm u_5 = NULL,v_5 = NULL;
    u_5 = t;
    t = term_o_5;
    t = get_config_0_0(t);
    v_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_5, term_q_5);
    t = geq_0_0(t);
    t = u_5;
    t = a_102(t);
    return(t);
  }
  t = try_1_0(q_0, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm r_5 = ATgetArgument(t, 0);
        if(match_cons(r_5, sym_Stream_1))
          {
            w_5 = ATgetArgument(r_5, 0);
          }
        else
          _fail(t);
        x_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(w_5, x_5);
    y_5 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), y_5);
    z_5 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_5);
    return(t);
  }
  t = WriteToFile_1_0(r_0, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__2))
    {
      d_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_6, term_a_6);
  t = open_stream_0_0(t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, e_6);
  t = b_92(t);
  t = fclose_0_0(t);
  t = e_6;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_6 = ATgetArgument(t, 0);
        if(match_cons(b_6, sym_Stream_1))
          {
            h_6 = ATgetArgument(b_6, 0);
          }
        else
          _fail(t);
        i_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(h_6, i_6);
    j_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, j_6);
    return(t);
  }
  t = WriteToFile_1_0(s_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  n_6 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm c_6 = t;
      int f_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                o_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(w_0, t);
          ;
          LocalPopChoice(f_6);
        }
      else
        {
          t = c_6;
          t = term_k_6;
          o_6 = t;
        }
      return(t);
    }
    t = _2_0(u_0, _id, t);
    t = n_6;
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          t = not_null(o_6);
          return(t);
        }
        t = split_2_0(b_1, _id, t);
        return(t);
      }
      t = _2_0(_id, a_1, t);
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(d_1, t);
              return(t);
            }
            t = _2_0(c_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
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
ATerm apply_strategy_1_0 (ATerm n_75 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  q_6 = t;
  t = dtime_0_0(t);
  t = q_6;
  t = n_75(t);
  r_6 = t;
  t = dtime_0_0(t);
  s_6 = t;
  t = r_6;
  if(match_cons(t, sym__2))
    {
      t_6 = ATgetArgument(t, 0);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_6), (ATerm) ATmakeAppl(sym_Runtime_1, s_6)), u_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_7 (ATerm c_7, ATerm t)
  {
    t = SSL_fclose(c_7);
    return(t);
  }
  ATerm i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_7 = ATgetArgument(t, 0);
      {
        ATerm p_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_7);
            ;
            LocalPopChoice(v_6);
          }
        else
          {
            t = p_6;
            t = n_7(j_7, t);
          }
      }
    }
  else
    {
      t = n_7(j_7, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  o_7 = t;
  t = n_91(t);
  p_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_7), p_7));
  t = o_7;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_7 = NULL;
  t = SSL_stdin_stream();
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_7 = NULL;
  t = SSL_stdout_stream();
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_7 = NULL;
  t = SSL_stderr_stream();
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_7);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      ATerm x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_0 = NULL,z_0 = NULL;
        x_0 = t;
        t = SSL_explode_term(x_0);
        if(match_cons(t, sym__2))
          {
            ATerm a_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_7 = ATgetArgument(t, 1);
              if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
                {
                  z_0 = ATgetFirst((ATermList) b_7);
                  {
                    ATerm d_7 = (ATerm) ATgetNext((ATermList) b_7);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_0;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        {
          ATerm e_7 = t;
          int f_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
              ATerm e_1 (ATerm t)
              {
                ATerm a_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_8;
                return(t);
              }
              t = _2_0(e_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  x_7 = ATgetArgument(t, 0);
                  y_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(x_7, y_7);
              z_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_7);
              ;
              LocalPopChoice(f_7);
            }
          else
            {
              t = e_7;
              {
                ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
                ATerm f_1 (ATerm t)
                {
                  ATerm e_8 = NULL;
                  e_8 = t;
                  t = SSL_is_string(e_8);
                  return(t);
                }
                t = _2_0(f_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_8 = ATgetArgument(t, 0);
                    c_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_8, c_8);
                d_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL;
      i_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_8, term_k_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm g_1 (ATerm t)
        {
          t = term_l_7;
          return(t);
        }
        t = debug_1_0(g_1, t);
        _fail(t);
      }
    }
  f_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_8);
  g_8 = t;
  t = f_8;
  t = fclose_0_0(t);
  t = g_8;
  return(t);
}
ATerm split_2_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  t = x_80(t);
  l_8 = t;
  t = k_8;
  t = y_80(t);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_8, m_8);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  n_8 = t;
  {
    ATerm m_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              o_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(i_1, t);
        ;
        LocalPopChoice(t_7);
      }
    else
      {
        t = m_7;
        t = term_v_7;
        o_8 = t;
      }
    t = n_8;
    {
      ATerm j_1 (ATerm t)
      {
        t = not_null(o_8);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, j_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm q_8 = NULL;
    q_8 = t;
    if(match_string(t, "-k"))
      {
        t = q_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_8;
      }
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm r_8 = NULL,s_8 = NULL;
    r_8 = t;
    t = SSL_string_to_int(r_8);
    s_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_8);
    t = r_8;
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_w_7;
    return(t);
  }
  t = ArgOption_3_0(k_1, l_1, n_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm u_8 = NULL;
        u_8 = t;
        if(match_string(t, "-S"))
          {
            t = u_8;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = u_8;
          }
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_x_8;
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        t = term_a_9;
        return(t);
      }
      t = Option_3_0(o_1, p_1, q_1, t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = j_8;
      {
        ATerm b_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              ATerm v_8 = NULL,w_8 = NULL;
              v_8 = t;
              t = SSL_string_to_int(v_8);
              w_8 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_8);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_8);
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_i_9;
              return(t);
            }
            t = ArgOption_3_0(r_1, s_1, v_1, t);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = b_9;
            {
              ATerm w_1 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_j_9;
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = term_l_9;
                return(t);
              }
              t = Option_3_0(w_1, x_1, y_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
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
  ATerm c_2 (ATerm t)
  {
    ATerm z_8 = NULL;
    z_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_8);
    t = (ATerm) ATmakeAppl(sym_Output_1, z_8);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_r_9;
    return(t);
  }
  t = ArgOption_3_0(z_1, c_2, f_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = s_9;
      {
        ATerm l_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_9;
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_d_10;
          return(t);
        }
        t = Option_3_0(l_2, m_2, o_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
  c_9 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_9;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm k_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_9 = ATgetFirst((ATermList) t);
          e_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_9 = ATgetFirst((ATermList) t);
          g_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_9;
      t = h_0(t);
      t = f_9;
      t = i_0(t);
      k_9 = t;
      t = (ATerm) ATinsert(CheckATermList(g_9), k_9);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm m_9 = NULL;
    m_9 = t;
    if(match_string(t, "-i"))
      {
        t = m_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = m_9;
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm n_9 = NULL;
    n_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_9);
    t = (ATerm) ATmakeAppl(sym_Input_1, n_9);
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_e_10;
    return(t);
  }
  t = ArgOption_3_0(t_2, u_2, v_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_4;
  t = whoami_0_0(t);
  q_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), q_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  ATerm k_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_88(t);
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = k_10;
      {
        ATerm t_9 = NULL,u_9 = NULL,x_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_9 = ATgetFirst((ATermList) t);
            u_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_9;
        t = foldr_2_0(l_88, m_88, t);
        x_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, x_9);
        t = m_88(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  y_9 = t;
  t = SSL_explode_term(y_9);
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9;
  t = foldr_2_0(j_86, k_86, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  t = times_0_0(t);
  {
    ATerm w_2 (ATerm t)
    {
      t = term_t_8;
      return(t);
    }
    ATerm x_2 (ATerm t)
    {
      ATerm b_10 = NULL,c_10 = NULL;
      if(match_cons(t, sym__2))
        {
          b_10 = ATgetArgument(t, 0);
          c_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(b_10, c_10);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = s_10;
            t = SSL_addr(b_10, c_10);
          }
      }
      return(t);
    }
    t = crush_2_0(w_2, x_2, t);
    a_10 = t;
    t = SSL_TicksToSeconds(a_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_10;
        if((m_10 != t))
          {
            _fail(t);
          }
        t = l_10;
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = x_10;
        t = l_10;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_10, n_10);
              ;
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              t = SSL_gtr(m_10, n_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_10, n_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm q_10 = NULL,r_10 = NULL;
    q_10 = t;
    t = term_o_5;
    t = get_config_0_0(t);
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_10, term_j_11);
    t = geq_0_0(t);
    t = q_10;
    t = z_101(t);
    return(t);
  }
  t = try_1_0(a_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm t_10 = NULL,u_10 = NULL;
    t = run_time_0_0(t);
    t_10 = t;
    t = term_t_4;
    t = whoami_0_0(t);
    u_10 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_10), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_10));
    t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_11), t_10), term_l_11), u_10));
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
ATerm need_help_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm e_3 (ATerm t)
        {
          ATerm y_11 = t;
          int z_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_11);
            }
          else
            {
              t = y_11;
              {
                ATerm a_12 = t;
                int b_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_12);
                  }
                else
                  {
                    t = a_12;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(e_3, t);
      }
    }
  t = l_76(t);
  return(t);
}
ATerm map_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm c_12 = t;
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
        t = c_12;
        t = Cons_2_0(v_81, w_10, t);
      }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_10 = ATgetFirst((ATermList) t);
      z_10 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_11 = NULL,e_11 = NULL;
        t = z_10;
        t = g_0(t);
        d_11 = t;
        t = y_10;
        t = f_0(t);
        e_11 = t;
        t = z_10;
        {
          ATerm f_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_11), e_11);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_4;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, g_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  f_11 = t;
  t = g_11;
  t = s_74(t);
  h_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_11), f_11);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm h_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(h_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_k_12;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm m_11 = NULL;
      m_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, m_11), term_m_12);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(j_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_74 (ATerm), ATerm t)
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
  t = t_74(t);
  p_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_11), n_11);
  return(t);
}
ATerm fetch_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(f_82, _id, t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = Cons_2_0(_id, u_11, t);
      }
    return(t);
  }
  t = u_11(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  t = fetch_1_0(f_93, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  w_11 = t;
  {
    ATerm t_12 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_11;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_13 = ATgetFirst((ATermList) t);
                ATerm d_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_11;
          }
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = t_12;
        t = (ATerm) ATinsert(ATempty, w_11);
      }
    x_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), x_11);
    t = w_11;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_13 = t;
  int j_13 = stack_ptr;
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
        t = term_o_13;
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        t = term_p_13;
        return(t);
      }
      t = Option_3_0(k_3, l_3, m_3, t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = g_13;
      {
        ATerm n_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_q_13;
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_u_13;
          return(t);
        }
        t = Option_3_0(n_3, o_3, q_3, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__3))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
      f_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_12, e_12);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_13 = ATgetArgument(t, 0);
            ATerm z_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_12, e_12);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATempty;
      }
    g_12 = t;
    t = SSL_table_put(d_12, e_12, (ATerm) ATinsert(CheckATermList(g_12), f_12));
    t = (ATerm) ATmakeAppl(sym__3, d_12, e_12, f_12);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm l_12 = NULL;
  t = term_t_4;
  t = k_94(t);
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_d_14, l_12);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_12;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm s_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_12 = ATgetFirst((ATermList) t);
          p_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_12;
      t = a_0(t);
      t = term_t_4;
      t = b_0(t);
      s_12 = t;
      t = (ATerm) ATinsert(CheckATermList(p_12), s_12);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm u_12 = NULL;
    u_12 = t;
    if(match_string(t, "--help"))
      {
        t = u_12;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = u_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = u_12;
          }
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_e_14;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_f_14;
    return(t);
  }
  t = Option_3_0(r_3, s_3, w_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  a_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_12 = ATgetFirst((ATermList) t);
      x_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_13);
  v_12 = t;
  t = w_12;
  t = e_62(t);
  y_12 = t;
  t = x_12;
  t = f_62(t);
  z_12 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_12), y_12), v_12);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  {
    ATerm y_3 (ATerm t)
    {
      t = term_g_14;
      t = i_94(t);
      return(t);
    }
    t = try_1_0(y_3, t);
    t = h_13;
    {
      ATerm z_3 (ATerm t)
      {
        ATerm i_13 = NULL;
        i_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_13);
        t = (ATerm) ATmakeAppl(sym_Program_1, i_13);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = i_94(t);
                t = Cons_2_0(_id, a_4, t);
              }
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm k_13 = NULL,l_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_13 = ATgetFirst((ATermList) t);
                  l_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_13), (ATerm) ATmakeAppl(sym_Undefined_1, k_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_3, a_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = r_13;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_94(t);
          ;
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          {
            ATerm n_14 = t;
            int o_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(o_14);
              }
            else
              {
                t = n_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_4, t);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_13 = NULL;
            y_13 = t;
            {
              ATerm r_14 = t;
              int s_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_13;
                  {
                    ATerm t_14 = t;
                    int u_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_v_11;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(u_14);
                      }
                    else
                      {
                        t = t_14;
                        {
                          ATerm d_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(d_4, t);
                        }
                      }
                    t = y_13;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(s_14);
                }
              else
                {
                  t = r_14;
                  t = term_n_13;
                  t = get_config_0_0(t);
                  t = y_13;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            {
              ATerm e_4 (ATerm t)
              {
                ATerm f_4 (ATerm t)
                {
                  s_13 = t;
                  return(t);
                }
                t = Undefined_1_0(f_4, t);
                return(t);
              }
              t = option_defined_1_0(e_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_13)), term_v_14));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(c_4, t);
      t_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm t)
{
  ATerm y_4 = NULL;
  t = parse_options_1_0(n_76, t);
  y_4 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_4);
  t = y_4;
  t = p_76(t);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_76, t);
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
              t = q_76(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_76(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(c_76, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_4, e_76, f_76, h_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm b_14 = NULL,c_14 = NULL;
      b_14 = t;
      t = term_j_10;
      t = get_config_0_0(t);
      c_14 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_14));
      t = b_14;
      return(t);
    }
    t = if_verbose2_1_0(l_4, t);
    return(t);
  }
  t = iowrap_4_0(w_75, x_75, y_75, k_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm t)
{
  t = iowrap_3_0(u_75, v_75, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    t = _2_0(_id, r_75, t);
    return(t);
  }
  t = iowrap_2_0(m_4, _fail, t);
  return(t);
}
ATerm io_tg2typematch_0_0 (ATerm t)
{
  t = iowrap_1_0(tg_to_stratego_typematch_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_tg2typematch_0_0(t);
  return(t);
}

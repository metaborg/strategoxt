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
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Seq_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Path_2;
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
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
ATerm term_v_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_u_14;
ATerm term_z_13;
ATerm term_s_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_e_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_j_6;
ATerm term_l_4;
ATerm term_f_4;
ATerm term_z_3;
void init_constant_terms (void)
{
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, term_z_3);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm _2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm q_103 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_106 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_91 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_104 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_107 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_109 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm s_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL;
  e_0 = t;
  t = term_z_3;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm DesugarCase_0_0 (ATerm t)
{
  ATerm d_1 = NULL,i_1 = NULL,p_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,w_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
      t = w_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_1 = ATgetFirst((ATermList) t);
          s_1 = (ATerm) ATgetNext((ATermList) t);
          t = t_1;
          if(match_cons(t, sym_Alt_3))
            {
              d_1 = ATgetArgument(t, 0);
              p_1 = ATgetArgument(t, 1);
              q_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = d_1;
          if(match_cons(t, sym_Real_1))
            {
              i_1 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, i_1)), q_1, (ATerm) ATmakeAppl(sym_Case_2, s_1, x_1));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  i_1 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, i_1)), q_1, (ATerm) ATmakeAppl(sym_Case_2, s_1, x_1));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      i_1 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, i_1)), q_1, (ATerm) ATmakeAppl(sym_Case_2, s_1, x_1));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          i_1 = ATgetArgument(t, 0);
                          {
                            ATerm a_4 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, i_1, p_1)), q_1, (ATerm) ATmakeAppl(sym_Case_2, s_1, x_1));
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_1;
        }
    }
  else
    {
      if(match_cons(t, sym_Case_3))
        {
          w_1 = ATgetArgument(t, 0);
          x_1 = ATgetArgument(t, 1);
          z_1 = ATgetArgument(t, 2);
          t = w_1;
          if(match_cons(t, sym_Var_1))
            {
              t_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_1)), (ATerm) ATmakeAppl(sym_Case_2, x_1, z_1));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm b_4 = ATgetArgument(t, 0);
              x_1 = ATgetArgument(t, 1);
              z_1 = ATgetArgument(t, 2);
              a_2 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, x_1, z_1, a_2);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm e_4 = NULL,h_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      e_4 = ATgetArgument(t, 0);
      t = e_4;
      if(match_cons(t, sym_Var_1))
        {
          h_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_4));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          e_4 = ATgetArgument(t, 0);
          j_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_4;
      if(match_cons(t, sym_Var_1))
        {
          h_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_4), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_4)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm c_4 = t;
    int d_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_84(t);
        t = o_4(t);
        ;
        LocalPopChoice(d_4);
      }
    else
      {
        t = c_4;
      }
    return(t);
  }
  t = o_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  t = j_85(t);
  {
    ATerm k_0 (ATerm t)
    {
      t = topdown_1_0(j_85, t);
      return(t);
    }
    t = SRTS_all(k_0, t);
  }
  return(t);
}
ATerm _2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  v_4 = t;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_4);
  p_4 = t;
  t = q_4;
  t = k_65(t);
  t_4 = t;
  t = s_4;
  t = l_65(t);
  u_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_4, u_4), p_4);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_4, term_f_4);
  t = open_stream_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, z_4);
  t = q_103(t);
  t = fclose_0_0(t);
  t = z_4;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL;
  b_5 = t;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm g_4 = t;
      int i_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_5 != NULL) && (c_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_0, t);
          ;
          LocalPopChoice(i_4);
        }
      else
        {
          t = g_4;
          t = term_l_4;
          if(((c_5 != NULL) && (c_5 != t)))
            _fail(t);
          else
            c_5 = t;
        }
      return(t);
    }
    t = _2_0(m_0, _id, t);
    t = b_5;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm c_0 = NULL;
        c_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), c_0);
        return(t);
      }
      t = _2_0(_id, o_0, t);
      {
        ATerm m_4 = t;
        int n_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              ATerm r_0 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(r_0, t);
              return(t);
            }
            ATerm q_0 (ATerm t)
            {
              ATerm s_0 (ATerm t)
              {
                ATerm e_5 = NULL,g_5 = NULL,h_5 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm r_4 = ATgetArgument(t, 0);
                    if(match_cons(r_4, sym_Stream_1))
                      {
                        e_5 = ATgetArgument(r_4, 0);
                      }
                    else
                      _fail(t);
                    g_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(e_5, g_5);
                h_5 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_5);
                return(t);
              }
              t = WriteToFile_1_0(s_0, t);
              return(t);
            }
            t = _2_0(p_0, q_0, t);
            ;
            LocalPopChoice(n_4);
          }
        else
          {
            t = m_4;
            {
              ATerm t_0 (ATerm t)
              {
                ATerm u_0 (ATerm t)
                {
                  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_4 = ATgetArgument(t, 0);
                      if(match_cons(w_4, sym_Stream_1))
                        {
                          i_5 = ATgetArgument(w_4, 0);
                        }
                      else
                        _fail(t);
                      j_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(i_5, j_5);
                  k_5 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), k_5);
                  l_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, l_5);
                  return(t);
                }
                t = WriteToFile_1_0(u_0, t);
                return(t);
              }
              t = _2_0(_id, t_0, t);
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
ATerm apply_strategy_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  m_5 = t;
  t = dtime_0_0(t);
  t = m_5;
  t = s_106(t);
  n_5 = t;
  t = dtime_0_0(t);
  o_5 = t;
  t = n_5;
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_5), (ATerm) ATmakeAppl(sym_Runtime_1, o_5)), q_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_6 (ATerm y_5, ATerm t)
  {
    t = SSL_fclose(y_5);
    return(t);
  }
  ATerm b_6 = NULL,c_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_6 = ATgetArgument(t, 0);
      {
        ATerm x_4 = t;
        int d_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_6);
            ;
            LocalPopChoice(d_5);
          }
        else
          {
            t = x_4;
            t = e_6(c_6, t);
          }
      }
    }
  else
    {
      t = e_6(c_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_6 = NULL;
  t = SSL_stdin_stream();
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = SSL_stdout_stream();
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_6 = NULL;
  t = SSL_stderr_stream();
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_5 = ATgetArgument(t, 0);
      ATerm s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_0 = NULL,y_0 = NULL;
        x_0 = t;
        t = SSL_explode_term(x_0);
        if(match_cons(t, sym__2))
          {
            ATerm v_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_5 = ATgetArgument(t, 1);
              if(((ATgetType(w_5) == AT_LIST) && !(ATisEmpty(w_5))))
                {
                  y_0 = ATgetFirst((ATermList) w_5);
                  {
                    ATerm x_5 = (ATerm) ATgetNext((ATermList) w_5);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_0;
        if(match_cons(t, sym_stderr_0))
          {
            t = y_0;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = y_0;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_0;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(u_5);
      }
    else
      {
        t = t_5;
        {
          ATerm z_5 = t;
          int a_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
              ATerm v_0 (ATerm t)
              {
                ATerm s_6 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_6 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_6;
                return(t);
              }
              t = _2_0(v_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_6 = ATgetArgument(t, 0);
                  q_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_6, q_6);
              r_6 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_6);
              ;
              LocalPopChoice(a_6);
            }
          else
            {
              t = z_5;
              {
                ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
                ATerm w_0 (ATerm t)
                {
                  ATerm z_6 = NULL;
                  z_6 = t;
                  t = SSL_is_string(z_6);
                  return(t);
                }
                t = _2_0(w_0, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_6 = ATgetArgument(t, 0);
                    u_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_6, u_6);
                v_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
  ATerm d_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_7 = NULL;
      d_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_7, term_j_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_6);
    }
  else
    {
      t = d_6;
      {
        ATerm z_0 = NULL;
        z_0 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_0), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = z_0;
        _fail(t);
      }
    }
  a_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(c_7);
  b_7 = t;
  t = a_7;
  t = fclose_0_0(t);
  t = b_7;
  return(t);
}
ATerm fetch_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm k_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_91, _id, t);
        ;
        LocalPopChoice(m_6);
      }
    else
      {
        t = k_6;
        t = Cons_2_0(_id, j_7, t);
      }
    return(t);
  }
  t = j_7(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm m_7 = NULL,n_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_7 = ATgetFirst((ATermList) t);
            n_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_7;
        {
          ATerm a_1 (ATerm t)
          {
            t = n_7;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm w_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_7, t);
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = w_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_91(t);
      }
    return(t);
  }
  t = w_7(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_7 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm a_8 = NULL;
    a_8 = t;
    t = SSL_explode_string(a_8);
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm b_8 = NULL;
    b_8 = t;
    t = SSL_explode_string(b_8);
    return(t);
  }
  t = _2_0(b_1, c_1, t);
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_8 = NULL,i_8 = NULL;
        if(match_cons(t, sym__2))
          {
            g_8 = ATgetArgument(t, 0);
            i_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_8;
        {
          ATerm e_1 (ATerm t)
          {
            t = i_8;
            return(t);
          }
          t = at_end_1_0(e_1, t);
        }
        ;
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        {
          ATerm f_1 = NULL,g_1 = NULL;
          f_1 = t;
          t = SSL_explode_term(f_1);
          if(match_cons(t, sym__2))
            {
              ATerm g_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              g_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_1;
          t = concat_0_0(t);
        }
      }
    z_7 = t;
    t = SSL_implode_string(z_7);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 = NULL;
      s_8 = t;
      t = SSL_is_string(s_8);
      ;
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm o_7 = t;
              int p_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(p_7);
                }
              else
                {
                  t = o_7;
                }
              return(t);
            }
            t = map_1_0(h_1, t);
            ;
            LocalPopChoice(l_7);
          }
        else
          {
            t = k_7;
            {
              ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
              w_8 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_8 = ATgetArgument(t, 0);
                  t = x_8;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_8 = ATgetArgument(t, 0);
                      t = x_8;
                      {
                        ATerm q_7 = t;
                        int r_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_8);
                            {
                              ATerm s_7 = t;
                              int t_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_2 = NULL;
                                  t = eval_config_0_0(t);
                                  r_2 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_8, r_2);
                                  t = r_2;
                                  ;
                                  LocalPopChoice(t_7);
                                }
                              else
                                {
                                  t = s_7;
                                }
                            }
                            ;
                            LocalPopChoice(r_7);
                          }
                        else
                          {
                            t = q_7;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_8), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = x_8;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_9 = NULL,d_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_8 = ATgetArgument(t, 0);
                          y_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_8;
                      t = eval_config_0_0(t);
                      c_9 = t;
                      t = y_8;
                      t = eval_config_0_0(t);
                      d_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_9, d_9);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_9 = NULL,k_9 = NULL;
      i_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 = NULL;
            t = eval_config_0_0(t);
            h_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_3);
            t = h_3;
            ;
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
          }
        k_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_9, term_c_8);
        t = geq_0_0(t);
        t = i_9;
        t = u_104(t);
      }
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm m_9 = NULL;
    m_9 = t;
    if(match_string(t, "-k"))
      {
        t = m_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = m_9;
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm n_9 = NULL,o_9 = NULL;
    n_9 = t;
    t = SSL_string_to_int(n_9);
    o_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), o_9);
    t = n_9;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_d_8;
    return(t);
  }
  t = ArgOption_3_0(j_1, k_1, l_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm q_9 = NULL;
        q_9 = t;
        if(match_string(t, "-S"))
          {
            t = q_9;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = q_9;
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_j_8;
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_k_8;
        return(t);
      }
      t = Option_3_0(m_1, n_1, o_1, t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              ATerm r_9 = NULL,s_9 = NULL;
              r_9 = t;
              t = SSL_string_to_int(r_9);
              s_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_9);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, r_9);
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_n_8;
              return(t);
            }
            t = ArgOption_3_0(r_1, u_1, v_1, t);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            {
              ATerm y_1 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_p_8;
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_q_8;
                return(t);
              }
              t = Option_3_0(y_1, b_2, c_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_9 = NULL;
      t = term_z_3;
      t = d_0(t);
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_8, term_t_8, x_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_9 = ATgetFirst((ATermList) t);
          w_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_9;
      t = a_0(t);
      t = term_z_3;
      t = b_0(t);
      a_10 = t;
      t = (ATerm) ATinsert(CheckATermList(w_9), a_10);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm c_10 = NULL;
    c_10 = t;
    if(match_string(t, "-o"))
      {
        t = c_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = c_10;
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm d_10 = NULL;
    d_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), d_10);
    t = (ATerm) ATmakeAppl(sym_Output_1, d_10);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_u_8;
    return(t);
  }
  t = ArgOption_3_0(d_2, e_2, f_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__3))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      i_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_10, h_10);
  {
    ATerm v_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_9 = ATgetArgument(t, 0);
            ATerm b_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_10, h_10);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATempty;
      }
    j_10 = t;
    t = SSL_table_put(g_10, h_10, (ATerm) ATinsert(CheckATermList(j_10), i_10));
    t = (ATerm) ATmakeAppl(sym__3, g_10, h_10, i_10);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_10 = NULL;
      t = term_z_3;
      t = j_0(t);
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_8, term_t_8, v_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_10 = ATgetFirst((ATermList) t);
          s_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_10 = ATgetFirst((ATermList) t);
          u_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_10;
      t = h_0(t);
      t = t_10;
      t = i_0(t);
      z_10 = t;
      t = (ATerm) ATinsert(CheckATermList(u_10), z_10);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm b_11 = NULL;
    b_11 = t;
    if(match_string(t, "-i"))
      {
        t = b_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = b_11;
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm c_11 = NULL;
    c_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_11);
    t = (ATerm) ATmakeAppl(sym_Input_1, c_11);
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_e_9;
    return(t);
  }
  t = ArgOption_3_0(g_2, h_2, i_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_3;
  t = whoami_0_0(t);
  d_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), d_11));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL;
        t = eval_config_0_0(t);
        m_3 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_3);
        t = m_3;
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t)
{
  ATerm h_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_97(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = h_9;
      {
        ATerm g_11 = NULL,h_11 = NULL,l_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_11 = ATgetFirst((ATermList) t);
            h_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_11;
        t = foldr_2_0(c_97, d_97, t);
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, l_11);
        t = d_97(t);
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
  ATerm o_11 = NULL,n_3 = NULL,o_3 = NULL;
  t = times_0_0(t);
  n_3 = t;
  t = SSL_explode_term(n_3);
  if(match_cons(t, sym__2))
    {
      ATerm l_9 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_3;
  {
    ATerm j_2 (ATerm t)
    {
      t = term_h_8;
      return(t);
    }
    ATerm k_2 (ATerm t)
    {
      ATerm v_3 = NULL,w_3 = NULL;
      if(match_cons(t, sym__2))
        {
          v_3 = ATgetArgument(t, 0);
          w_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(v_3, w_3);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = p_9;
            t = SSL_addr(v_3, w_3);
          }
      }
      return(t);
    }
    t = foldr_2_0(j_2, k_2, t);
    o_11 = t;
    t = SSL_TicksToSeconds(o_11);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_12;
        if((a_12 != t))
          {
            _fail(t);
          }
        t = z_11;
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = u_9;
        t = z_11;
        {
          ATerm z_9 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_12, b_12);
              ;
              LocalPopChoice(b_10);
            }
          else
            {
              t = z_9;
              t = SSL_gtr(a_12, b_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm f_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_12 = NULL,g_12 = NULL;
      e_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 = NULL;
            t = eval_config_0_0(t);
            k_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_4);
            t = k_4;
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
          }
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_12, term_n_10);
        t = geq_0_0(t);
        t = e_12;
        t = t_104(t);
      }
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = f_10;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm i_12 = NULL,j_12 = NULL;
    t = run_time_0_0(t);
    i_12 = t;
    t = term_z_3;
    t = whoami_0_0(t);
    j_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), i_12), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), j_12));
    t = (ATerm) ATmakeAppl(sym__2, term_o_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_10), i_12), term_p_10), j_12));
    return(t);
  }
  t = if_verbose1_1_0(l_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm y_10 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 = NULL;
            t = eval_config_0_0(t);
            r_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_5);
            t = r_5;
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = y_10;
          }
      }
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm f_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(i_11);
            }
          else
            {
              t = f_11;
              {
                ATerm j_11 = t;
                int k_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(k_11);
                  }
                else
                  {
                    t = j_11;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(m_2, t);
      }
    }
  t = q_107(t);
  return(t);
}
ATerm map_1_0 (ATerm a_91 (ATerm), ATerm t)
{
  ATerm k_12 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = Cons_2_0(a_91, k_12, t);
      }
    return(t);
  }
  t = k_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_12 = ATgetFirst((ATermList) t);
      n_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_12 = NULL,s_12 = NULL;
        t = n_12;
        t = g_0(t);
        r_12 = t;
        t = m_12;
        t = f_0(t);
        s_12 = t;
        t = n_12;
        {
          ATerm n_2 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_12), s_12);
            return(t);
          }
          t = reverse_acc_2_0(f_0, n_2, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_3;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,w_12 = NULL,y_12 = NULL,z_12 = NULL;
  z_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  t_12 = t;
  t = w_12;
  t = j_83(t);
  y_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_12), t_12);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 = NULL;
            t = eval_config_0_0(t);
            l_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_6);
            t = l_6;
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
          }
      }
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm o_2 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(o_2, t);
      }
    }
  t = term_u_11;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm p_2 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, p_2, t);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm e_13 = NULL;
        e_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_13), term_v_11);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(q_2, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_13);
  g_13 = t;
  t = i_13;
  t = k_83(t);
  j_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, j_13), g_13);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_11 = ATgetFirst((ATermList) t);
                ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_13;
          }
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATinsert(ATempty, o_13);
      }
    p_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_13);
    t = o_13;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL;
        t = eval_config_0_0(t);
        x_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_6);
        t = x_6;
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = d_12;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_q_12;
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_u_12;
        return(t);
      }
      t = Option_3_0(s_2, t_2, u_2, t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = h_12;
      {
        ATerm v_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm w_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_12;
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = Option_3_0(v_2, w_2, x_2, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  y_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_13 = ATgetFirst((ATermList) t);
      v_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_13);
  t_13 = t;
  t = u_13;
  t = z_69(t);
  w_13 = t;
  t = v_13;
  t = a_70(t);
  x_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_13), w_13), t_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_13;
        t = t_109(t);
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
      }
    t = c_14;
    {
      ATerm y_2 (ATerm t)
      {
        ATerm d_14 = NULL;
        d_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_14);
        t = (ATerm) ATmakeAppl(sym_Program_1, d_14);
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        ATerm d_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_13);
              }
            else
              {
                t = h_13;
                t = t_109(t);
                t = Cons_2_0(_id, z_2, t);
              }
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = d_13;
            {
              ATerm f_14 = NULL,g_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_14 = ATgetFirst((ATermList) t);
                  g_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_14), (ATerm) ATmakeAppl(sym_Undefined_1, f_14));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_2, z_2, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_14;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm m_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_109(t);
          ;
          LocalPopChoice(n_13);
        }
      else
        {
          t = m_13;
          {
            ATerm q_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm q_14 = NULL;
                  q_14 = t;
                  if(match_string(t, "--help"))
                    {
                      t = q_14;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = q_14;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = q_14;
                        }
                    }
                  return(t);
                }
                ATerm c_3 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_s_13;
                  return(t);
                }
                ATerm d_3 (ATerm t)
                {
                  t = term_z_13;
                  return(t);
                }
                t = Option_3_0(b_3, c_3, d_3, t);
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = q_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_3, t);
    {
      ATerm a_14 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_14 = NULL;
          v_14 = t;
          {
            ATerm e_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_14;
                {
                  ATerm i_14 = t;
                  int j_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm k_14 = t;
                        int l_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_8 = NULL;
                            t = eval_config_0_0(t);
                            o_8 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_8);
                            t = o_8;
                            ;
                            LocalPopChoice(l_14);
                          }
                        else
                          {
                            t = k_14;
                          }
                      }
                      ;
                      LocalPopChoice(j_14);
                    }
                  else
                    {
                      t = i_14;
                      {
                        ATerm e_3 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(e_3, t);
                      }
                    }
                  t = v_14;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(h_14);
              }
            else
              {
                t = e_14;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm m_14 = t;
                  int r_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_10 = NULL;
                      t = eval_config_0_0(t);
                      e_10 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_10);
                      t = e_10;
                      ;
                      LocalPopChoice(r_14);
                    }
                  else
                    {
                      t = m_14;
                    }
                  t = v_14;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(b_14);
        }
      else
        {
          t = a_14;
          {
            ATerm s_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm g_3 (ATerm t)
                  {
                    if(((o_14 != NULL) && (o_14 != t)))
                      _fail(t);
                    else
                      o_14 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_3, t);
                  return(t);
                }
                t = fetch_1_0(f_3, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_o_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), term_u_14));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(t_14);
              }
            else
              {
                t = s_14;
              }
          }
        }
      p_14 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = p_14;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm t)
{
  ATerm y_14 = NULL;
  t = parse_options_1_0(s_107, t);
  y_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_14);
  t = y_14;
  t = u_107(t);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_107, t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_107(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              {
                ATerm j_15 = t;
                int k_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          ATerm l_3 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm p_3 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_n_15;
                            return(t);
                          }
                          ATerm q_3 (ATerm t)
                          {
                            t = term_o_15;
                            return(t);
                          }
                          t = Option_3_0(l_3, p_3, q_3, t);
                          ;
                          LocalPopChoice(m_15);
                        }
                      else
                        {
                          t = l_15;
                          {
                            ATerm p_15 = t;
                            int q_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_15);
                              }
                            else
                              {
                                t = p_15;
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
  ATerm j_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      ATerm z_14 = NULL,a_15 = NULL;
      z_14 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_11 = NULL;
            t = eval_config_0_0(t);
            a_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_11);
            t = a_11;
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
          }
        a_15 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, a_15));
        t = z_14;
      }
      return(t);
    }
    t = if_verbose2_1_0(r_3, t);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL,r_11 = NULL;
    b_15 = t;
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_15 != NULL) && (c_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_3, t);
          ;
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          t = term_v_15;
          c_15 = t;
        }
      t = not_null(c_15);
      t = ReadFromFile_0_0(t);
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_15, r_11);
      t = apply_strategy_1_0(b_107, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(i_3, d_107, j_3, k_3, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm u_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DesugarAssign_0_0(t);
              ;
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              t = DesugarCase_0_0(t);
            }
          return(t);
        }
        t = repeat_1_0(y_3, t);
        return(t);
      }
      t = topdown_1_0(x_3, t);
      return(t);
    }
    t = _2_0(_id, u_3, t);
    return(t);
  }
  t = iowrap_3_0(t_3, _fail, default_usage_0_0, t);
  return(t);
}

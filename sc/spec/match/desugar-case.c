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
ATerm term_k_14;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_h_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_i_8;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_k_6;
ATerm term_i_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_w_4;
ATerm term_q_4;
ATerm term_o_4;
ATerm term_l_4;
ATerm term_k_4;
ATerm term_w_3;
void init_constant_terms (void)
{
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__3, term_b_12, term_e_12, term_w_3);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_77 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm _2_0 (ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_84 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_99 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm f_96 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm);
ATerm crush_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_84 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm t_101 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_102 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm v_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm DesugarCase_0_0 (ATerm t)
{
  ATerm q_1 = NULL,s_1 = NULL,u_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      a_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
      t = a_2;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_1 = ATgetFirst((ATermList) t);
          x_1 = (ATerm) ATgetNext((ATermList) t);
          t = y_1;
          if(match_cons(t, sym_Alt_3))
            {
              q_1 = ATgetArgument(t, 0);
              u_1 = ATgetArgument(t, 1);
              w_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = q_1;
          if(match_cons(t, sym_Real_1))
            {
              s_1 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, s_1)), w_1, (ATerm) ATmakeAppl(sym_Case_2, x_1, c_2));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  s_1 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, s_1)), w_1, (ATerm) ATmakeAppl(sym_Case_2, x_1, c_2));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      s_1 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, s_1)), w_1, (ATerm) ATmakeAppl(sym_Case_2, x_1, c_2));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          s_1 = ATgetArgument(t, 0);
                          {
                            ATerm u_3 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, s_1, u_1)), w_1, (ATerm) ATmakeAppl(sym_Case_2, x_1, c_2));
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_2;
        }
    }
  else
    {
      if(match_cons(t, sym_Case_3))
        {
          a_2 = ATgetArgument(t, 0);
          c_2 = ATgetArgument(t, 1);
          d_2 = ATgetArgument(t, 2);
          t = a_2;
          if(match_cons(t, sym_Var_1))
            {
              y_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_1)), (ATerm) ATmakeAppl(sym_Case_2, c_2, d_2));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm v_3 = ATgetArgument(t, 0);
              c_2 = ATgetArgument(t, 1);
              d_2 = ATgetArgument(t, 2);
              e_2 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, c_2, d_2, e_2);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,r_4 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      m_4 = ATgetArgument(t, 0);
      t = m_4;
      if(match_cons(t, sym_Var_1))
        {
          n_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_4));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          m_4 = ATgetArgument(t, 0);
          r_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_4;
      if(match_cons(t, sym_Var_1))
        {
          n_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_4), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_4)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm c_0 (ATerm t)
    {
      t = s_77(t);
      t = y_4(t);
      return(t);
    }
    t = try_1_0(c_0, t);
    return(t);
  }
  t = y_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  t = q_78(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1_0(q_78, t);
      return(t);
    }
    t = SRTS_all(e_0, t);
  }
  return(t);
}
ATerm _2_0 (ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  f_5 = t;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_5);
  z_4 = t;
  t = a_5;
  t = x_61(t);
  d_5 = t;
  t = b_5;
  t = y_61(t);
  e_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, d_5, e_5), z_4);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL;
  m_5 = t;
  t = term_w_3;
  t = whoami_0_0(t);
  n_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), n_5), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_5;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_3 = t;
  int y_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_3);
    }
  else
    {
      t = x_3;
      {
        ATerm q_5 = NULL,r_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_5 = ATgetFirst((ATermList) t);
            r_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_5;
        {
          ATerm k_0 (ATerm t)
          {
            t = r_5;
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
  ATerm v_5 = NULL,z_5 = NULL;
  v_5 = t;
  t = SSL_explode_term(v_5);
  if(match_cons(t, sym__2))
    {
      ATerm z_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm a_4 = t;
    int b_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_6, t);
        ;
        LocalPopChoice(b_4);
      }
    else
      {
        t = a_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_84(t);
      }
    return(t);
  }
  t = a_6(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym__2))
    {
      d_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6;
  {
    ATerm l_0 (ATerm t)
    {
      t = c_6;
      return(t);
    }
    t = at_end_1_0(l_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_4 = t;
  int d_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_4);
    }
  else
    {
      t = c_4;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_6 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm f_6 = NULL;
    f_6 = t;
    t = SSL_explode_string(f_6);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    ATerm j_6 = NULL;
    j_6 = t;
    t = SSL_explode_string(j_6);
    return(t);
  }
  t = _2_0(m_0, n_0, t);
  t = conc_0_0(t);
  e_6 = t;
  t = SSL_implode_string(e_6);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6 = NULL;
      q_6 = t;
      t = SSL_is_string(q_6);
      ;
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
        ATerm g_4 = t;
        int h_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_0, t);
            ;
            LocalPopChoice(h_4);
          }
        else
          {
            t = g_4;
            {
              ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
              u_6 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_6 = ATgetArgument(t, 0);
                  t = v_6;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_6 = ATgetArgument(t, 0);
                      t = v_6;
                      {
                        ATerm i_4 = t;
                        int j_4 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_4);
                          }
                        else
                          {
                            t = i_4;
                            {
                              ATerm p_0 (ATerm t)
                              {
                                t = term_k_4;
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
                      ATerm c_7 = NULL,e_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_6 = ATgetArgument(t, 0);
                          w_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_6;
                      t = eval_config_0_0(t);
                      c_7 = t;
                      t = w_6;
                      t = eval_config_0_0(t);
                      e_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_7, e_7);
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
  ATerm j_7 = NULL;
  j_7 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_7);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm k_7 = NULL;
      t = eval_config_0_0(t);
      k_7 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_7, k_7);
      t = k_7;
      return(t);
    }
    t = try_1_0(q_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm l_7 = NULL,m_7 = NULL;
    l_7 = t;
    t = term_l_4;
    t = get_config_0_0(t);
    m_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_7, term_o_4);
    t = geq_0_0(t);
    t = l_7;
    t = x_97(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_4 = ATgetArgument(t, 0);
        if(match_cons(p_4, sym_Stream_1))
          {
            n_7 = ATgetArgument(p_4, 0);
          }
        else
          _fail(t);
        o_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(n_7, o_7);
    p_7 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), p_7);
    q_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, q_7);
    return(t);
  }
  t = WriteToFile_1_0(s_0, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_7, term_q_4);
  t = open_stream_0_0(t);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_7, s_7);
  t = t_96(t);
  t = fclose_0_0(t);
  t = s_7;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm t_4 = ATgetArgument(t, 0);
        if(match_cons(t_4, sym_Stream_1))
          {
            u_7 = ATgetArgument(t_4, 0);
          }
        else
          _fail(t);
        v_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(u_7, v_7);
    w_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, w_7);
    return(t);
  }
  t = WriteToFile_1_0(t_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  x_7 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm u_4 = t;
      int v_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                y_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(x_0, t);
          ;
          LocalPopChoice(v_4);
        }
      else
        {
          t = u_4;
          t = term_w_4;
          y_7 = t;
        }
      return(t);
    }
    t = _2_0(u_0, _id, t);
    t = x_7;
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = not_null(y_7);
          return(t);
        }
        t = split_2_0(z_0, _id, t);
        return(t);
      }
      t = _2_0(_id, y_0, t);
      {
        ATerm x_4 = t;
        int c_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              ATerm b_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(b_1, t);
              return(t);
            }
            t = _2_0(a_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(c_5);
          }
        else
          {
            t = x_4;
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
ATerm apply_strategy_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  z_7 = t;
  t = dtime_0_0(t);
  t = z_7;
  t = v_99(t);
  a_8 = t;
  t = dtime_0_0(t);
  b_8 = t;
  t = a_8;
  if(match_cons(t, sym__2))
    {
      c_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_8), (ATerm) ATmakeAppl(sym_Runtime_1, b_8)), d_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_8 (ATerm l_8, ATerm t)
  {
    t = SSL_fclose(l_8);
    return(t);
  }
  ATerm o_8 = NULL,p_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_8 = ATgetArgument(t, 0);
      {
        ATerm g_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_8);
            ;
            LocalPopChoice(h_5);
          }
        else
          {
            t = g_5;
            t = r_8(p_8, t);
          }
      }
    }
  else
    {
      t = r_8(p_8, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  s_8 = t;
  t = f_96(t);
  t_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_8), t_8));
  t = s_8;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_8 = NULL;
  t = SSL_stdin_stream();
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_8 = NULL;
  t = SSL_stdout_stream();
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  t = SSL_stderr_stream();
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_8);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_5 = ATgetArgument(t, 0);
      ATerm j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        v_0 = t;
        t = SSL_explode_term(v_0);
        if(match_cons(t, sym__2))
          {
            ATerm o_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_5 = ATgetArgument(t, 1);
              if(((ATgetType(p_5) == AT_LIST) && !(ATisEmpty(p_5))))
                {
                  w_0 = ATgetFirst((ATermList) p_5);
                  {
                    ATerm s_5 = (ATerm) ATgetNext((ATermList) p_5);
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
        LocalPopChoice(l_5);
      }
    else
      {
        t = k_5;
        {
          ATerm t_5 = t;
          int u_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
              ATerm c_1 (ATerm t)
              {
                ATerm e_9 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_9;
                return(t);
              }
              t = _2_0(c_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_9 = ATgetArgument(t, 0);
                  c_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_9, c_9);
              d_9 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
              ;
              LocalPopChoice(u_5);
            }
          else
            {
              t = t_5;
              {
                ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
                ATerm d_1 (ATerm t)
                {
                  ATerm i_9 = NULL;
                  i_9 = t;
                  t = SSL_is_string(i_9);
                  return(t);
                }
                t = _2_0(d_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_9 = ATgetArgument(t, 0);
                    g_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_9, g_9);
                h_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_9 = NULL,m_9 = NULL,n_9 = NULL;
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 = NULL;
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_9, term_y_5);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_b_6;
          return(t);
        }
        t = debug_1_0(e_1, t);
        _fail(t);
      }
    }
  j_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_9);
  m_9 = t;
  t = j_9;
  t = fclose_0_0(t);
  t = m_9;
  return(t);
}
ATerm split_2_0 (ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  t = x_91(t);
  r_9 = t;
  t = q_9;
  t = y_91(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, s_9);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  {
    ATerm g_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              u_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(f_1, t);
        ;
        LocalPopChoice(h_6);
      }
    else
      {
        t = g_6;
        t = term_i_6;
        u_9 = t;
      }
    t = t_9;
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(u_9);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, g_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm w_9 = NULL;
    w_9 = t;
    if(match_string(t, "-k"))
      {
        t = w_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = w_9;
      }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm x_9 = NULL,y_9 = NULL;
    x_9 = t;
    t = SSL_string_to_int(x_9);
    y_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), y_9);
    t = x_9;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_k_6;
    return(t);
  }
  t = ArgOption_3_0(h_1, i_1, j_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm a_10 = NULL;
        a_10 = t;
        if(match_string(t, "-S"))
          {
            t = a_10;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = a_10;
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_o_6;
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_p_6;
        return(t);
      }
      t = Option_3_0(k_1, l_1, m_1, t);
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm b_10 = NULL,c_10 = NULL;
              b_10 = t;
              t = SSL_string_to_int(b_10);
              c_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_10);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, b_10);
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_t_6;
              return(t);
            }
            t = ArgOption_3_0(n_1, o_1, p_1, t);
            ;
            LocalPopChoice(s_6);
          }
        else
          {
            t = r_6;
            {
              ATerm r_1 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_1 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_x_6;
                return(t);
              }
              ATerm v_1 (ATerm t)
              {
                t = term_y_6;
                return(t);
              }
              t = Option_3_0(r_1, t_1, v_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm e_10 = NULL;
    e_10 = t;
    if(match_string(t, "-o"))
      {
        t = e_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = e_10;
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm f_10 = NULL;
    f_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), f_10);
    t = (ATerm) ATmakeAppl(sym_Output_1, f_10);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_b_7;
    return(t);
  }
  t = ArgOption_3_0(z_1, b_2, f_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(f_7);
    }
  else
    {
      t = d_7;
      {
        ATerm g_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_7;
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = term_h_7;
          return(t);
        }
        t = Option_3_0(g_2, h_2, i_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  i_10 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = i_10;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm q_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_10 = ATgetFirst((ATermList) t);
          k_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_10 = ATgetFirst((ATermList) t);
          m_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_10;
      t = h_0(t);
      t = l_10;
      t = i_0(t);
      q_10 = t;
      t = (ATerm) ATinsert(CheckATermList(m_10), q_10);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm s_10 = NULL;
    s_10 = t;
    if(match_string(t, "-i"))
      {
        t = s_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = s_10;
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm t_10 = NULL;
    t_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_10);
    t = (ATerm) ATmakeAppl(sym_Input_1, t_10);
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_i_7;
    return(t);
  }
  t = ArgOption_3_0(j_2, k_2, l_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_3;
  t = whoami_0_0(t);
  u_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), u_10));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_8;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_90(t);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm x_10 = NULL,y_10 = NULL,b_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_10 = ATgetFirst((ATermList) t);
            y_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_10;
        t = foldr_2_0(i_90, j_90, t);
        b_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_10, b_11);
        t = j_90(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL;
  c_11 = t;
  t = SSL_explode_term(c_11);
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11;
  t = foldr_2_0(b_94, c_94, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  t = times_0_0(t);
  {
    ATerm m_2 (ATerm t)
    {
      t = term_n_6;
      return(t);
    }
    ATerm n_2 (ATerm t)
    {
      ATerm f_11 = NULL,g_11 = NULL;
      if(match_cons(t, sym__2))
        {
          f_11 = ATgetArgument(t, 0);
          g_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_11, g_11);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = n_8;
            t = SSL_addr(f_11, g_11);
          }
      }
      return(t);
    }
    t = crush_2_0(m_2, n_2, t);
    e_11 = t;
    t = SSL_TicksToSeconds(e_11);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_11;
        if((q_11 != t))
          {
            _fail(t);
          }
        t = p_11;
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = x_8;
        t = p_11;
        {
          ATerm a_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_11, r_11);
              ;
              LocalPopChoice(k_9);
            }
          else
            {
              t = a_9;
              t = SSL_gtr(q_11, r_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm u_11 = NULL,v_11 = NULL;
    u_11 = t;
    t = term_l_4;
    t = get_config_0_0(t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_11, term_l_9);
    t = geq_0_0(t);
    t = u_11;
    t = w_97(t);
    return(t);
  }
  t = try_1_0(o_2, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL;
    t = run_time_0_0(t);
    x_11 = t;
    t = term_w_3;
    t = whoami_0_0(t);
    y_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), x_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), y_11));
    t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_9), x_11), term_v_9), y_11));
    return(t);
  }
  t = if_verbose1_1_0(p_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm d_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = d_10;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm n_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(o_10);
            }
          else
            {
              t = n_10;
              {
                ATerm p_10 = t;
                int r_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(r_10);
                  }
                else
                  {
                    t = p_10;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(q_2, t);
      }
    }
  t = t_100(t);
  return(t);
}
ATerm map_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = Cons_2_0(h_84, a_12, t);
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_12 = ATgetFirst((ATermList) t);
      d_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_12 = NULL,i_12 = NULL;
        t = d_12;
        t = g_0(t);
        h_12 = t;
        t = c_12;
        t = f_0(t);
        i_12 = t;
        t = d_12;
        {
          ATerm r_2 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_12), i_12);
            return(t);
          }
          t = reverse_acc_2_0(f_0, r_2, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_3;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_2, t);
  return(t);
}
ATerm Program_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_12);
  j_12 = t;
  t = k_12;
  t = q_76(t);
  l_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_12), j_12);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm t_2 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(t_2, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_11;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm q_12 = NULL;
      q_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_12), term_i_11);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(u_2, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
  u_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_12);
  r_12 = t;
  t = s_12;
  t = r_76(t);
  t_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_12), r_12);
  return(t);
}
ATerm fetch_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm y_12 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_84, _id, t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        t = Cons_2_0(_id, y_12, t);
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm t_101 (ATerm), ATerm t)
{
  t = fetch_1_0(t_101, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_11 = ATgetFirst((ATermList) t);
                ATerm o_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_13;
          }
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATinsert(ATempty, a_13);
      }
    b_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_13);
    t = a_13;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_8;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_76(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_f_12;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_g_12;
        return(t);
      }
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = w_11;
      {
        ATerm y_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_n_12;
          return(t);
        }
        ATerm a_3 (ATerm t)
        {
          t = term_o_12;
          return(t);
        }
        t = Option_3_0(y_2, z_2, a_3, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__3))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
      j_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_13, i_13);
  {
    ATerm p_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_12 = ATgetArgument(t, 0);
            ATerm x_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_13, i_13);
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = p_12;
        t = (ATerm) ATempty;
      }
    k_13 = t;
    t = SSL_table_put(h_13, i_13, (ATerm) ATinsert(CheckATermList(k_13), j_13));
    t = (ATerm) ATmakeAppl(sym__3, h_13, i_13, j_13);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm p_13 = NULL;
  t = term_w_3;
  t = y_102(t);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_12, term_c_13, p_13);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_13;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm w_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_13 = ATgetFirst((ATermList) t);
          t_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_13;
      t = a_0(t);
      t = term_w_3;
      t = b_0(t);
      w_13 = t;
      t = (ATerm) ATinsert(CheckATermList(t_13), w_13);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm y_13 = NULL;
    y_13 = t;
    if(match_string(t, "--help"))
      {
        t = y_13;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = y_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = y_13;
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_d_13;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_e_13;
    return(t);
  }
  t = Option_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  e_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_14 = ATgetFirst((ATermList) t);
      b_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_14);
  z_13 = t;
  t = a_14;
  t = g_63(t);
  c_14 = t;
  t = b_14;
  t = h_63(t);
  d_14 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_14), c_14), z_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  {
    ATerm e_3 (ATerm t)
    {
      t = term_f_13;
      t = w_102(t);
      return(t);
    }
    t = try_1_0(e_3, t);
    t = l_14;
    {
      ATerm f_3 (ATerm t)
      {
        ATerm m_14 = NULL;
        m_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_14);
        t = (ATerm) ATmakeAppl(sym_Program_1, m_14);
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        ATerm g_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_13 = t;
            int n_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_13);
              }
            else
              {
                t = m_13;
                t = w_102(t);
                t = Cons_2_0(_id, g_3, t);
              }
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = g_13;
            {
              ATerm o_14 = NULL,p_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_14 = ATgetFirst((ATermList) t);
                  p_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_14), (ATerm) ATmakeAppl(sym_Undefined_1, o_14));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_3, g_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_14;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm o_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_102(t);
          ;
          LocalPopChoice(q_13);
        }
      else
        {
          t = o_13;
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_3, t);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm x_13 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_15 = NULL;
            c_15 = t;
            {
              ATerm g_14 = t;
              int h_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_15;
                  {
                    ATerm i_14 = t;
                    int j_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_h_10;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(j_14);
                      }
                    else
                      {
                        t = i_14;
                        {
                          ATerm j_3 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(j_3, t);
                        }
                      }
                    t = c_15;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(h_14);
                }
              else
                {
                  t = g_14;
                  t = term_e_12;
                  t = get_config_0_0(t);
                  t = c_15;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = x_13;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  w_14 = t;
                  return(t);
                }
                t = Undefined_1_0(l_3, t);
                return(t);
              }
              t = option_defined_1_0(k_3, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_14)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_14)), term_k_14));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(i_3, t);
      x_14 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_14;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t)
{
  ATerm s_4 = NULL;
  t = parse_options_1_0(v_100, t);
  s_4 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_4);
  t = s_4;
  t = x_100(t);
  {
    ATerm n_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_100, t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = n_14;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_100(t);
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
ATerm iowrap_4_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
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
  ATerm n_3 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(k_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(m_3, m_100, n_100, n_3, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm f_15 = NULL,g_15 = NULL;
      f_15 = t;
      t = term_i_8;
      t = get_config_0_0(t);
      g_15 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, g_15));
      t = f_15;
      return(t);
    }
    t = if_verbose2_1_0(p_3, t);
    return(t);
  }
  t = iowrap_4_0(e_100, f_100, g_100, o_3, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm t)
{
  t = iowrap_3_0(c_100, d_100, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = _2_0(_id, z_99, t);
    return(t);
  }
  t = iowrap_2_0(q_3, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DesugarAssign_0_0(t);
            ;
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            t = DesugarCase_0_0(t);
          }
        return(t);
      }
      t = repeat_1_0(t_3, t);
      return(t);
    }
    t = topdown_1_0(s_3, t);
    return(t);
  }
  t = iowrap_1_0(r_3, t);
  return(t);
}

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
ATerm term_r_14;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_j_12;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_l_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_i_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_o_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_5;
ATerm term_y_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_z_3;
void init_constant_terms (void)
{
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_6);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__3, term_j_12, term_p_12, term_z_3);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm _2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_98 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_100 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm q_96 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm x_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm d_77 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm j_103 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm k_100 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm DesugarCase_0_0 (ATerm t)
{
  ATerm r_0 = NULL,u_0 = NULL,c_1 = NULL,d_1 = NULL,i_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      q_1 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
      t = q_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_1 = ATgetFirst((ATermList) t);
          i_1 = (ATerm) ATgetNext((ATermList) t);
          t = m_1;
          if(match_cons(t, sym_Alt_3))
            {
              r_0 = ATgetArgument(t, 0);
              c_1 = ATgetArgument(t, 1);
              d_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = r_0;
          if(match_cons(t, sym_Real_1))
            {
              u_0 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, u_0)), d_1, (ATerm) ATmakeAppl(sym_Case_2, i_1, s_1));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  u_0 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, u_0)), d_1, (ATerm) ATmakeAppl(sym_Case_2, i_1, s_1));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      u_0 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, u_0)), d_1, (ATerm) ATmakeAppl(sym_Case_2, i_1, s_1));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          u_0 = ATgetArgument(t, 0);
                          {
                            ATerm x_3 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, u_0, c_1)), d_1, (ATerm) ATmakeAppl(sym_Case_2, i_1, s_1));
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_1;
        }
    }
  else
    {
      if(match_cons(t, sym_Case_3))
        {
          q_1 = ATgetArgument(t, 0);
          s_1 = ATgetArgument(t, 1);
          t_1 = ATgetArgument(t, 2);
          t = q_1;
          if(match_cons(t, sym_Var_1))
            {
              m_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_1)), (ATerm) ATmakeAppl(sym_Case_2, s_1, t_1));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm y_3 = ATgetArgument(t, 0);
              s_1 = ATgetArgument(t, 1);
              t_1 = ATgetArgument(t, 2);
              u_1 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, s_1, t_1, u_1);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      n_3 = ATgetArgument(t, 0);
      t = n_3;
      if(match_cons(t, sym_Var_1))
        {
          p_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_3));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          n_3 = ATgetArgument(t, 0);
          q_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_3;
      if(match_cons(t, sym_Var_1))
        {
          p_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_3)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm b_0 (ATerm t)
    {
      t = z_77(t);
      t = e_4(t);
      return(t);
    }
    t = try_1_0(b_0, t);
    return(t);
  }
  t = e_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  t = x_78(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1_0(x_78, t);
      return(t);
    }
    t = SRTS_all(f_0, t);
  }
  return(t);
}
ATerm _2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,p_4 = NULL;
  p_4 = t;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_4);
  f_4 = t;
  t = k_4;
  t = e_62(t);
  m_4 = t;
  t = l_4;
  t = f_62(t);
  n_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, m_4, n_4), f_4);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_5 = NULL,d_5 = NULL;
  b_5 = t;
  t = term_z_3;
  t = whoami_0_0(t);
  d_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), d_5), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_5;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_4 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_4);
    }
  else
    {
      t = a_4;
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
          ATerm k_0 (ATerm t)
          {
            t = m_5;
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
  ATerm q_5 = NULL,r_5 = NULL;
  q_5 = t;
  t = SSL_explode_term(q_5);
  if(match_cons(t, sym__2))
    {
      ATerm c_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm d_4 = t;
    int g_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_5, t);
        ;
        LocalPopChoice(g_4);
      }
    else
      {
        t = d_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_85(t);
      }
    return(t);
  }
  t = s_5(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5;
  {
    ATerm l_0 (ATerm t)
    {
      t = t_5;
      return(t);
    }
    t = at_end_1_0(l_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_4 = t;
  int i_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(i_4);
    }
  else
    {
      t = h_4;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_5 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm z_5 = NULL;
    z_5 = t;
    t = SSL_explode_string(z_5);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    ATerm a_6 = NULL;
    a_6 = t;
    t = SSL_explode_string(a_6);
    return(t);
  }
  t = _2_0(m_0, n_0, t);
  t = conc_0_0(t);
  v_5 = t;
  t = SSL_implode_string(v_5);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 = NULL;
      k_6 = t;
      t = SSL_is_string(k_6);
      ;
      LocalPopChoice(o_4);
    }
  else
    {
      t = j_4;
      {
        ATerm q_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_0, t);
            ;
            LocalPopChoice(r_4);
          }
        else
          {
            t = q_4;
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
                        ATerm s_4 = t;
                        int t_4 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_4);
                          }
                        else
                          {
                            t = s_4;
                            {
                              ATerm p_0 (ATerm t)
                              {
                                t = term_u_4;
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
                      ATerm v_6 = NULL,w_6 = NULL;
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
                      w_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_6, w_6);
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
  ATerm z_6 = NULL;
  z_6 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_6);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm c_7 = NULL;
      t = eval_config_0_0(t);
      c_7 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_6, c_7);
      t = c_7;
      return(t);
    }
    t = try_1_0(q_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm e_7 = NULL,f_7 = NULL;
    e_7 = t;
    t = term_v_4;
    t = get_config_0_0(t);
    f_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_7, term_w_4);
    t = geq_0_0(t);
    t = e_7;
    t = i_98(t);
    return(t);
  }
  t = try_1_0(s_0, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm g_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm x_4 = ATgetArgument(t, 0);
        if(match_cons(x_4, sym_Stream_1))
          {
            g_7 = ATgetArgument(x_4, 0);
          }
        else
          _fail(t);
        j_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(g_7, j_7);
    k_7 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), k_7);
    l_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, l_7);
    return(t);
  }
  t = WriteToFile_1_0(t_0, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_7, term_y_4);
  t = open_stream_0_0(t);
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_7, n_7);
  t = e_97(t);
  t = fclose_0_0(t);
  t = n_7;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm z_4 = ATgetArgument(t, 0);
        if(match_cons(z_4, sym_Stream_1))
          {
            p_7 = ATgetArgument(z_4, 0);
          }
        else
          _fail(t);
        q_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(p_7, q_7);
    r_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
    return(t);
  }
  t = WriteToFile_1_0(v_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL;
  s_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm a_5 = t;
      int c_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                t_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(x_0, t);
          ;
          LocalPopChoice(c_5);
        }
      else
        {
          t = a_5;
          t = term_e_5;
          t_7 = t;
        }
      return(t);
    }
    t = _2_0(w_0, _id, t);
    t = s_7;
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          t = not_null(t_7);
          return(t);
        }
        t = split_2_0(b_1, _id, t);
        return(t);
      }
      t = _2_0(_id, a_1, t);
      {
        ATerm f_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(f_1, t);
              return(t);
            }
            t = _2_0(e_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(h_5);
          }
        else
          {
            t = f_5;
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
ATerm apply_strategy_1_0 (ATerm g_100 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
  u_7 = t;
  t = dtime_0_0(t);
  t = u_7;
  t = g_100(t);
  v_7 = t;
  t = dtime_0_0(t);
  w_7 = t;
  t = v_7;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_7), (ATerm) ATmakeAppl(sym_Runtime_1, w_7)), y_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_8 (ATerm g_8, ATerm t)
  {
    t = SSL_fclose(g_8);
    return(t);
  }
  ATerm j_8 = NULL,k_8 = NULL;
  k_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_8 = ATgetArgument(t, 0);
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_8);
            ;
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            t = m_8(k_8, t);
          }
      }
    }
  else
    {
      t = m_8(k_8, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  n_8 = t;
  t = q_96(t);
  o_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_8), o_8));
  t = n_8;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  t = SSL_stdin_stream();
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_8 = NULL;
  t = SSL_stdout_stream();
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_8 = NULL;
  t = SSL_stderr_stream();
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_8);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_5 = ATgetArgument(t, 0);
      ATerm n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_5 = t;
    int p_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 = NULL,z_0 = NULL;
        y_0 = t;
        t = SSL_explode_term(y_0);
        if(match_cons(t, sym__2))
          {
            ATerm w_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_5 = ATgetArgument(t, 1);
              if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
                {
                  z_0 = ATgetFirst((ATermList) x_5);
                  {
                    ATerm y_5 = (ATerm) ATgetNext((ATermList) x_5);
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
        LocalPopChoice(p_5);
      }
    else
      {
        t = o_5;
        {
          ATerm b_6 = t;
          int c_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
              ATerm g_1 (ATerm t)
              {
                ATerm z_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    z_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_8;
                return(t);
              }
              t = _2_0(g_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_8 = ATgetArgument(t, 0);
                  x_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_8, x_8);
              y_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_8);
              ;
              LocalPopChoice(c_6);
            }
          else
            {
              t = b_6;
              {
                ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
                ATerm h_1 (ATerm t)
                {
                  ATerm d_9 = NULL;
                  d_9 = t;
                  t = SSL_is_string(d_9);
                  return(t);
                }
                t = _2_0(h_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_9 = ATgetArgument(t, 0);
                    b_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_9, b_9);
                c_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_9 = NULL;
      h_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_9, term_f_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_g_6;
          return(t);
        }
        t = debug_1_0(j_1, t);
        _fail(t);
      }
    }
  e_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_9);
  f_9 = t;
  t = e_9;
  t = fclose_0_0(t);
  t = f_9;
  return(t);
}
ATerm split_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,m_9 = NULL,n_9 = NULL;
  j_9 = t;
  t = f_92(t);
  m_9 = t;
  t = j_9;
  t = g_92(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, n_9);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL;
  o_9 = t;
  {
    ATerm h_6 = t;
    int i_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              p_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(k_1, t);
        ;
        LocalPopChoice(i_6);
      }
    else
      {
        t = h_6;
        t = term_j_6;
        p_9 = t;
      }
    t = o_9;
    {
      ATerm l_1 (ATerm t)
      {
        t = not_null(p_9);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, l_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm r_9 = NULL;
    r_9 = t;
    if(match_string(t, "-k"))
      {
        t = r_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = r_9;
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm s_9 = NULL,t_9 = NULL;
    s_9 = t;
    t = SSL_string_to_int(s_9);
    t_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_9);
    t = s_9;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_l_6;
    return(t);
  }
  t = ArgOption_3_0(n_1, o_1, p_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm v_9 = NULL;
        v_9 = t;
        if(match_string(t, "-S"))
          {
            t = v_9;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = v_9;
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_s_6;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_t_6;
        return(t);
      }
      t = Option_3_0(r_1, v_1, w_1, t);
      ;
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      {
        ATerm u_6 = t;
        int x_6 = stack_ptr;
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
              ATerm w_9 = NULL,x_9 = NULL;
              w_9 = t;
              t = SSL_string_to_int(w_9);
              x_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_9);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, w_9);
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_y_6;
              return(t);
            }
            t = ArgOption_3_0(x_1, y_1, z_1, t);
            ;
            LocalPopChoice(x_6);
          }
        else
          {
            t = u_6;
            {
              ATerm a_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_a_7;
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_b_7;
                return(t);
              }
              t = Option_3_0(a_2, b_2, c_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = d_7;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm z_9 = NULL;
    z_9 = t;
    if(match_string(t, "-o"))
      {
        t = z_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = z_9;
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm a_10 = NULL;
    a_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), a_10);
    t = (ATerm) ATmakeAppl(sym_Output_1, a_10);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_i_7;
    return(t);
  }
  t = ArgOption_3_0(d_2, e_2, f_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
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
          t = term_b_8;
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = term_c_8;
          return(t);
        }
        t = Option_3_0(g_2, h_2, i_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  d_10 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = d_10;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm l_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_10 = ATgetFirst((ATermList) t);
          f_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_10 = ATgetFirst((ATermList) t);
          h_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_10;
      t = h_0(t);
      t = g_10;
      t = i_0(t);
      l_10 = t;
      t = (ATerm) ATinsert(CheckATermList(h_10), l_10);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm n_10 = NULL;
    n_10 = t;
    if(match_string(t, "-i"))
      {
        t = n_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = n_10;
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm o_10 = NULL;
    o_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_10);
    t = (ATerm) ATmakeAppl(sym_Input_1, o_10);
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_d_8;
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
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_3;
  t = whoami_0_0(t);
  p_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_10));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_8;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_90(t);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = s_8;
      {
        ATerm s_10 = NULL,t_10 = NULL,w_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_10 = ATgetFirst((ATermList) t);
            t_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_10;
        t = foldr_2_0(q_90, r_90, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, w_10);
        t = r_90(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL;
  x_10 = t;
  t = SSL_explode_term(x_10);
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10;
  t = foldr_2_0(j_94, k_94, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_10 = NULL;
  t = times_0_0(t);
  {
    ATerm m_2 (ATerm t)
    {
      t = term_o_6;
      return(t);
    }
    ATerm n_2 (ATerm t)
    {
      ATerm a_11 = NULL,b_11 = NULL;
      if(match_cons(t, sym__2))
        {
          a_11 = ATgetArgument(t, 0);
          b_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_11, b_11);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = i_9;
            t = SSL_addr(a_11, b_11);
          }
      }
      return(t);
    }
    t = crush_2_0(m_2, n_2, t);
    z_10 = t;
    t = SSL_TicksToSeconds(z_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_11;
        if((l_11 != t))
          {
            _fail(t);
          }
        t = k_11;
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = l_9;
        t = k_11;
        {
          ATerm u_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_11, m_11);
              ;
              LocalPopChoice(y_9);
            }
          else
            {
              t = u_9;
              t = SSL_gtr(l_11, m_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_11, m_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm p_11 = NULL,q_11 = NULL;
    p_11 = t;
    t = term_v_4;
    t = get_config_0_0(t);
    q_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_11, term_b_10);
    t = geq_0_0(t);
    t = p_11;
    t = h_98(t);
    return(t);
  }
  t = try_1_0(o_2, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm s_11 = NULL,t_11 = NULL;
    t = run_time_0_0(t);
    s_11 = t;
    t = term_z_3;
    t = whoami_0_0(t);
    t_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_11));
    t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_10), s_11), term_i_10), t_11));
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
ATerm need_help_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm k_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = k_10;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm r_10 = t;
          int u_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(u_10);
            }
          else
            {
              t = r_10;
              {
                ATerm v_10 = t;
                int c_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(c_11);
                  }
                else
                  {
                    t = v_10;
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
  t = e_101(t);
  return(t);
}
ATerm map_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = Cons_2_0(o_84, v_11, t);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_11 = ATgetFirst((ATermList) t);
      y_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_12 = NULL,d_12 = NULL;
        t = y_11;
        t = g_0(t);
        c_12 = t;
        t = x_11;
        t = e_0(t);
        d_12 = t;
        t = y_11;
        {
          ATerm r_2 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_12), d_12);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_2, t);
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
ATerm Program_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_12);
  e_12 = t;
  t = f_12;
  t = x_76(t);
  g_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_12), e_12);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
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
      ATerm k_12 = NULL;
      k_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, k_12), term_i_11);
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
ATerm Undefined_1_0 (ATerm y_76 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_12);
  l_12 = t;
  t = m_12;
  t = y_76(t);
  n_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, n_12), l_12);
  return(t);
}
ATerm fetch_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    ATerm j_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_84, _id, t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = j_11;
        t = Cons_2_0(_id, r_12, t);
      }
    return(t);
  }
  t = r_12(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  t = fetch_1_0(e_102, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  t_12 = t;
  {
    ATerm o_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_11 = ATgetFirst((ATermList) t);
                ATerm w_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_12;
          }
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = o_11;
        t = (ATerm) ATinsert(ATempty, t_12);
      }
    u_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_12);
    t = t_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_8;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm d_77 (ATerm), ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_77(t);
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int i_12 = stack_ptr;
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
        t = term_q_12;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_s_12;
        return(t);
      }
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = b_12;
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
          t = term_v_12;
          return(t);
        }
        ATerm a_3 (ATerm t)
        {
          t = term_w_12;
          return(t);
        }
        t = Option_3_0(y_2, z_2, a_3, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__3))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
      c_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_13, b_13);
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_12 = ATgetArgument(t, 0);
            ATerm e_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_13, b_13);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = (ATerm) ATempty;
      }
    d_13 = t;
    t = SSL_table_put(a_13, b_13, (ATerm) ATinsert(CheckATermList(d_13), c_13));
    t = (ATerm) ATmakeAppl(sym__3, a_13, b_13, c_13);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm i_13 = NULL;
  t = term_z_3;
  t = j_103(t);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_13, term_g_13, i_13);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_13;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm p_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_13 = ATgetFirst((ATermList) t);
          m_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_13;
      t = a_0(t);
      t = term_z_3;
      t = c_0(t);
      p_13 = t;
      t = (ATerm) ATinsert(CheckATermList(m_13), p_13);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm r_13 = NULL;
    r_13 = t;
    if(match_string(t, "--help"))
      {
        t = r_13;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = r_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = r_13;
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_h_13;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_j_13;
    return(t);
  }
  t = Option_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  x_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_13 = ATgetFirst((ATermList) t);
      u_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_13);
  s_13 = t;
  t = t_13;
  t = n_63(t);
  v_13 = t;
  t = u_13;
  t = o_63(t);
  w_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(w_13), v_13), s_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  {
    ATerm e_3 (ATerm t)
    {
      t = term_n_13;
      t = h_103(t);
      return(t);
    }
    t = try_1_0(e_3, t);
    t = d_14;
    {
      ATerm f_3 (ATerm t)
      {
        ATerm e_14 = NULL;
        e_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_14);
        t = (ATerm) ATmakeAppl(sym_Program_1, e_14);
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        ATerm o_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
                t = h_103(t);
                t = Cons_2_0(_id, g_3, t);
              }
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = o_13;
            {
              ATerm g_14 = NULL,h_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_14 = ATgetFirst((ATermList) t);
                  h_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_14), (ATerm) ATmakeAppl(sym_Undefined_1, g_14));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_3, g_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_14;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm a_14 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_103(t);
          ;
          LocalPopChoice(b_14);
        }
      else
        {
          t = a_14;
          {
            ATerm c_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(f_14);
              }
            else
              {
                t = c_14;
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
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_14 = NULL;
            u_14 = t;
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_14;
                  {
                    ATerm m_14 = t;
                    int q_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_10;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(q_14);
                      }
                    else
                      {
                        t = m_14;
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
                    t = u_14;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  t = term_p_12;
                  t = get_config_0_0(t);
                  t = u_14;
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
              ATerm k_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  o_14 = t;
                  return(t);
                }
                t = Undefined_1_0(l_3, t);
                return(t);
              }
              t = option_defined_1_0(k_3, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), term_r_14));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(i_3, t);
      p_14 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = p_14;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm t)
{
  ATerm g_5 = NULL;
  t = parse_options_1_0(g_101, t);
  g_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), g_5);
  t = g_5;
  t = i_101(t);
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_101, t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_100(t);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(v_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(m_3, x_100, y_100, o_3, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      ATerm x_14 = NULL,y_14 = NULL;
      x_14 = t;
      t = term_l_8;
      t = get_config_0_0(t);
      y_14 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, y_14));
      t = x_14;
      return(t);
    }
    t = if_verbose2_1_0(s_3, t);
    return(t);
  }
  t = iowrap_4_0(p_100, q_100, r_100, r_3, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  t = iowrap_3_0(n_100, o_100, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    t = _2_0(_id, k_100, t);
    return(t);
  }
  t = iowrap_2_0(t_3, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      ATerm w_3 (ATerm t)
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DesugarAssign_0_0(t);
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            t = DesugarCase_0_0(t);
          }
        return(t);
      }
      t = repeat_1_0(w_3, t);
      return(t);
    }
    t = topdown_1_0(v_3, t);
    return(t);
  }
  t = iowrap_1_0(u_3, t);
  return(t);
}

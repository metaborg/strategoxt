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
ATerm term_g_15;
ATerm term_f_15;
ATerm term_u_14;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_e_13;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_b_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_d_6;
ATerm term_u_4;
ATerm term_g_4;
ATerm term_u_3;
void init_constant_terms (void)
{
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__3, term_c_12, term_d_12, term_u_3);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm i_85 (ATerm), ATerm);
ATerm _2_0 (ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm e_6 (ATerm y_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_91 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm o_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm need_help_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_83 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_109 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm parse_options_1_0 (ATerm r_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm iowrap_3_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
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
  t = term_u_3;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm DesugarCase_0_0 (ATerm t)
{
  ATerm s_0 = NULL,z_0 = NULL,h_1 = NULL,i_1 = NULL,n_1 = NULL,r_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      v_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
      t = v_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_1 = ATgetFirst((ATermList) t);
          n_1 = (ATerm) ATgetNext((ATermList) t);
          t = r_1;
          if(match_cons(t, sym_Alt_3))
            {
              s_0 = ATgetArgument(t, 0);
              h_1 = ATgetArgument(t, 1);
              i_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = s_0;
          if(match_cons(t, sym_Real_1))
            {
              z_0 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, z_0)), i_1, (ATerm) ATmakeAppl(sym_Case_2, n_1, x_1));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  z_0 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, z_0)), i_1, (ATerm) ATmakeAppl(sym_Case_2, n_1, x_1));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      z_0 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, z_0)), i_1, (ATerm) ATmakeAppl(sym_Case_2, n_1, x_1));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          z_0 = ATgetArgument(t, 0);
                          {
                            ATerm v_3 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, z_0, h_1)), i_1, (ATerm) ATmakeAppl(sym_Case_2, n_1, x_1));
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
          v_1 = ATgetArgument(t, 0);
          x_1 = ATgetArgument(t, 1);
          y_1 = ATgetArgument(t, 2);
          t = v_1;
          if(match_cons(t, sym_Var_1))
            {
              r_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_1)), (ATerm) ATmakeAppl(sym_Case_2, x_1, y_1));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm c_4 = ATgetArgument(t, 0);
              x_1 = ATgetArgument(t, 1);
              y_1 = ATgetArgument(t, 2);
              z_1 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, x_1, y_1, z_1);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      z_3 = ATgetArgument(t, 0);
      t = z_3;
      if(match_cons(t, sym_Var_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_4));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          z_3 = ATgetArgument(t, 0);
          b_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_3;
      if(match_cons(t, sym_Var_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_4), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_4)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm d_4 = t;
    int e_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_84(t);
        t = i_4(t);
        ;
        LocalPopChoice(e_4);
      }
    else
      {
        t = d_4;
      }
    return(t);
  }
  t = i_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  t = i_85(t);
  {
    ATerm k_0 (ATerm t)
    {
      t = topdown_1_0(i_85, t);
      return(t);
    }
    t = SRTS_all(k_0, t);
  }
  return(t);
}
ATerm _2_0 (ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,q_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_4);
  j_4 = t;
  t = k_4;
  t = j_65(t);
  m_4 = t;
  t = l_4;
  t = k_65(t);
  o_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, m_4, o_4), j_4);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,w_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, term_g_4);
  t = open_stream_0_0(t);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, w_4);
  t = p_103(t);
  t = fclose_0_0(t);
  t = w_4;
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = fetch_1_0(r_0, t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = WriteToFile_1_0(t_0, t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_4 = ATgetArgument(t, 0);
      if(match_cons(h_4, sym_Stream_1))
        {
          c_5 = ATgetArgument(h_4, 0);
        }
      else
        _fail(t);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(c_5, d_5);
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_5);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = WriteToFile_1_0(v_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_4 = ATgetArgument(t, 0);
      if(match_cons(p_4, sym_Stream_1))
        {
          f_5 = ATgetArgument(p_4, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(f_5, g_5);
  h_5 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), h_5);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_5);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_4 = NULL,a_5 = NULL;
  y_4 = t;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm r_4 = t;
      int s_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_5 != NULL) && (a_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_0, t);
          ;
          LocalPopChoice(s_4);
        }
      else
        {
          t = r_4;
          t = term_u_4;
          if(((a_5 != NULL) && (a_5 != t)))
            _fail(t);
          else
            a_5 = t;
        }
      return(t);
    }
    t = _2_0(m_0, _id, t);
    t = y_4;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm c_0 = NULL;
        c_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), c_0);
        return(t);
      }
      t = _2_0(_id, o_0, t);
      {
        ATerm v_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(p_0, q_0, t);
            ;
            LocalPopChoice(z_4);
          }
        else
          {
            t = v_4;
            t = _2_0(_id, u_0, t);
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
ATerm apply_strategy_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  k_5 = t;
  t = dtime_0_0(t);
  t = k_5;
  t = r_106(t);
  l_5 = t;
  t = dtime_0_0(t);
  m_5 = t;
  t = l_5;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Runtime_1, m_5)), o_5);
  return(t);
}
ATerm e_6 (ATerm y_5, ATerm t)
{
  t = SSL_fclose(y_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_6 = ATgetArgument(t, 0);
      {
        ATerm b_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_6);
            ;
            LocalPopChoice(i_5);
          }
        else
          {
            t = b_5;
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
ATerm w_0 (ATerm t)
{
  ATerm p_6 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      p_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm t_6 = NULL;
  t_6 = t;
  t = SSL_is_string(t_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_5 = ATgetArgument(t, 0);
      ATerm q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_5 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,d_1 = NULL;
        c_1 = t;
        t = SSL_explode_term(c_1);
        if(match_cons(t, sym__2))
          {
            ATerm t_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_5 = ATgetArgument(t, 1);
              if(((ATgetType(u_5) == AT_LIST) && !(ATisEmpty(u_5))))
                {
                  d_1 = ATgetFirst((ATermList) u_5);
                  {
                    ATerm v_5 = (ATerm) ATgetNext((ATermList) u_5);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = d_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = d_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_5);
      }
    else
      {
        t = r_5;
        {
          ATerm w_5 = t;
          int x_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
              t = _2_0(w_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_6 = ATgetArgument(t, 0);
                  n_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_6, n_6);
              o_6 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_6);
              ;
              LocalPopChoice(x_5);
            }
          else
            {
              t = w_5;
              {
                ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
                t = _2_0(x_0, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_6 = ATgetArgument(t, 0);
                    r_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_6, r_6);
                s_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 = NULL;
      x_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_6, term_d_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm e_1 = NULL;
        e_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = e_1;
        _fail(t);
      }
    }
  u_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(w_6);
  v_6 = t;
  t = u_6;
  t = fclose_0_0(t);
  t = v_6;
  return(t);
}
ATerm fetch_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    ATerm i_6 = t;
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_91, _id, t);
        ;
        LocalPopChoice(j_6);
      }
    else
      {
        t = i_6;
        t = Cons_2_0(_id, f_7, t);
      }
    return(t);
  }
  t = f_7(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
        ATerm i_7 = NULL,j_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_7 = ATgetFirst((ATermList) t);
            j_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_7;
        {
          ATerm y_0 (ATerm t)
          {
            t = j_7;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_0, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_7, t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_91(t);
      }
    return(t);
  }
  t = s_7(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm v_7 = NULL;
  v_7 = t;
  t = SSL_explode_string(v_7);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  t = SSL_explode_string(w_7);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  t = _2_0(a_1, b_1, t);
  {
    ATerm a_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL,a_8 = NULL;
        if(match_cons(t, sym__2))
          {
            z_7 = ATgetArgument(t, 0);
            a_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_7;
        {
          ATerm f_1 (ATerm t)
          {
            t = a_8;
            return(t);
          }
          t = at_end_1_0(f_1, t);
        }
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = a_7;
        {
          ATerm l_1 = NULL,m_1 = NULL;
          l_1 = t;
          t = SSL_explode_term(l_1);
          if(match_cons(t, sym__2))
            {
              ATerm d_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_1;
          t = concat_0_0(t);
        }
      }
    u_7 = t;
    t = SSL_implode_string(u_7);
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm e_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = e_7;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL;
      n_8 = t;
      t = SSL_is_string(n_8);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = h_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_1, t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm s_8 = NULL,w_8 = NULL,x_8 = NULL;
              s_8 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_8 = ATgetArgument(t, 0);
                  t = w_8;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_8 = ATgetArgument(t, 0);
                      t = w_8;
                      {
                        ATerm o_7 = t;
                        int p_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_8);
                            {
                              ATerm q_7 = t;
                              int r_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_3 = NULL;
                                  t = eval_config_0_0(t);
                                  k_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_8, k_3);
                                  t = k_3;
                                  ;
                                  LocalPopChoice(r_7);
                                }
                              else
                                {
                                  t = q_7;
                                }
                            }
                            ;
                            LocalPopChoice(p_7);
                          }
                        else
                          {
                            t = o_7;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_8), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = w_8;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_9 = NULL,d_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_8 = ATgetArgument(t, 0);
                          x_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_8;
                      t = eval_config_0_0(t);
                      c_9 = t;
                      t = x_8;
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
ATerm if_verbose2_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm t_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_9 = NULL,k_9 = NULL;
      i_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 = NULL;
            t = eval_config_0_0(t);
            r_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_3);
            t = r_3;
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
          }
        k_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_9, term_d_8);
        t = geq_0_0(t);
        t = i_9;
        t = a_105(t);
      }
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = t_7;
    }
  return(t);
}
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
ATerm o_1 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_1, k_1, o_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
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
ATerm q_1 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_g_8;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm t_1 (ATerm t)
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
ATerm w_1 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_k_8;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_l_8;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_1, q_1, s_1, t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = m_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_1, u_1, w_1, t);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = Option_3_0(a_2, b_2, c_2, t);
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
      t = term_u_3;
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
      t = term_u_3;
      t = b_0(t);
      a_10 = t;
      t = (ATerm) ATinsert(CheckATermList(w_9), a_10);
    }
  return(t);
}
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
ATerm output_option_0_0 (ATerm t)
{
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
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_8 = ATgetArgument(t, 0);
            ATerm a_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_10, h_10);
        ;
        LocalPopChoice(y_8);
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
      t = term_u_3;
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
  t = term_b_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, h_2, i_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_3;
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
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL;
        t = eval_config_0_0(t);
        w_3 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_3);
        t = w_3;
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_97(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm g_11 = NULL,h_11 = NULL,k_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_11 = ATgetFirst((ATermList) t);
            h_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_11;
        t = foldr_2_0(b_97, c_97, t);
        k_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, k_11);
        t = c_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm f_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      f_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(f_4, n_4);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = j_9;
        t = SSL_addr(f_4, n_4);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_11 = NULL,x_3 = NULL,y_3 = NULL;
  t = times_0_0(t);
  x_3 = t;
  t = SSL_explode_term(x_3);
  if(match_cons(t, sym__2))
    {
      ATerm p_9 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  t = foldr_2_0(j_2, k_2, t);
  n_11 = t;
  t = SSL_TicksToSeconds(n_11);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_11 = NULL,a_12 = NULL,b_12 = NULL;
  y_11 = t;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_12;
        if((a_12 != t))
          {
            _fail(t);
          }
        t = y_11;
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = y_11;
        {
          ATerm y_9 = t;
          int z_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_12, b_12);
              ;
              LocalPopChoice(z_9);
            }
          else
            {
              t = y_9;
              t = SSL_gtr(a_12, b_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm b_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_12 = NULL,g_12 = NULL;
      e_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 = NULL;
            t = eval_config_0_0(t);
            b_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_7);
            t = b_7;
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = f_10;
          }
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_12, term_l_10);
        t = geq_0_0(t);
        t = e_12;
        t = z_104(t);
      }
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = b_10;
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  t = run_time_0_0(t);
  i_12 = t;
  t = term_u_3;
  t = whoami_0_0(t);
  j_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), i_12), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), j_12));
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_10), i_12), term_n_10), j_12));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm q_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = q_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm a_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm f_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL;
            t = eval_config_0_0(t);
            n_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_7);
            t = n_7;
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = f_11;
          }
      }
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = a_11;
      t = fetch_1_0(m_2, t);
    }
  t = p_107(t);
  return(t);
}
ATerm map_1_0 (ATerm z_90 (ATerm), ATerm t)
{
  ATerm k_12 (ATerm t)
  {
    ATerm j_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = j_11;
        t = Cons_2_0(z_90, k_12, t);
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
      t = term_u_3;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  w_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_12);
  t_12 = t;
  t = u_12;
  t = i_83(t);
  v_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, v_12), t_12);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_12), term_m_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_7 = NULL;
            t = eval_config_0_0(t);
            x_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_7);
            t = x_7;
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
          }
      }
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = fetch_1_0(o_2, t);
    }
  t = term_s_11;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, p_2, t);
  t = map_1_0(q_2, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  d_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_13);
  a_13 = t;
  t = b_13;
  t = j_83(t);
  c_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, c_13), a_13);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  h_13 = t;
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_11 = ATgetFirst((ATermList) t);
                ATerm w_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_13;
          }
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATinsert(ATempty, h_13);
      }
    i_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), i_13);
    t = h_13;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL;
        t = eval_config_0_0(t);
        j_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_8);
        t = j_8;
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = x_11;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_12;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_12;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_2, s_2, t_2, t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      t = Option_3_0(u_2, v_2, w_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL;
  x_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_13 = ATgetFirst((ATermList) t);
      r_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_13);
  p_13 = t;
  t = q_13;
  t = y_69(t);
  u_13 = t;
  t = r_13;
  t = z_69(t);
  v_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(v_13), u_13), p_13);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_14);
  t = (ATerm) ATmakeAppl(sym_Program_1, d_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_13;
        t = s_109(t);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
      }
    t = c_14;
    {
      ATerm y_2 (ATerm t)
      {
        ATerm f_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 = t;
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
                t = k_13;
                t = s_109(t);
                t = Cons_2_0(_id, y_2, t);
              }
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = f_13;
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
      t = Cons_2_0(x_2, y_2, t);
    }
  }
  return(t);
}
ATerm a_3 (ATerm t)
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
ATerm b_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_m_13;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_14;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm o_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_109(t);
          ;
          LocalPopChoice(t_13);
        }
      else
        {
          t = o_13;
          {
            ATerm w_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_3, b_3, c_3, t);
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = w_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_2, t);
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
                            ATerm p_10 = NULL;
                            t = eval_config_0_0(t);
                            p_10 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_10);
                            t = p_10;
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
                      t = fetch_1_0(d_3, t);
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
                      ATerm g_13 = NULL;
                      t = eval_config_0_0(t);
                      g_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), g_13);
                      t = g_13;
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
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    if(((o_14 != NULL) && (o_14 != t)))
                      _fail(t);
                    else
                      o_14 = t;
                    return(t);
                  }
                  t = Undefined_1_0(f_3, t);
                  return(t);
                }
                t = fetch_1_0(e_3, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_m_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), term_u_14));
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
ATerm option_wrap_4_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t)
{
  ATerm y_14 = NULL;
  t = parse_options_1_0(r_107, t);
  y_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_14);
  t = y_14;
  t = t_107(t);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_107, t);
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
              t = u_107(t);
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
ATerm h_3 (ATerm t)
{
  t = if_verbose2_1_0(n_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_15;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_g_15;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  z_14 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL;
        t = eval_config_0_0(t);
        s_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_13);
        t = s_13;
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
      }
    a_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, a_15));
    t = z_14;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_107(t);
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
                          t = Option_3_0(j_3, l_3, m_3, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(s_15);
                              }
                            else
                              {
                                t = r_15;
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
  ATerm i_3 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL,y_13 = NULL;
    b_15 = t;
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
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
          t = fetch_1_0(o_3, t);
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
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_15, y_13);
      t = apply_strategy_1_0(a_107, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_3, c_107, h_3, i_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = _2_0(_id, q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = topdown_1_0(s_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = repeat_1_0(t_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
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
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_3, _fail, default_usage_0_0, t);
  return(t);
}

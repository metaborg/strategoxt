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
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Anno_2;
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
Symbol sym_Cong_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_RootApp_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Build_1;
Symbol sym_Path_2;
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
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_h_15;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_y_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_o_7;
ATerm term_p_5;
ATerm term_j_5;
ATerm term_g_5;
ATerm term_f_5;
void init_constant_terms (void)
{
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_Cong_2, term_f_5, (ATerm) ATempty);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Op_2, term_f_5, (ATerm) ATempty);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__3, term_m_16, term_n_16, term_o_7);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm str_explode_0_0 (ATerm);
ATerm TrmOp_0_0 (ATerm);
ATerm TrmCons_0_0 (ATerm);
ATerm foldr_3_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm);
ATerm TrmConc_0_0 (ATerm);
ATerm TrmAnno_0_0 (ATerm);
ATerm TrmFromStr_0_0 (ATerm);
ATerm TrmFromApp_0_0 (ATerm);
ATerm TrmFromTerm_0_0 (ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm _2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_84 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm a_96 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm);
ATerm crush_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm a_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_101 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_102 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm meta_explode_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm x_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          v_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_0), (ATerm) ATempty);
      ;
      LocalPopChoice(y_4);
    }
  else
    {
      t = x_4;
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0_0(t);
            ;
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            {
              ATerm b_5 = t;
              int c_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0_0(t);
                  ;
                  LocalPopChoice(c_5);
                }
              else
                {
                  t = b_5;
                  {
                    ATerm b_2 (ATerm x_0, ATerm t)
                    {
                      ATerm a_1 = NULL,c_1 = NULL,e_1 = NULL;
                      t = SSL_explode_term(x_0);
                      if(match_cons(t, sym__2))
                        {
                          a_1 = ATgetArgument(t, 0);
                          c_1 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_1;
                      t = map_1_0(str_explode_0_0, t);
                      e_1 = t;
                      t = (ATerm) ATmakeAppl(sym_Cong_2, a_1, e_1);
                      return(t);
                    }
                    ATerm g_1 = NULL,i_1 = NULL,k_1 = NULL;
                    k_1 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        ATerm d_5 = t;
                        int e_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = term_g_5;
                            ;
                            LocalPopChoice(e_5);
                          }
                        else
                          {
                            t = d_5;
                            t = b_2(k_1, t);
                          }
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            g_1 = ATgetFirst((ATermList) t);
                            i_1 = (ATerm) ATgetNext((ATermList) t);
                            {
                              ATerm h_5 = t;
                              int i_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_1 = NULL,w_1 = NULL;
                                  t = g_1;
                                  t = str_explode_0_0(t);
                                  v_1 = t;
                                  t = i_1;
                                  t = str_explode_0_0(t);
                                  w_1 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cong_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, w_1), v_1));
                                  ;
                                  LocalPopChoice(i_5);
                                }
                              else
                                {
                                  t = h_5;
                                  t = b_2(k_1, t);
                                }
                            }
                          }
                        else
                          {
                            t = b_2(k_1, t);
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
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm f_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL;
  f_2 = t;
  t = SSL_explode_term(f_2);
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2;
  t = map_1_0(trm_explode_0_0, t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, i_2, l_2);
  return(t);
}
ATerm TrmCons_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_2 = ATgetFirst((ATermList) t);
      n_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_2;
  t = trm_explode_0_0(t);
  p_2 = t;
  t = n_2;
  t = trm_explode_0_0(t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, q_2), p_2));
  return(t);
}
ATerm foldr_3_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm t)
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_89(t);
      ;
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
        ATerm w_2 = NULL,x_2 = NULL,c_3 = NULL,e_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_2 = ATgetFirst((ATermList) t);
            x_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_2;
        t = t_89(t);
        c_3 = t;
        t = x_2;
        t = foldr_3_0(r_89, s_89, t_89, t);
        e_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_3, e_3);
        t = s_89(t);
      }
    }
  return(t);
}
ATerm TrmConc_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      h_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_3;
  {
    ATerm c_0 (ATerm t)
    {
      ATerm i_3 = NULL;
      if(match_cons(t, sym_meta_listvar_1))
        {
          i_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, i_3)));
      return(t);
    }
    t = try_1_0(c_0, t);
    {
      ATerm e_0 (ATerm t)
      {
        t = g_3;
        {
          ATerm n_5 = t;
          int o_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_3 = NULL;
              if(match_cons(t, sym_meta_listvar_1))
                {
                  m_3 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_p_5), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, m_3))));
              ;
              LocalPopChoice(o_5);
            }
          else
            {
              t = n_5;
              t = trm_explode_0_0(t);
            }
        }
        return(t);
      }
      ATerm k_0 (ATerm t)
      {
        ATerm o_3 = NULL,m_0 = NULL,r_0 = NULL;
        o_3 = t;
        t = SSL_explode_term(o_3);
        if(match_cons(t, sym__2))
          {
            ATerm r_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_5 = ATgetArgument(t, 1);
              if(((ATgetType(s_5) == AT_LIST) && !(ATisEmpty(s_5))))
                {
                  m_0 = ATgetFirst((ATermList) s_5);
                  {
                    ATerm u_5 = (ATerm) ATgetNext((ATermList) s_5);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = SSL_explode_term(o_3);
        if(match_cons(t, sym__2))
          {
            ATerm v_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_5 = ATgetArgument(t, 1);
              if(((ATgetType(w_5) == AT_LIST) && !(ATisEmpty(w_5))))
                {
                  ATerm x_5 = ATgetFirst((ATermList) w_5);
                  ATerm y_5 = (ATerm) ATgetNext((ATermList) w_5);
                  if(((ATgetType(y_5) == AT_LIST) && !(ATisEmpty(y_5))))
                    {
                      r_0 = ATgetFirst((ATermList) y_5);
                      {
                        ATerm a_6 = (ATerm) ATgetNext((ATermList) y_5);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, r_0), m_0));
        return(t);
      }
      t = foldr_3_0(e_0, k_0, trm_explode_0_0, t);
    }
  }
  return(t);
}
ATerm TrmAnno_0_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym_WithAnno_2))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3;
  t = trm_explode_0_0(t);
  t_3 = t;
  t = s_3;
  t = MetaExplode_0_0(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, t_3, w_3);
  return(t);
}
ATerm TrmFromStr_0_0 (ATerm t)
{
  ATerm x_3 = NULL;
  if(match_cons(t, sym_FromStrategy_1))
    {
      x_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm TrmFromApp_0_0 (ATerm t)
{
  ATerm e_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym_FromApp_1))
    {
      e_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4;
  t = MetaExplode_0_0(t);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, s_4);
  return(t);
}
ATerm TrmFromTerm_0_0 (ATerm t)
{
  ATerm t_4 = NULL;
  if(match_cons(t, sym_FromTerm_1))
    {
      t_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm f_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          m_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, m_5);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              m_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_p_5), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, m_5))));
        }
      ;
      LocalPopChoice(i_6);
    }
  else
    {
      t = f_6;
      {
        ATerm j_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 = NULL,b_1 = NULL;
            b_1 = t;
            t = SSL_is_string(b_1);
            z_0 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, z_0);
            ;
            LocalPopChoice(k_6);
          }
        else
          {
            t = j_6;
            {
              ATerm m_6 = t;
              int n_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromTerm_0_0(t);
                  ;
                  LocalPopChoice(n_6);
                }
              else
                {
                  t = m_6;
                  {
                    ATerm q_6 = t;
                    int r_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromApp_0_0(t);
                        ;
                        LocalPopChoice(r_6);
                      }
                    else
                      {
                        t = q_6;
                        {
                          ATerm u_6 = t;
                          int v_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromStr_0_0(t);
                              ;
                              LocalPopChoice(v_6);
                            }
                          else
                            {
                              t = u_6;
                              {
                                ATerm w_6 = t;
                                int z_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = TrmAnno_0_0(t);
                                    ;
                                    LocalPopChoice(z_6);
                                  }
                                else
                                  {
                                    t = w_6;
                                    {
                                      ATerm a_7 = t;
                                      int b_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmConc_0_0(t);
                                          ;
                                          LocalPopChoice(b_7);
                                        }
                                      else
                                        {
                                          t = a_7;
                                          {
                                            ATerm e_7 = t;
                                            int j_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                  _fail(t);
                                                t = term_p_5;
                                                ;
                                                LocalPopChoice(j_7);
                                              }
                                            else
                                              {
                                                t = e_7;
                                                {
                                                  ATerm k_7 = t;
                                                  int l_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = TrmCons_0_0(t);
                                                      ;
                                                      LocalPopChoice(l_7);
                                                    }
                                                  else
                                                    {
                                                      t = k_7;
                                                      t = TrmOp_0_0(t);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm alltd_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_79(t);
        ;
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        t = SRTS_all(q_5, t);
      }
    return(t);
  }
  t = q_5(t);
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm t_5 = NULL;
    if(match_cons(t, sym_ToTerm_1))
      {
        t_5 = ATgetArgument(t, 0);
        t = t_5;
        t = trm_explode_0_0(t);
      }
    else
      {
        if(match_cons(t, sym_ToBuild_1))
          {
            t_5 = ATgetArgument(t, 0);
            {
              ATerm z_5 = NULL;
              t = t_5;
              t = trm_explode_0_0(t);
              z_5 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, z_5);
            }
          }
        else
          {
            if(match_cons(t, sym_ToStrategy_1))
              {
                t_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_5;
            t = str_explode_0_0(t);
          }
      }
    return(t);
  }
  t = alltd_1_0(l_0, t);
  return(t);
}
ATerm _2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,h_6 = NULL;
  h_6 = t;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_6);
  b_6 = t;
  t = c_6;
  t = h_61(t);
  e_6 = t;
  t = d_6;
  t = i_61(t);
  g_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, e_6, g_6), b_6);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL;
  o_6 = t;
  t = term_o_7;
  t = whoami_0_0(t);
  p_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), p_6), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = o_6;
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
        ATerm s_6 = NULL,t_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_6 = ATgetFirst((ATermList) t);
            t_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_6;
        {
          ATerm n_0 (ATerm t)
          {
            t = t_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_0, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL;
  x_6 = t;
  t = SSL_explode_term(x_6);
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_7, t);
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_84(t);
      }
    return(t);
  }
  t = c_7(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  {
    ATerm o_0 (ATerm t)
    {
      t = d_7;
      return(t);
    }
    t = at_end_1_0(o_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = v_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_7 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm h_7 = NULL;
    h_7 = t;
    t = SSL_explode_string(h_7);
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    ATerm i_7 = NULL;
    i_7 = t;
    t = SSL_explode_string(i_7);
    return(t);
  }
  t = _2_0(p_0, q_0, t);
  t = conc_0_0(t);
  g_7 = t;
  t = SSL_implode_string(g_7);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_7 = NULL;
      s_7 = t;
      t = SSL_is_string(s_7);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(s_0, t);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            {
              ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
              w_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_7 = ATgetArgument(t, 0);
                  t = x_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_7 = ATgetArgument(t, 0);
                      t = x_7;
                      {
                        ATerm g_8 = t;
                        int h_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_8);
                          }
                        else
                          {
                            t = g_8;
                            {
                              ATerm t_0 (ATerm t)
                              {
                                t = term_i_8;
                                return(t);
                              }
                              t = debug_1_0(t_0, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm c_8 = NULL,f_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_7 = ATgetArgument(t, 0);
                          y_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_7;
                      t = eval_config_0_0(t);
                      c_8 = t;
                      t = y_7;
                      t = eval_config_0_0(t);
                      f_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_8, f_8);
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
  ATerm j_8 = NULL;
  j_8 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_8);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm m_8 = NULL;
      t = eval_config_0_0(t);
      m_8 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_8, m_8);
      t = m_8;
      return(t);
    }
    t = try_1_0(u_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm n_8 = NULL,o_8 = NULL;
    n_8 = t;
    t = term_k_8;
    t = get_config_0_0(t);
    o_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_8, term_l_8);
    t = geq_0_0(t);
    t = n_8;
    t = e_97(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm g_9 = ATgetArgument(t, 0);
        if(match_cons(g_9, sym_Stream_1))
          {
            p_8 = ATgetArgument(g_9, 0);
          }
        else
          _fail(t);
        q_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(p_8, q_8);
    r_8 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), r_8);
    s_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, s_8);
    return(t);
  }
  t = WriteToFile_1_0(y_0, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_8, term_h_9);
  t = open_stream_0_0(t);
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_8, u_8);
  t = a_96(t);
  t = fclose_0_0(t);
  t = u_8;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_9 = ATgetArgument(t, 0);
        if(match_cons(i_9, sym_Stream_1))
          {
            w_8 = ATgetArgument(i_9, 0);
          }
        else
          _fail(t);
        x_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(w_8, x_8);
    y_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, y_8);
    return(t);
  }
  t = WriteToFile_1_0(d_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                a_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(h_1, t);
          ;
          LocalPopChoice(k_9);
        }
      else
        {
          t = j_9;
          t = term_l_9;
          a_9 = t;
        }
      return(t);
    }
    t = _2_0(f_1, _id, t);
    t = z_8;
    {
      ATerm j_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = not_null(a_9);
          return(t);
        }
        t = split_2_0(l_1, _id, t);
        return(t);
      }
      t = _2_0(_id, j_1, t);
      {
        ATerm m_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(n_1, t);
              return(t);
            }
            t = _2_0(m_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = m_9;
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
ATerm apply_strategy_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  b_9 = t;
  t = dtime_0_0(t);
  t = b_9;
  t = c_99(t);
  c_9 = t;
  t = dtime_0_0(t);
  d_9 = t;
  t = c_9;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_9), (ATerm) ATmakeAppl(sym_Runtime_1, d_9)), f_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_9 (ATerm n_9, ATerm t)
  {
    t = SSL_fclose(n_9);
    return(t);
  }
  ATerm q_9 = NULL,r_9 = NULL;
  r_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_9 = ATgetArgument(t, 0);
      {
        ATerm p_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_9);
            ;
            LocalPopChoice(s_9);
          }
        else
          {
            t = p_9;
            t = t_9(r_9, t);
          }
      }
    }
  else
    {
      t = t_9(r_9, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  u_9 = t;
  t = m_95(t);
  v_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_9), v_9));
  t = u_9;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_9 = NULL;
  t = SSL_stdin_stream();
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_9 = NULL;
  t = SSL_stdout_stream();
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  t = SSL_stderr_stream();
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_9);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_10;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_10;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_10;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      ATerm b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL,x_1 = NULL;
        u_1 = t;
        t = SSL_explode_term(u_1);
        if(match_cons(t, sym__2))
          {
            ATerm o_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_10 = ATgetArgument(t, 1);
              if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
                {
                  x_1 = ATgetFirst((ATermList) r_10);
                  {
                    ATerm x_10 = (ATerm) ATgetNext((ATermList) r_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = c_10;
        {
          ATerm b_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
              ATerm o_1 (ATerm t)
              {
                ATerm g_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    g_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_10;
                return(t);
              }
              t = _2_0(o_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_10 = ATgetArgument(t, 0);
                  e_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(d_10, e_10);
              f_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, f_10);
              ;
              LocalPopChoice(f_11);
            }
          else
            {
              t = b_11;
              {
                ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
                ATerm p_1 (ATerm t)
                {
                  ATerm k_10 = NULL;
                  k_10 = t;
                  t = SSL_is_string(k_10);
                  return(t);
                }
                t = _2_0(p_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    h_10 = ATgetArgument(t, 0);
                    i_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(h_10, i_10);
                j_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, j_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,p_10 = NULL;
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_10 = NULL;
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_10, term_p_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_q_11;
          return(t);
        }
        t = debug_1_0(q_1, t);
        _fail(t);
      }
    }
  l_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_10);
  m_10 = t;
  t = l_10;
  t = fclose_0_0(t);
  t = m_10;
  return(t);
}
ATerm split_2_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  t = e_91(t);
  t_10 = t;
  t = s_10;
  t = f_91(t);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  v_10 = t;
  {
    ATerm r_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              w_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(r_1, t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = r_11;
        t = term_x_11;
        w_10 = t;
      }
    t = v_10;
    {
      ATerm s_1 (ATerm t)
      {
        t = not_null(w_10);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, s_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm y_10 = NULL;
    y_10 = t;
    if(match_string(t, "-k"))
      {
        t = y_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = y_10;
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm z_10 = NULL,a_11 = NULL;
    z_10 = t;
    t = SSL_string_to_int(z_10);
    a_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_11);
    t = z_10;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_y_11;
    return(t);
  }
  t = ArgOption_3_0(t_1, y_1, z_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm c_11 = NULL;
        c_11 = t;
        if(match_string(t, "-S"))
          {
            t = c_11;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = c_11;
          }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_k_12;
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_l_12;
        return(t);
      }
      t = Option_3_0(a_2, c_2, d_2, t);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              ATerm d_11 = NULL,e_11 = NULL;
              d_11 = t;
              t = SSL_string_to_int(d_11);
              e_11 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_11);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, d_11);
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              t = term_o_12;
              return(t);
            }
            t = ArgOption_3_0(e_2, g_2, h_2, t);
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            {
              ATerm k_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_p_12;
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                t = term_q_12;
                return(t);
              }
              t = Option_3_0(k_2, o_2, r_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm g_11 = NULL;
    g_11 = t;
    if(match_string(t, "-o"))
      {
        t = g_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_11;
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm h_11 = NULL;
    h_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_11);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_11);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_y_12;
    return(t);
  }
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm b_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = b_13;
      {
        ATerm v_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_13;
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          t = term_h_13;
          return(t);
        }
        t = Option_3_0(v_2, y_2, z_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  k_11 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_11;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm s_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_11 = ATgetFirst((ATermList) t);
          m_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_11 = ATgetFirst((ATermList) t);
          o_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_11;
      t = h_0(t);
      t = n_11;
      t = i_0(t);
      s_11 = t;
      t = (ATerm) ATinsert(CheckATermList(o_11), s_11);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm u_11 = NULL;
    u_11 = t;
    if(match_string(t, "-i"))
      {
        t = u_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_11;
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm v_11 = NULL;
    v_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_11);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_11);
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_i_13;
    return(t);
  }
  t = ArgOption_3_0(a_3, b_3, d_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm r_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = r_13;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_7;
  t = whoami_0_0(t);
  w_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_11));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm t)
{
  ATerm z_13 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_89(t);
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = z_13;
      {
        ATerm z_11 = NULL,a_12 = NULL,d_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_11 = ATgetFirst((ATermList) t);
            a_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_12;
        t = foldr_2_0(p_89, q_89, t);
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_11, d_12);
        t = q_89(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm e_14 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12;
  t = foldr_2_0(i_93, j_93, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  t = times_0_0(t);
  {
    ATerm f_3 (ATerm t)
    {
      t = term_j_12;
      return(t);
    }
    ATerm j_3 (ATerm t)
    {
      ATerm h_12 = NULL,i_12 = NULL;
      if(match_cons(t, sym__2))
        {
          h_12 = ATgetArgument(t, 0);
          i_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_12, i_12);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            t = SSL_addr(h_12, i_12);
          }
      }
      return(t);
    }
    t = crush_2_0(f_3, j_3, t);
    g_12 = t;
    t = SSL_TicksToSeconds(g_12);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_12;
        if((s_12 != t))
          {
            _fail(t);
          }
        t = r_12;
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = r_12;
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_12, t_12);
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              t = SSL_gtr(s_12, t_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_12, t_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm w_12 = NULL,x_12 = NULL;
    w_12 = t;
    t = term_k_8;
    t = get_config_0_0(t);
    x_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_12, term_p_14);
    t = geq_0_0(t);
    t = w_12;
    t = d_97(t);
    return(t);
  }
  t = try_1_0(k_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm z_12 = NULL,a_13 = NULL;
    t = run_time_0_0(t);
    z_12 = t;
    t = term_o_7;
    t = whoami_0_0(t);
    a_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_12), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), a_13));
    t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_14), z_12), term_s_14), a_13));
    return(t);
  }
  t = if_verbose1_1_0(l_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm x_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = x_14;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(l_15);
                  }
                else
                  {
                    t = k_15;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(n_3, t);
      }
    }
  t = a_100(t);
  return(t);
}
ATerm map_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm c_13 (ATerm t)
  {
    ATerm m_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = m_15;
        t = Cons_2_0(o_83, c_13, t);
      }
    return(t);
  }
  t = c_13(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_13 = ATgetFirst((ATermList) t);
      f_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_13 = NULL,k_13 = NULL;
        t = f_13;
        t = g_0(t);
        j_13 = t;
        t = e_13;
        t = f_0(t);
        k_13 = t;
        t = f_13;
        {
          ATerm p_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_13), k_13);
            return(t);
          }
          t = reverse_acc_2_0(f_0, p_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_7;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, q_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_13);
  l_13 = t;
  t = m_13;
  t = v_68(t);
  n_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_13), l_13);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm u_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(u_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_u_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm v_3 (ATerm t)
    {
      ATerm s_13 = NULL;
      s_13 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, s_13), term_v_15);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(v_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_13);
  t_13 = t;
  t = u_13;
  t = w_68(t);
  v_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_13), t_13);
  return(t);
}
ATerm fetch_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm a_14 (ATerm t)
  {
    ATerm w_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_83, _id, t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = w_15;
        t = Cons_2_0(_id, a_14, t);
      }
    return(t);
  }
  t = a_14(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  t = fetch_1_0(a_101, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  c_14 = t;
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_16 = ATgetFirst((ATermList) t);
                ATerm f_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_14;
          }
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = (ATerm) ATinsert(ATempty, c_14);
      }
    d_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), d_14);
    t = c_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm g_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_76(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = g_16;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_o_16;
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = term_p_16;
        return(t);
      }
      t = Option_3_0(y_3, z_3, a_4, t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm b_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm c_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_q_16;
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          t = term_r_16;
          return(t);
        }
        t = Option_3_0(b_4, c_4, d_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__3))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
      l_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_14, k_14);
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_16 = ATgetArgument(t, 0);
            ATerm v_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_14, k_14);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = (ATerm) ATempty;
      }
    m_14 = t;
    t = SSL_table_put(j_14, k_14, (ATerm) ATinsert(CheckATermList(m_14), l_14));
    t = (ATerm) ATmakeAppl(sym__3, j_14, k_14, l_14);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm r_14 = NULL;
  t = term_o_7;
  t = f_102(t);
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_16, term_x_16, r_14);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_14;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm y_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_14 = ATgetFirst((ATermList) t);
          v_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_14;
      t = a_0(t);
      t = term_o_7;
      t = b_0(t);
      y_14 = t;
      t = (ATerm) ATinsert(CheckATermList(v_14), y_14);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm a_15 = NULL;
    a_15 = t;
    if(match_string(t, "--help"))
      {
        t = a_15;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = a_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = a_15;
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_y_16;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_z_16;
    return(t);
  }
  t = Option_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  g_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_15 = ATgetFirst((ATermList) t);
      d_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_15);
  b_15 = t;
  t = c_15;
  t = q_62(t);
  e_15 = t;
  t = d_15;
  t = r_62(t);
  f_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_15), e_15), b_15);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  {
    ATerm i_4 (ATerm t)
    {
      t = term_a_17;
      t = d_102(t);
      return(t);
    }
    t = try_1_0(i_4, t);
    t = n_15;
    {
      ATerm j_4 (ATerm t)
      {
        ATerm o_15 = NULL;
        o_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_15);
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_17 = t;
            int e_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_17);
              }
            else
              {
                t = d_17;
                t = d_102(t);
                t = Cons_2_0(_id, k_4, t);
              }
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            {
              ATerm q_15 = NULL,r_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_15 = ATgetFirst((ATermList) t);
                  r_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_15), (ATerm) ATmakeAppl(sym_Undefined_1, q_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_4, k_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_15;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm f_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_102(t);
          ;
          LocalPopChoice(g_17);
        }
      else
        {
          t = f_17;
          {
            ATerm h_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = h_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_4, t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_16 = NULL;
            e_16 = t;
            {
              ATerm l_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_16;
                  {
                    ATerm n_17 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_h_15;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = n_17;
                        {
                          ATerm n_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(n_4, t);
                        }
                      }
                    t = e_16;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = l_17;
                  t = term_n_16;
                  t = get_config_0_0(t);
                  t = e_16;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm o_4 (ATerm t)
              {
                ATerm p_4 (ATerm t)
                {
                  y_15 = t;
                  return(t);
                }
                t = Undefined_1_0(p_4, t);
                return(t);
              }
              t = option_defined_1_0(o_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), term_p_17));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(m_4, t);
      z_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t)
{
  ATerm l_6 = NULL;
  t = parse_options_1_0(c_100, t);
  l_6 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), l_6);
  t = l_6;
  t = e_100(t);
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_100, t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        {
          ATerm s_17 = t;
          int t_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_100(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_17);
            }
          else
            {
              t = s_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_99(t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(r_99, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_4, t_99, u_99, r_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm v_4 (ATerm t)
    {
      ATerm h_16 = NULL,i_16 = NULL;
      h_16 = t;
      t = term_y_13;
      t = get_config_0_0(t);
      i_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_16));
      t = h_16;
      return(t);
    }
    t = if_verbose2_1_0(v_4, t);
    return(t);
  }
  t = iowrap_4_0(l_99, m_99, n_99, u_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t)
{
  t = iowrap_3_0(j_99, k_99, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    t = _2_0(_id, g_99, t);
    return(t);
  }
  t = iowrap_2_0(w_4, _fail, t);
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_1_0(MetaExplode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
